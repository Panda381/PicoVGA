// Images for RaspPico

#include <stdio.h>
#include <windows.h>

#pragma warning(disable : 4996) // unsafe fopen

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed long int s32;
typedef unsigned long int u32;

u8* Img = NULL; // input file buffer
int W,H; // input file width and height
int B; // bit count
u8* D; // start of image data
u8* M; // start of mask data

#pragma pack(push,1)
typedef struct _bmpBITMAPFILEHEADER {
		u16		bfType;
		u32		bfSize;
		u16		bfReserved1;
		u16		bfReserved2;
		u32		bfOffBits;
} bmpBITMAPFILEHEADER;

typedef struct _bmpBITMAPINFOHEADER{
		u32		biSize;
		s32		biWidth;
		s32		biHeight;
		u16		biPlanes;
		u16		biBitCount;
		u32		biCompression;
		u32		biSizeImage;
		s32		biXPelsPerMeter;
		s32		biYPelsPerMeter;
		u32		biClrUsed;
		u32		biClrImportant;
} bmpBITMAPINFOHEADER;
#pragma pack(pop)

#define bmpBI_RGB	0
#define bmpBI_RLE8	1
#define bmpBI_RLE4	2

int main(int argc, char* argv[])
{
	// check syntax
	if (argc != 4)
	{
		printf("Syntax: input.bmp output.c name\n");
		return 1;
	}

// === read input file

	// open main input file
	FILE* f = fopen(argv[1], "rb");
	if (f == NULL)
	{
		printf("Error opening %s\n", argv[1]);
		return 1;
	}

	// size of input file
	fseek(f, 0, SEEK_END);
	int size = ftell(f);
	fseek(f, 0, SEEK_SET);
	if (size < 40)
	{
		printf("Incorrect size of %s\n", argv[1]);
		return 1;
	}

	// create buffer
	Img = (unsigned char*)malloc(size);
	if (Img == NULL)
	{
		printf("Memory error\n");
		return 1;
	}

	// read file
	int size2 = (int)fread(Img, 1, size, f);
	fclose(f);
	if (size2 != size)
	{
		printf("Error reading %s\n", argv[1]);
		return 1;
	}

	// check BMP header
	bmpBITMAPFILEHEADER* bmf = (bmpBITMAPFILEHEADER*)Img;
	bmpBITMAPINFOHEADER* bmi = (bmpBITMAPINFOHEADER*)&bmf[1];
	W = bmi->biWidth;
	H = bmi->biHeight;
	B = bmi->biBitCount;
	if (H < 0) H = -H;
	if ((bmf->bfType != 0x4d42) ||
		(bmf->bfOffBits < 0x30) || (bmf->bfOffBits > 0x440) ||
		(bmi->biCompression != bmpBI_RGB) ||
		(W < 4) || (W > 10000) || (H < 4) || (H > 10000) ||
		((B != 8) && (B != 4) && (B != 1)))
	{
		printf("Incorrect format of input file %s,\n", argv[1]);
		printf("  must be 8-bit, 4-bit or 1-bit pallette uncompressed.\n");
		return 1;
	}
	D = &Img[bmf->bfOffBits];

	// convert to 2-bit palette?
	if ((B == 4) && (bmi->biClrUsed == 4)) B = 2;

// === save output file

	// open output file
	f = fopen(argv[2], "wb");
	if (f == NULL)
	{
		printf("Error creating %s\n", argv[2]);
		return 1;
	}

	// save header
	W = (W + 3) & ~3; // align width to DWORDs, due BMP format
	int i, n;
	n = W*H;
	int wb = W;
	if (B == 4) { n /= 2; wb /= 2; }
	if (B == 2) { n /= 4; wb /= 4; }
	if (B == 1) { n /= 8; wb /= 8; }
	fprintf(f, "#include \"include.h\"\n\n");
	fprintf(f, "// format: %d-bit pixel graphics\n", B);
	fprintf(f, "// image width: %d pixels\n", W);
	fprintf(f, "// image height: %d lines\n", H);
	fprintf(f, "// image pitch: %d bytes\n", wb);
	fprintf(f, "const u8 %s[%d] __attribute__ ((aligned(4))) = {", argv[3], n);

	// convert to 2-bits
	if (B == 2)
	{
		// load image
		for (i = 0; i < n; i++)
		{
			if ((i & 0x0f) == 0) fprintf(f, "\n\t");
			u8 b = (((D[i*2] >> 4) & 0x03) << 6);
			b |= ((D[i*2] & 0x03) << 4);
			b |= (((D[i*2+1] >> 4) & 0x03) << 2);
			b |= (D[i*2+1] & 0x03);
			fprintf(f, "0x%02X, ", b);
		}
	}
	else
	{
		// load image
		for (i = 0; i < n; i++)
		{
			if ((i & 0x0f) == 0) fprintf(f, "\n\t");
			fprintf(f, "0x%02X, ", D[i]);
		}
	}
	fprintf(f, "\n};\n");

	fclose(f);
	free(Img);

	return 0;
}


// RaspPico RLE compression

#include <stdio.h>
#include <windows.h>

#pragma warning(disable : 4996) // unsafe fopen

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed long int s32;
typedef unsigned long int u32;

// commands
#define rlelayer_offset_idle 0u		// end scanline (tokens: {8} ignored, {8} 'idle' command)
//#define rlelayer_offset_entry 1u	// start scanline
#define rlelayer_offset_skip 5u		// transparent N+2 (2..257) pixels (tokens: {8} N = number of pixels - 2, {8} 'skip' command)
#define rlelayer_offset_skip1 6u	// transparent 1 pixel (tokens: {8} ignored, {8} 'skip1' command)
#define rlelayer_offset_run 7u		// repeat N+3 (3..258) pixels (tokens: {8} pixel to repeat, {8} 'run' command, {8} N = number of pixels - 3)
#define rlelayer_offset_raw1 11u	// transfer 1 RAW pixel (tokens: {8} pixel, {8} 'raw1' command)
#define rlelayer_offset_raw 14u		// transfer N+2 (2..257) RAW pixels (tokens: {8} N = number of pixels - 2, {8} 'raw' command, {(N+2)*8} pixels)

u8* Img = NULL; // input file buffer
int W,H; // input file width and height
int B; // bit count
u8* Src; // start of image data

u8 OutBuf[500000]; // output buffer
int OutNum; // number of bytes in output buffer
u16 OutRows[2000]; // offset of output rows in multiply of u32 (max. 256 KB)

int TransCol;	// transparent color (-1 = do not use)

u8 RlePix; // repeated pixel
int RleNum; // number of repeated pixels
u8* RawStart; // pointer to start RAW pixels
int RawNum; // number of RAW pixels
int TransNum; // number of transparent pixels

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

// flush whole bytes from bit buffer into output buffer
void WriteByte(int byte)
{
	OutBuf[OutNum++] = (u8)byte;
}

// flush transparent string
void FlushTrans()
{
	for (; TransNum > 0;)
	{
		int transnum = TransNum;
		if (transnum > 257) transnum = 257;
		TransNum -= transnum;

		// shift RAW start
		RawStart += transnum;

		// 1 transparent pixel
		if (transnum == 1)
		{
			WriteByte(0); // ignored
			WriteByte(rlelayer_offset_skip1); // 'skip1' command
		}

		// more transparent pixels
		else
		{
			WriteByte(transnum-2); // number of pixels - 2
			WriteByte(rlelayer_offset_skip); // 'skip' command
		}
	}
}

// flush RAW string
void FlushRaw()
{
	for (; RawNum > 0;)
	{
		int rawnum = RawNum;
		if (rawnum > 257) rawnum = 257;
		RawNum -= rawnum;

		// 1 RAW pixel
		if (rawnum == 1)
		{
			WriteByte(*RawStart++); // output pixel
			WriteByte(rlelayer_offset_raw1); // 'raw1' command
		}

		// more RAW pixels (2 + N bytes)
		else
		{
			WriteByte(rawnum - 2); // number of pixels - 2
			WriteByte(rlelayer_offset_raw); // 'raw' command
			for (; rawnum > 0; rawnum--) WriteByte(*RawStart++); // output pixels
		}
	}
}

// flush RLE
void FlushRle()
{
	for (; RleNum > 0;)
	{
		int rlenum = RleNum;
		if (rlenum > 258) rlenum = 258;
		RleNum -= rlenum;

		// convert short RLE string to RAW string
		if (rlenum < 3)
		{
			RawNum += rlenum;
		}

		// write long RLE string
		else
		{
			// at first, flush RAW string
			FlushRaw();

			// write RLE string
			WriteByte(RlePix); // pixel to repeat
			WriteByte(rlelayer_offset_run); // 'run' command
			WriteByte(rlenum - 3); // number of pixels - 3

			// shift RAW start
			RawStart += rlenum;
		}
	}
}

// compress one row
void CompressRow(int row)
{
	u8* src = &Src[row*W];
	int w;
	RleNum = 0;
	RawStart = src;
	RawNum = 0;
	TransNum = 0;
	int outnum = OutNum;

	for (w = W; w > 0; w--)
	{
		// load next byte
		u8 b = *src++;

		// transparent?
		if (b == TransCol)
		{
			// flush RLE and RAW
			FlushRle();
			FlushRaw();

			// increase transparent length
			TransNum++;
		}
		else
		{
			// flush transparent
			FlushTrans();

			// flush RLE if cannot repeat
			if ((RleNum > 0) && (b != RlePix))
			{
				FlushRle();
			}

			// increase RLE
			RlePix = b;
			RleNum++;
		}
	}

	// flush strings
	FlushTrans();
	FlushRle();
	FlushRaw();

	// add stop command
	WriteByte(0);
	WriteByte(rlelayer_offset_idle);

	// align scanline to 32-bits
	int align = (OutNum - outnum) & 0x03;
	if (align > 0)
	{
		for (align = 4 - align; align > 0; align--)
		{
			WriteByte(rlelayer_offset_idle);
		}
	}
}

// compress image (returns FALSE on buffer overflow)
BOOL Compress()
{
	OutNum = 0;
	int row;
	for (row = 0; row < H; row++)
	{
		OutRows[row] = OutNum/4;
		CompressRow(row);
		if (OutNum > 0x40000) return FALSE;
	}
	OutRows[row] = OutNum/4;
	return TRUE;
}

int main(int argc, char* argv[])
{
	// check syntax
	if (argc != 5)
	{
		printf("Syntax: input.bmp output.c name transparent_color (-1=no tranpsarent)\n");
		return 1;
	}
	TransCol = atoi(argv[4]);

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
		printf("Wrong size of %s\n", argv[1]);
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
	W = (W + 3) & ~3; // BMP aligned to u32
	H = bmi->biHeight;
	B = bmi->biBitCount;
	if (H < 0) H = -H;
	if ((bmf->bfType != 0x4d42) ||
		(bmf->bfOffBits < 0x30) || (bmf->bfOffBits > 0x440) ||
		(bmi->biCompression != bmpBI_RGB) ||
		(W < 4) || (W > 10000) || (H < 4) || (H > 10000) ||
		(B != 8))
	{
		printf("Incorrect format of input file %s,\n", argv[1]);
		printf("  must be 8-bit pallette uncompressed.\n");
		return 1;
	}
	Src = &Img[bmf->bfOffBits];

// === compress image

	if (!Compress())
	{
		printf("Overflow max. output size 256 KB\n");
		return 1;
	}

// === save output file

	// open output file
	f = fopen(argv[2], "wb");
	if (f == NULL)
	{
		printf("Error creating %s\n", argv[2]);
		return 1;
	}

	// write header
	int i, n;
	n = W*H;
	fprintf(f, "#include \"include.h\"\n\n");
	fprintf(f, "// format: RLE compression\n");
	if ((TransCol >= 0) && (TransCol <= 255))
		fprintf(f, "// transparent color: %d\n", TransCol);
	else
		fprintf(f, "// no transparency\n");
	fprintf(f, "// image width: %d pixels\n", W);
	fprintf(f, "// image height: %d lines\n", H);
	fprintf(f, "// uncompressed size: %d bytes\n", W*H);
	fprintf(f, "// compressed size: %d bytes\n", OutNum + (H+1)*2);
	fprintf(f, "// compression ratio: %.1f%%\n", (double)(OutNum + (H+1)*2)/(W*H)*100);

	// write rows
	fprintf(f, "const u16 %s_rows[%d] = {", argv[3], H+1);
	for (i = 0; i <= H; i++)
	{
		if ((i & 0x07) == 0) fprintf(f, "\n\t");
		fprintf(f, "0x%04X, ", OutRows[i]);
	}
	fprintf(f, "\n};\n\n");

	// write data
	fprintf(f, "const u8 %s[%d] __attribute__ ((aligned(4))) = {", argv[3], OutNum);
	for (i = 0; i < OutNum; i++)
	{
		if ((i & 0x0f) == 0) fprintf(f, "\n\t");
		fprintf(f, "0x%02X, ", OutBuf[i]);
	}
	fprintf(f, "\n};\n");

	fclose(f);
	free(Img);

	return 0;
}


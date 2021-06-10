// Palettes 332 (R3G3B2)

#include <stdio.h>

#pragma warning(disable : 4996)

#define FILENAME "pal332.act"
#define FILENAME2 "pal332.csv"

//                        0x00, 0x54, 0xC3, 0xFF
unsigned char Levels4[4] = { 0,   84,  195,  255 };

//                        0x00, 0x29, 0x54, 0x75, 0xA6, 0xC3, 0xE6, 0xFF
unsigned char Levels8[8] = { 0,   41,   84,  117,  166,  195,  230,  255 };

// palettes:
//   bit 0 = blue 0 (33%) ... R=1000
//   bit 1 = blue 1 (76%) ... R=390
//   bit 2 = green 0 (16%) ... R=2200
//   bit 3 = green 1 (33%) ... R=1000
//   bit 4 = green 2 (65%) ... R=470
//   bit 5 = red 0 (16%) ... R=2200
//   bit 6 = red 1 (33%) ... R=1000
//   bit 7 = red 2 (65%) ... R=470

#define B0	(1<<0)
#define B1	(1<<1)
#define B2	(1<<2)
#define B3	(1<<3)
#define B4	(1<<4)
#define B5	(1<<5)
#define B6	(1<<6)
#define B7	(1<<7)

int main(int argc, char* argv[])
{
	FILE* f = fopen(FILENAME, "wb");
	if (f == NULL)
	{
		printf("Error opening " FILENAME "\n");
		return 1;
	}

	FILE* f2 = fopen(FILENAME2, "wb");
	if (f2 == NULL)
	{
		printf("Error opening " FILENAME2 "\n");
		return 1;
	}
	fprintf(f2, "index,hex,RGB,red,green,blue\n");

	int i;
	unsigned char b[3];
	for (i = 0; i < 256; i++)
	{
		b[2] = Levels4[i & 3]; // blue
		b[1] = Levels8[(i >> 2) & 7]; // green
		b[0] = Levels8[(i >> 5) & 7]; // red
		fwrite(b, 1, 3, f);

		fprintf(f2, "%i,0x%02X,0x%06X,%d,%d,%d\n",
			i, i, (b[0]<<16)|(b[1]<<8)|b[2], b[0], b[1], b[2]);
	}

	fclose(f);
	fclose(f2);

	return 0;
}


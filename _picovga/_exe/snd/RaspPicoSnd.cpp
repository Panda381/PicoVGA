// Sound must be in format: PCM, mono, 8-bit unsigned with middle at 128, sound rate 22050 Hz

#include <stdio.h>
#include <windows.h>

#pragma warning(disable : 4996) // unsafe fopen

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed long int s32;
typedef unsigned long int u32;

// WAV format
#pragma pack(push,1)

// WAV data descriptor (8 Bytes)
typedef struct WAVDATA_ {
	char			tDataIdent[4];		// (4) data identifier "data"
	DWORD			nDataSize;			// (4) size of following sound data
} WAVDATA;

// WAV format descriptor (28 Bytes)
typedef struct WAVFORMAT_ {
	char			tFormatIdent[8];	// (8) format identifier (= "WAVEfmt ")
	DWORD			nFormatSize;		// (4) size of following format data

	WORD			wFormatTag;			// (2) data format (1 = PCM)
	WORD			nChannels;			// (2) number of channels (1 = mono, 2 = stereo)
	DWORD			nSamplesPerSec;		// (4) sample frequency (number of samples per second)
	DWORD			nAvgBytesPerSec;	// (4) transfer rate (number of bytes per second)
	WORD			nBlockAlign;		// (2) data align (bits*channels/8)

	WORD			wBitsPerSample;		// (2) number of bits per one sample
} WAVFORMAT;

// WAV file header (44 B)
typedef struct WAVHEAD_ {
	char		tWavIdent[4];		// (4) file identifier (= "RIFF")
	DWORD		nFileSize;			// (4) size of following file data

	WAVFORMAT	WavFormat;			// format descriptor
	WAVDATA		WavData;			// data block
} WAVHEAD;
#pragma pack( pop )

u8* Snd = NULL; // input file buffer

int main(int argc, char* argv[])
{
	// check syntax
	if (argc != 4)
	{
		printf("Syntax: input.wav output.cpp name\n");
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
	if (size < 44)
	{
		printf("Incorrect size of %s\n", argv[1]);
		return 1;
	}

	// create buffer
	Snd = (unsigned char*)malloc(size);
	if (Snd == NULL)
	{
		printf("Memory error\n");
		return 1;
	}

	// read file
	int size2 = (int)fread(Snd, 1, size, f);
	fclose(f);
	if (size2 != size)
	{
		printf("Error reading %s\n", argv[1]);
		return 1;
	}

	// check WAV header
	WAVHEAD* wav = (WAVHEAD*)Snd;
	WAVFORMAT* fmt = &wav->WavFormat;
	WAVDATA* data = &wav->WavData;
	if ((memcmp(wav->tWavIdent, "RIFF", 4) != 0) || // check "RIFF" header
		(memcmp(fmt->tFormatIdent, "WAVEfmt ", 8) != 0) || // check "WAVEfmt " header
		(memcmp(data->tDataIdent, "data", 4) != 0) || // check "data" header
		(fmt->wFormatTag != 1) || // check PCM format
		(fmt->nChannels != 1) || // check mono
		(fmt->nSamplesPerSec != 22050) || // check rate
		(fmt->wBitsPerSample != 8)) // check bits per sample
	{
		printf("Incorrect format of input file %s,\n", argv[1]);
		printf("  must be PCM mono 8-bit 22050Hz.\n");
		return 1;
	}
	u8* s = (u8*)&data[1]; // start of sound data
	int n = data->nDataSize; // number of samples

// === save output file

	// open output file
	f = fopen(argv[2], "wb");
	if (f == NULL)
	{
		printf("Error creating %s\n", argv[2]);
		return 1;
	}

	// save header
	fprintf(f, "#include \"include.h\"\n\n");
	fprintf(f, "// sound format: PCM mono 8-bit 22050Hz\n");
	fprintf(f, "const u8 %s[%d] = {", argv[3], n);

	// load sound
	int i;
	for (i = 0; i < n; i++)
	{
		if ((i & 0x0f) == 0) fprintf(f, "\n\t");
		fprintf(f, "0x%02X, ", s[i]);
	}
	fprintf(f, "\n};\n");

	fclose(f);
	free(Snd);

	return 0;
}

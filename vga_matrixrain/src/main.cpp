
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

#define DELAY		10	// delay in [ms]
#define LEN_MIN	 	10	// minimal length of drop
#define LEN_MAX  	80	// maximal length of drop
#define OFF_MIN		0	// minimal offset
#define OFF_MAX		150	// maximal offset
#define SPEED_MIN	0.2f	// minimal speed
#define SPEED_MAX	0.5f	// maximal speed
#define CHAR_MIN	33	// minimal character
#define CHAR_MAX	126	// maximal character

// text screen (character + foreground color, format GF_FTEXT)
u8 TextBuf[TEXTSIZE] __attribute__ ((aligned(4)));

// copy of font
u8 Font_Copy[sizeof(FontBold8x8)] __attribute__ ((aligned(4)));

// palette table
const u8 Pal[] = {
	COL_WHITE,
	COL_LIGHTGREEN,
	COL_MOREGREEN,
	COL_MOREGREEN,
	COL_GREEN,
	COL_GREEN,
	COL_GREEN,
	COL_GREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_SEMIGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
	COL_DARKGREEN,
};
#define PALLEN count_of(Pal)	// length of palette table

// length of drops
u8 Len[TEXTW];

// offset of drops
float Off[TEXTW];

// falling speed
float Speed[TEXTW];

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &VideoVGA; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmFText(g, TextBuf, Font_Copy, FONTH, COL_BLACK, TEXTWB);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// generate new drop
void NewDrop(int i)
{
	Len[i] = RandU8MinMax(LEN_MIN, LEN_MAX);
	Off[i] = -RandFloatMinMax(OFF_MIN, OFF_MAX);
	Speed[i] = RandFloatMinMax(SPEED_MIN, SPEED_MAX);
}

int main()
{
	int i, x, y;
	u8* s;
	u8* d;

	// initialize random number generator
	RandInitSeed();

	// copy font to RAM buffer
	memcpy(Font_Copy, FontBold8x8, sizeof(FontBold8x8));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// generate new drops
	for (i = 0; i < TEXTW; i++)
	{
		NewDrop(i);
		Off[i] *= 2;
	}

	// generate random text screen
	d = TextBuf;
	for (i = TEXTSIZE; i > 0; i -= 2)
	{
		*d = RandU8MinMax(CHAR_MIN, CHAR_MAX);
		d += 2;
	}

	// main loop
	while (true)
	{
		// update color attributes
		d = &TextBuf[1];
		for (y = 0; y < TEXTH; y++)
		{
			for (x = 0; x < TEXTW; x++)
			{
				i = (int)((Off[x] - y)/Len[x]*PALLEN + 0.5f);
				if ((i < 0) || (i >= PALLEN))
					*d = COL_BLACK;
				else
					*d = Pal[i];			
				d += 2;
			}
		}

		// randomize some characters
		for (i = 100; i > 0; i--)
		{
			TextBuf[RandU16Max(TEXTW*TEXTH-1)*2] = RandU8MinMax(CHAR_MIN, CHAR_MAX);
		}

		// shift drops
		for (x = 0; x < TEXTW; x++)
		{
			Off[x] += Speed[x];

			// generate new drop
			if (Off[x] - Len[x] > TEXTH) NewDrop(x);
		}

		// speed
		sleep_ms(DELAY);
	}
}

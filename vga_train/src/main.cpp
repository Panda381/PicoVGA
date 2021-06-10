
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

u8 Text[TEXTMAX*2]; // 2 rows of text (2nd row is empty, it is used to center line vertically)
u8 TextCol[TEXTMAX*2*8] __attribute__ ((aligned(4))); // text color gradient

// copy of tiles images
u8 TilesImg_Copy[sizeof(TilesImg)] __attribute__ ((aligned(4)));

// copy of font
u8 Font_Copy[2048] __attribute__ ((aligned(4)));

// info box
u8 Box[BOXSIZE] __attribute__ ((aligned(4)));
sCanvas BoxCanvas; // box canvas

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &VideoVGA; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.mode[INFO_LAYER] = LAYERMODE_COLOR; // info box
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0 to tiles + state row
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, TILEH);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmTile(g, Board, TilesImg_Copy, TILESIZE, TILESIZE, MAPW); // tiles

	t = ScreenAddStrip(pScreen, STATEH);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmDText(g, Text, Font_Copy, 8, COL_BLACK, TextCol, TEXTMAX); // text
	g->dbly = True;
	g->offy = -8;
	g->wrapy = STATEH/2;

	// setup layer 1 with info box
	LayerSetup(INFO_LAYER, Box, &Vmode, BOXW, BOXH);
	LayerSetX(INFO_LAYER, BOXX);
	LayerSetY(INFO_LAYER, BOXY);

	// prepare box canvas
	BoxCanvas.img = Box;
	BoxCanvas.w = BOXW;
	BoxCanvas.h = BOXH;
	BoxCanvas.wb = BOXW;
	BoxCanvas.format = CANVAS_8;

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... right\n", KEY_R);
	printf("%c ... up\n", KEY_U);
	printf("%c ... left\n", KEY_L);
	printf("%c ... down\n", KEY_D);
	printf("%c ... help solve scene\n", KEY_HELP);
	printf("Enter ... OK\n");
	printf("Esc ... escape, restart\n");
}

// get character from keyboard (0 = no key)
char GetChar()
{
	char c = getchar_timeout_us(0);
	if (c == (char)PICO_ERROR_TIMEOUT) c = 0;
	return c;
}

// flush characters from keyboard
void FlushChar()
{
	while (GetChar() != 0) {}
}

int main()
{
	int i;

	// initialize random number generator
	RandInitSeed();

	// copy tiles images to RAM buffer (flash would be too slow)
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));

	// copy font to RAM buffer
	memcpy(Font_Copy, FontBold8x8, sizeof(FontBold8x8));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// clear info row
	InfoClear();

	// initialize videomode
	VideoInit();

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// set first scene
	Level = LEVFIRST;
	Score = 0;

	// loop with demo scene
	while (True)
	{
		// demo
		i = Level;
		while (True)
		{
			// play demo scene 0
			Level = 0;
			if (HelpLevel()) break; // break

#ifdef AUTOMODE // automode - run levels to check solutions (help completes scene)
			break;
#endif

			// play random scene
			Level = RandU8MinMax(1, LEVNUM);
			if (HelpLevel()) break; // break
		}
		Level = i;
		InitLevel();

		// main loop
		while (True)
		{
			// game loop - called every single game step
			if (GameLoop()) break;

			// delay
			sleep_ms(GAMESPEED);
		}
	}
}

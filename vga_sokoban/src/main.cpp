
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// copy of tiles images
ALIGNED u8 TilesImg_Copy[sizeof(Tiles32Img)];

// copy of font
ALIGNED u8 Font_Copy[4096];

// text screen (character + 2x4 bit attributes)
u8 Text[TEXTSIZE*2];

// current tile size (0=text mode, -1 = uninitialized)
int CurTileSize = -1;

// initialize videomode
void VideoInit()
{
// Note: If not using overlapped layer LAYERPROG_KEY, set minimal
// frequency to 150 MHz, or else text mode will flicker.

	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &VideoVGA; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.mode[1] = LAYERPROG_KEY; // sprite
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0 to tiles
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);
	sSegm* g = ScreenAddSegm(t, WIDTH);

	// setup layer 1 with player image
	memset(&LayerScreen[1], 0, sizeof(sLayer));

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// set text mode
void SetTextMode()
{
	// set overlapped layer off
	LayerScreen[1].on = False;
	__dmb();

	// setup print buffer
	PrintSetup(Text, TEXTW, TEXTH, TEXTWB);

	// clear text screen
	PrintClear();

	// initialize base layer 0 to text mode
	if (CurTileSize != 0)
	{
		CurTileSize = 0;
		ScreenClear(pScreen);
		sStrip* t = ScreenAddStrip(pScreen, HEIGHT);
		sSegm* g = ScreenAddSegm(t, WIDTH);
		ScreenSegmAText(g, Text, Font_Copy, FONTH, DefPal16, TEXTWB);
	}
}

// set tile mode (must be valid variables MapW, MapH, TileSize)
void SetTileMode()
{
	if (CurTileSize != TileSize)
	{
		CurTileSize = TileSize;

		// copy tiles
		if (TileSize == 32)
			memcpy(TilesImg_Copy, Tiles32Img, sizeof(Tiles32Img));
		else if (TileSize == 28)
			memcpy(TilesImg_Copy, Tiles28Img, sizeof(Tiles28Img));
		else if (TileSize == 24)
			memcpy(TilesImg_Copy, Tiles24Img, sizeof(Tiles24Img));
		else if (TileSize == 20)
			memcpy(TilesImg_Copy, Tiles20Img, sizeof(Tiles20Img));
		else if (TileSize == 16)
			memcpy(TilesImg_Copy, Tiles16Img, sizeof(Tiles16Img));
		else if (TileSize == 12)
			memcpy(TilesImg_Copy, Tiles12Img, sizeof(Tiles12Img));
		else
			memcpy(TilesImg_Copy, Tiles8Img, sizeof(Tiles8Img));

		// initialize base layer 0 to tile mode
		ScreenClear(pScreen);
		sStrip* t = ScreenAddStrip(pScreen, MapH*TileSize);
		sSegm* g = ScreenAddSegm(t, MapW*TileSize);
		ScreenSegmTile2(g, Board, TilesImg_Copy, TileSize, TileSize, TileSize*TILES_NUM, MapW);
	}

	// shift offset
	pScreen->strip[0].seg[0].offx = OffX;
	pScreen->strip[0].seg[0].offy = OffY;

	// set overlapped layer 1 ON
	LayerScreen[1].on = True;
}

// get character from keyboard (0 = no key)
char GetChar()
{
	char c = getchar_timeout_us(0);
	if (c == (char)PICO_ERROR_TIMEOUT) c = 0;
	if ((c >= 'a') && (c <= 'z')) c -= 32;
	return c;
}

// wait for a character
char WaitChar()
{
	char c;
	while ((c = GetChar()) == 0) {}
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

	// copy font to RAM buffer
	memcpy(Font_Copy, FontBoldB8x16, sizeof(FontBoldB8x16));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// main loop
	AutInx = 0;
	while (True)
	{
		int oldaut = AutInx;

		// play demo level
		while (True)
		{
			// play demo scene
			LevNum = 0;
			Levels = IntroLevel;
			Level = 0;
			if (PlaySolve()) break;

			// play random scene
			do {
				i = RandU8Max(AutNum-1);
				AutInx = i;
				AutName = Author[i].author; // author's name
				Collect = Author[i].collect; // pointer to list of collections
				CollNum = Author[i].collnum; // number of collections

				i = RandU8Max(CollNum-1);
				CollInx = i;
				CollName = Collect[i].name; // name of collection
				Levels = Collect[i].levels; // pointer to list of levels
				LevNum = Collect[i].levnum; // number of levels

				i = RandU16Max(LevNum-1);
				Level = i;
				LevDef = Levels[i*2]; // current level definition
				LevSolve = Levels[i*2+1]; // current level solve

				BoardDim();

			} while ((LevelW > 15) || (LevelH > 12));
			if (PlaySolve()) break;
		}
		AutInx = oldaut;

		// select author
		while (AuthorSelect())
		{
			// select collection (returns True = OK, False = Esc)
			while (CollSelect())
			{
				// select level
				while (LevSelect())
				{
					// game loop
					GameLoop();
				}
			}
		}
	}
}

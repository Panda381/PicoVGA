
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// initialize buffers on program start
void BufInit()
{
	int i;
	sChar* ch;

	// copy font to RAM buffer
	memcpy(Font_Copy, FontBold8x8, sizeof(FontBold8x8));

	// copy tiles images to RAM buffer (flash would be too slow)
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));

	// copy sprites
	memcpy(SpritesImg_Copy, SpritesImg, sizeof(SpritesImg));

	// prepare array of sprite lines
	for (i = 0; i < SPRITE_NUM; i++)
	{
		SpritePrepLines(&SpritesImg_Copy[i*SPRITEW], &SpritesX0[i*SPRITEH], &SpritesW0[i*SPRITEH],
			SPRITEW, SPRITEH, SPRITEW*SPRITE_NUM, COL_BLACK, False);
	}

	// prepare sprites
	for (i = 0; i < 5; i++)
	{
		ch = &Chars[i];
		SpriteList[i] = &ch->sprite;
		ch->steps = CHARSTEPS;
		ch->dx = 0;
		ch->dy = 0;
		ch->x = MAPTOX(MAPW/2-i*2);
		ch->y = MAPTOY(17);
		ch->dir = DIR_D;
		ch->state = S_SCATTER;
		ch->anim = i*4*4;

		ch->sprite.keycol = COL_BLACK;
		ch->sprite.w = SPRITEW;
		ch->sprite.h = SPRITEH;
		ch->sprite.wb = SPRITEW*SPRITE_NUM;
	}

	// fruit sprite
	SpriteList[5] = &FruitSprite;
	FruitSprite.keycol = COL_BLACK;
	FruitSprite.x = 0;
	FruitSprite.y = HEIGHT+100;
	FruitSprite.w = SPRITEW;
	FruitSprite.h = SPRITEH;
	FruitSprite.wb = SPRITEW*SPRITE_NUM;
}

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &VideoEGA; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.wfull = MAXWIDTH; // max. width
	Cfg.height = HEIGHT; // screen height
	Cfg.mode[SPRITE_LAYER] = LAYERMODE_SPRITEBLACK; // sprites
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// clear screen
	ScreenClear(pScreen);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// initialize open screen
void VideoOpenInit()
{
	// clear screen
	ScreenClear(pScreen);

	// 8-bit graphics
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, Box, WIDTH);
	Canvas.img = Bottom;
	Canvas.w = WIDTH;
	Canvas.h = HEIGHT;
	Canvas.wb = WIDTH;
	Canvas.format = CANVAS_8;

	// logo canvas
	LogoCanvas.img = (u8*)LogoImg;
	LogoCanvas.w = LOGOW;
	LogoCanvas.h = LOGOH;
	LogoCanvas.wb = LOGOW;
	LogoCanvas.format = CANVAS_8;

	// sprites canvas
	SpritesCanvas.img = SpritesImg_Copy;
	SpritesCanvas.w = SPRITEW*SPRITE_NUM;
	SpritesCanvas.h = SPRITEH;
	SpritesCanvas.wb = SPRITEW*SPRITE_NUM;
	SpritesCanvas.format = CANVAS_8;

	// tiles canvas
	TilesCanvas.img = TilesImg_Copy;
	TilesCanvas.w = TILESIZE*TILE_NUM;
	TilesCanvas.h = TILESIZE;
	TilesCanvas.wb = TILESIZE*TILE_NUM;
	TilesCanvas.format = CANVAS_8;

	// setup layer with sprites
	LayerSpriteSetup(SPRITE_LAYER, &SpriteList[0], 5, &Vmode, 0, 0, WIDTH, HEIGHT, COL_BLACK);
	LayerOff(SPRITE_LAYER);

}

// initialize game screen
void VideoGameInit()
{
	// clear screen
	ScreenClear(pScreen);

	// title (text with attributes)
	sStrip* t = ScreenAddStrip(pScreen, TITLEH);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmAText(g, Text, Font_Copy, 8, DefPal16, TEXTMAX*2);
	PrintSetup(Text, TEXTMAX, 1, TEXTMAX*2);

	// game board (tiles)
	t = ScreenAddStrip(pScreen, MAPHEIGHT);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmTile2(g, Board, TilesImg_Copy, TILESIZE, TILESIZE, TILESIZE*TILE_NUM, MAPW);
	memcpy(Board, BoardTemp, MAPSIZE);

	// bottom (8-bit graphics)
	t = ScreenAddStrip(pScreen, BOTTOMH);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, Bottom, BOTTOMW);
	Canvas.img = Bottom;
	Canvas.w = BOTTOMW;
	Canvas.h = BOTTOMH;
	Canvas.wb = BOTTOMW;
	Canvas.format = CANVAS_8;

	// status canvas
	StatusCanvas.img = (u8*)StatusImg;
	StatusCanvas.w = BOTTOMH*9;
	StatusCanvas.h = BOTTOMH;
	StatusCanvas.wb = BOTTOMH*9;
	StatusCanvas.format = CANVAS_8;

	// setup layer with sprites
	LayerSpriteSetup(SPRITE_LAYER, &SpriteList[0], 6, &Vmode, 0, TITLEH, MAPWIDTH, MAPHEIGHT, COL_BLACK);
	LayerOff(SPRITE_LAYER);
}

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... left\n", KEY_L);
	printf("%c ... up\n", KEY_U);
	printf("%c ... right\n", KEY_R);
	printf("%c ... down\n", KEY_D);
	printf("%c ... pause\n", KEY_PAUSE);
}

// get character from keyboard (0 = no key)
char GetChar()
{
	char c = getchar_timeout_us(0);
	if (c == (char)PICO_ERROR_TIMEOUT) c = 0;
	if ((c >= 'a') && (c <= 'z')) c -= 32;
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
	char ch;

	// initialize random number generator
	RandInitSeed();

	// initialize buffers on program start
	BufInit();

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// initialize stdio
	stdio_init_all();

	// some internal checks
	while ((sizeof(SpritesImg) != SPRITE_NUM*SPRITEW*SPRITEH) ||
		(sizeof(TilesImg) != TILE_NUM*TILESIZE*TILESIZE))
	{
		printf("Internal error!\n");
		sleep_ms(1000);
	}

	// display help
	DispHelp();

	// initialize sound output
	PWMSndInit();

	// loop with open screen
	MaxScore = 0;
	while (True)
	{
		// open screen (break with a valid key)
		OpenScreen();

		// open new game
		OpenGame();
	}
}


// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// clouds copy
ALIGNED u8 CloudsImg_Copy[sizeof(CloudsImg)];

// hot-air balloon copy images
ALIGNED u8 HotairImg_Copy[sizeof(HotairImg)];
u8 HotairX0[HOTAIRH]; // array of start of lines
u8 HotairW0[HOTAIRH]; // array of length of lines

// hot-air balloon sprites
sSprite HotairSprites[HOTAIR_NUM];
sSprite* HotairSpriteList[HOTAIR_NUM];
s8 HotairDX[HOTAIR_NUM];
s8 HotairDY[HOTAIR_NUM];

// party balloon copy images
ALIGNED u8 BlueImg_Copy[sizeof(BlueImg)];
u8 BlueX0[BALLOONH];
u8 BlueW0[BALLOONH];

ALIGNED u8 GreenImg_Copy[sizeof(GreenImg)];
u8 GreenX0[BALLOONH];
u8 GreenW0[BALLOONH];

ALIGNED u8 RedImg_Copy[sizeof(RedImg)];
u8 RedX0[BALLOONH];
u8 RedW0[BALLOONH];

ALIGNED u8 YellowImg_Copy[sizeof(YellowImg)];
u8 YellowX0[BALLOONH];
u8 YellowW0[BALLOONH];

// party balloon sprites
sSprite BalloonSprites[BALLOON_NUM*2];
sSprite* BalloonSpriteList[BALLOON_NUM*2];

// initialize videomode
void VideoInit()
{
	sSprite* spr;
	sSprite* spr2;
	int i, j, lay;

	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &DRV; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.freq = 180000; // system clock frequency
	Cfg.mode[HOTAIR_LAYER] = LAYERMODE_SPRITEWHITE; // hot-air balloons
	Cfg.mode[BALLOON_LAYER] = LAYERMODE_FASTSPRITEWHITE; // party balloons
	Cfg.mode[BALLOON_LAYER+1] = LAYERMODE_FASTSPRITEWHITE; // party balloons 2
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, CloudsImg_Copy, CLOUDSW);
	g->wrapx = CLOUDSW;
	g->wrapy = CLOUDSH;

	// prepare array of hot-air balloons sprite lines
	SpritePrepLines(HotairImg_Copy, HotairX0, HotairW0, HOTAIRW, HOTAIRH, HOTAIRW, COL_BLACK, False);

	// prepare hot-air balloons sprites
	for (i = 0; i < HOTAIR_NUM; i++)
	{
		spr = &HotairSprites[i];
		HotairSpriteList[i] = spr;
		spr->img = HotairImg_Copy;
		spr->x0 = HotairX0;
		spr->w0 = HotairW0;
		spr->keycol = COL_BLACK;
		spr->x = RandU16Max(WIDTH-HOTAIRW);
		spr->y = RandU16Max(HEIGHT-HOTAIRH);
		spr->w = HOTAIRW;
		spr->h = HOTAIRH;
		spr->wb = HOTAIRW;

		HotairDX[i] = RandU8MinMax(HOTAIR_MINSPEED, HOTAIR_MAXSPEED);
		if (RandU8() < 0x80) HotairDX[i] = -HotairDX[i];
		HotairDY[i] = RandU8MinMax(HOTAIR_MINSPEED, HOTAIR_MAXSPEED);
		if (RandU8() < 0x80) HotairDY[i] = -HotairDY[i];
	}

	// setup hot-air balloons layer
	LayerSpriteSetup(HOTAIR_LAYER, HotairSpriteList, HOTAIR_NUM, &Vmode, 0, 0, WIDTH, HEIGHT, COL_BLACK);
	LayerOn(HOTAIR_LAYER);

	// prepare array of party balloons sprite lines
	SpritePrepLines(BlueImg_Copy, BlueX0, BlueW0, BALLOONW, BALLOONH, BALLOONW, COL_BLACK, True);
	SpritePrepLines(GreenImg_Copy, GreenX0, GreenW0, BALLOONW, BALLOONH, BALLOONW, COL_BLACK, True);
	SpritePrepLines(RedImg_Copy, RedX0, RedW0, BALLOONW, BALLOONH, BALLOONW, COL_BLACK, True);
	SpritePrepLines(YellowImg_Copy, YellowX0, YellowW0, BALLOONW, BALLOONH, BALLOONW, COL_BLACK, True);

	// prepare party balloons sprites
	for (lay = 0; lay < 2; lay++)
	{
		for (i = 0; i < BALLOON_NUM; i++)
		{
			spr = &BalloonSprites[i+lay*BALLOON_NUM];
			BalloonSpriteList[i+lay*BALLOON_NUM] = spr;
			switch (RandU8Max(3))
			{
			case 0:
				spr->img = BlueImg_Copy;
				spr->x0 = BlueX0;
				spr->w0 = BlueW0;
				break;

			case 1:
				spr->img = GreenImg_Copy;
				spr->x0 = GreenX0;
				spr->w0 = GreenW0;
				break;

			case 2:
				spr->img = RedImg_Copy;
				spr->x0 = RedX0;
				spr->w0 = RedW0;
				break;
			case 3:
				spr->img = YellowImg_Copy;
				spr->x0 = YellowX0;
				spr->w0 = YellowW0;
				break;
			}

			spr->keycol = COL_BLACK;
			spr->w = BALLOONW;
			spr->h = BALLOONH;
			spr->wb = BALLOONW;

			// generate coordinate, ensures to not overlap with another balloon
			do {
				spr->x = ALIGN4(RandU16Max(WIDTH-BALLOONW));
				spr->y = RandS16MinMax(-BALLOONH, HEIGHT-1);

				// check if this area is already occupied
				for (j = 0; j < i; j++)
				{
					spr2 = &BalloonSprites[j+lay*BALLOON_NUM];
					if ((spr->x < spr2->x + BALLOONW) &&
						(spr->x + BALLOONW > spr2->x) &&

						((spr->y < spr2->y + BALLOONH) &&
						(spr->y + BALLOONH > spr2->y)) ||

						((spr->y < spr2->y + HEIGHT + 2*BALLOONH) &&
						(spr->y + BALLOONH > spr2->y + HEIGHT + BALLOONH)) ||

						((spr->y + HEIGHT + BALLOONH < spr2->y + BALLOONH) &&
						(spr->y + HEIGHT + 2*BALLOONH > spr2->y)))
						break;
				}
			} while (j < i);
		}
	}

	// sort fast sprite list by X coordinate
	SortSprite(BalloonSpriteList, BALLOON_NUM);
	SortSprite(&BalloonSpriteList[BALLOON_NUM], BALLOON_NUM);

	// setup party balloons layer
	LayerSpriteSetup(BALLOON_LAYER, BalloonSpriteList, BALLOON_NUM, &Vmode, 0, 0, WIDTH, HEIGHT, COL_BLACK);
	LayerOn(BALLOON_LAYER);
	LayerSpriteSetup(BALLOON_LAYER+1, &BalloonSpriteList[BALLOON_NUM], BALLOON_NUM, &Vmode, 0, 0, WIDTH, HEIGHT, COL_BLACK);
	LayerOn(BALLOON_LAYER+1);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// main function
int main()
{
	int i, x, y, lay;
	sSprite* spr;

	// initialize random number generator (we use constant value to get "nice" variant)
	RandSetSeed(5);

	// copy sky
	memcpy(CloudsImg_Copy, CloudsImg, sizeof(CloudsImg));

	// copy hot-air balloon
	CopyWhiteImg(HotairImg_Copy, HotairImg, sizeof(HotairImg));

	// copy party balloons
	CopyWhiteImg(BlueImg_Copy, BlueImg, sizeof(BlueImg));
	CopyWhiteImg(GreenImg_Copy, GreenImg, sizeof(GreenImg));
	CopyWhiteImg(RedImg_Copy, RedImg, sizeof(RedImg));
	CopyWhiteImg(YellowImg_Copy, YellowImg, sizeof(YellowImg));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// main loop
	while (true)
	{
		// animate sky
		pScreen->strip[0].seg[0].offx += 4;
		if (pScreen->strip[0].seg[0].offx > CLOUDSW) pScreen->strip[0].seg[0].offx -= CLOUDSW;
		pScreen->strip[0].seg[0].offy += 1;
		if (pScreen->strip[0].seg[0].offy > CLOUDSH) pScreen->strip[0].seg[0].offy -= CLOUDSH;

		// animate hot-air balloons
		for (i = 0; i < HOTAIR_NUM; i++)
		{
			spr = &HotairSprites[i];

			x = spr->x + HotairDX[i];
			if (x < 0)
			{
				x = 0;
				HotairDX[i] = RandU8MinMax(HOTAIR_MINSPEED, HOTAIR_MAXSPEED);
			}

			if (x > WIDTH - HOTAIRW)
			{			
				x = WIDTH - HOTAIRW;
				HotairDX[i] = -RandU8MinMax(HOTAIR_MINSPEED, HOTAIR_MAXSPEED);
			}
			spr->x = x;

			y = spr->y + HotairDY[i];
			if (y < 0)
			{
				y = 0;
				HotairDY[i] = RandU8MinMax(HOTAIR_MINSPEED, HOTAIR_MAXSPEED);
			}

			if (y > HEIGHT - HOTAIRH)
			{			
				y = HEIGHT - HOTAIRH;
				HotairDY[i] = -RandU8MinMax(HOTAIR_MINSPEED, HOTAIR_MAXSPEED);
			}
			spr->y = y;
		}

		// animate party balloons
		for (lay = 0; lay < 2; lay++)
		{
			for (i = 0; i < BALLOON_NUM; i++)
			{
				spr = BalloonSpriteList[i+lay*BALLOON_NUM];
				y = spr->y - BALLOON_SPEED;
				if (y < -BALLOONH) y += HEIGHT+BALLOONH;
				spr->y = y;
			}
		}

		// delay
		sleep_ms(50);
	}
}

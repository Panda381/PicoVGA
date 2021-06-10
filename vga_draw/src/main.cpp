
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
#if FORMAT==CANVAS_PLANE2
u8 Box[2*WIDTHBYTE*HEIGHT] __attribute__ ((aligned(4)));
#elif FORMAT==CANVAS_ATTRIB8
u8 Box[WIDTHBYTE*HEIGHT + WIDTHBYTE*((HEIGHT+7)/8)] __attribute__ ((aligned(4)));
#else
u8 Box[WIDTHBYTE*HEIGHT] __attribute__ ((aligned(4)));
#endif
//sCanvas Canvas; // canvas of draw box

// image (RPi)
u8 Img[1280] __attribute__ ((aligned(4)));
sCanvas ImgCanvas; // canvas of image

// image (Peter)
u8 Img2[1024] __attribute__ ((aligned(4)));
sCanvas Img2Canvas; // canvas of image

// 16-color palette translation table
//u16 Pal16Trans[256];

// 4-color palette translation table
u32 Pal4Trans[256];

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &DRV; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);

	// draw box
	sSegm* g = ScreenAddSegm(t, WIDTH);

#if FORMAT==CANVAS_8
	ScreenSegmGraph8(g, Box, WIDTHBYTE);
	memcpy(Img, RPi8Img, sizeof(RPi8Img));
	memcpy(Img2, Peter8Img, sizeof(Peter8Img));

#elif FORMAT==CANVAS_4
	GenPal16Trans(Pal16Trans, DefPal16); // generate palette translation table
	ScreenSegmGraph4(g, Box, Pal16Trans, WIDTHBYTE);

	memcpy(Img, RPi4Img, sizeof(RPi4Img));
	memcpy(Img2, Peter4Img, sizeof(Peter4Img));

#elif FORMAT==CANVAS_2
	GenPal4Trans(Pal4Trans, PalCGA6); // generate palette translation table
	ScreenSegmGraph2(g, Box, Pal4Trans, WIDTHBYTE);

	memcpy(Img, RPi2Img, sizeof(RPi2Img));
	memcpy(Img2, Peter2Img, sizeof(Peter2Img));

#elif FORMAT==CANVAS_1
	ScreenSegmGraph1(g, Box, COL_BLACK, COL_WHITE, WIDTHBYTE);

	memcpy(Img, RPi1Img, sizeof(RPi1Img));
	ImgInvert(Img, sizeof(RPi1Img));
	memcpy(Img2, Peter1Img, sizeof(Peter1Img));
	ImgInvert(Img2, sizeof(Peter1Img));

#elif FORMAT==CANVAS_PLANE2
	GenPal4Plane(Pal4Trans, PalCGA2); // generate palette translation table
	ScreenSegmPlane2(g, Box, WIDTHBYTE*HEIGHT, Pal4Trans, WIDTHBYTE);
	Canvas.img2 = &Box[WIDTHBYTE*HEIGHT];

	ImgCanvas.img2 = &Img[IMGWIDTHBYTE*IMGHEIGHT];
	Plane2Conv(Img, ImgCanvas.img2, RPi2Img, IMGWIDTH, IMGHEIGHT);

	Img2Canvas.img2 = &Img2[IMG2WIDTHBYTE*IMG2HEIGHT];
	Plane2Conv(Img2, Img2Canvas.img2, Peter2Img, IMG2WIDTH, IMG2HEIGHT);

#elif FORMAT==CANVAS_ATTRIB8
	ScreenSegmAttrib8(g, Box, &Box[WIDTHBYTE*HEIGHT], DefPal16, WIDTHBYTE);
	Canvas.img2 = &Box[WIDTHBYTE*HEIGHT];

	ImgCanvas.img2 = &Img[IMGWIDTHBYTE*IMGHEIGHT];
	Attr8Conv(Img, ImgCanvas.img2, RPi4Img, IMGWIDTH, IMGHEIGHT, DefPal16);

	Img2Canvas.img2 = &Img2[IMG2WIDTHBYTE*IMG2HEIGHT];
	Attr8Conv(Img2, Img2Canvas.img2, Peter4Img, IMG2WIDTH, IMG2HEIGHT, DefPal16);
#endif

	// canvas of draw box
	Canvas.img = Box;
	Canvas.w = WIDTH;
	Canvas.h = HEIGHT;
	Canvas.wb = WIDTHBYTE;
	Canvas.format = FORMAT;

	// canvas of image
	ImgCanvas.img = Img;
	ImgCanvas.w = IMGWIDTH;
	ImgCanvas.h = IMGHEIGHT;
	ImgCanvas.wb = IMGWIDTHBYTE;
	ImgCanvas.format = FORMAT;

	// canvas of image 2
	Img2Canvas.img = Img2;
	Img2Canvas.w = IMG2WIDTH;
	Img2Canvas.h = IMG2HEIGHT;
	Img2Canvas.wb = IMG2WIDTHBYTE;
	Img2Canvas.format = FORMAT;

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

const u8* Fonts[5] = { FontBold8x8, FontGame8x8, FontIbm8x8, FontItalic8x8, FontThin8x8 };

int main()
{
	Bool slow = True;
	u32 t, t2;

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// initialize debug LED
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);

	// main loop
	t = time_us_32();
	while (true)
	{
		switch (RandU8Max(7))
		{
		case 0:
			DrawRect(&Canvas, RandS16MinMax(-50, WIDTH), RandS16MinMax(-50, HEIGHT),
				RandU16MinMax(1, 100), RandU16MinMax(1, 100), RandU8Max(MAXCOL));
			break;

		case 1:
			DrawFrame(&Canvas, RandS16MinMax(-50, WIDTH), RandS16MinMax(-50, HEIGHT),
				RandU16MinMax(4, 100), RandU16MinMax(4, 100), RandU8Max(MAXCOL));
			break;

		case 2:
			DrawPoint(&Canvas, RandS16MinMax(-50, WIDTH+50), RandS16MinMax(-50, HEIGHT+50), RandU8Max(MAXCOL));
			break;

		case 3:
			DrawLine(&Canvas, RandS16MinMax(-50, WIDTH+50), RandS16MinMax(-50, HEIGHT+50),
				RandS16MinMax(-50, WIDTH+50), RandS16MinMax(-50, HEIGHT+50), RandU8Max(MAXCOL));
			break;

		case 4:
			DrawFillCircle(&Canvas, RandS16MinMax(-50, WIDTH+50), RandS16MinMax(-50, HEIGHT+50),
				RandU16MinMax(1, 50), RandU8Max(MAXCOL), RandU8());
			break;

		case 5:
			DrawCircle(&Canvas, RandS16MinMax(-50, WIDTH+50), RandS16MinMax(-50, HEIGHT+50),
				RandU16MinMax(1, 50), RandU8Max(MAXCOL), RandU8());
			break;

		case 6:
			DrawText(&Canvas, "Hello!", RandS16MinMax(-50, WIDTH+50), RandS16MinMax(-50, HEIGHT+50), RandU8Max(MAXCOL),
				Fonts[RandU8Max(4)], 8, RandS8MinMax(1,4), RandS8MinMax(1,4));
			break;

		case 7:
			if (RandU8Max(1)==0)
			{
#if FORMAT == CANVAS_ATTRIB8 
				DrawImg(&Canvas, &Img2Canvas, RandS16MinMax(-50, WIDTH-10) & ~7, RandS16MinMax(-50, HEIGHT-10) & ~7,
					0, 0, IMG2WIDTH, IMG2HEIGHT);
#else
				DrawImg(&Canvas, &Img2Canvas, RandS16MinMax(-50, WIDTH-10), RandS16MinMax(-50, HEIGHT-10),
					0, 0, IMG2WIDTH, IMG2HEIGHT);
#endif
			}
			else
			{
#if FORMAT == CANVAS_ATTRIB8 
				DrawBlit(&Canvas, &ImgCanvas, RandS16MinMax(-50, WIDTH-10) & ~7, RandS16MinMax(-50, HEIGHT-10) & ~7,
					0, 0, IMGWIDTH, IMGHEIGHT, MAXCOL);
#else
				DrawBlit(&Canvas, &ImgCanvas, RandS16MinMax(-50, WIDTH-10), RandS16MinMax(-50, HEIGHT-10),
					0, 0, IMGWIDTH, IMGHEIGHT, MAXCOL);
#endif
			}
			break;
		}

		// change mode after some time
		t2 = time_us_32();
		if (slow)
		{
			if ((t2 - t) > 8000000)
			{
				slow = False;
				t = t2;
			}
			sleep_ms(50);
		}
		else
		{
			if ((t2 - t) > 2000000)
			{
				slow = True;
				t = t2;
			}
		}
		gpio_put(LED_PIN, slow);
	}
}

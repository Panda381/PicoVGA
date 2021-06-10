
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTHBYTE*HEIGHT];

// images
ALIGNED u8 Img1[IMGSIZE];
ALIGNED u8 Img2[IMGSIZE];
ALIGNED u8 Img3[IMGSIZE];
ALIGNED u8 Img4[IMGSIZE];
sCanvas Img1Canvas; // canvas of image 1
sCanvas Img2Canvas; // canvas of image 2
sCanvas Img3Canvas; // canvas of image 3
sCanvas Img4Canvas; // canvas of image 4

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &DRV; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.dbly = DBLY;
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);

	// draw box
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, Box, WIDTHBYTE);

	// canvas of draw box
	Canvas.img = Box;
	Canvas.w = WIDTH;
	Canvas.h = HEIGHT;
	Canvas.wb = WIDTHBYTE;
	Canvas.format = FORMAT;

	// canvas of image1
	Img1Canvas.img = Img1;
	Img1Canvas.w = IMGWIDTH;
	Img1Canvas.h = IMGHEIGHT;
	Img1Canvas.wb = IMGWIDTHBYTE;
	Img1Canvas.format = FORMAT;

	// canvas of image 2
	Img2Canvas.img = Img2;
	Img2Canvas.w = IMGWIDTH;
	Img2Canvas.h = IMGHEIGHT;
	Img2Canvas.wb = IMGWIDTHBYTE;
	Img2Canvas.format = FORMAT;

	// canvas of image 3
	Img3Canvas.img = Img3;
	Img3Canvas.w = IMGWIDTH;
	Img3Canvas.h = IMGHEIGHT;
	Img3Canvas.wb = IMGWIDTHBYTE;
	Img3Canvas.format = FORMAT;

	// canvas of image 4
	Img4Canvas.img = Img4;
	Img4Canvas.w = IMGWIDTH;
	Img4Canvas.h = IMGHEIGHT;
	Img4Canvas.wb = IMGWIDTHBYTE;
	Img4Canvas.format = FORMAT;

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

#define MIDX	(WIDTH/2) // middle X coordinate

int main()
{
	float aa;
	float ang; // base angle
	float amp; // wave amplitude
	float yamp;
	int y, ys, x, x1, x2, x3, x4;

	// copy images
	memcpy(Img1, CobbleStoneImg, IMGSIZE);
	memcpy(Img2, FabricImg, IMGSIZE);
	memcpy(Img3, SoilImg, IMGSIZE);
	memcpy(Img4, WoodImg, IMGSIZE);

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// main loop
	aa = 0; // angle counter
	while (true)
	{
		ang = (sin(aa)-1)*PI;
		amp = sin(cos(aa)*0.3)*1000 + 350;

		// draw twister
		for (y = 0; y < HEIGHT; y++)
		{
			yamp = y/amp + ang;
			ys = y & (IMGHEIGHT-1);

			// 4 edges
			x1 = sin(yamp)*TWISTW + MIDX;
			x2 = sin(yamp+PI/2)*TWISTW + MIDX;
			x3 = sin(yamp+PI)*TWISTW + MIDX;
			x4 = sin(yamp+PI*3/2)*TWISTW + MIDX;

			// draw 4 segment on one line
			if (x2 - x1 > 1) DrawImgLine(&Canvas, &Img1Canvas, x1, y, 0, ys, x2-x1, IMGWIDTH);
			if (x3 - x2 > 1) DrawImgLine(&Canvas, &Img2Canvas, x2, y, 0, ys, x3-x2, IMGWIDTH);
			if (x4 - x3 > 1) DrawImgLine(&Canvas, &Img3Canvas, x3, y, 0, ys, x4-x3, IMGWIDTH);
			if (x1 - x4 > 1) DrawImgLine(&Canvas, &Img4Canvas, x4, y, 0, ys, x1-x4, IMGWIDTH);

			// clear left part of the screen
			x = x1;
			if (x2 < x) x = x2;
			if (x3 < x) x = x3;
			if (x4 < x) x = x4;
			DrawRect(&Canvas, 0, y, x, 1, COL_BLACK);

			// clear right part of the screen
			x = x1;
			if (x2 > x) x = x2;
			if (x3 > x) x = x3;
			if (x4 > x) x = x4;
			DrawRect(&Canvas, x, y, WIDTH-x, 1, COL_BLACK);
		}

		// increment angle of animation
		aa += 0.02f;
	}
}

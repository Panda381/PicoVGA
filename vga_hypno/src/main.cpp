
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************
// Width and height of image that uses transformation matrix must be power of 2.
// We will use 512 pixels for width (= 2^9). Width cannot be changed, because
// it is used to calculate memory address. To achieve maximum resolution (and
// RAM usage) we will use height 400 lines and setup driver to 512 lines (= 2^9).
// This will work, but we must use such magnification that ensures that driver
// does not display memory outside valid buffer limits, otherwise program will
// crash on hardfault.

#include "include.h"

// draw box
ALIGNED u8 Box[IMGW*IMGH];

// transformation matrix
cMat2Df Mat;
int MatInt[6];

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &VideoEGA; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.freq = 150000; // frequency
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// clear display layers
	ScreenClear(pScreen);

	// add layer with transformation matrix
	sStrip* t = ScreenAddStrip(pScreen, HEIGHT);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8Mat(g, Box, MatInt, IMGWBIT, IMGHBIT);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// setup rotation transformation matrix
void SetMat(float a)
{
	// prepare transformation matrix
	// Image of real dimensions IMGW * IMGH will be enlarged to square 690 * 690.
	Mat.PrepDrawImg(IMGW, IMGH, 0, 0, 690, 690, 0, 0, a, IMGW/2, IMGH/2);

	// export matrix to int array[6]
	Mat.ExportInt(MatInt);
}

// main function
int main()
{
	int x, y, k;
	float r, a, y2;
	u8* d;

	// setup transformation matrix
	SetMat(0);

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode (and open first page)
	VideoInit();

	// generate hypno image
	d = Box;
	for (y = -IMGH/2; y < IMGH/2; y++)
	{
		for (x = -IMGW/2; x < IMGW/2; x++)
		{
			// radius (y is converted to ensure square image)
			y2 = (float)y*IMGW/IMGH;
			r = sqrtf(x*x + y2*y2);

			// angle
			a = atan2(y2, x);

			// intensity (+ small raster dithering)
			k = (int)(127*sinf(r*0.13f + a) + 127);

			// store pixel, on red color (bits 5..7)
			*d++ = k & 0xe0;
		}
	}

	// main loop
	a = 0;
	while (true)
	{
		SetMat(a);
		a -= 0.05f;
		if (a < 0) a += PI*2;
		sleep_ms(10);
	}
}

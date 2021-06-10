
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
u8 Box[WIDTHBYTE*HEIGHT] __attribute__ ((aligned(4)));
/*
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
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, Box, WIDTHBYTE);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}
*/

int main()
{
	// run VGA core
//	multicore_launch_core1(VgaCore);

	// initialize videomode
//	VideoInit();
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// render image fast
//	Render3DFast();

	// render image without antialiasing
	Render3D(False);

	// render image with antialiasing
	Render3D(True);

	// main loop
	while (true)
	{


	}
}

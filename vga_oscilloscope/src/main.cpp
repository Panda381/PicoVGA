
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// copy of images
ALIGNED u8 OscilAImg_Copy[sizeof(OscilAImg)];
ALIGNED u8 OscilB1Img_Copy[sizeof(OscilB1Img)];
ALIGNED u8 OscilB2Img_Copy[sizeof(OscilB2Img)];
ALIGNED u8 OscilC1Img_Copy[sizeof(OscilC1Img)];
ALIGNED u8 OscilC2Img_Copy[sizeof(OscilC2Img)];
ALIGNED u8 OscilDImg_Copy[sizeof(OscilDImg)];
ALIGNED u8 GridImg_Copy[sizeof(GridImg)];

// osciloscope data line
u8 Osc1Data[OSC1NUM]; // graph 1
u8 Osc2Data[OSC2NUM]; // graph 2

// animation phase
float f1, f2, f3, f4, f5, f6;

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &DRV; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.mode[1] = LAYERMODE_MONO; // mono layer with grid
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);

	// segment A
	sStrip* t = ScreenAddStrip(pScreen, OSCILAH);
	sSegm* g = ScreenAddSegm(t, OSCILAW);
	ScreenSegmGraph8(g, OscilAImg_Copy, OSCILAW);

	// row 1
	t = ScreenAddStrip(pScreen, OSCILB1H);
	g = ScreenAddSegm(t, OSCILB1W);
	ScreenSegmGraph8(g, OscilB1Img_Copy, OSCILB1W);

	g = ScreenAddSegm(t, OSCIL01W);
	ScreenSegmOscil(g, Osc1Data, COL_BLACK, COL_GREEN, 2);

	g = ScreenAddSegm(t, OSCILC1W);
	ScreenSegmGraph8(g, OscilC1Img_Copy, OSCILC1W);

	// row 2
	t = ScreenAddStrip(pScreen, OSCILB2H);
	g = ScreenAddSegm(t, OSCILB2W);
	ScreenSegmGraph8(g, OscilB2Img_Copy, OSCILB2W);

	g = ScreenAddSegm(t, OSCIL02W);
	ScreenSegmLevel(g, Osc2Data, COL_BLACK, COL_CYAN, OSC2MAX/2);

	g = ScreenAddSegm(t, OSCILC2W);
	ScreenSegmGraph8(g, OscilC2Img_Copy, OSCILC2W);

	// segment A
	t = ScreenAddStrip(pScreen, OSCILDH);
	g = ScreenAddSegm(t, OSCILDW);
	ScreenSegmGraph8(g, OscilDImg_Copy, OSCILDW);

	// overlapped layer with grid pattern
	LayerSetup(1, GridImg_Copy, &Vmode, GRIDW, GRIDH, COL_WHITE);
	LayerSetX(1, GRIDX);
	LayerSetY(1, GRIDY);
	LayerOn(1);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

int main()
{
	int i;

	// copy images
	memcpy(OscilAImg_Copy, OscilAImg, sizeof(OscilAImg));
	memcpy(OscilB1Img_Copy, OscilB1Img, sizeof(OscilB1Img));
	memcpy(OscilB2Img_Copy, OscilB2Img, sizeof(OscilB2Img));
	memcpy(OscilC1Img_Copy, OscilC1Img, sizeof(OscilC1Img));
	memcpy(OscilC2Img_Copy, OscilC2Img, sizeof(OscilC2Img));
	memcpy(OscilDImg_Copy, OscilDImg, sizeof(OscilDImg));
	memcpy(GridImg_Copy, GridImg, sizeof(GridImg));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// main loop
	f1 = f2 = f3 = f4 = f5 = f6 = 0;
	while (true)
	{
		// generate samples 1
		for (i = 0; i < OSC1NUM; i++)
		{
			Osc1Data[i] = (u8)(OSC1MAX*(
				sin(i*0.05 + f1)*0.3 + 
				sin(i*0.11 + f2)*0.1 + 
				sin(i*0.19 + f3)*0.06 + 
				0.5));
		}

		// increase phases 1
		f1 += 0.3;
		f2 += 0.58;
		f3 += 1.22;

		// generate samples 2
		for (i = 0; i < OSC2NUM; i++)
		{
			Osc2Data[i] = (u8)(OSC2MAX*(
				sin(i*0.05 + f1/4)*(0.2 + sin(f4)*0.1) + 
				sin(i*0.11 + f2/5)*(0.1 + sin(f5)*0.05) +
				sin(i*0.19 + f3/7)*(0.06 + sin(f6)*0.03) +
				0.5));
		}

		// increase phases 2
		f4 += 0.3;
		f5 += 0.58;
		f6 += 1.22;

		// short delay
		sleep_ms(20);
	}
}
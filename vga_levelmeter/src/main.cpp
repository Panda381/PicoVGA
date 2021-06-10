
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// copy of images
ALIGNED u8 Repro1Img_Copy[sizeof(Repro1Img)];
ALIGNED u8 Repro2Img_Copy[sizeof(Repro2Img)];
ALIGNED u8 Repro3Img_Copy[sizeof(Repro3Img)];

// color gradient
// - value 64 levels with 8 colors -> 16 levels, every color 1 black line + 3 color lines
u8 Grad1[DATAMAX]; // sample ON
u8 Grad2[DATAMAX]; // sample OFF

#define BG B0
u8 Grad1Col[8] = { COL_BLUE, COL_GREEN, COL_GREEN, COL_GREEN, COL_YELLOW, COL_YELLOW, COL_RED, COL_RED };
u8 Grad2Col[8] = { BG, BG, BG, BG, BG, BG, BG, BG };

// spectrum data line
u8 Data1[DATANUM]; // data samples to display
u8 Data2[DATANUM]; // data samples to display

u8 Samp1[SAMPNUM]; // real data samples 0..15
u8 Samp2[SAMPNUM]; // real data samples 0..15

s8 Samp1Dir[SAMPNUM];
s8 Samp2Dir[SAMPNUM];

// initialize videomode
void VideoInit()
{
	sStrip* t;
	sSegm* g;

	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &DRV; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.freq = 150000; // frequency
	Cfg.mode[MEMB1LAYER] = LAYERPROG_WHITE; // white layer with left membrane
	Cfg.mode[MEMB2LAYER] = LAYERPROG_WHITE; // white layer with right membrane
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);

	// repro boxes 256 lines
	t = ScreenAddStrip(pScreen, REPROH);

	g = ScreenAddSegm(t, REPRO1X);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL);	// frame 32 pixels

	g = ScreenAddSegm(t, REPROW);
	ScreenSegmGraph8(g, Repro1Img_Copy, REPROW); // repro 192 pixels

	g = ScreenAddSegm(t, REPROGAP);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL); // frame 64 pixels

	g = ScreenAddSegm(t, REPROW);
	ScreenSegmGraph8(g, Repro2Img_Copy, REPROW); // repro 192 pixels

	g = ScreenAddSegm(t, WIDTH - REPROW - REPRO2X);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL); // frame 32 pixels

	// frame 16 lines
	t = ScreenAddStrip(pScreen, GRAPHGAP);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL);

	// graphs 64 lines
	t = ScreenAddStrip(pScreen, GRAPHH);

	g = ScreenAddSegm(t, GRAPH1X);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL);	// frame 32 pixels

	g = ScreenAddSegm(t, GRAPHW);
	ScreenSegmLevelGrad(g, Data1, Grad1, Grad2); // graph 192 pixewls

	g = ScreenAddSegm(t, REPROGAP);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL); // frame 64 pixels

	g = ScreenAddSegm(t, GRAPHW);
	ScreenSegmLevelGrad(g, Data2, Grad1, Grad2); // graph 192 pixels

	g = ScreenAddSegm(t, WIDTH - GRAPHW - GRAPH2X);
	ScreenSegmColor(g, FRAMECOL, FRAMECOL); // frame 32 pixels

	// initialize layer with membrane 1
	LayerSetup(MEMB1LAYER, Repro3Img_Copy, &Vmode, MEMBW, MEMBH);
	LayerSetX(MEMB1LAYER, REPRO1X+MEMB1X);
	LayerSetY(MEMB1LAYER, MEMBY);
	LayerOn(MEMB1LAYER);

	// initialize layer with membrane 2
	LayerSetup(MEMB2LAYER, Repro3Img_Copy, &Vmode, MEMBW, MEMBH);
	LayerSetX(MEMB2LAYER, REPRO2X+MEMB2X);
	LayerSetY(MEMB2LAYER, MEMBY);
	LayerOn(MEMB2LAYER);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

int main()
{
	int i, j, off;
	int a, b;

	// copy images
	memcpy(Repro1Img_Copy, Repro1Img, sizeof(Repro1Img));
	memcpy(Repro2Img_Copy, Repro2Img, sizeof(Repro2Img));
	CopyWhiteImg(Repro3Img_Copy, Repro3Img, sizeof(Repro3Img));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit();

	// initialize sound output
	PWMSndInit();
	PlaySound(TestSnd, SNDLEN, True);

	// initialize gradients
	for (i = 0; i < DATAMAX; i++)
	{
		Grad1[i] = Grad1Col[i/8];
		Grad2[i] = Grad2Col[i/8];

		// ve use 3 color lines and 1 black line, to simulate LED appearance
		if ((i & 3) == 0)
		{
			Grad1[i] = COL_BLACK;
			Grad2[i] = COL_BLACK;
		}
	}

	// main loop
	while (true)
	{
		// membranes update (by sound offset)
		int off = (SNDLEN - SoundCnt) % BEATINT;
		off = (off < BEATON) ? MEMBOFF : 0;
		LayerSetX(MEMB1LAYER, REPRO1X+MEMB1X+off);
		LayerSetY(MEMB1LAYER, MEMBY+off);
		LayerSetX(MEMB2LAYER, REPRO2X+MEMB2X+off);
		LayerSetY(MEMB2LAYER, MEMBY+off);

		// generate samples
		for (i = 0; i < SAMPNUM; i++)
		{
			// generate new direction
			if (RandU8() < 100)
			{
				Samp1Dir[i] = RandS8MinMax(-2, +2);
				Samp2Dir[i] = RandS8MinMax(-2, +2);
			}

			// change sample 1 value
			a = Samp1[i] + Samp1Dir[i];
			if (a < 0) a = 0;
			if (a >= SAMPMAX) a = SAMPMAX-1;
			Samp1[i] = a;

			// change sample 2 value
			a = Samp2[i] + Samp2Dir[i];
			if (a < 0) a = 0;
			if (a >= SAMPMAX) a = SAMPMAX-1;
			Samp2[i] = a;
		}

		// display samples
		for (i = 0; i < DATANUM; i += 8)
		{
			// average samples to ensure more realistic appearance
			if ((i > 0) && (i < DATANUM-8))
			{
				a = ((Samp1[i/8-1] + Samp1[i/8]*4 + Samp2[i/8]*2 + Samp1[i/8+1]) >> 1) & ~3;
				b = ((Samp2[i/8-1] + Samp2[i/8]*4 + Samp1[i/8]*2 + Samp2[i/8+1]) >> 1) & ~3;
			}
			else
			{
				a = (Samp1[i/8]*3 + Samp2[i/8]) & ~3;
				b = (Samp2[i/8]*3 + Samp1[i/8]) & ~3;
			}

			// store 8-pixel row of sample
			for (j = 0; j < 7; j++)
			{
				Data1[i+j] = a;
				Data2[i+j] = b;
			}

			// black separator
			Data1[i+7] = 0;
			Data2[i+7] = 0;
		}

		// short delay
		sleep_ms(20);
	}
}

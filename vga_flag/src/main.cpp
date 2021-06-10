
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTH*HEIGHT];

// canvas
sCanvas CloudsCanvas;
sCanvas FlagCanvas;
sCanvas MastCanvas;

// main function
int main()
{
	int x, x2, y;
	float phase;

	// prepare canvases
	CloudsCanvas.img = (u8*)CloudsImg;
	CloudsCanvas.w = WIDTH;
	CloudsCanvas.h = HEIGHT;
	CloudsCanvas.wb = WIDTH;
	CloudsCanvas.format = CANVAS_8;

	FlagCanvas.img = (u8*)FlagImg;
	FlagCanvas.w = FLAGW;
	FlagCanvas.h = FLAGH;
	FlagCanvas.wb = FLAGW;
	FlagCanvas.format = CANVAS_8;

	MastCanvas.img = (u8*)MastImg;
	MastCanvas.w = MASTW;
	MastCanvas.h = MASTH;
	MastCanvas.wb = MASTW;
	MastCanvas.format = CANVAS_8;

	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// draw sky and mast
	memcpy(Box, CloudsImg, WIDTH*HEIGHT);
	DrawBlit(&Canvas, &MastCanvas, MASTX, HEIGHT - MASTH, 0, 0, MASTW, MASTH, COL_WHITE);

#define WAVELEN	0.03f	// wave length
#define WAVESPEED 0.18f	// animation speed
#define WAVEAMP 0.1f	// wave amplitude

	// main loop
	phase = 0;
	while (true)
	{
		// draw flag
		for (x = 0; x < FLAGW; x++)
		{
			// calculate vertical coordinate of the flag
			y = (int)(FLAGY + WAVEAMP*sin(phase - x*WAVELEN)*x);
			x2 = x + FLAGX + MASTX;

			// draw flag
			DrawImg(&Canvas, &FlagCanvas, x2, y, x, 0, 1, FLAGH);

			// redraw sky
			if (x2 >= MASTX + MASTW) // to avoid overwrite top part of the mast
			{
				DrawImg(&Canvas, &CloudsCanvas, x2, 0, x2, 0, 1, y);
				DrawImg(&Canvas, &CloudsCanvas, x2, y + FLAGH, x2, y + FLAGH, 1, HEIGHT - y - FLAGH);
			}
		}

		// increase phase
		phase += WAVESPEED;
		if (phase > PI*2) phase -= PI*2;
	}
}

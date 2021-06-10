
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTHBYTE*HEIGHT];

// duck canvas
sCanvas DuckCanvas;

int main()
{
	float phase;
	int y, y0, y2, duckx;

	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// prepare duck canvas
	DuckCanvas.img = (u8*)DuckImg;
	DuckCanvas.w = 512;
	DuckCanvas.h = 58;
	DuckCanvas.wb = 512;
	DuckCanvas.format = CANVAS_8;

	// initialize sound output
	PWMSndInit();

	// play sound
	PlaySound(RiverSnd, sizeof(RiverSnd), True);

	// display top part of the screen
	memcpy(Box, ForestImg, IMGH*WIDTH);

	// main loop
	phase = 0;
	duckx = 650;
	while (true)
	{
		// to avoid duck flickering
		WaitVSync();

		// animate water
		for (y = IMGH; y < HEIGHT; y++)
		{

#define WAVEAMP		0.1f	// wave amplitude
#define WAVEPERSP	30.0f	// perspective deformation
#define WAVELEN		200	// wave length
#define ANIMSPEED	0.4f	// animation speed

			y0 = y - IMGH; // Y relative to top of water
			y2 = (int)(IMGH - 1 - (sinf(phase + WAVELEN/sqrtf(y0/WAVEPERSP + 1))*WAVEAMP + 1)*y0);
			if (y2 < 0) y2 = 0;
			if (y2 >= IMGH) y2 = IMGH-1;
			memcpy(&Box[y*WIDTH], &ForestImg[y2*WIDTH], WIDTH);
		}

		// display duck
		DrawBlit(&Canvas, &DuckCanvas, duckx, 280, (duckx & 3)*128, 0, 128, 58, 0x86);		

		// increase animation phase
		phase += ANIMSPEED;

		// shift duck
		duckx--;
		if (duckx < -250) duckx = 650;

		// delay
		sleep_ms(50);
	}
}


// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTHBYTE*HEIGHT];

// main function
int main()
{
	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// main loop
	while (true)
	{
		// random radius
		int r = RandU8MinMax(10,50);
		int r2 = r*r;

		// random center coordinate
		int xc = RandU16MinMax(r,WIDTH-r);
		int yc = RandU16MinMax(r,HEIGHT-r);

		// random color
		u8 col = RandU8();

		// loop Y
		int x, y, dist;
		u8* d;
		for (y = -r; y < r; y++)
		{
			// pointer into draw box
			d = &Box[WIDTHBYTE*(yc+y) + xc-r];

			// loop X
			for (x = -r; x < r; x++)
			{
				// distance from center
				dist = x*x + y*y;

				// draw pixel, near center there is more probability
				if (dist < RandU16Max(r2)) *d = col;

				// increase destination pointer
				d++;
			}
		}
	}
}

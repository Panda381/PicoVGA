
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTHBYTE*HEIGHT];

int main()
{
	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// main loop
	while (true)
	{
		Box[RandU32Max(WIDTH*HEIGHT-1)] = RandU8();
	}
}

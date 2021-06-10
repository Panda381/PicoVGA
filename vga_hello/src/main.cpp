
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[512*400];

int main()
{
	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// draw text
	DrawText(&Canvas, "Hello World!", (512-12*8*4)/2, (400-8*4)/2,
		COL_WHITE, FontBoldB8x16, 16, 4, 4);
}

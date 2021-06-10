
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// screen resolution
#define WIDTH	512	// screen width
#define HEIGHT	400	// screen height
#define WIDTHBYTE WIDTH	// bytes per line

// earth image
#define EARTHW	1024	// image width
#define EARTHH	512	// image height

// globe
#define GLOBER	(HEIGHT/2 - 1) // globe radius
#define GLOBEX	(WIDTH/2) // globe X center
#define GLOBEY	(HEIGHT/2) // globe Y center

// format: 8-bit pixel graphics
// image width: 1024 pixels
// image height: 512 lines
// image pitch: 1024 bytes
extern ALIGNED const u8 Earth1Img[524288];
extern ALIGNED const u8 Earth2Img[524288];

#endif // _MAIN_H

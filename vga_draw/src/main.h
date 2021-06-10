
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// used canvas format
#define FORMAT CANVAS_8		// 8-bit pixels
//#define FORMAT CANVAS_4	// 4-bit pixels
//#define FORMAT CANVAS_2	// 2-bit pixels
//#define FORMAT CANVAS_1	// 1-bit pixels
//#define FORMAT CANVAS_PLANE2	// 4 colors on 2 planes
//#define FORMAT CANVAS_ATTRIB8	// 2x4 bit color attributes per 8x8 pixel sample

// screen resolution
#if FORMAT==CANVAS_8
#define WIDTH	532	// screen width
#define HEIGHT	400	// screen height
#define DRV	VideoEGA // driver
#else
#define WIDTH	640	// screen width
#define HEIGHT	480	// screen height
#define DRV	VideoVGA // driver
#endif

#if FORMAT==CANVAS_8
#define WIDTHBYTE WIDTH		// bytes per line
#define MAXCOL	0xff		// max color

#elif FORMAT==CANVAS_4
#define WIDTHBYTE (WIDTH/2)	// bytes per line
#define MAXCOL	0x0f		// max color

#elif FORMAT==CANVAS_2
#define WIDTHBYTE (WIDTH/4)	// bytes per line
#define MAXCOL	0x03		// max color

#elif FORMAT==CANVAS_1
#define WIDTHBYTE (WIDTH/8)	// bytes per line
#define MAXCOL	0x01		// max color

#elif FORMAT==CANVAS_PLANE2
#define WIDTHBYTE (WIDTH/8)	// bytes per line
#define MAXCOL	0x03		// max color

#elif FORMAT==CANVAS_ATTRIB8
#define WIDTHBYTE (WIDTH/8)	// bytes per line
#define MAXCOL	0x1f		// max color
#endif

#define IMGWIDTH 32		// image width (RPi)
#define IMGHEIGHT 40		// image height
#define IMGWIDTHBYTE (IMGWIDTH/(WIDTH/WIDTHBYTE)) // bytes per line of image

#define IMG2WIDTH 32		// image 2 width (Peter)
#define IMG2HEIGHT 32		// image 2 height
#define IMG2WIDTHBYTE (IMG2WIDTH/(WIDTH/WIDTHBYTE)) // bytes per line of image 2

#endif // _MAIN_H

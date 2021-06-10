
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
//#define DRV	VideoEGA // driver
#define WIDTHBYTE WIDTH	// bytes per line

// Draw box
extern u8 Box[WIDTHBYTE*HEIGHT] __attribute__ ((aligned(4)));

#endif // _MAIN_H

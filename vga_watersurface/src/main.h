
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

#define IMGH	256	// image height
#define WATERH	(HEIGHT-IMGH) // water height

// format: 8-bit pixel graphics
// image width: 512 pixels
// image height: 256 lines
// image pitch: 512 bytes
extern ALIGNED const u8 ForestImg[131072];

// format: 8-bit pixel graphics
// image width: 512 pixels
// image height: 58 lines
// image pitch: 512 bytes
extern ALIGNED const u8 DuckImg[29696];

// sound format: PCM mono 8-bit 22050Hz
extern const u8 RiverSnd[105000];

#endif // _MAIN_H


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

#define FLAGW	360	// flag width
#define FLAGH	240	// flag height
#define FLAGX	19	// flag X coordinate relative to mast
#define FLAGY	60	// flag Y base coordinate

#define MASTW	24	// mast width
#define MASTH	370	// mast height
#define MASTX	50	// mast X coordinate

// format: 8-bit pixel graphics
// image width: 512 pixels
// image height: 400 lines
// image pitch: 512 bytes
extern ALIGNED const u8 CloudsImg[204800];

// format: 8-bit pixel graphics
// image width: 360 pixels
// image height: 240 lines
// image pitch: 360 bytes
extern ALIGNED const u8 FlagImg[86400];

// format: 8-bit pixel graphics
// image width: 24 pixels
// image height: 370 lines
// image pitch: 24 bytes
extern ALIGNED const u8 MastImg[8880];

#endif // _MAIN_H

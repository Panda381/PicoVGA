
// ****************************************************************************
//                                 
//                              Common definitions
//
// ****************************************************************************

// ----------------------------------------------------------------------------
//                                   Includes
// ----------------------------------------------------------------------------

#include "../../global.h"	// global common definitions
#include "../vga.pio.h"		// VGA PIO compilation

// images

// format: 1-bit pixel graphics
// image width: 32 pixels
// image height: 40 lines
// image pitch: 4 bytes
extern const u8 RPi1Img[160] __attribute__ ((aligned(4)));

// format: 2-bit pixel graphics
// image width: 32 pixels
// image height: 40 lines
// image pitch: 8 bytes
extern const u8 RPi2Img[320] __attribute__ ((aligned(4)));

// format: 4-bit pixel graphics
// image width: 32 pixels
// image height: 40 lines
// image pitch: 16 bytes
extern const u8 RPi4Img[640] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 40 lines
// image pitch: 32 bytes
extern const u8 RPi8Img[1280] __attribute__ ((aligned(4)));

// format: 1-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 4 bytes
extern const u8 Peter1Img[128] __attribute__ ((aligned(4)));

// format: 2-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 8 bytes
extern const u8 Peter2Img[256] __attribute__ ((aligned(4)));

// format: 4-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 16 bytes
extern const u8 Peter4Img[512] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 32 bytes
extern const u8 Peter8Img[1024] __attribute__ ((aligned(4)));

// main
#include "main.h"		// main code

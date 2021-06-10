
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// canvas format
#define FORMAT CANVAS_8		// 8-bit pixels

// screen resolution
#define DRV VideoEGA		// timings driver
#define WIDTH	400		// screen width
#define HEIGHT	400		// screen height
#define DBLY	False		// double lines
#define WIDTHBYTE WIDTH		// bytes per line

#define IMGWIDTH 128		// image width
#define IMGHEIGHT 128		// image height
#define IMGWIDTHBYTE IMGWIDTH	// bytes per line of image
#define IMGSIZE (IMGWIDTHBYTE*IMGHEIGHT) // image size

#define TWISTW	150		// twister width

// Images (size 16 KB)
// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 128 lines
// image pitch: 128 bytes
extern const u8 CobbleStoneImg[16384] __attribute__ ((aligned(4)));
extern const u8 FabricImg[16384] __attribute__ ((aligned(4)));
extern const u8 SoilImg[16384] __attribute__ ((aligned(4)));
extern const u8 WoodImg[16384] __attribute__ ((aligned(4)));

#endif // _MAIN_H

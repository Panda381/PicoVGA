
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// screen resolution
#define WIDTH	640	// screen width
#define HEIGHT	480	// screen height
#define DRV	VideoVGA // driver

// format: 8-bit pixel graphics
// image width: 440 pixels
// image height: 330 lines
// image pitch: 440 bytes
extern ALIGNED const u8 CloudsImg[145200];
#define CLOUDSW	440	// clouds width
#define CLOUDSH	330	// clouds height

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 165 lines
// image pitch: 128 bytes
extern ALIGNED const u8 HotairImg[21120];
#define HOTAIRW 128	// hot-air balloon width
#define HOTAIRH	165	// hot-air balloon height
#define HOTAIR_LAYER 1	// hot-air layer
#define HOTAIR_NUM 3	// number of hot-air balloons
#define HOTAIR_MINSPEED 1 // min. move speed
#define HOTAIR_MAXSPEED 2 // max. move speed

// format: 8-bit pixel graphics
// image width: 64 pixels
// image height: 145 lines
// image pitch: 64 bytes
extern ALIGNED const u8 BlueImg[9280];
extern ALIGNED const u8 GreenImg[9280];
extern ALIGNED const u8 RedImg[9280];
extern ALIGNED const u8 YellowImg[9280];
#define BALLOONW 64	// balloon width
#define BALLOONH 145	// balloon height
#define BALLOON_LAYER 2	// balloon first layer
#define BALLOON_NUM 20	// number of party balloons
#define BALLOON_SPEED 3	// balloon speed

#endif // _MAIN_H


// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// oscil image
//    AAAAAAAAAAAAAAA
//    B1 1111111 C1C1
//    B2 2222222 C2C2
//    DDDDDDDDDDDDDDD
#define OSCILAW	640	// image A width
#define OSCILAH 44	// image A height
#define OSCILB1W 64	// image B1 width
#define OSCILB1H 90	// image B1 height
#define OSCIL01W 264	// screen 1 width
#define OSCIL01H 90	// screen 1 height
#define OSCILC1W 312	// image C1 width
#define OSCILC1H 90	// image C1 height
#define OSCILB2W 64	// image B2 width
#define OSCILB2H 91	// image B2 height
#define OSCIL02W 264	// screen 2 width
#define OSCIL02H 91	// screen 2 height
#define OSCILC2W 312	// image C2 width
#define OSCILC2H 91	// image C2 height
#define OSCILDW	640	// image D width
#define OSCILDH 131	// image D height

#define OSC1NUM	OSCIL01W // data of graph 1
#define OSC1MAX OSCIL01H // range of graph 1
#define OSC2NUM	OSCIL02W // data of graph 2
#define OSC2MAX OSCIL02H // range of graph 2

// grid image
#define GRIDW	288	// grid width
#define GRIDH	181	// grid height
#define GRIDX	OSCILB1W // grid X coordinate
#define GRIDY	OSCILAH	// grid Y coordinate

// screen resolution
#define WIDTH	OSCILAW	// screen width (=640)
#define HEIGHT	(OSCILAH+OSCIL01H+OSCIL02H+OSCILDH) // screen height (=44+90+91+131=356)
#define DRV	VideoVGA // driver

// format: 8-bit pixel graphics
// image width: 640 pixels
// image height: 44 lines
// image pitch: 640 bytes
extern ALIGNED const u8 OscilAImg[28160];

// format: 8-bit pixel graphics
// image width: 64 pixels
// image height: 90 lines
// image pitch: 64 bytes
extern ALIGNED const u8 OscilB1Img[5760];

// format: 8-bit pixel graphics
// image width: 64 pixels
// image height: 91 lines
// image pitch: 64 bytes
extern ALIGNED const u8 OscilB2Img[5824];

// format: 8-bit pixel graphics
// image width: 312 pixels
// image height: 90 lines
// image pitch: 312 bytes
extern ALIGNED const u8 OscilC1Img[28080];

// format: 8-bit pixel graphics
// image width: 312 pixels
// image height: 91 lines
// image pitch: 312 bytes
extern ALIGNED const u8 OscilC2Img[28392];

// format: 8-bit pixel graphics
// image width: 640 pixels
// image height: 131 lines
// image pitch: 640 bytes
extern ALIGNED const u8 OscilDImg[83840];

// format: 1-bit pixel graphics
// image width: 288 pixels
// image height: 181 lines
// image pitch: 36 bytes
extern ALIGNED const u8 GridImg[6516];

#endif // _MAIN_H

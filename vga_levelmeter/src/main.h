
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// screen resolution
#define WIDTH	512	// screen width 
#define HEIGHT	336	// screen height
#define DRV	VideoEGA // driver

#define FRAMECOL 0	// frame color

// repro image
#define REPROW	192	// repro width
#define REPROH	256	// repro height
#define REPROGAP 64	// gap between boxes
#define REPRO1X 32	// repro 1 X
#define REPRO2X	(REPRO1X+REPROW+REPROGAP) // repro 2 X (= 288, right gap 32)

// membrane
#define MEMBW	100	// membrane width
#define MEMBH	89	// membrane height
#define MEMB1X	48	// membrane 1 X coordinate, relative to repro box
#define MEMB2X	46	// membrane 2 X coordinate, relative to repro box
#define MEMBY	114	// membrane Y coordinate, relative to repro box
#define MEMBOFF	1	// membrane shift offset
#define MEMB1LAYER 1	// membrane 1 layer
#define MEMB2LAYER 2	// membrane 2 layer

// graph
#define GRAPHGAP 16	// horizontal gap
#define GRAPHW	REPROW	// graph width
#define GRAPHH	64	// graph height
#define GRAPH1X	REPRO1X	// graph 1 X
#define GRAPH2X REPRO2X // graph 2 X
#define GRAPHY	(REPROH+GRAPHGAP) // graph Y (= 272)

// data
#define DATANUM	GRAPHW	// number of data samples (= 192)
#define DATAMAX GRAPHH	// max. data (= 64)
#define SAMPNUM (DATANUM/8) // number of samples (= 24)
#define SAMPMAX (DATAMAX/4) // max. range of samples (= 16)

// format: 8-bit pixel graphics
// image width: 192 pixels
// image height: 256 lines
// image pitch: 192 bytes
extern ALIGNED const u8 Repro1Img[49152];

// format: 8-bit pixel graphics
// image width: 192 pixels
// image height: 256 lines
// image pitch: 192 bytes
extern ALIGNED const u8 Repro2Img[49152];

// format: 8-bit pixel graphics
// image width: 100 pixels
// image height: 89 lines
// image pitch: 100 bytes
extern ALIGNED const u8 Repro3Img[8900];

// sound format: PCM mono 8-bit 22050Hz
extern const u8 TestSnd[154512];

#define SNDLEN sizeof(TestSnd) // sound length
#define BEATNUM	16	// number of sound beats
#define BEATINT	(SNDLEN/BEATNUM) // beat interval (= 9657)
#define BEATON (BEATINT/8) // beat on state

#endif // _MAIN_H

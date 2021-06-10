
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

//#define DRV	VideoVGA // timings
#define WIDTH	640	// screen width
#define HEIGHT	480	// screen height
#define TILESIZE 16	// tile size in number of pixels
#define MAPW	(WIDTH/TILESIZE) // board width (=40)
#define MAPH	(HEIGHT/TILESIZE) // board height (=30)
#define MAPSIZE	(MAPW*MAPH) // board size (=1200)
#define SLOTNUM	10	// number of slots

#define SPEED	300	// speed, sleep in [ms]

#define TILE_EMPTY	0	// empty tile
#define	TILE_FULL	1	// full tile
#define TILE_SELEMPTY 	2	// selected empty tile
#define TILE_SELFULL	3	// selected full tile

#define TILE_NUM	4	// number of  tiles

// keys
#define KEY_R	'L'	// right
#define KEY_U	'I'	// up
#define KEY_L	'J'	// left
#define KEY_D	'K'	// down
#define KEY_COPY 'C'	// copy
#define KEY_PASTE 'V'	// paste
#define KEY_CLEAR 'D'	// clear

// Tiles images
// format: 8-bit pixel graphics
// image width: 64 pixels
// image height: 16 lines
// image pitch: 64 bytes
extern const u8 Tiles16Img[1024] __attribute__ ((aligned(4)));

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 32 lines
// image pitch: 128 bytes
extern const u8 Tiles32Img[4096] __attribute__ ((aligned(4)));

// display help
void DispHelp();

#endif // _MAIN_H

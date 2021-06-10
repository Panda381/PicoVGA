
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

#define WIDTH	256	// width of screen
#define HEIGHT	192	// screen height
#define TILEW	48	// tile width
#define TILEH	48	// tile height
#define TILESX	4	// game tiles in X direction (192 pixels)
#define TILESY	4	// game tiles in Y direction (192 pixels)
#define TILESWB	6	// byte tiles in X direction (288 pixels, OffX = 32 pixels to center game board) 
#define TILESNUM (TILESWB*TILESY) // number of tiles

#define TILE_BLACK	0	// black tile
#define TILE_1		1	// first number tile
#define TILE_NUMS	15	// count of number tiles
#define TILE_EMPTY	16	// empty tile

// control keys
#define KEY_R	'L'	// right
#define KEY_U	'I'	// up
#define KEY_L	'J'	// left
#define KEY_D	'K'	// down
#define KEY_NEW	'Q'	// new game

// format: 8-bit pixel graphics
// image width: 48 pixels
// image height: 816 lines
// image pitch: 48 bytes
extern ALIGNED const u8 TilesImg[39168];

extern const u8 MoveSnd[2354];
extern const u8 BumpSnd[1012];
extern const u8 ShufflingSnd[5620];
extern const u8 FanfareSnd[74871];

#endif // _MAIN_H

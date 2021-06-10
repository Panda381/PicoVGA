
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// control keys
#define KEY_R	'L'	// right
#define KEY_U	'I'	// up
#define KEY_L	'J'	// left
#define KEY_D	'K'	// down
#define KEY_HELP 'H'	// help
#define KEY_QUIT 'Q'	// quit
#define KEY_PLAY 'P'	// 2 players
#define KEY_DEMO 'D'	// demo
#define KEY_SPACE ' '	// space
#define KEY_OK	13	// OK (Enter)

// screen resolution
#define WIDTH	512	// screen width
#define HEIGHT	384	// screen height

// tiles
#define TILEW	32	// tile width
#define TILEH	32	// tile height
#define TILESIZE (TILEW*TILEH) // tile size in bytes

// game board
#define BOARDW0	12	// board width with fence
#define BOARDH0	12	// board height width fence
#define BOARDSIZE0 (BOARDW0*BOARDH0) // board size with fence
#define BOARDW	8	// game board width
#define BOARDH	8	// game board height

// frame
#define FRAMEW	128	// frame width
#define FRAMEH	384	// frame height
#define FRAMEY	192	// player 2 offset

// computer image
#define	COMPW	16	// computer width
#define COMPH	16	// computer height
#define COMPX	93	// computer X offset
#define COMPY	18	// computer Y offset

// select frame
#define SELECTW	128	// select width
#define SELECTH	80	// select height
#define SELECTX	0	// select X offset
#define SELECTY	0	// select Y offset

// score
#define SCOREX	58	// score X offset
#define SCOREY	104	// score Y offset
#define WINX	58	// win X offset
#define WINY	152	// win Y offset
#define SCORECOL COL_WHITE // score color
#define SCOREBG 0x4B	// score background

// tiles
#define TILE_BLACK	0	// black

#define TILE_EMPTY	1	// empty
#define TILE_DOT	2	// dot
#define TILE_EGG	3	// egg
#define TILE_CHICKEN	4	// chicken
#define TILE_HEN	5	// hen
#define TILE_EGGWIN	6	// egg win
#define TILE_HENWIN	7	// hen win

#define TILE_FENCELU	8	// fence left up
#define TILE_FENCEU	9	// fence up
#define TILE_FENCERU	10	// fence right up
#define TILE_FENCEL	11	// fence left
#define TILE_FENCER	12	// fence right
#define TILE_FENCELD	13	// fence left down
#define TILE_FENCED	14	// fence down
#define TILE_FENCERD	15	// fence right down

#define TILE_EMPTY2	16	// empty with frame
#define TILE_DOT2	17	// dot with frame
#define TILE_EGG2	18	// egg with frame
#define TILE_CHICKEN2	19	// chicken with frame
#define TILE_HEN2	20	// hen with frame
#define TILE_EGGWIN2	21	// egg win with frame
#define TILE_HENWIN2	22	// hen win with frame

#define TILE_NUM	23	// number of tiles

#define TILE_OFFMIN	TILE_EMPTY // first tile without cursor
#define TILE_OFFMAX	TILE_HENWIN // last tile without cursor
#define TILE_ONMIN	TILE_EMPTY2 // first tile without cursor
#define TILE_ONMAX	TILE_HENWIN2 // last tile without cursor

// images

// format: 8-bit pixel graphics
// image width: 16 pixels
// image height: 16 lines
// image pitch: 16 bytes
extern ALIGNED const u8 ComputerImg[256];

// image width: 128 pixels
// image height: 384 lines
// image pitch: 128 bytes
extern ALIGNED const u8 FrameImg[49152];

// format: 8-bit pixel graphics
// image width: 512 pixels
// image height: 384 lines
// image pitch: 512 bytes
extern ALIGNED const u8 OpenImg[196608];

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 80 lines
// image pitch: 128 bytes
extern ALIGNED const u8 SelectImg[10240];

// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 736 lines
// image pitch: 32 bytes
extern ALIGNED const u8 TilesImg[23552];

// sounds
extern const u8 BeepSnd[1102];
extern const u8 Beep2Snd[1764];
extern const u8 FanfareSnd[74871];
extern const u8 MappleSnd[384007];

#endif // _MAIN_H

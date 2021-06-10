
// ****************************************************************************
//
//                                 Data and tables
//
// ****************************************************************************

#include "include.h"

// title row
ALIGNED u8 Text[TEXTMAX*2]; // text row with attributes

// copy of font
ALIGNED u8 Font_Copy[sizeof(FontBold8x8)];

// copy of sprites
ALIGNED u8 SpritesImg_Copy[sizeof(SpritesImg)];
u8 SpritesX0[SPRITE_NUM*SPRITEH]; // array of start of lines
u8 SpritesW0[SPRITE_NUM*SPRITEH]; // array of length of lines
sCanvas SpritesCanvas;

// copy of tiles images
ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];
sCanvas TilesCanvas;

// status canvas
sCanvas StatusCanvas;

// game board
ALIGNED u8 Board[MAPSIZE];

// bottom row
ALIGNED u8 Bottom[BOTTOMSIZE];

// open draw box
ALIGNED u8 Box[WIDTH*HEIGHT];
sCanvas LogoCanvas;

// animation phase 0..3
u8 Phase;

// pacman next direction
u8 NextDir;

// current and max score
u32 Score;
u32 MaxScore = 0;
int Level; // current level 0...
s8 Lives; // remaining lives
int FrightenCnt; // frighten counter
int Eaten; // next eaten points
int ScatterCnt; // scatter counter
int ChaseCnt; // chase counter
u8 ScatterTabNext; // next entry in scatter-chasse table
int DotCnt; // eaten dot counter
int FruitCnt; // fruit counter

// pellet blink counter
u8 Blink;

// level fruit table
const u8 FruitTab[FRUITTABMAX] = { 0, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7 };

// bonus table
const u16 BonusTab[8] = { 100, 300, 500, 700, 1000, 2000, 3000, 5000 };

// level frighten time table (number of seconds)
const u8 FrightenTab[FRIGHTENTABMAX] = { 9, 9, 8, 8, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0 };

// level scatter-chasse time table: 5 levels x 4 pairs of 2 entries (scatter and chasse in number of seconds, 0=permanently)
// - every row must end with 0 = infinite
const u8 ScatterTab[5*4*2] = {
	7, 20, 7, 20, 5, 20, 5, 0,	// level 1
	7, 20, 7, 20, 5,  0, 0, 0,	// level 2
	7, 20, 7, 20, 5,  0, 0, 0,	// level 3
	7, 20, 7, 20, 5,  0, 0, 0,	// level 4
	5, 20, 5, 20, 5,  0, 0, 0,	// level 5
};

// game board template (to edit, view tiles_num.bmp with tile indices)
const u8 BoardTemp[MAPSIZE] = {
//	0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27
	1,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  9, 10,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  3,	// 0
	7, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,  8,	// 1
	7, 30, 19, 20, 20, 21, 30, 19, 20, 20, 20, 21, 30, 24, 24, 30, 19, 20, 20, 20, 21, 30, 19, 20, 20, 21, 30,  8,	// 2
	7, 31, 24,  0,  0, 24, 30, 24,  0,  0,  0, 24, 30, 24, 24, 30, 24,  0,  0,  0, 24, 30, 24,  0,  0, 24, 31,  8,	// 3
	7, 30, 22, 20, 20, 23, 30, 22, 20, 20, 20, 23, 30, 22, 23, 30, 22, 20, 20, 20, 23, 30, 22, 20, 20, 23, 30,  8,	// 4
	7, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,  8,	// 5
	7, 30, 19, 20, 20, 21, 30, 19, 21, 30, 19, 20, 20, 20, 20, 20, 20, 21, 30, 19, 21, 30, 19, 20, 20, 21, 30,  8,	// 6
	7, 30, 22, 20, 20, 23, 30, 24, 24, 30, 22, 20, 20, 21, 19, 20, 20, 23, 30, 24, 24, 30, 22, 20, 20, 23, 30,  8,	// 7
	7, 30, 30, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 30, 30,  8,	// 8
	4,  5,  5,  5,  5, 16, 30, 24, 22, 20, 20, 21,  0, 24, 24,  0, 19, 20, 20, 23, 24, 30, 15,  5,  5,  5,  5,  6,	// 9
	0,  0,  0,  0,  0,  7, 30, 24, 19, 20, 20, 23,  0, 22, 23,  0, 22, 20, 20, 21, 24, 30,  8,  0,  0,  0,  0,  0,	// 10
	0,  0,  0,  0,  0,  7, 30, 24, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 24, 30,  8,  0,  0,  0,  0,  0,	// 11
	0,  0,  0,  0,  0,  7, 30, 24, 24,  0, 25,  5, 32, 29, 42, 33,  5, 26,  0, 24, 24, 30,  8,  0,  0,  0,  0,  0,	// 12
	2,  2,  2,  2,  2, 18, 30, 22, 23,  0,  8,  0,  0,  0,  0,  0, 41,  7,  0, 22, 23, 30, 17,  2,  2,  2,  2,  2,	// 13
	0,  0,  0,  0,  0,  0, 30,  0,  0,  0,  8,  0,  0,  0,  0,  0, 41,  7,  0,  0,  0, 30,  0,  0,  0,  0,  0,  0,	// 14
	5,  5,  5,  5,  5, 16, 30, 19, 21,  0,  8, 41, 41, 41, 41, 41, 41,  7,  0, 19, 21, 30, 15,  5,  5,  5,  5,  5,	// 15
	0,  0,  0,  0,  0,  7, 30, 24, 24,  0, 27,  2,  2,  2,  2,  2,  2, 28,  0, 24, 24, 30,  8,  0,  0,  0,  0,  0,	// 16
	0,  0,  0,  0,  0,  7, 30, 24, 24,  0,  0, 35, 36, 37, 38, 39, 40,  0,  0, 24, 24, 30,  8,  0,  0,  0,  0,  0,	// 17
	0,  0,  0,  0,  0,  7, 30, 24, 24,  0, 19, 20, 20, 20, 20, 20, 20, 21,  0, 24, 24, 30,  8,  0,  0,  0,  0,  0,	// 18
	1,  2,  2,  2,  2, 18, 30, 22, 23,  0, 22, 20, 20, 21, 19, 20, 20, 23,  0, 22, 23, 30, 17,  2,  2,  2,  2,  3,	// 19
	7, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,  8,	// 20
	7, 30, 19, 20, 20, 21, 30, 19, 20, 20, 20, 21, 30, 24, 24, 30, 19, 20, 20, 20, 21, 30, 19, 20, 20, 21, 30,  8,	// 21
	7, 30, 22, 20, 21, 24, 30, 22, 20, 20, 20, 23, 30, 22, 23, 30, 22, 20, 20, 20, 23, 30, 24, 19, 20, 23, 30,  8,	// 22
	7, 31, 30, 30, 24, 24, 30, 30, 30, 30, 30, 30, 30,  0,  0, 30, 30, 30, 30, 30, 30, 30, 24, 24, 30, 30, 31,  8,	// 23
	11,20, 21, 30, 24, 24, 30, 19, 21, 30, 19, 20, 20, 20, 20, 20, 20, 21, 30, 19, 21, 30, 24, 24, 30, 19, 20, 13,	// 24
	12,20, 23, 30, 22, 23, 30, 24, 24, 30, 22, 20, 20, 21, 19, 20, 20, 23, 30, 24, 24, 30, 22, 23, 30, 22, 20, 14,	// 25
	7, 30, 30, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 24, 24, 30, 30, 30, 30, 30, 30,  8,	// 26
	7, 30, 19, 20, 20, 20, 20, 23, 22, 20, 20, 21, 30, 24, 24, 30, 19, 20, 20, 23, 22, 20, 20, 20, 20, 21, 30,  8,	// 27
	7, 30, 22, 20, 20, 20, 20, 20, 20, 20, 20, 23, 30, 22, 23, 30, 22, 20, 20, 20, 20, 20, 20, 20, 20, 23, 30,  8,	// 28
	7, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30,  8,	// 29
	4,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  5,  6,	// 30
};

// bonus fruit sprite
sSprite FruitSprite;

// sprite list (pacman, 4 ghosts, 1 bonus fruit)
sSprite* SpriteList[6];

// character descriptor
sChar Chars[5];

// direction vector
//		L	D	R	U
s8 DirX[4] = { 	-1,	0,	+1,	0 };
s8 DirY[4] = {	0,	+1,	0,	-1 };

// sprite characters indices: 9 characters * 4 directions * 4 animation phase
const u8 SpriteInx[CHAR_NUM * DIR_NUM * PHASENUM] = {

// Pacman
	// left
	SPRITE_PACFULL, SPRITE_PACL, SPRITE_PACL2, SPRITE_PACL,
	// down
	SPRITE_PACFULL, SPRITE_PACD, SPRITE_PACD2, SPRITE_PACD,
	// right
	SPRITE_PACFULL, SPRITE_PACR, SPRITE_PACR2, SPRITE_PACR,
	// up
	SPRITE_PACFULL, SPRITE_PACU, SPRITE_PACU2, SPRITE_PACU,

// Blinky
	// left
	SPRITE_BLINKY, SPRITE_BLINKY, SPRITE_BLINKY+1, SPRITE_BLINKY+1,
	// down
	SPRITE_BLINKY+2, SPRITE_BLINKY+2, SPRITE_BLINKY+3, SPRITE_BLINKY+3,
	// right
	SPRITE_BLINKY+4, SPRITE_BLINKY+4, SPRITE_BLINKY+5, SPRITE_BLINKY+5,
	// up
	SPRITE_BLINKY+6, SPRITE_BLINKY+6, SPRITE_BLINKY+7, SPRITE_BLINKY+7,

// Pinky
	// left
	SPRITE_PINKY, SPRITE_PINKY, SPRITE_PINKY+1, SPRITE_PINKY+1,
	// down
	SPRITE_PINKY+2, SPRITE_PINKY+2, SPRITE_PINKY+3, SPRITE_PINKY+3,
	// right
	SPRITE_PINKY+4, SPRITE_PINKY+4, SPRITE_PINKY+5, SPRITE_PINKY+5,
	// up
	SPRITE_PINKY+6, SPRITE_PINKY+6, SPRITE_PINKY+7, SPRITE_PINKY+7,

// Inky
	// left
	SPRITE_INKY, SPRITE_INKY, SPRITE_INKY+1, SPRITE_INKY+1,
	// down
	SPRITE_INKY+2, SPRITE_INKY+2, SPRITE_INKY+3, SPRITE_INKY+3,
	// right
	SPRITE_INKY+4, SPRITE_INKY+4, SPRITE_INKY+5, SPRITE_INKY+5,
	// up
	SPRITE_INKY+6, SPRITE_INKY+6, SPRITE_INKY+7, SPRITE_INKY+7,

// Clyde
	// left
	SPRITE_CLYDE, SPRITE_CLYDE, SPRITE_CLYDE+1, SPRITE_CLYDE+1,
	// down
	SPRITE_CLYDE+2, SPRITE_CLYDE+2, SPRITE_CLYDE+3, SPRITE_CLYDE+3,
	// right
	SPRITE_CLYDE+4, SPRITE_CLYDE+4, SPRITE_CLYDE+5, SPRITE_CLYDE+5,
	// up
	SPRITE_CLYDE+6, SPRITE_CLYDE+6, SPRITE_CLYDE+7, SPRITE_CLYDE+7,

// frozen
	// left
	SPRITE_FROZEN, SPRITE_FROZEN, SPRITE_FROZEN+1, SPRITE_FROZEN+1,
	// down
	SPRITE_FROZEN, SPRITE_FROZEN, SPRITE_FROZEN+1, SPRITE_FROZEN+1,
	// right
	SPRITE_FROZEN, SPRITE_FROZEN, SPRITE_FROZEN+1, SPRITE_FROZEN+1,
	// up
	SPRITE_FROZEN, SPRITE_FROZEN, SPRITE_FROZEN+1, SPRITE_FROZEN+1,

// frightened
	// left
	SPRITE_FRIGH, SPRITE_FRIGH, SPRITE_FRIGH+1, SPRITE_FRIGH+1,
	// down
	SPRITE_FRIGH, SPRITE_FRIGH, SPRITE_FRIGH+1, SPRITE_FRIGH+1,
	// right
	SPRITE_FRIGH, SPRITE_FRIGH, SPRITE_FRIGH+1, SPRITE_FRIGH+1,
	// up
	SPRITE_FRIGH, SPRITE_FRIGH, SPRITE_FRIGH+1, SPRITE_FRIGH+1,

// eyes
	// left
	SPRITE_EYE, SPRITE_EYE, SPRITE_EYE, SPRITE_EYE,
	// down
	SPRITE_EYE+1, SPRITE_EYE+1, SPRITE_EYE+1, SPRITE_EYE+1,
	// right
	SPRITE_EYE+2, SPRITE_EYE+2, SPRITE_EYE+2, SPRITE_EYE+2,
	// up
	SPRITE_EYE+3, SPRITE_EYE+3, SPRITE_EYE+3, SPRITE_EYE+3,

// die (8 phases)
	SPRITE_DIE, SPRITE_DIE+1, SPRITE_DIE+2, SPRITE_DIE+3,
	SPRITE_DIE+4, SPRITE_DIE+5, SPRITE_DIE+6, SPRITE_DIE+7,
	0, 0, 0, 0, 0, 0, 0, 0
};

// decode number buffer
char NumBuf[15];

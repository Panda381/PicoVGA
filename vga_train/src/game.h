
// ****************************************************************************
//
//                                Game engine
//
// ****************************************************************************

#ifndef _GAME_H
#define _GAME_H

//#define AUTOMODE		// automode - autorun all levels to check solutions

#define LEVFIRST 	1	// first level

#ifdef AUTOMODE	// check levels
#define GAMESPEED	20	// game speed - delay between game steps, in [ms] (6 steps per second)
#else
#define GAMESPEED	166	// game speed - delay between game steps, in [ms] (6 steps per second)
#endif

// Defince game board
#define MAPW 20			// width of game board
#define MAPH 12			// height of game board
#define MAPSIZE (MAPW*MAPH)	// size of game board

// Tiles
#define TILES_NUM (sizeof(TilesImg)/(TILESIZE*TILESIZE)) // total number of tiles

#define ITEM_NUM 19	// number of items

#define	EMPTY	0	// (1) empty tile
#define WALL	1	// (1) wall tile
#define LOCO_R	2	// (3) locomotive right
#define LOCO_U	5	// (3) locomotive up
#define LOCO_L	8	// (3) locomotive left
#define LOCO_D	11	// (3) locomotive down
#define CRASH	14	// (10) crash
#define WAGON	24	// (ITEM_NUM*4=76) wagons (direction: right, up, left, down)
#define ITEM	100	// (ITEM_NUM*3=57) items
#define GATE	157	// (6) gate
#define TITLE	163	// (14) title
// 177 tiles

#define GATEMIN	GATE	// gate min
#define GATEMAX	(GATE+5) // gate max

#define ITEMMIN ITEM	// item min.
#define ITEMMAX (GATE-1) // item max.

#define LOCOMIN	LOCO_R	// locomotive min.
#define LOCOMAX (CRASH-1) // locomotive max.

#define CRASHMIN CRASH // crash min.
#define CRASHMAX (CRASH+9) // crash max.

#define TITLEMIN TITLE	// title min.
#define TITLENUM 14	// title number

// direction
enum {
	DIR_R=0,	// right
	DIR_U,		// up
	DIR_L,		// left
	DIR_D,		// down
};

// control keys
#define KEY_R	'L'	// right
#define KEY_U	'I'	// up
#define KEY_L	'J'	// left
#define KEY_D	'K'	// down
#define KEY_HELP 'H'	// help
#define KEY_OK	13	// OK (Enter)
#define KEY_ESC	27	// Escape
#define KEY_BS	8	// back space

// buffers
extern u8 Board[MAPSIZE];	// game board
extern u8 Dir[MAPSIZE];		// direction map DIR_*
#define PSWLEN 5		// password length
extern u8 PswBuf[PSWLEN];	// password buffer

// game state
enum {
	S_WAIT = 0,	// wait for start
	S_GO,		// game progress
	S_CRASH,	// crash
	S_FINISH,	// game finish
	S_HELP,		// help mode
};

// current game state
extern u8 Level;	// current level
extern u8 HeadX, HeadY;	// head (loco) coordinates
extern u8 GateX, GateY;	// gate coordinates
extern u16 Length;	// train length (including loco)
extern u16 ItemNum;	// number of items on game board
extern u8 State;	// game state S_*
extern u8 AnimCnt;	// animation counter
extern u8 Phase;	// current animation phase
extern u8 CurDir;	// current direction DIR_*
extern int Score;	// current score

// key buffset for 2 keys (0=no key)
extern char KeyBuf1, KeyBuf2;

// clear info row
void InfoClear();

// display text from ROM to info row
void InfoDispText(u8 x, const char* txt, u8 col);

// display info bottom row
void InfoRow();

// open level
void OpenLevel();

// congratulate
void CongLevel();

// initialize current level
void InitLevel();

// help level (returns True on break from keyboard)
Bool HelpLevel();

// game loop - called every single game step (returns True on break Esc)
Bool GameLoop();

#endif // _GAME_H

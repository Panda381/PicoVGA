
// ****************************************************************************
//
//                                Game engine
//
// ****************************************************************************

#ifndef _GAME_H
#define _GAME_H

//#define AUTOMODE		// automode - autorun all levels to check solutions

#ifdef AUTOMODE	// automode - autorun all levels to check solutions
#define MOVESPEED	1	// step delay in [ms]
#else
#define MOVESPEED	30	// step delay in [ms]
#endif

// Define game board, tiles 16x16
#define MAPWMAX (640/8)		// max. width of game board
#define MAPHMAX (480/8)		// max. height of game board
extern int MapW, MapH;		// current board dimension
extern int TileSize;		// current tile size (16, 20, 24, 28 or 32)

// Tiles
#define	EMPTY	0	// empty (grass)
#define WALL	1	// wall
#define FLOOR	2	// floor
#define MARK	3	// mark
#define CRATE	4	// crate
#define FULL	5	// full crate (crate on mark)
#define FACE_R	6	// (4) face left
#define FACE_U	10	// (4) face up
#define FACE_L	14	// (4) face left
#define FACE_D	18	// (4) face down
#define FACE_WIN 22	// (1) winning face
#define TILES_NUM 23	// number of tiles

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
#define KEY_RESTART 'R' // restart scene
#define KEY_OK	' '	// OK (space)
#define KEY_OK2 13	// OK (Enter)
#define KEY_ESC	27	// Escape
#define KEY_ESC2 8	// Escape 2 (Backspace)
#define KEY_ESC3 0x7f	// Escape 3 (Delete)
#define KEY_PREV 'Q'	// previous
#define KEY_NEXT 'W'	// next
#define KEY_INFO 'P'	// info

// buffers
extern u8 Board[MAPWMAX*MAPHMAX];	// game board
#define BoardAddr(x,y) (&Board[(x)+(y)*MapW]) // baord address

// current game state
extern u16 MarkNum;		// number of remaining marks
extern u8 LevelW, LevelH;	// level width and height
extern u8 LevelX, LevelY;	// level coordinates
extern u8 PosX, PosY;		// player coordinates
extern s8 OffX, OffY;		// board offset (0 or -TileSize/2)

// set player graphics position
void SetPlayer(int x, int y, u8 tile);

// soft move player in direction
void MovePlayer(u8 dir);

// clear board
void ClearBoard();

// detect board dimension
void BoardDim();

// display program info
void DispInfo();

// initialize current level
void LevelInit();

// step one level (key = move key, returns False on unsupported key)
Bool Step(char key);

// play level solve (returns True on break from keyboard)
Bool PlaySolve();

// display solved animation (returns True of solved)
Bool SolvedAnim();

// level info
void LevelInfo();

// game loop
void GameLoop();

#endif // _GAME_H

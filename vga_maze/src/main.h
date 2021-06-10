
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

#define WIDTH	256	// screen width
#define HEIGHT	192	// screen height
#define TILESIZE 8	// tile size in number of pixels
#define MAPW	(WIDTH/TILESIZE) // board width (=32)
#define MAPH	(HEIGHT/TILESIZE) // board height (=24)
#define MAPSIZE	(MAPW*MAPH) // board size (=768)

#define MAZEW	(((MAPW+1)/2*2)-1) // maze width (=31, must be odd number)
#define MAZEH	(((MAPH+1)/2*2)-1) // maze height (=23, must be off number)

#define SPEED	50	// step speed (delay in [ms])

// tile indices
enum {
	S_BLACK = 0,		// 0: black tile
	S_EMPTY_HIDE,		// 1: hidden empty field (grass)
	S_WALL_HIDE,		// 2: hidden wall
	S_DOOR_HIDE,		// 3: hidden door
	S_EMPTY,		// 4: empty field (grass)
	S_FACE,			// 5: face
	S_WINK,			// 6: winking face
	S_RIGHT1,		// 7: face right 1 (left half)
	S_RIGHT2,		// 8: face right 2 (right half)
	S_LEFT1,		// 9: face left 1 (left half)
	S_LEFT2,		// 10: face left 2 (right half)
	S_DOWN1,		// 11: face down 1 (top half)
	S_DOWN2,		// 12: face down 2 (bottom half)
	S_UP1,			// 13: face up 1 (bottom half)
	S_UP2,			// 14: face up 2 (top half)
	S_WALL,			// 15: wall
	S_DOOR,			// 16: door

	TILE_NUM		// number of tiles (= 17)
};

// keys
#define KEY_L	'J'	// left
#define KEY_U	'I'	// up
#define KEY_R	'L'	// right
#define KEY_D	'K'	// down
#define KEY_HELP 'H'	// help, show door

// format: 8-bit pixel graphics
// image width: 8 pixels
// image height: 136 lines
// image pitch: 8 bytes
extern ALIGNED const u8 TilesImg[1088];

#endif // _MAIN_H

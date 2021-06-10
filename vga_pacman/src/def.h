
// ****************************************************************************
//
//                              Definitions
//
// ****************************************************************************

#ifndef _DEF_H
#define _DEF_H

// game board
#define MAPW	28	// width of game board (tiles)
#define MAPH	31	// height of game board (tiles)
#define MAPSIZE	(MAPW*MAPH) // board size (= 868)
#define TILESIZE 12	// tile size in number of pixels
#define MAPWIDTH (MAPW*TILESIZE) // width of game board in pixels (= 336)
#define MAPHEIGHT (MAPH*TILESIZE) // height of game board in pixels (= 372)

// title (font 8x8)
#define TITLEH	8	// title height 
#define TEXTMAX	(MAPWIDTH/8) // text width in characters (= 42 characters)

// bottom (images 16x16)
#define BOTTOMH	16	// bottom height
#define BOTTOMW MAPWIDTH // bottomwidth (= 336)
#define BOTTOMSIZE (BOTTOMH*BOTTOMW) // bottom image size
#define BOTTOMNUM (MAPWIDTH/16) // bottom width in number of images (= 21 images)
// Needs: 5 lives + 7 fruits = 12 items, + some gaps)

// screen
#define WIDTH	MAPWIDTH // screen active width (= 336)
#define MAXWIDTH  512	// screen max. width
#define HEIGHT (TITLEH + MAPHEIGHT + BOTTOMH) // screen height (= 8 + 372 + 16 = 396)

// tiles
#define TILE_EMPTY	0	// empty
#define TILE_DLU	1	// double left up corner
#define TILE_DU		2	// double up line
#define TILE_DRU	3	// double right up corner
#define TILE_DLD	4	// double left down corner
#define TILE_DD		5	// double down line
#define TILE_DRD	6	// double right down corner
#define TILE_DL		7	// double left line
#define TILE_DR		8	// double right line
#define TILE_DSLD	9	// double+single left to down
#define TILE_DSRD	10	// double+single right to down
#define TILE_DSUR	11	// double+single up to right
#define TILE_DSDR	12	// double+signle down to right
#define TILE_DSUL	13	// double+single up do left
#define TILE_DSDL	14	// double+single down to left
#define TILE_ILU	15	// inner double left up corner
#define TILE_IRU	16	// inner double right up corner
#define TILE_ILD	17	// inner double left down corner
#define TILE_IRD	18	// inner double right down corner
#define TILE_SLU	19	// single left up corner
#define TILE_SH		20	// single horizontal line
#define TILE_SRU	21	// single right up corner
#define TILE_SLD	22	// single left down corner
#define TILE_SRD	23	// single right down corner
#define TILE_SV		24	// single vertical line
#define TILE_BLU	25	// box left up corner
#define TILE_BRU	26	// box right up corner
#define TILE_BLD	27	// box left down corner
#define TILE_BRD	28	// box right down corner
#define TILE_GATE	29	// passable gate
#define TILE_DOT	30	// pac-dot
#define	TILE_PELLET	31	// power pellet
#define TILE_GATEL	32	// gate left
#define TILE_GATER	33	// gate rigth
#define	TILE_PELLETOFF	34	// power pellet OFF
#define TILE_READY1	35	// Ready!
#define TILE_READY2	36	// Ready!
#define TILE_READY3	37	// Ready!
#define TILE_READY4	38	// Ready!
#define TILE_READY5	39	// Ready!
#define TILE_READY6	40	// Ready!
#define TILE_DISABLE	41	// hidden disabled tile (at home)
#define TILE_GATE2	42	// impassable gate

#define TILE_NUM	43	// number of tiles

// sprites
#define SPRITE_LAYER	1	// layer with sprites
#define SPRITEW		24	// sprite width
#define SPRITEH		24	// sprite height

#define SPRITE_BLACK	0	// black sprite
#define SPRITE_PACFULL	1	// pacman full
#define SPRITE_PACL	2	// pacman left
#define SPRITE_PACL2	3	// pacman left 2
#define SPRITE_PACD	4	// pacman down
#define SPRITE_PACD2	5	// pacman down 2
#define SPRITE_PACR	6	// pacman right
#define SPRITE_PACR2	7	// pacman right 2
#define SPRITE_PACU	8	// pacman up
#define SPRITE_PACU2	9	// pacman up 2
#define SPRITE_DIE	8	// pacman die 1st sprite
#define SPRITE_DIENUM	8	// pacman die number of sprites
#define SPRITE_BLINKY	16	// Blinky 1st sprite
#define SPRITE_PINKY	24	// Pinky 1st sprite
#define SPRITE_INKY	32	// Inky 1st sprite
#define SPRITE_CLYDE	40	// Clyde 1st sprite
#define SPRITE_EYE	48	// eye 1st sprite
#define SPRITE_FRIGH	52	// frightened 1st sprite
#define SPRITE_FROZEN	54	// frozen 1st sprite (slowed down)
#define SPRITE_FRUIT	56	// fruit sprites start (8 sprites)

#define SPRITE_NUM	64	// number of sprites

#define PHASENUM	4	// number of animation phases

// keys
#define KEY_L	'J'	// left
#define KEY_U	'I'	// up
#define KEY_R	'L'	// right
#define KEY_D	'K'	// down
#define KEY_PAUSE 'A'	// pause

// direction
enum {
	DIR_L = 0,	// left
	DIR_D,		// down
	DIR_R,		// right
	DIR_U,		// up

	DIR_NUM
};

// sprite characters
enum {
	CH_PACMAN = 0,

	CH_BLINKY,
	CH_PINKY,
	CH_INKY,
	CH_CLYDE,

	CH_FROZEN,
	CH_FRIGHTEN,
	CH_EYES,

	CH_DIE,
	
	CHAR_NUM
};

// character colors
#define COL_PACMAN	0xFC
#define COL_BLINKY	0xE0
#define COL_PINKY	0xF2
#define COL_INKY	0x1B
#define COL_CLYDE	0xF0

#define COL_SCORE	0x1B	// score color of eaten ghost

// ghost state
enum {
	S_SCATTER = 0,
	S_CHASE,
	S_FRIGHTEN,
	S_EATEN,

	S_NUM
};

// convert map coordinates to sprite pixel coordinates
#define MAPTOX(x) ((x)*TILESIZE-6)
#define MAPTOY(y) ((y)*TILESIZE-6)

// convert sprite pixel coordinates to map coordinates
#define XTOMAP(x) (((x)+12-1)/TILESIZE)
#define YTOMAP(y) (((y)+12-1)/TILESIZE)

// ghost home
#define HOMEXMIN 11	// home X min
#define HOMEXMAX 15	// home X max
#define HOMEYMIN 13	// home Y min
#define HOMEYMAX 14	// home Y max
#define HOMEXMID 13	// middle home X (gate)

#define FRUITTABMAX 19	// size of level fruit table
#define FRIGHTENTABMAX 19 // size of frighten table

// character descriptor
typedef struct {
	s16	x, y;	// graphics coordinates on the screen - current coordinates during animation
	s8	dx, dy;	// move vector (0=not moving)
	s8	steps;	// step counter to next tile
	u8	dir;	// current direction DIR_*
	u8	state;	// ghost state (S_SCATTER,...)
	u8	anim;	// sprite current character animation base index (without direction and animation phase)
	s16	sleeptimer; // sleep timer
	sSprite	sprite;	// sprite
} sChar;

#define SPEED	70	// delay of 1 animation phase in [ms]
#define CHARSTEPS 3	// character steps - number of animation phases per 1 tile
#define CHARSPEED (TILESIZE/CHARSTEPS)	// character speed - number of pixels per 1 animation phase

#define DOT_NUM 244	// total number of dots (including 4 pellets)
#define DOT_FRUIT1 (DOT_NUM-70) // fruit 1 (= 174)
#define DOT_FRUIT2 (DOT_NUM-170) // fruit 2 (= 74)

// Reached score:
// - dots can give 240*10 + 4*50 = 2600 points
// - Ghosts eaten: 200, 400, 800, 1600 (increase every ghost eaten after eaten 1 pellet)
//    for ghosts total can give (200+400+800+1600)*4 = 12000 points (not for level 19 and more)
// - bonus apears after eating 70 dots and 170 dots, point 100 to 5000 points

#endif // _DEF_H

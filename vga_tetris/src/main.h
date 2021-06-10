
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
#define TILESIZE 24	// tile size in number of pixels
#define MAPW	((WIDTH+TILESIZE-1)/TILESIZE) // board width (=27)
#define MAPH	((HEIGHT+TILESIZE-1)/TILESIZE) // board height (=20)
#define MAPSIZE	(MAPW*MAPH) // board size (=1200)

#define TILE_BLACK	0	// black tile
#define TILE_BRICK1	1	// brick 1
#define TILE_BRICK2	2	// brick 2
#define TILE_BRICK3	3	// brick 3
#define TILE_BRICK4	4	// brick 4
#define TILE_BRICK5	5	// brick 5
#define TILE_BRICK6	6	// brick 6
#define TILE_BRICK7	7	// brick 7
#define TILE_EMPTY	8	// empty game tile
#define TILE_WALL	9	// wall
#define TILE_FRAMELU	10	// frame left up
#define TILE_FRAMEU	11	// frame up
#define TILE_FRAMERU	12	// frame right up
#define	TILE_FRAMEL	13	// frame left
#define TILE_FRAMER	14	// frame right
#define TILE_FRAMELD	15	// frame left down
#define TILE_FRAMED	16	// frame down
#define TILE_FRAMERD	17	// frame right down
#define TILE_NEXT1	18	// next title
#define TILE_NEXT2	19	// next title 2
#define TILE_SCORET1	20	// score title
#define TILE_SCORET2	21	// score title 2
#define TILE_LINEST1	22	// lines title
#define TILE_LINEST2	23	// lines title 2
#define TILE_SPEEDT1	24	// speed title
#define TILE_SPEEDT2	25	// speed title 2
#define TILE_STATT1	26	// statistics title
#define TILE_STATT2	27	// statistics title 2
#define TILE_STATT3	28	// statistics title 3
#define TILE_STATT4	29	// statistics title 4
#define TILE_PAUSE1	30	// pause (empty)
#define TILE_PAUSE2	31	// pause 2
#define TILE_PAUSE3	32	// pause 3
#define TILE_PAUSE4	33	// pause 4
#define TILE_PAUSE5	34	// pause 5
#define TILE_LEVEL0	35	// level 0
#define TILE_LEVEL1	36	// level
#define TILE_LEVEL2	37	// level 2
#define TILE_LEVEL3	38	// level 3
#define TILE_LEVEL4	39	// level 4
#define TILE_OVER1	40	// game over
#define TILE_OVER2	41	// game over 2
#define TILE_OVER3	42	// game over 3
#define TILE_OVER4	43	// game over 4
#define TILE_OVER5	44	// game over 5
#define TILE_OVER6	45	// game over 6
#define TILE_SCOREV1	46	// score value
#define TILE_SCOREV2	47	// score value 2
#define TILE_LINESV1	48	// lines value
#define TILE_LINESV2	49	// lines value 2
#define TILE_SPEEDV1	50	// speed value
#define TILE_SPEEDV2	51	// speed value 2
#define TILE_STAT1	52	// statistics value 
#define TILE_STAT2	53	// statistics value
#define TILE_STAT3	54	// statistics value
#define TILE_STAT4	55	// statistics value
#define TILE_STAT5	56	// statistics value
#define TILE_STAT6	57	// statistics value
#define TILE_STAT7	58	// statistics value
#define TILE_STAT8	59	// statistics value
#define TILE_STAT9	60	// statistics value
#define TILE_STAT10	61	// statistics value
#define TILE_STAT11	62	// statistics value
#define TILE_STAT12	63	// statistics value
#define TILE_STAT13	64	// statistics value
#define TILE_STAT14	65	// statistics value
#define TILE_SCOREV3	66	// score value
#define TILE_SCOREV4	67	// score value 2
#define TILE_LINESV3	68	// lines value
#define TILE_LINESV4	69	// lines value 2
#define TILE_SPEEDV3	70	// speed value
#define TILE_SPEEDV4	71	// speed value 2

#define TILE_NUM	72	// number of  tiles

// keys
#define KEY_R	'L'	// right
#define KEY_U	'I'	// up
#define KEY_L	'J'	// left
#define KEY_D	'K'	// down
#define KEY_PAUSE 'A'	// pause

// format: 8-bit pixel graphics
// image width: 24 pixels
// image height: 1728 lines
// image pitch: 24 bytes
extern ALIGNED const u8 TilesImg[41472];

// sounds
extern const u8 BrickSnd[2354];
extern const u8 GameOverSnd[14648];
extern const u8 LevelUpSnd[43971];
extern const u8 LineSnd[7330];

#endif // _MAIN_H

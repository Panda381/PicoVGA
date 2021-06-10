
// ****************************************************************************
//
//                                 Game levels
//
// ****************************************************************************

#ifndef _LEVELS_H
#define _LEVELS_H

#define LEVNUM	50	// number of levels (without demo scene)

// Item indices (symbols used in level definitions)
#define CRY	(ITEM+3*0)	// crystal
#define CRO	(ITEM+3*1)	// crown
#define	TRE	(ITEM+3*2)	// tree
#define	APL	(ITEM+3*3)	// apple
#define	COW	(ITEM+3*4)	// cow
#define	CHE	(ITEM+3*5)	// cherry
#define	POL	(ITEM+3*6)	// pool
#define	GIR	(ITEM+3*7)	// giraffe
#define	ICE	(ITEM+3*8)	// ice cream
#define	CAK	(ITEM+3*9)	// cake
#define	COM	(ITEM+3*10)	// computer
#define	CAR	(ITEM+3*11)	// car
#define	BAL	(ITEM+3*12)	// balloon
#define	CLK	(ITEM+3*13)	// alarm clock
#define	ELE	(ITEM+3*14)	// elephant
#define	GLA	(ITEM+3*15)	// drinking glass
#define	MON	(ITEM+3*16)	// money
#define	AIR	(ITEM+3*17)	// airplane
#define	LEM	(ITEM+3*18)	// Lemmings

#define	EMP	EMPTY		// empty tile
#define	WAL	WALL		// wall tile
#define LOC	LOCO_R		// locomotive
#define GAT	GATE		// gate

// level scenes
extern const u8 Levels[(LEVNUM+1)*MAPW*MAPH];

// level paswords
extern const char LevelPsw[(LEVNUM+1)*PSWLEN+1];

// Level solution
extern const char* Solution[LEVNUM+1];

#endif // _LEVELS_H

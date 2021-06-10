
// ****************************************************************************
//
//                                 Game engine
//
// ****************************************************************************

#ifndef _GAME_H
#define _GAME_H

#define TRANSCOL	0x86			// transparent color
#define CASTLEMAX	100			// castle and fence max. height
#define CARDW		64			// card width
#define CARDH		96			// card height
#define CASTLEY		(HEIGHT-CARDH-16)	// castle Y coordinate of bottom (96 is card, 16 is grass)
#define STATEY		(HEIGHT-CARDH-256-4)	// state window Y coordinate
#define CARDNUM		8			// number of cards of one player
#define CARDTYPES	30			// number of card types
#define CARD_BACK	CARDTYPES		// card background
#define CARD_SHADOW	(CARDTYPES+1)		// card shadow
#define CARD_DISCARD	(CARDTYPES+2)		// card discard
#define MIDX1		(WIDTH/2-CARDW)		// middle card 1
#define MIDX2		(WIDTH/2)		// middle card 2

// player's parameters (order must be preserved - used to display status)
enum {
	PAR_BUILDERS = 0,
	PAR_BRICKS,
	PAR_SOLDIERS,
	PAR_WEAPONS,
	PAR_WIZARDS,
	PAR_CRYSTALS,
	PAR_CASTLE,
	PAR_FENCE,

	PAR_NUM
};

// player descriptor
typedef struct {
	Bool	comp;	// player is computer
	int	par[PAR_NUM]; // parameter
	int	add[PAR_NUM]; // parameter addition
	int	cards[CARDNUM]; // cards (-1 none)
	Bool	disable[CARDNUM]; // cards disable
} sPlayer;

// card descriptor
typedef struct {
	int type;	// card type PAR_*
	int costs;	// card value "costs"
	int param;	// parameter to change PAR_* (PAR_NUM = extra)
	int value;	// change value (+ own, - enemy)
} sCard;

// game
void Game(Bool comp1, Bool comp2, Bool autodemo);

#endif // _GAME_H

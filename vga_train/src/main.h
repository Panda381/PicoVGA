
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// Define screen
#define TILESIZE 32	// tile size in number of pixels
#define TILEW	(MAPW*TILESIZE) // tiles width (20*32 = 640)
#define TILEH	(MAPH*TILESIZE) // tiles height (12*32 = 384)

#define STATEH	32	// heght of state row
#define TEXTMAX	(MAPW*2) // length of state row in number of characters
			// (1 characrer is 16x16 pixels, 2 characters per tile)

#define WIDTH	TILEW	// screen width (= 640)
#define HEIGHT	(TILEH+STATEH)	// screen height (384+32 = 416)

#define BOXW	(12*16)	// width of info box
#define BOXH	(8*16)	// height of info box
#define BOXSIZE (BOXW*BOXH) // size of info box
#define BOXX	((WIDTH-BOXW)/2) // coordinate X of info box
#define BOXY	((TILEH-BOXH)/2) // coordinate Y of info box

#define INFO_LAYER	1	// overlapped layer with info box

extern u8 Text[TEXTMAX*2]; // 2 rows of text (2nd row is empty, it is used to center line vertically)
extern u8 TextCol[TEXTMAX*2*8] __attribute__ ((aligned(4))); // text color gradient

// Tiles images
// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 5664 lines
// image pitch: 32 bytes
extern const u8 TilesImg[181248] __attribute__ ((aligned(4)));

// info box
extern u8 Box[BOXSIZE] __attribute__ ((aligned(4)));
extern sCanvas BoxCanvas; // box canvas

// sounds
extern const u8 CollectSnd[3642];
extern const u8 CrashSnd[50146];
extern const u8 StepSnd[2243];
extern const u8 SuccessSnd[32784];

// display help
void DispHelp();

// get character from keyboard (0 = no key)
char GetChar();

// flush characters from keyboard
void FlushChar();

#endif // _MAIN_H

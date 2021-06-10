
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// program version and copyright
#define VERSION	"1.0"
#define COPYRIGHT "(c) 2021 Miroslav Nemecek"

// Define screen
#define WIDTH	640	// screen width
#define HEIGHT	480	// screen height

// text screen
#define FONTH	16		// font height
#define TEXTW	(WIDTH/8)	// width of text screen (=80)
#define TEXTH	(HEIGHT/FONTH)	// height of text screen (=30)
#define TEXTSIZE (TEXTW*TEXTH)	// size of text screen (=2400)
#define TEXTWB	(TEXTW*2)	// width of text in bytes (=160)

extern ALIGNED const u8 Tiles8Img[1472];
extern ALIGNED const u8 Tiles12Img[3312];
extern ALIGNED const u8 Tiles16Img[5888];
extern ALIGNED const u8 Tiles20Img[9200];
extern ALIGNED const u8 Tiles24Img[13248];
extern ALIGNED const u8 Tiles28Img[18032];
extern ALIGNED const u8 Tiles32Img[23552];

// sound format: PCM mono 8-bit 22050Hz
extern const u8 YippeeSnd[17902];

// copy of tiles images
extern ALIGNED u8 TilesImg_Copy[sizeof(Tiles32Img)];

// copy of font
extern ALIGNED u8 Font_Copy[4096];

// text screen (character + 2x4 bit attributes)
extern u8 Text[TEXTSIZE*2];

// set text mode
void SetTextMode();

// set tile mode (must be valid variables MapW, MapH, TileSize)
void SetTileMode();

// get character from keyboard (0 = no key)
char GetChar();

// wait for a character
char WaitChar();

// flush characters from keyboard
void FlushChar();

#endif // _MAIN_H

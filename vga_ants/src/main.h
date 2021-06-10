
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

#define WIDTH	512		// screen width
#define HEIGHT	400		// screen height

// control keys
#define KEY_L		'J'	// left
#define KEY_R		'L'	// right
#define KEY_SELECT	' '	// select
#define KEY_DISCARD	'D'	// discard
#define KEY_HELP	'H'	// help
#define KEY_QUIT	'Q'	// quit

// === images

// format: 8-bit pixel graphics
// image width: 512 pixels
// image height: 400 lines
// image pitch: 512 bytes
extern ALIGNED const u8 BackgroundImg[204800];

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 32 lines
// image pitch: 128 bytes
extern ALIGNED const u8 BlacksRedsImg[4096];

// format: 8-bit pixel graphics, 33 cards, every card is 64 pixels width
// image width: 2112 pixels
// image height: 96 lines
// image pitch: 2112 bytes
extern ALIGNED const u8 CardsImg[202752];

// format: 8-bit pixel graphics
// image width: 256 pixels
// image height: 232 lines
// image pitch: 256 bytes
extern ALIGNED const u8 CastleImg[59392];

// format: 8-bit pixel graphics
// image width: 228 pixels
// image height: 116 lines
// image pitch: 228 bytes
extern ALIGNED const u8 CastleShadow[26448];

// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 25 lines
// image pitch: 32 bytes
extern ALIGNED const u8 CloudImg[800];

// format: 8-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 32 bytes
extern ALIGNED const u8 CursorImg[1024];

// format: 8-bit pixel graphics
// image width: 8 pixels
// image height: 216 lines
// image pitch: 8 bytes
extern ALIGNED const u8 FenceImg[1728];

// format: 8-bit pixel graphics
// image width: 100 pixels
// image height: 116 lines
// image pitch: 100 bytes
extern ALIGNED const u8 FenceShadowImg[11600];

// format: 8-bit pixel graphics
// image width: 256 pixels
// image height: 32 lines
// image pitch: 256 bytes
extern ALIGNED const u8 FlagsImg[8192];

// format: 8-bit pixel graphics
// image width: 160 pixels
// image height: 32 lines
// image pitch: 160 bytes
extern ALIGNED const u8 GrassImg[5120];

// format: 8-bit pixel graphics
// image width: 384 pixels
// image height: 192 lines
// image pitch: 384 bytes
extern ALIGNED const u8 OpenImg[73728];

// format: 8-bit pixel graphics
// image width: 512 pixels
// image height: 64 lines
// image pitch: 512 bytes
extern ALIGNED const u8 OpenSelImg[32768];

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 64 lines
// image pitch: 128 bytes
extern ALIGNED const u8 OpenSel2Img[8192];

// format: 8-bit pixel graphics
// image width: 216 pixels
// image height: 40 lines
// image pitch: 216 bytes
extern ALIGNED const u8 SelectImg[8640];

// format: 8-bit pixel graphics
// image width: 72 pixels
// image height: 256 lines
// image pitch: 72 bytes
extern ALIGNED const u8 StateImg[18432];

// format: 8-bit pixel graphics
// image width: 224 pixels
// image height: 84 lines
// image pitch: 224 bytes
extern ALIGNED const u8 TitleImg[18816];

// format: 8-bit pixel graphics
// image width: 96 pixels
// image height: 80 lines
// image pitch: 96 bytes
extern ALIGNED const u8 Title2Img[7680];

// format: 8-bit pixel graphics
// image width: 64 pixels
// image height: 32 lines
// image pitch: 64 bytes
extern ALIGNED const u8 TrumpetImg[2048];

// format: 8-bit pixel graphics
// image width: 1024 pixels
// image height: 32 lines
// image pitch: 1024 bytes
extern ALIGNED const u8 WinImg[32768];

// === sounds
extern const u8 ApplauseSnd[29304];
extern const u8 BirdsSnd[192184];
extern const u8 BuildCastleSnd[19444];
extern const u8 BuildFenceSnd[10618];
extern const u8 CardSnd[2388];
extern const u8 CurseSnd[35080];
extern const u8 DecreaseStocksSnd[12210];
extern const u8 FanfaresSnd[59678];
extern const u8 IncreasePowerSnd[24338];
extern const u8 IncreaseStocksSnd[16588];
extern const u8 RuinCastleSnd[23724];
extern const u8 RuinFenceSnd[9134];

// draw box
extern ALIGNED u8 Box[WIDTH*HEIGHT];

// === canvases
extern sCanvas BackgroundCanvas;
extern sCanvas BlacksRedsCanvas;
extern sCanvas CardsCanvas;
extern sCanvas CastleCanvas;
extern sCanvas CastleShadowCanvas;
extern sCanvas CloudCanvas;
extern sCanvas CursorCanvas;
extern sCanvas FenceCanvas;
extern sCanvas FenceShadowCanvas;
extern sCanvas FlagsCanvas;
extern sCanvas GrassCanvas;
extern sCanvas OpenCanvas;
extern sCanvas OpenSelCanvas;
extern sCanvas OpenSel2Canvas;
extern sCanvas SelectCanvas;
extern sCanvas StateCanvas;
extern sCanvas TitleCanvas;
extern sCanvas Title2Canvas;
extern sCanvas TrumpetCanvas;
extern sCanvas WinCanvas;
extern sCanvas SaveCanvas;
extern sCanvas Save2Canvas;
extern sCanvas Save3Canvas;
extern sCanvas Save4Canvas;

// display help
void DispHelp();

// get character from keyboard (0 = no key)
char GetChar();

// flush characters from keyboard
void FlushChar();

#endif // _MAIN_H

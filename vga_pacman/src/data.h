
// ****************************************************************************
//
//                                 Data and tables
//
// ****************************************************************************

#ifndef _DATA_H
#define _DATA_H

// format: 8-bit pixel graphics
// image width: 144 pixels
// image height: 34 lines
// image pitch: 144 bytes
extern ALIGNED const u8 LogoImg[4896];
#define LOGOW 144
#define LOGOH 34
extern sCanvas LogoCanvas;

// format: 8-bit pixel graphics
// image width: 1536 pixels
// image height: 24 lines
// image pitch: 1536 bytes
extern ALIGNED const u8 SpritesImg[36864];
extern sCanvas SpritesCanvas;

// format: 8-bit pixel graphics
// image width: 516 pixels
// image height: 12 lines
// image pitch: 516 bytes
extern ALIGNED const u8 TilesImg[6192];
extern sCanvas TilesCanvas;

// format: 8-bit pixel graphics
// image width: 144 pixels
// image height: 16 lines
// image pitch: 144 bytes
extern ALIGNED const u8 StatusImg[2304];
extern sCanvas StatusCanvas;

// sound format: PCM mono 8-bit 22050Hz
extern const u8 StartSnd[94852];
extern const u8 SirenSnd[9460];
extern const u8 WakkaSnd[6391];
extern const u8 FrightenSnd[5872];
extern const u8 EatGhostSnd[12879];
extern const u8 DeathSnd[33832];
extern const u8 EatFruitSnd[9690];
extern const u8 ExtraPacSnd[41880];
extern const u8 IntermissionSnd[114754];

// title row
extern ALIGNED u8 Text[TEXTMAX*2]; // text row with attributes

// copy of font
extern ALIGNED u8 Font_Copy[sizeof(FontBold8x8)];

// copy of sprites
extern ALIGNED u8 SpritesImg_Copy[sizeof(SpritesImg)];
extern u8 SpritesX0[SPRITE_NUM*SPRITEH]; // array of start of lines
extern u8 SpritesW0[SPRITE_NUM*SPRITEH]; // array of length of lines

// copy of tiles images
extern ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];

// game board
extern ALIGNED u8 Board[MAPSIZE];

// bottom row
extern ALIGNED u8 Bottom[BOTTOMSIZE];

// open draw box
extern ALIGNED u8 Box[WIDTH*HEIGHT];

// animation phase 0..3
extern u8 Phase;

// pacman next direction
extern u8 NextDir;

// current and max score
extern u32 Score;
extern u32 MaxScore;
extern int Level; // current level 0...
extern s8 Lives; // remaining lives
extern int FrightenCnt; // frighten counter
extern int Eaten; // next eaten points
extern int ScatterCnt; // scatter counter
extern int ChaseCnt; // chase counter
extern u8 ScatterTabNext; // next entry in scatter-chasse table
extern int DotCnt; // eaten dot counter
extern int FruitCnt; // fruit counter

// level scatter-chasse time table: 5 levels x 4 pairs of 2 entries (scatter and chasse in number of seconds, 0=permanently)
extern const u8 ScatterTab[5*4*2];

// pellet blink counter
extern u8 Blink;

// level fruit table
extern const u8 FruitTab[FRUITTABMAX];

// bonus table
extern const u16 BonusTab[8];

// level frighten time table (number of seconds)
extern const u8 FrightenTab[FRIGHTENTABMAX];

// game board template (to edit, view tiles_num.bmp with tile indices)
extern const u8 BoardTemp[MAPSIZE];

// bonus fruit sprite
extern sSprite FruitSprite;

// sprite list (pacman, 4 ghosts, 1 bonus fruit)
extern sSprite* SpriteList[6];

// character descriptor
extern sChar Chars[5];

// direction vector
extern s8 DirX[4];
extern s8 DirY[4];

// sprite characters indices: 9 characters * 4 directions * 4 animation phase
extern const u8 SpriteInx[CHAR_NUM * DIR_NUM * PHASENUM];

// decode number buffer
extern char NumBuf[15];

#endif // _DATA_H

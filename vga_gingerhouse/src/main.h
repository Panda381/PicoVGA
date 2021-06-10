
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// screen resolution
#define WIDTH	640	// screen width
#define HEIGHT	480	// screen height

#define IMGWIDTH WIDTH	// image width
#define IMGHEIGHT 432	// image height
#define IMGWIDTHBYTE WIDTH // image width in bytes

#define TEXTWIDTH  WIDTH // text width (at pixels)
#define TEXTHEIGHT 48	// text height (at pixels)

#define TEXTW	(TEXTWIDTH/8) // text width (at characters, 640/8=80)
#define TEXTH	(TEXTHEIGHT/8) // text height (at characters, 48/8=6)
#define TEXTSIZE (TEXTW*TEXTH) // text size (80x6 = 480 characters)
#define TEXTWB	(TEXTW*2)	// width of text in bytes

#define IMG_LAYER	1	// overlapped layer with RLE image

#define PAGES 22	// number of pages

// images
// format: RLE compression
// no transparency
// image width: 640 pixels
// image height: 432 lines
extern const u16 Img01_rows[433];
extern const u8 Img01[86952] __attribute__ ((aligned(4)));

extern const u16 Img02_rows[433];
extern const u8 Img02[77456] __attribute__ ((aligned(4)));

extern const u16 Img03_rows[433];
extern const u8 Img03[90444] __attribute__ ((aligned(4)));

extern const u16 Img04_rows[433];
extern const u8 Img04[104368] __attribute__ ((aligned(4)));

extern const u16 Img05_rows[433];
extern const u8 Img05[76416] __attribute__ ((aligned(4)));

extern const u16 Img06_rows[433];
extern const u8 Img06[73932] __attribute__ ((aligned(4)));

extern const u16 Img07_rows[433];
extern const u8 Img07[77812] __attribute__ ((aligned(4)));

extern const u16 Img08_rows[433];
extern const u8 Img08[75928] __attribute__ ((aligned(4)));

extern const u16 Img09_rows[433];
extern const u8 Img09[62832] __attribute__ ((aligned(4)));

extern const u16 Img10_rows[433];
extern const u8 Img10[69904] __attribute__ ((aligned(4)));

extern const u16 Img11_rows[433];
extern const u8 Img11[86664] __attribute__ ((aligned(4)));

extern const u16 Img12_rows[433];
extern const u8 Img12[84152] __attribute__ ((aligned(4)));

extern const u16 Img13_rows[433];
extern const u8 Img13[87868] __attribute__ ((aligned(4)));

extern const u16 Img14_rows[433];
extern const u8 Img14[87632] __attribute__ ((aligned(4)));

extern const u16 Img15_rows[433];
extern const u8 Img15[83948] __attribute__ ((aligned(4)));

extern const u16 Img16_rows[433];
extern const u8 Img16[74296] __attribute__ ((aligned(4)));

extern const u16 Img17_rows[433];
extern const u8 Img17[73360] __attribute__ ((aligned(4)));

extern const u16 Img18_rows[433];
extern const u8 Img18[99412] __attribute__ ((aligned(4)));

extern const u16 Img19_rows[433];
extern const u8 Img19[94984] __attribute__ ((aligned(4)));

extern const u16 Img20_rows[433];
extern const u8 Img20[86448] __attribute__ ((aligned(4)));

extern const u16 Img22_rows[433];
extern const u8 Img22[48192] __attribute__ ((aligned(4)));

#endif // _MAIN_H

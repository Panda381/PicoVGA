
// ****************************************************************************
//
//                           VGA colors and palettes
//
// ****************************************************************************

#include "include.h"

// default 16-color palettes (EGA colors)
// - do not set "const", to stay in faster RAM
u8 DefPal16[16] = {
	CGACOL_0,	//	0	// 0x000000 black
	CGACOL_1,	//	2	// 0x0000AA dark blue
	CGACOL_2,	//	20	// 0x00B600 dark green
	CGACOL_3,	//	22	// 0x00B6AA dark cyan
	CGACOL_4,	//	160	// 0xB60000 dark red
	CGACOL_5,	//	162	// 0xB600AA dark magenta
	CGACOL_6,	//	168	// 0xB64900 brown
	CGACOL_7,	//	182	// 0xB6B6AA light gray

	CGACOL_8,	//	73	// 0x494955 dark gray
	CGACOL_9,	//	75	// 0x4949FF light blue
	CGACOL_10,	//	93	// 0x49FF55 light green
	CGACOL_11,	//	95	// 0x49FFFF light cyan
	CGACOL_12,	//	233	// 0xFF4955 light red
	CGACOL_13,	//	235	// 0xFF49FF light magenta
	CGACOL_14,	//	253	// 0xFFFF55 yellow
	CGACOL_15,	//	255	// 0xFFFFFF white
};

// ZX Spectrum color palettes
// - do not set "const", to stay in faster RAM
u8 ZXPal16[16] = {
	ZXCOL_0,	//	0	// 0x000000 black         
	ZXCOL_1,	//	2	// 0x0000AA dark blue     
	ZXCOL_2,	//	160	// 0xB60000 dark red      
	ZXCOL_3,	//	162	// 0xB600AA dark magenta  
	ZXCOL_4,	//	20	// 0x00B600 dark green    
	ZXCOL_5,	//	22	// 0x00B6AA dark cyan     
	ZXCOL_6,	//	180	// 0xB6B600 dark yellow   
	ZXCOL_7,	//	182	// 0xB6B6AA light gray    

	ZXCOL_8,	//	73	// 0x494955 dark gray     
	ZXCOL_9,	//	3	// 0x0000FF light blue    
	ZXCOL_10,	//	224	// 0xFF0000 light red     
	ZXCOL_11,	//	227	// 0xFF00FF light magenta 
	ZXCOL_12,	//	28	// 0x00FF00 light green   
	ZXCOL_13,	//	31	// 0x00FFFF light cyan    
	ZXCOL_14,	//	252	// 0xFFFF00 yellow        
	ZXCOL_15,	//	255	// 0xFFFFFF white         
};

// 4-color palettes (CGA colors) 
u8 PalCGA1[4] = { CGACOL_0, CGACOL_2, CGACOL_4, CGACOL_6 }; // palette 0, low intensity (black, dark green, brown)
u8 PalCGA2[4] = { CGACOL_0, CGACOL_10, CGACOL_12, CGACOL_14 }; // palette 0, high intensity (black, light green, light red, yellow)
u8 PalCGA3[4] = { CGACOL_0, CGACOL_3, CGACOL_5, CGACOL_7 }; // palette 1, low intensity (black, dark cyan, dark magenta, light gray)
u8 PalCGA4[4] = { CGACOL_0, CGACOL_11, CGACOL_13, CGACOL_15 }; // palette 1, high intensity (black, light cyan, light magenta, white)
u8 PalCGA5[4] = { CGACOL_0, CGACOL_3, CGACOL_4, CGACOL_7 }; // palette 1, low intensity (black, dark cyan, dark red, light gray)
u8 PalCGA6[4] = { CGACOL_0, CGACOL_11, CGACOL_12, CGACOL_15 }; // palette 1, high intensity (black, light cyan, light red, white)

// 4-color palette translation table
//u32 Pal4Trans[256];
//u32 Pal4Plane[256];

// 16-color palette translation table
//u16 Pal16Trans[256];
//u16 ZX16Trans[256];

// values of color components
u8 RGVal[8] = { 0, 41, 84, 117, 166, 195, 230, 255 }; // values of Red and Green components
u8 BVal[4] = { 0, 84, 195, 255 }; // values of Blue components

// distance of 2 colors in 332 format (R3G3B2)
// - returns value 0..195075
int ColDist(u8 col1, u8 col2)
{
	int d = RGVal[col1 >> 5] - RGVal[col2 >> 5];
	int dist = d*d;

	d = RGVal[(col1 >> 2) & 7] - RGVal[(col2 >> 2) & 7];
	dist += d*d;

	d = BVal[col1 & 3] - BVal[col2 & 3];
	dist += d*d;

	return dist;
}

// rainbow gradient table
//	GP0 ... B0 ... VGA B0 blue
//	GP1 ... B1 ... VGA B1
//	GP2 ... B2 ... VGA G0 green
//	GP3 ... B3 ... VGA G1
//	GP4 ... B4 ... VGA G2
//	GP5 ... B5 ... VGA R0 red
//	GP6 ... B6 ... VGA R1
//	GP7 ... B7 ... VGA R2
u8 RainbowGrad[] = {
	B7,			// dark red
	B5+B6+B7,		// red
	B4+B6+B7,		// orange
	B2+B3+B4+B5+B6+B7,	// yellow
	B2+B3+B4+B7,		// yellow-green
	B2+B3+B4,		// green
	B0+B3+B4,		// green-cyan
	B0+B1+B2+B3+B4,		// cyan
	B0+B1+B4,		// cyan-blue
	B0+B1,			// blue
	B0+B1+B6,		// blue-magenta
	B0+B1+B5+B6+B7,		// magenta
	B1+B7,			// dark magenta
};

#define RANBOW_NUM count_of(RainbowGrad)

// generate gradient
void GenGrad(u8* dst, int w)
{
	// sample - rainbow pattern
	int i;
	for (i = 0; i < w; i++)
	{
		*dst++ = RainbowGrad[i*RANBOW_NUM/w];
	}
}

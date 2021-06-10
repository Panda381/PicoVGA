
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// screen resolution
#define WIDTH	640		// screen width
#define HEIGHT	480		// screen height
#define DBLY	False		// double Y
#define DRV	VideoVGA	// driver

// info row
#define TEXTMAX	(WIDTH/8)	// length of info row in number of characters (= 80)
				// (1 character is 8x16 pixels)
#define TEXTH	16		// height of info row

// skyline
#define SKYLINEW 640		// skyline width
#define SKYLINEH 58		// skyline height
#define SKYLINESIZE (SKYLINEW*SKYLINEH) // skyline size (= 37120)

#define HORIZONH SKYLINEH	// horizon height

// tiles
#define TILEBITS 6		// number of bits of tile width and height
#define TILESIZE (1<<TILEBITS)	// tile width and height (= 64, must be power of 2)
#define TILENUM	23		// number of tiles
#define TILESIZE2 (TILESIZE*TILESIZE) // tile size in bytes (= 4096)

// game map
#define MAPWBITS 5
#define MAPW	(1<<MAPWBITS)	// tile map width (= 32, must be power of 2)
#define MAPHBITS 5
#define MAPH	(1<<MAPHBITS)	// tile map height (= 32, must be power of 2)
#define MAPSIZE	(MAPW*MAPH)	// tile map size (= 1024)
#define TERRAINH (HEIGHT-TEXTH-SKYLINEH) // height of terrain (= 406)
#define HORIZ 5			// terrain horizon offset/4

// car
#define CARWBITS 7		// number of bits of car image width
#define CARHBITS 7		// number of bits of car image height
#define CARW (1<<CARWBITS)	// car image width (= 128)
#define CARH (1<<CARHBITS)	// car image height (= 128)
#define CARW2	(CARW*2)	// car real width (= 256)
#define CARH2	(CARH*2)	// car real height (= 256)
#define CARLAYER	1	// car overlapped layer

// ghost
#define GHOSTWBITS 7		// number of bits of ghost image width
#define GHOSTHBITS 6		// number of bits of ghost image height
#define GHOSTW (1<<GHOSTWBITS)	// ghost image width (= 128)
#define GHOSTH (1<<GHOSTHBITS)	// ghost image height (= 64)
#define GHOST1LAYER	2	// ghost 1 layer
#define GHOST2LAYER	3	// ghost 2 layer

// game
#define GRASS		0	// index of grass tile
#define START		1	// index of start tile
#define CHECKA		2	// index of 1st checkpoint tile
#define CHECKB		3	// index of 2nd checkpoint tile
#define CHECKC		4	// index of 3rd checkpoint tile

#define CHECKNUM	3	// number of checkpoints

#define SPEEDCOEF	((float)TILESIZE/15) // speed coefficient
#define GEARMAX		5	// max. gear
#define GEARMIN		0 //-1	// min. gear
#define ACCEL		(SPEEDCOEF*10) // acceleration per second
#define TURNSPEED	0.004f	// turn speed (radians per second)

#define HISTNUM		3	// history size

#define RECORDMAX	256	// record max. length (must be power of 2)

// format: 8-bit pixel graphics
// image width: 640 pixels
// image height: 58 lines
// image pitch: 640 bytes
extern ALIGNED const u8 SkylineImg[37120];

// format: 8-bit pixel graphics
// image width: 64 pixels
// image height: 1472 lines
// image pitch: 64 bytes
extern ALIGNED const u8 TilesImg[94208];

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 128 lines
// image pitch: 128 bytes
extern const ALIGNED u8 Car1Img[16384];
extern const ALIGNED u8 Car2Img[16384];
extern const ALIGNED u8 Car3Img[16384];

// format: 8-bit pixel graphics
// image width: 128 pixels
// image height: 64 lines
// image pitch: 128 bytes
extern ALIGNED const u8 Ghost1Img[8192];
extern ALIGNED const u8 Ghost2Img[8192];
extern ALIGNED const u8 Ghost3Img[8192];
extern ALIGNED const u8 Ghost4Img[8192];

// sound format: PCM mono 8-bit 22050Hz
extern const u8 EngineSnd[6062];

#endif // _MAIN_H

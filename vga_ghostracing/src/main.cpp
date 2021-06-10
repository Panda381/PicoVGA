
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

u8 Text[TEXTMAX]; // row of text
ALIGNED u8 TextCol[TEXTMAX*8]; // text color gradient
ALIGNED u8 Font_Copy[4096]; // copy of font

// copy of skyline
ALIGNED u8 SkylineImg_Copy[sizeof(SkylineImg)];

// copy of tiles
ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];

// copy of cars
ALIGNED u8 Car1Img_Copy[sizeof(Car1Img)];
ALIGNED u8 Car2Img_Copy[sizeof(Car2Img)];
ALIGNED u8 Car3Img_Copy[sizeof(Car3Img)];

// copy of ghosts
ALIGNED u8 Ghost1Img_Copy[sizeof(Ghost1Img)];
ALIGNED u8 Ghost2Img_Copy[sizeof(Ghost2Img)];
ALIGNED u8 Ghost3Img_Copy[sizeof(Ghost3Img)];
ALIGNED u8 Ghost4Img_Copy[sizeof(Ghost4Img)];

// game state
float Speed = 0; // current speed
int Gear = 0; // current gear
float CarX = 8.5*TILESIZE; // car X coordinate
float CarY = 15.5*TILESIZE; // car Y coordinate
float CarDir = 0; // car direction
int CarTurn = 0; // car turn -1 left, 0, +1 right
int CurTile = 0; // current tile under car

u64 StartTime; // start time
int ThisTime = 0; // this time
int LastTime = 0; // last time
int BestTime = 0; // best time
Bool NewBest = False; // new best time
int Rank = 0; // current rank 1..3 (0 = start new game)
int CheckNext = START; // next check point (START = search start)
Bool CheckOK[CHECKNUM]; // check points processed
u8 CheckCol[CHECKNUM] = { (B0+B1+B4+B6), COL_YELLOW, COL_RED }; // check point color
int Hist[HISTNUM] = { 1000000000, 1000000000, 1000000000 }; // history of best times

u32 RecordStep;
int RecordInx[3] = { 0, -1, -1 }; // record index (-1 = not initialized)
float RecordX[RECORDMAX]; // record of X coordinates
float RecordY[RECORDMAX]; // record of Y coordinates
float RecordDir[RECORDMAX]; // record of direction

// tile map
//  grass 0 ... GRASS
// |  start 1 ... START
// |  check A (blue) 2 ... CHECKA
// |  check B (yellow) 3 ... CHECKB
// |  check C (red) 4 ... CHECKC
// |  straight 5
// -- straight 6
//
//  -- 7  8
// |   9  10

// --  11  12
//   | 13  14
   
// |   15  16
//  -- 17  18

//   | 19  20
// --  21  22

// do not use "const" prefix, to use faster RAM
u8 TileMap[MAPSIZE] = {
//	0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 0
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 1
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 2
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 3
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 4
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 5
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 6
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 7
	0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,11,12, 0, 0, 0, 0, 0, 0, 0, 0,	// 8
	0, 0, 0, 0, 0, 0, 0, 0, 9,10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,13,14, 0, 0, 0, 0, 0, 0, 0, 0,	// 9
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,	// 10
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 7, 8, 6, 6, 6,11,12, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0,	// 11
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 9,10, 0, 0, 0,13,14, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,	// 12
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 5, 0, 0, 0, 0, 0,15,16, 0, 0, 0,19,20, 0, 0, 0, 0, 0, 0, 0, 0,	// 13
	0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0,17,18, 6, 6, 6,21,22, 0, 0, 0, 0, 0, 0, 0, 0,	// 14
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 15
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,15,16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 16
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,17,18, 6, 6, 6, 6, 6, 6, 6, 6,11,12, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 17
	0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,13,14, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 18
	0, 0, 0, 0, 0, 0, 0, 0,15,16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 19
	0, 0, 0, 0, 0, 0, 0, 0,17,18, 6, 6, 6, 6, 6, 6, 6,11,12, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 20
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,13,14, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 21
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,15,16, 0,19,20, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 22
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,17,18, 6,21,22, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 23
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 24
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 25
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 26
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 27
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 28
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 29
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 30
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	// 31
};	

// projection matrix - terrain
cMat2Df Mat;
int MatInt[6];

// projection matrix - car
cMat2Df Mat2;
int Mat2Int[6];

// projection matrix - ghost 1
cMat2Df Mat3;
int Mat3Int[6];

// projection matrix - ghost 2
cMat2Df Mat4;
int Mat4Int[6];

u8 InfoX = 0; // info X position

// clear info row
void InfoClear()
{
	memset(Text, ' ', sizeof(Text));
	memset(TextCol, COL_BLACK, sizeof(TextCol));
}

// display info character
void InfoDispChar(char ch, u8 col)
{
	u8 x = InfoX;
	Text[x] = ch;
	for (ch = 0; ch < 8; ch++) TextCol[x*8+ch] = col;
	InfoX = x + 1;	
}

// display text to info row
void InfoDispText(const char* txt, u8 col)
{
	char ch;
	while ((ch = *txt++) != 0)
	{
		InfoDispChar(ch, col);
	}
}

// shift info text position (clear with spaces
void InfoPos(u8 x)
{
	while (InfoX < x) InfoDispChar(' ', COL_BLACK);
}

const char SpeedTxt[] = "SPEED:";
const char TimeTxt[] = "TIME:";
const char LastTxt[] = "LAST:";
const char BestTxt[] = "BEST:";
const char RankTxt[] = "RANK:";
const char CheckTxt[] = "CHECK:";

char NumBuf[20];

// display time
void InfoTime(int t, u8 col)
{
	int min = t/60;
	int sec = t - min*60;
	int n = DecNum(NumBuf, min);
	NumBuf[n] = ':';
	n++;
	if (sec < 10)
	{
		NumBuf[n] = '0';
		n++;
	}
	DecNum(&NumBuf[n], sec);
	InfoDispText(NumBuf, col);
}

// display info row
void InfoRow()
{
	InfoX = 0;
	u8 x = 2;
	InfoPos(x);

#define COLTIT	COL_YELLOW
#define COLVAL COL_WHITE
#define COLBEST COL_GREEN

	// display Speed
	InfoDispText(SpeedTxt, COLTIT); x += 7; InfoPos(x);
	DecNum(NumBuf, (int)(Speed/SPEEDCOEF));
	InfoDispText(NumBuf, COLVAL);
	InfoDispChar('/', COLTIT);
	InfoDispChar((Gear < 0) ? 'R' : (Gear + '0'), COLVAL);
	x += 7; InfoPos(x);

	// display this time
	InfoDispText(TimeTxt, COLTIT);
	x += 6; InfoPos(x);
	InfoTime(ThisTime, COLVAL);
	x += 7; InfoPos(x);
	
	// display last time
	InfoDispText(LastTxt, COLTIT);
	x += 6; InfoPos(x);
	InfoTime(LastTime, NewBest ? COLBEST : COLVAL);
	x += 7; InfoPos(x);

	// display best time
	InfoDispText(BestTxt, COLTIT);
	x += 6; InfoPos(x);
	InfoTime(BestTime, NewBest ? COLBEST : COLVAL);
	x += 7; InfoPos(x);

	// display rank
	InfoDispText(RankTxt, COLTIT);
	x += 6; InfoPos(x);
	DecNum(NumBuf, Rank);
	InfoDispText(NumBuf, COLVAL);
	x += 4; InfoPos(x);

	// display check
	InfoDispText(CheckTxt, COLTIT);
	x += 7; InfoPos(x);
	int i;
	for (i = 0; i < CHECKNUM; i++)
	{
		InfoDispChar(CheckOK[i] ? 4 : 2, CheckCol[i]);
		x += 2; InfoPos(x);
	}
}

// initialize videomode
void VideoInit(u32 freq)
{
	// terminate current driver
	VgaInitReq(NULL);

	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &DRV; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.dbly = DBLY; // double Y
	Cfg.freq = freq; // minimal system clock
	Cfg.mode[CARLAYER] = LAYERMODE_PERSP2WHITE; // car
	Cfg.mode[GHOST1LAYER] = LAYERMODE_PERSP2WHITE; // ghost 1
	Cfg.mode[GHOST2LAYER] = LAYERMODE_PERSP2WHITE; // ghost 2
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);

	// info row
	sStrip* t = ScreenAddStrip(pScreen, TEXTH);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGText(g, Text, Font_Copy, 16, COL_BLACK, TextCol, TEXTMAX);
	InfoClear();

	// skyline
	t = ScreenAddStrip(pScreen, SKYLINEH);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, SkylineImg_Copy, SKYLINEW);

	// terrain
	t = ScreenAddStrip(pScreen, TERRAINH);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmTilePersp4(g, TileMap, TilesImg_Copy, MatInt, MAPWBITS, MAPHBITS, TILEBITS, HORIZ);

	// car
	LayerPerspSetup(CARLAYER, Car1Img_Copy, &Vmode, CARW2, CARH2, CARWBITS, CARHBITS, 0, Mat2Int);
	LayerSetX(CARLAYER, (WIDTH-CARW2)/2);
	LayerSetY(CARLAYER, HEIGHT-CARH2);
	LayerOn(CARLAYER);
	Mat2.PrepDrawImg(CARW, CARH, 0, 0, CARW2, CARH2, 0, 0, 0, CARW/2, CARH/2);
	Mat2.ExportInt(Mat2Int);

	// ghost 1
	LayerPerspSetup(GHOST1LAYER, Ghost1Img_Copy, &Vmode, GHOSTW, GHOSTH, GHOSTWBITS, GHOSTHBITS, 0, Mat3Int);
	LayerSetX(GHOST1LAYER, 100);
	LayerSetY(GHOST1LAYER, 100);
	Mat3.PrepDrawImg(GHOSTW, GHOSTH, 0, 0, GHOSTW, GHOSTH, 0, 0, 0, GHOSTW/2, GHOSTH/2);
	Mat3.ExportInt(Mat3Int);

	// ghost 2
	LayerPerspSetup(GHOST2LAYER, Ghost1Img_Copy, &Vmode, GHOSTW, GHOSTH, GHOSTWBITS, GHOSTHBITS, 0, Mat4Int);
	LayerSetX(GHOST2LAYER, 300);
	LayerSetY(GHOST2LAYER, 150);
	Mat4.PrepDrawImg(GHOSTW, GHOSTH, 0, 0, GHOSTW, GHOSTH, 0, 0, 0, GHOSTW/2, GHOSTH/2);
	Mat4.ExportInt(Mat4Int);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

// get character from keyboard (0 = no key)
char GetChar()
{
	char c = getchar_timeout_us(0);
	if (c == (char)PICO_ERROR_TIMEOUT) c = 0;
	if ((c >= 'a') && (c <= 'z')) c -= 32;
	return c;
}

// flush characters from keyboard
void FlushChar()
{
	while (GetChar() != 0) {}
}

int main()
{
	int t0, t2;
	float dt;

	// copy images
	memcpy(SkylineImg_Copy, SkylineImg, sizeof(SkylineImg));
	memcpy(Font_Copy, FontBold8x16, sizeof(FontBold8x16));
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));
	CopyWhiteImg(Car1Img_Copy, Car1Img, sizeof(Car1Img));
	CopyWhiteImg(Car2Img_Copy, Car2Img, sizeof(Car2Img));
	CopyWhiteImg(Car3Img_Copy, Car3Img, sizeof(Car3Img));
	CopyWhiteImg(Ghost1Img_Copy, Ghost1Img, sizeof(Ghost1Img));
	CopyWhiteImg(Ghost2Img_Copy, Ghost2Img, sizeof(Ghost2Img));
	CopyWhiteImg(Ghost3Img_Copy, Ghost3Img, sizeof(Ghost3Img));
	CopyWhiteImg(Ghost4Img_Copy, Ghost4Img, sizeof(Ghost4Img));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode
	VideoInit(170000);

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// display info row
	InfoRow();

	// time mark
	t0 = (int)time_us_64();

	// main loop
	while (true)
	{
		switch (GetChar())
		{
		// forward
		case 'I':
			Gear++;
			if (Gear > GEARMAX) Gear = GEARMAX;
			FlushChar();
			break;

		// back
		case 'K':
			Gear--;
			if (Gear < GEARMIN) Gear = GEARMIN;
			FlushChar();
			break;

		// left
		case 'J':
			if (CarTurn > -1) CarTurn--;
			FlushChar();
			break;

		// right
		case 'L':
			if (CarTurn < 1) CarTurn++;
			FlushChar();
			break;

		// no key
		case 0:
			break;

		// flush another keys
		default:
			printf("\nKeys:\n");
			printf("I ... gear up\n");
			printf("K ... gear down\n");
			printf("J ... turn left\n");
			printf("L ... turn right\n");
			FlushChar();
			break;
		}

		// delta time (at seconds)
		t2 = (int)time_us_64();
		dt = (t2 - t0)/1000000.f;
		t0 = t2;

		// update speed
		float s = (float)Gear*SPEEDCOEF*10; // required speed
		float s2 = Speed; // current speed
		Bool grass = (TileMap[CurTile] == GRASS); // car on grass
		if (grass && (s > SPEEDCOEF*10)) s = SPEEDCOEF*10; // slow down on grass
		if (s > s2) // required speed up
		{
			s2 += dt*ACCEL;
			if (s <= s2) s2 = s;
		}
		if (s < s2) // required speed down
		{
			s2 -= dt*ACCEL;
			if (grass) s2 -= 3*dt*ACCEL;
			if (s >= s2) s2 = s;
		}
		Speed = s2;

		// update turning
		if (Speed != 0)
		{
			float c = CarTurn*TURNSPEED * (6 - Speed/(SPEEDCOEF*10));
			if (Speed > 0)
				CarDir += c;
			else
				CarDir -= c;

			// normalize direction do range 0..2PI
			while (CarDir < 0) CarDir += PI2;
			while (CarDir >= PI2) CarDir -= PI2;
		}

		// update sound
		if (Speed == 0)
		{
			StopSound();
		}
		else
		{
			if (!PlayingSound())
			{
				PlaySound(EngineSnd, sizeof(EngineSnd), True, 1.0f);
			}
			SpeedSound(Speed/(SPEEDCOEF*10)/5);
		}

		// update car image
		switch (CarTurn)
		{
		case 1:
			LayerScreen[CARLAYER].img = Car3Img_Copy;
			break;

		case -1:
			LayerScreen[CARLAYER].img = Car2Img_Copy;
			break;

		default:
			LayerScreen[CARLAYER].img = Car1Img_Copy;
			break;
		}

		// update position
		CarY += - s2 * dt * cos(CarDir);
		CarX += s2 * dt * sin(CarDir);

		// update terrain
		Mat.PrepDrawImg(TILESIZE, TILESIZE, 0, TILESIZE*3, WIDTH, WIDTH, 0, 0, CarDir, CarX, CarY);
		Mat.ExportInt(MatInt);

		// update skyline
		pScreen->strip[1].seg[0].offx = CarDir*2*SKYLINEW/PI;

		// update time counter
		if (Rank > 0) // game started
		{
			ThisTime = (int)((time_us_64() - StartTime)/1000000);
		}

		// current tile
		int x = (int)((CarX+1024*TILESIZE)/TILESIZE) & (MAPW-1);
		int y = (int)((CarY+1024*TILESIZE)/TILESIZE) & (MAPH-1);
		CurTile = x + y*MAPW;

		// game goal
		u8 tile = TileMap[CurTile]; // get current tile
		if (tile == CheckNext)
		{
			switch (tile)
			{
			// start tile
			case START:

				if (Rank > 0) // game started
				{
					// process last lap
					LastTime = ThisTime;

					// new best time
					NewBest = False;
					if ((LastTime < BestTime) || (BestTime == 0))
					{
						BestTime = LastTime;
						NewBest = True;
					}

					// check rank
					if (LastTime < Hist[0])
					{
						Hist[2] = Hist[1];
						Hist[1] = Hist[0];
						Hist[0] = LastTime;
						Rank = 1;
					}
					else
					{
						if (LastTime < Hist[1])
						{
							Hist[2] = Hist[1];
							Hist[1] = LastTime;
							Rank = 2;
						}
						else
							Rank = 3;
					}

					// start ghost
					if (RecordInx[1] < 0)
						RecordInx[1] = 0;
					else if (RecordInx[2] < 0)
						RecordInx[2] = 0;
				}
				else
				{
					// start game
					Rank = 1;
					RecordStep = (u32)time_us_64();;
				}

				// start new lap
				StartTime = time_us_64();
				CheckNext = CHECKA;
				CheckOK[0] = False;
				CheckOK[1] = False;
				CheckOK[2] = False;
				break;

			// check point A
			case CHECKA:
				CheckOK[0] = True;
				CheckNext = CHECKB;
				break;

			// check point B
			case CHECKB:
				CheckOK[1] = True;
				CheckNext = CHECKC;
				break;

			// check pojnt C
			case CHECKC:
				CheckOK[2] = True;
				CheckNext = START;
				break;
			}
		}

		// record step delta
		int i;
		int dif = (int)((u32)time_us_64() - RecordStep);

		// display ghost 1
		int ghost;
		for (ghost = 1; ghost <= 2; ghost++)
		{
			i = RecordInx[1];
			if (i >= 0)
			{
				// X coordinate
				float x1 = RecordX[i];
				float x2 = RecordX[(i+1)&(RECORDMAX-1)];
				float x = (x2 - x1)*dif/1000000 + x1;
				x = x - CarX;

				// Y coordinate
				float y1 = RecordY[i];
				float y2 = RecordY[(i+1)&(RECORDMAX-1)];
				float y = (y2 - y1)*dif/1000000 + y1;
				y = y - CarY;

				// direction
				float d = RecordDir[i];

				// angle of vector to ghost
				float a = atan2(y, x);
				float a0 = a;

				// distane of vector to ghost
				float k = sqrt(y*y + x*x);
				if (k < 1) k = 1;

				// view angle
				a = a - CarDir + PI/2;
				while (a < -PI) a += PI2;
				while (a > PI) a -= PI2;

				// check if view angle is out of view frustum (frustrum is +- 45 deg)
				if ((a < -PI/3) || (a > PI/3))
				{
					// not visible
					LayerOff(ghost+1);
				}
				else
				{
					// relative coordinates to the viewer
					x2 = sin(a)*k;
					y2 = cos(a)*k;

					// ghost size (@TODO: incorrect calculations!)
					float s = 400/(k+200);
					int wd = (int)(GHOSTW*s);
					int hd = (int)(GHOSTH*s);
					if (wd < 50) wd = 0;
					wd = ALIGN4(wd);

					// update ghost image
					if (ghost == 1)
					{
						Mat3.PrepDrawImg(GHOSTW, GHOSTH, 0, 0, wd, hd, 0, 0, 0, GHOSTW/2, GHOSTH/2);
						Mat3.ExportInt(Mat3Int);
					}
					else
					{
						Mat4.PrepDrawImg(GHOSTW, GHOSTH, 0, 0, wd, hd, 0, 0, 0, GHOSTW/2, GHOSTH/2);
						Mat4.ExportInt(Mat4Int);
					}

					LayerSetW(ghost+1, wd);
					LayerScreen[ghost+1].wb = GHOSTW;
					LayerSetH(ghost+1, hd);

					// ghost direction
					d -= a0 + PI/2;
					while (d < -PI) d += PI2;
					while (d > PI) d -= PI2;
					if ((d >= -PI/4) && (d < PI/4))
						LayerScreen[ghost+1].img = Ghost1Img_Copy; // back
					else if ((d < -PI*3/4) || (d >= PI*3/4))
						LayerScreen[ghost+1].img = Ghost3Img_Copy; // front
					else if (d < 0)
						LayerScreen[ghost+1].img = Ghost2Img_Copy; // left
					else
						LayerScreen[ghost+1].img = Ghost4Img_Copy; // right

					// ghost position on the screen (@TODO: incorrect calculations!)
					int x0 = (int)((tan(a) + 1)*WIDTH/2) - wd/2;
					int y0 = (int)(TERRAINH/(y2+10)/(y2+10)/(y2+10)) + TEXTH + SKYLINEH;

					// check if coordinates are valid
					if ((wd > 0) && (hd > 0) && 
						(x0 >= 0) && ((x0 + wd) < WIDTH) && 
						(y0 >= 0) && ((y0 + hd) < TERRAINH))
					{
						// set ghost position on the screen
						LayerSetX(ghost+1, x0);
						LayerSetY(ghost+1, y0);

						// set visible
						LayerOn(ghost+1);
					}
					else
					{
						// not visible
						LayerOff(ghost+1);
					}
				}
			}
		}

		// record game (every 1 second)
		if ((Rank > 0) && (dif >= 1000000))
		{
			RecordStep += 1000000;
			i = RecordInx[0];
			RecordX[i] = CarX;
			RecordY[i] = CarY;
			RecordDir[i] = CarDir;

			i = (i + 1) & (RECORDMAX-1);
			if ((i != RecordInx[1]) && (i != RecordInx[0])) // check buffer overflow
			{
				RecordInx[0] = i;
			}

			// shift ghosts
			if (RecordInx[1] >= 0)
			{
				RecordInx[1] = (RecordInx[1] + 1) & (RECORDMAX-1);
			}

			if (RecordInx[2] >= 0)
			{
				RecordInx[2] = (RecordInx[2] + 1) & (RECORDMAX-1);
			}
		}

		// display info
		InfoRow();

		// some delay
		sleep_ms(20);

/*
		// check tile coordinates (visible as blinking tile under car)
		TileMap[CurTile] ^= 1;
		sleep_ms(100);
		TileMap[CurTile] ^= 1;
		sleep_ms(100);
*/
	}
}

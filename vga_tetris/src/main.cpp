
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

#define BASEBRICKNUM 7	// number of basebricks
#define BRICKTEMPNUM 19	// number of brick templates
#define BRICKTEMPSIZE 16 // size of one brick template

#define LEVELNUM	10	// number of levels

u8 Level;	// current level (1..)
u8 LevelBest;	// best level
u8 Brick;	// current brick (0..18)
u8 NextBrick;	// nextbrick (0..18)
s8 BrickX, BrickY; // brick coordinates
Bool Falling;	// brick is falling
int BrickScore;	// score of current brick
u32 Score;	// game score
u32 ScoreBest;	// best game score
int StepSpeed;	// step speed
int SpeedCnt;	// speed counter
int Lines;	// lines
int LinesBest;	// best lines
int NextLevel; 	// next level
Bool Demo;	// demo mode

int Stat[BASEBRICKNUM]; // brick statistic

// copy of tiles images
ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];

// game board
u8 Board[MAPSIZE];

// buffer to save screen to display message
u8 SaveBoard[MAPSIZE];

// board template
const u8 BoardTemp[MAPSIZE] = {
	9,  9,  9,  9,  9,  9,  9, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12,  0, 26, 27, 28, 29,  0,  0,  9,
	9,  0,  0, 18, 19,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  1,  1,  1,  1, 52, 53,  9,
	9,  0,  0,  0,  0,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  0,  0,  0,  0,  9,
	9,  0,  0,  0,  0,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  2,  2,  0,  0,  0,  9,
	9,  0,  0,  0,  0,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  2,  2,  0, 54, 55,  9,
	9,  0,  0,  0,  0,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  0,  0,  0,  0,  9,
	9,  9,  9,  9,  9,  9,  9, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  3,  3,  3,  0,  0,  0,  9,
	9,  9,  9,  9,  9,  9,  9, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  3,  0,  0,  0, 56, 57,  9,
	9,  0,  0, 20, 21,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  0,  0,  0,  0,  9,
	9,  0,  0, 46, 47,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  4,  4,  4,  0,  0,  0,  9,
	9,  0,  0, 66, 67,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  4,  0, 58, 59,  9,
	9,  9,  9,  9,  9,  9,  9, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  0,  0,  0,  0,  9,
	9,  0,  0, 22, 23,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  5,  5,  0,  0,  0,  0,  9,
	9,  0,  0, 48, 49,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  5,  5,  0, 60, 61,  9,
	9,  0,  0, 68, 69,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  0,  0,  0,  0,  9,
	9,  9,  9,  9,  9,  9,  9, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  6,  6,  0,  0,  0,  9,
	9,  0,  0, 24, 25,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  6,  6,  0,  0, 62, 63,  9,
	9,  0,  0, 50, 51,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  0,  0,  0,  0,  0,  0,  9,
	9,  0,  0, 70, 71,  0,  0, 13,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 14,  0,  7,  7,  7,  0,  0,  0,  9,
	9,  9,  9,  9,  9,  9,  9, 15, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 17,  0,  0,  7,  0,  0, 64, 65,  9,
};

// message - pause
const u8 PauseMsg[8] = { TILE_PAUSE1, TILE_PAUSE1, TILE_PAUSE2, TILE_PAUSE3, TILE_PAUSE4, TILE_PAUSE5, TILE_PAUSE1, TILE_PAUSE1 };

// message - game over
const u8 OverMsg[10] = { TILE_PAUSE1, TILE_PAUSE1, TILE_OVER1, TILE_OVER2, TILE_OVER3, TILE_OVER4, TILE_OVER5, TILE_OVER6, TILE_PAUSE1, TILE_PAUSE1 };

// message - next level
const u8 LevelMsg[8] = { TILE_LEVEL0, TILE_LEVEL0, TILE_LEVEL1, TILE_LEVEL2, TILE_LEVEL3, TILE_LEVEL4, TILE_LEVEL0, TILE_LEVEL0 };

// bricks templates (rotations are in counterclockwise direction)
const u8 BrickTemp[BRICKTEMPNUM*BRICKTEMPSIZE] = {
	// 0 (7)
	0, 0, 0, 0,
	1, 1, 1, 1,
	0, 0, 0, 0,
	0, 0, 0, 0,

	// 1
	0, 0, 0, 0,
	0, 2, 2, 0,
	0, 2, 2, 0,
	0, 0, 0, 0,

	// 2 (8) (9) (10)
	0, 0, 0, 0,
	3, 3, 3, 0,
	3, 0, 0, 0,
	0, 0, 0, 0,

	// 3 (11) (12) (13)
	0, 0, 0, 0,
	4, 4, 4, 0,
	0, 0, 4, 0,
	0, 0, 0, 0,

	// 4 (14)
	0, 0, 0, 0,
	5, 5, 0, 0,
	0, 5, 5, 0,
	0, 0, 0, 0,

	// 5 (15)
	0, 0, 0, 0,
	0, 6, 6, 0,
	6, 6, 0, 0,
	0, 0, 0, 0,

	// 6 (16) (17) (18)
	0, 0, 0, 0,
	7, 7, 7, 0,
	0, 7, 0, 0,
	0, 0, 0, 0,

	// (0) 7
	0, 1, 0, 0,
	0, 1, 0, 0,
	0, 1, 0, 0,
	0, 1, 0, 0,

	// (2) 8 (9) (10)
	0, 3, 0, 0,
	0, 3, 0, 0,
	0, 3, 3, 0,
	0, 0, 0, 0,

	// (2) (8) 9 (10)
	0, 0, 0, 0,
	0, 0, 3, 0,
	3, 3, 3, 0,
	0, 0, 0, 0,

	// (2) (8) (9) 10
	3, 3, 0, 0,
	0, 3, 0, 0,
	0, 3, 0, 0,
	0, 0, 0, 0,

	// (3) 11 (12) (13)
	0, 4, 4, 0,
	0, 4, 0, 0,
	0, 4, 0, 0,
	0, 0, 0, 0,

	// (3) (11) 12 (13)
	0, 0, 0, 0,
	4, 0, 0, 0,
	4, 4, 4, 0,
	0, 0, 0, 0,

	// (3) (11) (12) 13
	0, 4, 0, 0,
	0, 4, 0, 0,
	4, 4, 0, 0,
	0, 0, 0, 0,

	// (4) 14
	0, 5, 0, 0,
	5, 5, 0, 0,
	5, 0, 0, 0,
	0, 0, 0, 0,

	// (5) 15
	0, 6, 0, 0,
	0, 6, 6, 0,
	0, 0, 6, 0,
	0, 0, 0, 0,

	// (6) 16 (17) (18)
	0, 7, 0, 0,
	0, 7, 7, 0,
	0, 7, 0, 0,
	0, 0, 0, 0,

	// (6) (16) 17 (18)
	0, 0, 0, 0,
	0, 7, 0, 0,
	7, 7, 7, 0,
	0, 0, 0, 0,

	// (6) (16) (17) 18
	0, 7, 0, 0,
	7, 7, 0, 0,
	0, 7, 0, 0,
	0, 0, 0, 0,
};

// brick rotations
const u8 BrickRot[BRICKTEMPNUM] = {
//	0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18
	7,  1,  8, 11, 14, 15, 16,  0,  9, 10,  2, 12, 13,  3,  4,  5, 17, 18,  6,
};

// level score
const int LevScore[LEVELNUM] = { 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };

// count lines to next level
const int NextLevelTab[LEVELNUM] = { 10, 20, 50, 100, 150, 250, 400, 500, 700, 1000000000 };

#define TIMEDELAY	10 	// base time delay

#define SPEEDFALL	TIMEDELAY // falling speed

// level speed (step delay in [ms] - should be multiply of TIMEDELAY)
const int LevSpeed[LEVELNUM] = { 1000, 700, 500, 350, 250, 200, 180, 150, 120, 100 };

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... right\n", KEY_R);
	printf("%c ... up\n", KEY_U);
	printf("%c ... left\n", KEY_L);
	printf("%c or space ... down\n", KEY_D);
	printf("%c ... pause\n", KEY_PAUSE);
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

// display number on 2 tiles
char NumBuf[12];
void DispTileNum(u8 tile, int num, u8 col)
{
#define TILENUM_Y	0

	// decode number and split to 2 parts (2nd part is longer)
	int n = DecNum(NumBuf, num);
	int n1 = n/2;
	int n2 = n - n1;

	// print 2nd part of number
	DrawTextBg(&Canvas, &NumBuf[n1], 0, TILENUM_Y + (tile+1)*TILESIZE, col, COL_BLACK, FontBold8x16, 16);

	// print 1st part of number
	if (n1 > 0)
	{
		NumBuf[n1] = 0;
		DrawTextBg(&Canvas, NumBuf, TILESIZE-n1*8, TILENUM_Y + tile*TILESIZE, col, COL_BLACK, FontBold8x16, 16);
	}

	// clear space in front of number
	if (n1 < 3) DrawRect(&Canvas, 0, TILENUM_Y + tile*TILESIZE, (3-n1)*8, 16, COL_BLACK);

	// clear space behind number
	if (n2 < 3) DrawRect(&Canvas, n2*8, TILENUM_Y + (tile+1)*TILESIZE, (3-n2)*8, 16, COL_BLACK);
}

// display score
void DispScore()
{
	// display score
	DispTileNum(TILE_SCOREV1, Score, COL_WHITE);
	DispTileNum(TILE_SCOREV3, ScoreBest, COL_YELLOW);

	// display lines
	DispTileNum(TILE_LINESV1, Lines, COL_WHITE);
	DispTileNum(TILE_LINESV3, LinesBest, COL_YELLOW);

	// display speed
	DispTileNum(TILE_SPEEDV1, Level, COL_WHITE);
	DispTileNum(TILE_SPEEDV3, LevelBest, COL_YELLOW);
}

// display statistics
void DispStat()
{
	int i;
	for (i = 0; i < BASEBRICKNUM; i++) DispTileNum(TILE_STAT1 + i*2, Stat[i], COL_WHITE);
}

// display brick
void DispBrick(s8 x, s8 y, u8 brick)
{
	// get brick template
	const u8* s = &BrickTemp[brick*BRICKTEMPSIZE];

	// prepare destination address
	u8* d = &Board[x + y*MAPW];

	// rows
	int i, j;
	u8 b;
	for (i = 4; i > 0; i--)
	{
		// columns
		for (j = 4; j > 0; j--)
		{
			b = *s++;
			if (b != 0) *d = b;
			d++;
		}
		d += MAPW-4;
	}
}

// clear brick
void ClearBrick(s8 x, s8 y, u8 brick)
{
	// get brick template
	const u8* s = &BrickTemp[brick*BRICKTEMPSIZE];

	// prepare destination address
	u8* d = &Board[x + y*MAPW];

	// rows
	int i, j;
	u8 b;
	for (i = 4; i > 0; i--)
	{
		// columns
		for (j = 4; j > 0; j--)
		{
			b = *s++;
			if (b != 0) *d = TILE_EMPTY;
			d++;
		}
		d += MAPW-4;
	}
}

// check brick (output False on check error)
Bool CheckBrick(s8 x, s8 y, u8 brick)
{
	// get brick template
	const u8* s = &BrickTemp[brick*BRICKTEMPSIZE];

	// prepare destination address
	u8* d = &Board[x + y*MAPW];

	// rows
	int i, j;
	Bool ok = True;
	u8 b;
	for (i = 4; i > 0; i--)
	{
		// columns
		for (j = 4; j > 0; j--)
		{
			b = *s++;
			if (b != 0)
			{
				if ((y < 1) || (y >= MAPH-1))
					ok = False;
				else
				{
					if (*d != TILE_EMPTY) ok = False;
				}
			}
			d++;
		}
		d += MAPW-4;
		y++;
	}
	return ok;
}

// calculate score of the brick (= sum of Y of stones)
int ScoreBrick(s8 x, s8 y, u8 brick)
{
	// get brick template
	const u8* s = &BrickTemp[brick*BRICKTEMPSIZE];

	// prepare destination address
	u8* d = &Board[x + y*MAPW];

	// rows
	int i, j;
	int score = 0;
	u8 b;
	for (i = 4; i > 0; i--)
	{
		// columns
		for (j = 4; j > 0; j--)
		{
			b = *s;
			if (b != 0)
			{
				score += (int)y*y;

				if (y > 2)
				{
					// minus score on empty neighbors
					if ((y < MAPH-2) &&
						(d[MAPW] == TILE_EMPTY) &&
						((i == 1) || (s[4] == 0)))
						score -= 10;

					if ((d[-1] == TILE_EMPTY) &&
						((j == 4) || (s[-1] == 0)))
						score -= 2;

					if ((d[1] == TILE_EMPTY) &&
						((j == 1) || (s[1] == 0)))
						score -= 2;
				}
			}
			s++;
			d++;
		}
		d += MAPW-4;
		y++;
	}
	return score;
}

// display next brick
void DispNext()
{
	// get brick template
	const u8* s = &BrickTemp[NextBrick*BRICKTEMPSIZE];

	// destination
	u8* d = &Board[2 + 2*MAPW];

	// display brick
	int i;
	for (i = 4; i > 0; i--)
	{
		memcpy(d, s, 4);
		d += MAPW;
		s += 4;
	}
}

// delete row of the stones
void DelRow(u8 y)
{
	u8 i, j;
	u8* s;

	// sound
	PlaySound(LineSnd, sizeof(LineSnd));

	// increment lines
	Lines++;
	DispScore();

	// shift full row out
	for (i = 10; i > 0; i--)
	{
		s = &Board[y*MAPW + 8];
		for (j = 9; j > 0; j--)
		{
			s[0] = s[1];
			s++;
		}
		s[0] = TILE_EMPTY;

		sleep_ms(50);
	}

	// move higher stones down
	for (; y > 1; y--)
	{
		s = &Board[y*MAPW + 8];
		for (j = 10; j > 0; j--)
		{
			*s = s[-MAPW];
			s++;
		}
	}

	// empty last row
	s = &Board[y*MAPW + 8];
	for (j = 10; j > 0; j--)
	{
		*s = TILE_EMPTY;
		s++;
	}
}

// delete rows
void DelAllRows()
{
	int i, y;
	u8* s;
	Bool ok;

	// search full rows
	for (y = MAPH-2; y > 1; y--)
	{
		s = &Board[y*MAPW + 8];
		ok = True;
		for (i = 10; i > 0; i--)
		{
			if (*s == TILE_EMPTY)
			{
				ok = False;
				break;
			}
			s++;
		}

		// delete thist row
		if (ok)
		{
			DelRow(y);
			y++; // stay at this row
			NextLevel--;
		}
	}

	// next level
	if ((NextLevel <= 0) && (Level < LEVELNUM) && !Demo)
	{
		// increse level
		Level++;
		DispScore();
		NextLevel = NextLevelTab[Level-1];

		// play sound
		PlaySound(LevelUpSnd, sizeof(LevelUpSnd));

		// save board
		memcpy(SaveBoard, Board, MAPSIZE);

		// display message
		memcpy(&Board[MAPW/2-4 + MAPH/2*MAPW], LevelMsg, 8);

		// wait
		sleep_ms(1000);

		// restore board
		memcpy(Board, SaveBoard, MAPSIZE);

		// wait
		FlushChar();
		sleep_ms(200);
	}
}

// generate next brick
void GenBrick()
{
	// catch current brick from next brick
	Brick = NextBrick;

	// update statistics of current brick
	Stat[Brick]++;

	// display statistics
	DispStat();

	// gnerate next brick
	NextBrick = RandU8Max(BASEBRICKNUM-1);

	// display next brick
	DispNext();

	// brick coordinate
	BrickX = MAPW/2-2;
	BrickY = 0;

	// prepare brick score
	BrickScore = LevScore[Level-1];

	// prepare step speed
	SpeedCnt = StepSpeed;

	// not falling
	Falling = False;
}

// check brick and save new position if OK
Bool CheckBrickSave(s8 x, s8 y, u8 brick)
{
	Bool res = CheckBrick(x, y, brick);
	if (res)
	{
		BrickX = x;
		BrickY = y;
		Brick = brick;
	}
	return res;
}

// check brick with moving to left and right
Bool CheckBrickX(s8 x, s8 y, u8 brick)
{
	if (CheckBrickSave(x, y, brick)) return True;
	if (CheckBrickSave(x-1, y, brick)) return True;
	if (CheckBrickSave(x+1, y, brick)) return True;
	if (CheckBrickSave(x-2, y, brick)) return True;
	return CheckBrickSave(x+2, y, brick);
}

// check brick with moving down
Bool CheckBrickY(s8 x, s8 y, u8 brick)
{
	if (CheckBrickX(x, y, brick)) return True;
	if (CheckBrickX(x, y+1, brick)) return True;
	return CheckBrickX(x, y+2, brick);
}

// start new game
void NewGame()
{
	// initialize board
	memcpy(Board, BoardTemp, MAPSIZE);

	// generate this brick
	NextBrick = 0;
	GenBrick();

	// clear variables
	Level = 1; // current level (1..)
	NextLevel = NextLevelTab[0]; // next level counter
	Score = 0;	// game score
	Lines = 0;	// lines
	int i;
	for (i = 0; i < BASEBRICKNUM; i++) Stat[i] = 0;
	StepSpeed = LevSpeed[Level-1];

	// generate next brick (and update statistics)
	GenBrick();

	// display score and statistics
	DispScore();
	DispStat();

	// display current brick
	DispBrick(BrickX, BrickY, Brick);
}

// check end game (returns True to continue)
Bool CheckEnd()
{
	int i;

	// check new brick on start position
	if (!CheckBrick(BrickX, BrickY, Brick))
	{
		// best score
		if (!Demo)
		{
			if (Level > LevelBest) LevelBest = Level;
			if (Score > ScoreBest) ScoreBest = Score;
			if (Lines > LinesBest) LinesBest = Lines;
			DispScore();
		}

		// play sound
		PlaySound(GameOverSnd, sizeof(GameOverSnd));

		// save board
		memcpy(SaveBoard, Board, MAPSIZE);

		// loop 2 seconds
		for (i = 10; i > 0; i--)
		{
			// display message
			memcpy(&Board[MAPW/2-5 + MAPH/2*MAPW], OverMsg, 10);

			// wait
			sleep_ms(100);

			// restore board
			memcpy(Board, SaveBoard, MAPSIZE);

			// wait
			sleep_ms(100);
		}

		if (Demo) return False;

		// display message
		memcpy(&Board[MAPW/2-5 + MAPH/2*MAPW], OverMsg, 10);

		// wait for a key
		FlushChar();
		while (GetChar() == 0) {}

		// restore board
		memcpy(Board, SaveBoard, MAPSIZE);

		return False;
	}

	// game is OK
	return True;
}

// pause game (returns True = continue, False = timeout)
Bool Pause(Bool timeout)
{
	// save board
	memcpy(SaveBoard, Board, MAPSIZE);

	// display message
	memcpy(&Board[MAPW/2-4 + MAPH/2*MAPW], PauseMsg, 8);

	// wait key (returns False on timeout)
	FlushChar();
	int i;
	for (i = (timeout ? 100 : 1000000000) ; i > 0; i--)
	{
		if (GetChar() != 0) break;
		sleep_ms(100);
	}

	// restore board
	memcpy(Board, SaveBoard, MAPSIZE);

	return i > 0; // i > 0 if continue with user
}

// process game
void Game()
{
	u8 b;
	char ch;

	// start new game
	NewGame();

	// pause (return on timeout)
	if (!Pause(True)) return;

	// game loop
	while (True)
	{
		// step counter
		sleep_ms(TIMEDELAY);
		SpeedCnt -= TIMEDELAY;
		if (SpeedCnt <= 0)
		{
			// clear current brick
			ClearBrick(BrickX, BrickY, Brick);

			// check new position
			if (!CheckBrick(BrickX, BrickY+1, Brick))
			{
				// display brick
				DispBrick(BrickX, BrickY, Brick);

				// update score
				Score += BrickScore;
				DispScore();

				// sound
				PlaySound(BrickSnd, sizeof(BrickSnd));

				// delete rows
				DelAllRows();

				// short delay
				sleep_ms(50);

				// generate new brick
				GenBrick();

				// check end of the game
				if (!CheckEnd())
				{
					// start new game
					NewGame();

					// pause (return on timeout)
					if (!Pause(True)) return;
				}
				else
					// display new brick
					DispBrick(BrickX, BrickY, Brick);
			}

			// move brick down
			else
			{
				BrickY++;
				DispBrick(BrickX, BrickY, Brick);
				SpeedCnt = Falling ? SPEEDFALL : StepSpeed;
				if (!Falling && (BrickScore > 0)) BrickScore--;
			}
		}

		// key service if not falling
		if (!Falling)
		{
			// keyboard
			ch = GetChar();
			switch (ch)
			{
			// right
			case KEY_R:
				// clear current brick
				ClearBrick(BrickX, BrickY, Brick);

				// check new position
				if (CheckBrick(BrickX+1, BrickY, Brick)) BrickX++;
				
				// display brick
				DispBrick(BrickX, BrickY, Brick);
				break;

			// left
			case KEY_L:
				// clear current brick
				ClearBrick(BrickX, BrickY, Brick);

				// check new position
				if (CheckBrick(BrickX-1, BrickY, Brick)) BrickX--;
				
				// display brick
				DispBrick(BrickX, BrickY, Brick);
				break;

			// down - falling
			case KEY_D:
			case ' ':
				Falling = True;
				if (SpeedCnt > SPEEDFALL) SpeedCnt = SPEEDFALL;
				break;

			// up - rotate
			case KEY_U:
				// clear current brick
				ClearBrick(BrickX, BrickY, Brick);

				// get new brick
				b = BrickRot[Brick];

				// try rotate brick, find nearest free space
				CheckBrickY(BrickX, BrickY, b);

				// display brick
				DispBrick(BrickX, BrickY, Brick);
				break;

			// pause
			case KEY_PAUSE:
				Pause(False);
				break;
	
			case 0:
				break;

			// help
			default:
				DispHelp();
				FlushChar();
				break;
			}
		}
	}
}

// find demo move
void FindDemo()
{
	int i, rot;
	int score, newbrick; // current score
	int bestscore, bestx, besty, bestbrick; // best move
	int savex, savey, savebrick; // save state

	// clear best score
	bestscore = 0;
	bestx = BrickX;
	besty = BrickY;
	bestbrick = Brick;

	// clear brick
	ClearBrick(BrickX, BrickY, Brick);

	// rotations
	for (rot = 4; rot > 0; rot--)
	{
		// get new brick
		newbrick = BrickRot[Brick];

		// try rotate brick, find nearest free space
		CheckBrickY(BrickX, BrickY, newbrick);

		// move brick left
		while (CheckBrick(BrickX-1, BrickY, Brick)) BrickX--;

		// loop all positions
		while (True)
		{
			// save current state
			savex = BrickX;
			savey = BrickY;
			savebrick = Brick;

			// move down
			while (CheckBrick(BrickX, BrickY+1, Brick)) BrickY++;

			// calculate score
			score = ScoreBrick(BrickX, BrickY, Brick);

			// restore state
			Brick = savebrick;
			BrickX = savex;
			BrickY = savey;

			// found better score
			if ((score > bestscore) || ((score == bestscore) && (RandU8() < 0x50)))
			{
				bestscore = score;
				bestx = savex;
				besty = savey;
				bestbrick = savebrick;
			}

			// increment X position
			if (!CheckBrick(BrickX+1, BrickY, Brick)) break;
			BrickX++;
		}
	}

	// display brick on new best position
	BrickX = bestx;
	BrickY = besty;
	Brick = bestbrick;
	DispBrick(BrickX, BrickY, Brick);
}

// demo mode
void PlayDemo()
{
	// start demo moe
	Demo = True;
	
	// start new game
	NewGame();

	// game loop
	while (True)
	{
		// break
		if (GetChar() != 0) break;

		// find demo move
		FindDemo();

		// display new brick
		sleep_ms(200);

		// move brick down
		while (True)
		{
			// delay
			sleep_ms(5*TIMEDELAY);

			// clear current brick
			ClearBrick(BrickX, BrickY, Brick);

			// check new position
			if (!CheckBrick(BrickX, BrickY+1, Brick)) break;

			BrickY++;
			DispBrick(BrickX, BrickY, Brick);
		}

		// display brick
		DispBrick(BrickX, BrickY, Brick);

		// update score
		Score += BrickScore;
		DispScore();

		// sound
		PlaySound(BrickSnd, sizeof(BrickSnd));

		// delete rows
		DelAllRows();

		// short delay
		sleep_ms(200);

		// generate new brick
		GenBrick();

		// check end of the game
		if (!CheckEnd()) break;

		// display new brick
		DispBrick(BrickX, BrickY, Brick);

		// display new brick
		sleep_ms(200);
	}

	// stop demo mode
	Demo = False;
}

int main()
{
	int i;
	char ch;

	// initialize random number generator
	RandInitSeed();

	// copy tiles images to RAM buffer
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));

	// initialize videomode
	Video(DEV_VGA, RES_VGA, FORM_TILE24, Board, TilesImg_Copy);

	// prepare tile canvas
	Canvas.img = TilesImg_Copy;
	Canvas.w = TILESIZE;
	Canvas.h = sizeof(TilesImg)/TILESIZE;
	Canvas.wb = TILESIZE;
	Canvas.format = CANVAS_8;

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// display help
	DispHelp();

	// best level
	LevelBest = 1;
	ScoreBest = 0;
	LinesBest = 0;
	Demo = False;

	// main loop
	while (True)
	{
		// game
		Game();

		// demo mode
		PlayDemo();
	}
}

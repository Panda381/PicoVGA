
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTH*HEIGHT];

// game board
u8 Board[BOARDSIZE0];

// canvas
sCanvas CompCanvas;
sCanvas SelCanvas;

// board template
const u8 BoardTemp[BOARDSIZE0] = {
	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,
	1,	8,	9,	9,	9,	9,	9,	9,	9,	9,	10,	1,
	1,	11,	1,	1,	1,	1,	1,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	1,	1,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	1,	1,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	4,	4,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	4,	4,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	1,	1,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	1,	1,	1,	1,	1,	12,	1,
	1,	11,	1,	1,	1,	1,	1,	1,	1,	1,	12,	1,
	1,	13,	14,	14,	14,	14,	14,	14,	14,	14,	15,	1,
	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,
};

// directions
s8 DirX[8] = {  1,  1,  0, -1, -1, -1,  0,  1 };
s8 DirY[8] = {  0,  1,  1,  1,  0, -1, -1, -1 };

// copy tiles
ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];

// players
int Stones[2];	// number of stones (player 1: number of eggs, player 2: number of hens)
int Wins[2];	// number of wins
Bool Comp[2];	// player is computer
u8 Player;	// active player (0 or 1, 2=no player)
u8 CurX, CurY;	// cursor position
u8 CurBlink;	// blinking cursor
u8 Pos;		// number of possible positions
u8 Free;	// number of free positions

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

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... right\n", KEY_R);
	printf("%c ... up\n", KEY_U);
	printf("%c ... left\n", KEY_L);
	printf("%c ... down\n", KEY_D);
	printf("%c ... help turn\n", KEY_HELP);
	printf("%c ... quit, restart game\n", KEY_QUIT);
	printf("%c ... 2 players\n", KEY_PLAY);
	printf("%c ... demo\n", KEY_DEMO);
	printf("Space ... play eggs, put stone\n");
	printf("Enter ... play hens, put stone\n");
}

// get board on coordinates (adds game start coordinate)
u8 GetBoard(s8 x, s8 y)
{
	return Board[x+2 + (y+2)*BOARDW0];
}

// set board on coordinates (adds game start coordinates)
void SetBoard(s8 x, s8 y, u8 tile)
{
	Board[x+2 + (y+2)*BOARDW0] = tile;
}

// set cursor on
void CurOn()
{
	u8 c = GetBoard(CurX, CurY);
	if ((c >= TILE_OFFMIN) && (c <= TILE_OFFMAX))
	{
		SetBoard(CurX, CurY, c - TILE_OFFMIN + TILE_ONMIN);
	}
	CurBlink = 0;
}

// set cursor off
void CurOff()
{
	u8 c = GetBoard(CurX, CurY);
	if ((c >= TILE_ONMIN) && (c <= TILE_ONMAX))
	{
		SetBoard(CurX, CurY, c - TILE_ONMIN + TILE_OFFMIN);
	}
}

// discovery stones in one direction (returns number of stones; cursor must be off)
u8 GetStones1(s8 x, s8 y, s8 dx, s8 dy)
{
	u8 c;
	u8 steps = 0;
	u8 stones = 0;
	do {
		// do step
		x += dx;
		y += dy;

		// if chicken, number of steps is valid
		c = GetBoard(x, y);
		if (c == TILE_CHICKEN) stones = steps;

		// increase number of steps
		steps++;

	// while tile is valid
	} while ((c == TILE_EGG) || (c == TILE_CHICKEN) || (c == TILE_HEN));

	return stones;
}

// discovery stones in all directions (returns number of stones; cursor must be off)
u8 GetStones(s8 x, s8 y)
{
	u8 stones = 0;
	int i;
	for (i = 0; i < 8; i++) stones += GetStones1(x, y, DirX[i], DirY[i]);
	return stones;
}

// display possible positions (cursor must be off)
void DispPos()
{
	s8 x, y;
	u8 stones;
	u8 c;

	// clear number of possible positions
	Pos = 0;

	// loop through all game tiles
	for (y = 0; y < BOARDH; y++)
	{
		for (x = 0; x < BOARDW; x++)
		{
			// check if this tile is empty
			c = GetBoard(x, y);
			if ((c == TILE_EMPTY) || (c == TILE_DOT))
			{
				// count number of stones
				if (GetStones(x, y) > 0)
				{
					// increase number of possible positions
					Pos++;
					SetBoard(x, y, TILE_DOT);
				}
				else
					SetBoard(x, y, TILE_EMPTY);
			}
		}
	}
}

// start open page (returns character)
char OpenScreen()
{
	ScreenClear(pScreen);

	// black strip
	sStrip* t = ScreenAddStrip(pScreen, 8);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmColor(g, 0, 0);

	// copy open image
	memcpy(Box, OpenImg, sizeof(OpenImg));

	// open screen
	t = ScreenAddStrip(pScreen, HEIGHT);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmGraph8(g, Box, WIDTH);

	// play music
	PlaySound(MappleSnd, sizeof(MappleSnd));

	// wait for a key
	int i;
	char ch;
	for (i = 200; i > 0; i--) // wait max. 20 seconds
	{
		ch = GetChar();
		switch(ch)
		{
		// start game
		case KEY_SPACE:
		case KEY_PLAY:
		case KEY_DEMO:
		case KEY_OK:
			StopSound();
			return ch;

		// no key
		case 0:
			break;

		// invalid key
		default:
			DispHelp();
			break;
		}

		sleep_ms(100);
	}

	// default returns demo
	StopSound();
	return KEY_DEMO;
}

// display selected player
void DispSel()
{
	int play;
	int y = 0;
	for (play = 0; play < 2; play++)
	{
		// copy background
		memcpy(&Box[y*FRAMEW], &FrameImg[y*FRAMEW], SELECTH*FRAMEW);

		// draw computer
		if (Comp[play]) DrawImg(&Canvas, &CompCanvas, COMPX, y+COMPY, 0, 0, COMPW, COMPH);

		// draw selection frame
		if (play == Player) DrawBlit(&Canvas, &SelCanvas, SELECTX, y+SELECTY, 0, 0, SELECTW, SELECTH, 0x61);

		// shift Y coordinate
		y += FRAMEY;
	}
}

char NumBuf[20];

// display score
void DispScore()
{
	int play;
	int n;
	for (play = 0; play < 2; play++)
	{
		n = DecNum(NumBuf, Stones[play]);
		NumBuf[n++] = ' ';
		NumBuf[n++] = 0;
		DrawTextBg(&Canvas, NumBuf, SCOREX, SCOREY+play*FRAMEY, SCORECOL, SCOREBG, FontBoldB8x16, 16);
	}
}

// display wins
void DispWin()
{
	int play;
	int n;
	for (play = 0; play < 2; play++)
	{
		n = DecNum(NumBuf, Wins[play]);
		NumBuf[n++] = ' ';
		NumBuf[n++] = ' ';
		NumBuf[n++] = ' ';
		NumBuf[n++] = 0;
		DrawTextBg(&Canvas, NumBuf, WINX, WINY+play*FRAMEY, SCORECOL, SCOREBG, FontBoldB8x16, 16);
	}
}

// open game
void OpenGame(Bool comp1, Bool comp2)
{
	ScreenClear(pScreen);

	// black strip
	sStrip* t = ScreenAddStrip(pScreen, 8);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmColor(g, 0, 0);

	// copy board template
	memcpy(Board, BoardTemp, BOARDSIZE0);

	// tiles
	t = ScreenAddStrip(pScreen, HEIGHT);
	g = ScreenAddSegm(t, BOARDW0*TILEW);
	ScreenSegmTile(g, Board, TilesImg_Copy, TILEW, TILEH, BOARDW0);

	// copy frame image
	memcpy(Box, FrameImg, sizeof(FrameImg));

	// info frame
	g = ScreenAddSegm(t, FRAMEW);
	ScreenSegmGraph8(g, Box, FRAMEW);

	// prepare canvas
	Canvas.img = Box;
	Canvas.w = FRAMEW;
	Canvas.h = FRAMEH;
	Canvas.wb = FRAMEW;
	Canvas.format = CANVAS_8;

	// canvas of computer
	CompCanvas.img = (u8*)ComputerImg;
	CompCanvas.w = COMPW;
	CompCanvas.h = COMPH;
	CompCanvas.wb = COMPW;
	CompCanvas.format = CANVAS_8;

	// canvas of selection
	SelCanvas.img = (u8*)SelectImg;
	SelCanvas.w = SELECTW;
	SelCanvas.h = SELECTH;
	SelCanvas.wb = SELECTW;
	SelCanvas.format = CANVAS_8;

	// initialize players
	Stones[0] = 0;
	Stones[1] = 0;
	Comp[0] = comp1;
	Comp[1] = comp2;

	// start random player
	Player = RandU8() & 1;

	// cursor position
	CurX = 3;
	CurY = 3;

	// initialize number of free positions
	Free = BOARDW*BOARDH-4;
	Pos = 12;

	// display selected player
	DispSel();

	// display score
	DispScore();

	// display wins
	DispWin();
}

// update stones in one direction
void PutStone1(s8 x, s8 y, s8 dx, s8 dy)
{
	u8 c;

	// check number of stones in this direction
	u8 stones = GetStones1(x, y, dx, dy);
	for (; stones > 0; stones--)
	{
		// play sound and short delay
		PlaySound(BeepSnd, sizeof(BeepSnd));
		sleep_ms(100);

		// step
		x += dx;
		y += dy;

		// get tile
		c = GetBoard(x, y);

		// player 2 is active, direction egg -> chicken -> hen
		if (Player == 1)
		{
			// egg -> chicken
			if (c == TILE_EGG)
			{
				Stones[0]--; // decrease number of eggs of player 1
				c = TILE_CHICKEN; // change to chicken
			}

			// hen -> egg
			else if (c == TILE_HEN)
			{
				Stones[1]--; // decrease number of hens of player 2
				Stones[0]++; // increase number of eggs of player 1
				c = TILE_EGG;
			}

			// chicken -> hen
			else
			{
				Stones[1]++; // increase number of hens of player 2
				c = TILE_HEN;
			}
		}

		// player 1 is active, direction hen -> chicken -> egg
		else
		{
			// egg -> hen
			if (c == TILE_EGG)
			{
				Stones[0]--; // decrease number of effs of player 1
				Stones[1]++; // increase number of hens of player 2
				c = TILE_HEN;
			}

			// hen -> chicken
			else if (c == TILE_HEN)
			{
				Stones[1]--; // decrease number of hens of player 2
				c = TILE_CHICKEN;
			}

			// chicken -> egg
			else
			{
				Stones[0]++; // increase number of effs of player 1
				c = TILE_EGG;
			}
		}

		// set tile
		SetBoard(x, y, c);

		// display score
		DispScore();
	}
}

// put stone (cursor must be off and current tile must be 'dot')
void PutStone()
{
	int i;

	// short blink cursor (must leave cursor off)
	for (i = 5; i > 0; i--)
	{
		sleep_ms(50);
		CurOn();
		sleep_ms(50);
		CurOff();
	}

	// put chicken into current position
	SetBoard(CurX, CurY, TILE_CHICKEN);

	// decrease free positions
	Free--;

	// update stones in all directions
	for (i = 0; i < 8; i++) PutStone1(CurX, CurY, DirX[i], DirY[i]);
}

// get profit in one direction
s8 Profit1(s8 x, s8 y, s8 dx, s8 dy)
{
	u8 c;
	s8 profit = 0;

	// check number of stones in this direction
	u8 stones = GetStones1(x, y, dx, dy);
	for (; stones > 0; stones--)
	{
		// step
		x += dx;
		y += dy;

		// get tile
		c = GetBoard(x, y);

		// player 2 is active (egg -> chicken -> hen)
		if (Player == 1)
		{
			// this player loses hen, opposite gains egg
			if (c == TILE_HEN)
				profit -= 2;

			// this player gains hen or opposite loses egg
			else
				profit++;
		}

		// player 1 is active (hen -> chicken -> egg)
		else
		{
			// this player loses egg, opposite gains hen
			if (c == TILE_EGG)
				profit -= 2;

			// this player gains egg or opposite loses hen
			else
				profit++;
		}
	}
	return profit;
}

// get tile profit
s8 Profit(s8 x, s8 y)
{
	s8 profit = 0;
	int i;
	for (i = 0; i < 8; i++) profit += Profit1(x, y, DirX[i], DirY[i]);
	return profit;
}

// find best position (cursor must be off)
void FindPos()
{
	s8 x, y;
	u8 c;
	s8 bestprofit = -125; // profit of founded tiles
	s8 profit;

	// loop through all game tiles
	for (y = 0; y < BOARDH; y++)
	{
		for (x = 0; x < BOARDW; x++)
		{
			// check if this tile is valid
			c = GetBoard(x, y);
			if (c == TILE_DOT)
			{
				// get profit of this field
				profit = Profit(x, y);

				// check better profit
				if ((profit > bestprofit) ||
					((profit == bestprofit) && (RandU8() < 80)))
				{
					// save new best state
					bestprofit = profit;
					CurX = x;
					CurY = y;
				}
			}
		}
	}
}

// play game
void PlayGame(Bool comp1, Bool comp2)
{
	int i;
	char ch;
	s8 x, y;

	// demo mode
	Bool demo = comp1 && comp2;

	// open game
	OpenGame(comp1, comp2);

	// display possible positions
	DispPos();

	// display cursor on
	CurOn();

	// while there is some possible position
	while ((Pos > 0) && (Free > 0))
	{
		// wait for a key
		ch = GetChar();

		// break demo
		if (demo && (ch != 0)) return;

		// player is computer
		if (Comp[Player])
		{
			// find position
			CurOff();
			FindPos();
			CurOn();

			// put stone
			if (!demo) FlushChar();
			ch = KEY_OK;
		}

		switch (ch)
		{
		// break game
		case KEY_QUIT:
			return;

		// right
		case KEY_R:
			if (CurX < BOARDW-1)
			{
				CurOff();
				CurX++;
				CurOn();
			}
			break;

		// up
		case KEY_U:
			if (CurY > 0)
			{
				CurOff();
				CurY--;
				CurOn();
			}
			break;

		// left
		case KEY_L:
			if (CurX > 0)
			{
				CurOff();
				CurX--;
				CurOn();
			}
			break;

		// down
		case KEY_D:
			if (CurY < BOARDH-1)
			{
				CurOff();
				CurY++;
				CurOn();
			}
			break;

		// help
		case KEY_HELP:
			CurOff();
			FindPos();
			CurOn();
			break;

		// put stone
		case KEY_OK:
		case KEY_SPACE:
			CurOff();
			if (GetBoard(CurX, CurY) == TILE_DOT)
			{
				// put stone
				PutStone();

				// update possible positions
				DispPos();

				// change player
				Player ^= 1;

				// display selected player
				DispSel();

				// display score
				DispScore();
			}
			CurOn();
			break;

		// no key, short delay
		case 0:
			sleep_ms(50);
			break;

		// invalid key
		default:
			DispHelp();
			break;
		}

		// blinking cursor
		CurBlink++;
		if (CurBlink == 5) CurOff();
		if (CurBlink == 8) CurOn();
	}

	// cursor off
	CurOff();

	// select no player
	Player = 2;
	DispSel();

	// max. time of blinking
	i = demo ? 10 : 1000000000;

	// player 1 (eggs) wins
	if (Stones[0] > Stones[1])
	{
		// animate
		for (y = 0; y < 8; y++)
		{
			for (x = 0; x < 8; x++)
			{
				if (GetBoard(x, y) == TILE_EGG)
				{
					SetBoard(x, y, TILE_EGGWIN);
					PlaySound(Beep2Snd, sizeof(Beep2Snd));
					sleep_ms(200);
				}
			}
		}

		// display wins
		Wins[0]++;
		DispWin();

		// blink winner
		for (; i > 0; i--)
		{
			Player = 0;
			DispSel();
			sleep_ms(200);
			if (GetChar() != 0) return;
			Player = 2;
			DispSel();
			sleep_ms(200);
			if (GetChar() != 0) return;
		}
	}

	// player 2 (hens) wins
	else if (Stones[1] > Stones[0])
	{
		// animate
		for (y = 0; y < 8; y++)
		{
			for (x = 0; x < 8; x++)
			{
				if (GetBoard(x, y) == TILE_HEN)
				{
					SetBoard(x, y, TILE_HENWIN);
					PlaySound(Beep2Snd, sizeof(Beep2Snd));
					sleep_ms(200);
				}
			}
		}

		// display wins
		Wins[1]++;
		DispWin();

		// blink winner
		for (; i > 0; i--)
		{
			Player = 1;
			DispSel();
			sleep_ms(200);
			if (GetChar() != 0) return;
			Player = 2;
			DispSel();
			sleep_ms(200);
			if (GetChar() != 0) return;
		}
	}

	// no winner
	else
	{
		// blink winner
		for (; i > 0; i--)
		{
			Player = 0;
			DispSel();
			sleep_ms(200);
			if (GetChar() != 0) return;
			Player = 1;
			DispSel();
			sleep_ms(200);
			if (GetChar() != 0) return;
		}
	}
}

// main function
int main()
{
	char ch;

	// copy tiles images
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));

	// clear players
	Wins[0] = 0;
	Wins[1] = 0;

	// initialize random number generator
	RandInitSeed();

	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// disp help
	sleep_ms(200);
	DispHelp();

	// main loop
	while (true)
	{
		// open screen
		ch = OpenScreen();

		// start new game
		switch (ch)
		{
		// player is EGG
		case KEY_SPACE:
			PlayGame(False, True);
			break;

		// player is HEN
		case KEY_OK:
			PlayGame(True, False);
			break;

		// demo
		case KEY_DEMO:
			PlayGame(True, True);
			break;

		// 2 players
		case KEY_PLAY:
			PlayGame(False, False);
			break;
		}
	}
}

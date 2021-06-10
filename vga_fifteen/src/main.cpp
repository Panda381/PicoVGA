
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// copy of tiles images
ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];

// game board
u8 Board[TILESNUM];
u8 HoleX, HoleY; // hole coordinate

// new game template
u8 NewBoard[TILESNUM] = {
	TILE_1+0,  TILE_1+1,  TILE_1+2,  TILE_1+3,   TILE_BLACK, TILE_BLACK,
	TILE_1+4,  TILE_1+5,  TILE_1+6,  TILE_1+7,   TILE_BLACK, TILE_BLACK,
	TILE_1+8,  TILE_1+9,  TILE_1+10, TILE_1+11,  TILE_BLACK, TILE_BLACK,
	TILE_1+12, TILE_1+13, TILE_1+14, TILE_EMPTY, TILE_BLACK, TILE_BLACK,
};

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... right\n", KEY_R);
	printf("%c ... up\n", KEY_U);
	printf("%c ... left\n", KEY_L);
	printf("%c ... down\n", KEY_D);
	printf("%c ... new game\n", KEY_NEW);
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

// shoft hole (-1..+1)
void Shift(s8 sx, s8 sy, Bool snd)
{
	// new coordinates of the hole
	s8 x = HoleX + sx;
	s8 y = HoleY + sy;

	// check coordinates
	if ((x < 0) || (x > 3) || (y < 0) || (y > 3))
	{
		// play blocking sound
		if (snd) PlaySound(BumpSnd, sizeof(BumpSnd));
		return;
	}

	// display
	Board[HoleX + HoleY*TILESWB] = Board[x + y*TILESWB];
	Board[x + y*TILESWB] = TILE_EMPTY;

	// save new coordinates
	HoleX = x;
	HoleY = y;

	// play move sound
	if (snd) PlaySound(MoveSnd, sizeof(MoveSnd));
}

// initialize new game
void NewGame()
{
	// start shuffling sound
	PlaySound(ShufflingSnd, sizeof(ShufflingSnd), True);

	// initialize new state
	memcpy(Board, NewBoard, TILESNUM);
	HoleX = 3;
	HoleY = 3;

	// shuffle board (2 seconds)
	int i, j;
	for (i = 100; i > 0; i--)
	{
		WaitVSync(); // wait for VSYNC to avoid image flickering
		for (j = 100; j > 0; j--)
		{
			if (RandU8() >= 0x80)
				Shift(RandS8MinMax(-1,1), 0, False); // shift X
			else
				Shift(0, RandS8MinMax(-1,1), False); // shift Y
		}
	}

	// stop shuffling sound
	StopSound();

	// flush keyboard
	FlushChar();
}

// check goal state
Bool Check()
{
	return memcmp(Board, NewBoard, TILESNUM) == 0;
}

// main function
int main()
{
	int i;

	// initialize random number generator
	RandInitSeed();

	// copy tiles images to RAM buffer (flash would be too slow)
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));

	// initialize videomode
	Video(DEV_VGA, RES_ZX, FORM_TILE48, Board, TilesImg_Copy);
	pScreen->strip[0].seg[0].offx = -32;

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// new game
	NewGame();

	// game loop
	while (True)
	{
		// key
		switch(GetChar())
		{
		case KEY_R:	// right
			Shift(-1, 0, True);
			break;

		case KEY_U:	// up
			Shift(0, 1, True);
			break;

		case KEY_L:	// left
			Shift(1, 0, True);
			break;

		case KEY_D:	// down
			Shift(0, -1, True);
			break;

		case KEY_NEW:	// new game
			NewGame();
			break;

		case 0: // no key
			break;

		default: // unknown key
			DispHelp();
			break;
		}

		// check solution
		if (Check())
		{
			// play fanfare
			PlaySound(FanfareSnd, sizeof(FanfareSnd));

			// winning animation
			for (i = 5; i > 0; i--)
			{
				sleep_ms(100);
				memset(Board, TILE_BLACK, TILESNUM);
				sleep_ms(100);
				memcpy(Board, NewBoard, TILESNUM);
			}

			// flush keyboard
			FlushChar();

			// wait for a key
			while (GetChar() == 0) {}

			// start new game
			NewGame();
		}
	}
}

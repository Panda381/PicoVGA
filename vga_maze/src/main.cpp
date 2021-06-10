
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************
// "wave" maze generator: https://www.itnetwork.cz/navrh/algoritmy/algoritmy-bludiste/algoritmus-tvorba-nahodneho-bludiste
// - MAZEW and MAZEH must be odd numbers!

#include "include.h"

// copy of tiles images
ALIGNED u8 TilesImg_Copy[sizeof(TilesImg)];

// game board
u8 Board[MAPSIZE];

// board address
#define BoardAddr(x, y) (&Board[(x) + (y)*MAPW])

u8 StopX, StopY; // stop position
u8 PosX, PosY;	// current position
u8 Anim;	// animation phase

// direction
#define	L 0	// left
#define	U 1	// up
#define R 2	// right
#define D 3	// down

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... left\n", KEY_L);
	printf("%c ... up\n", KEY_U);
	printf("%c ... right\n", KEY_R);
	printf("%c ... down\n", KEY_D);
	printf("%c ... help, show door\n", KEY_HELP);
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

// maze generator
void Gener()
{
	s16 i, s, x, y;

	// clear board with black tile (on right and on down will leave black tiles)
	memset(Board, S_BLACK, MAPSIZE);

	// clear maze - set empty tiles
	for (y = 0; y < MAZEH; y++)
		for (x = 0; x < MAZEW; x++)
			*BoardAddr(x, y) = S_EMPTY_HIDE;

	// add stones - only to odd coordinates (MAZEW and MAZEH must be odd numbers!)
	for (y = 1; y < MAZEH; y += 2)
		for (x = 1; x < MAZEW; x += 2)
			*BoardAddr(x, y) = S_DOOR_HIDE;

	// generator loop
	for (;;)
	{
		// calculate remaining stones
		s = 0;
		for (i = 0; i < MAPSIZE; i++) if (Board[i] == S_DOOR_HIDE) s++;
		if (s == 0) break; // no stones left, end of generation

		// select random stone
		s = RandS16Max(s-1);

		// find stone (only odd coordinates)
		for (y = 1; y < MAZEH; y += 2)
		{
			for (x = 1; x < MAZEW; x += 2)
			{
				if (*BoardAddr(x, y) == S_DOOR_HIDE)
				{
					s--;
					if (s < 0) break;
				}
			}
			if (s < 0) break;
		}

		// select random direction (L=0, U=1, R=2, D=3)
		i = RandU8Max(3);

		// build wall, until we meet another wall
		for (;;)
		{
			// put one wall
			*BoardAddr(x, y) = S_WALL_HIDE;

			// shift coordinates
			switch (i)
			{
			case L: x--; break;
			case U: y--; break;
			case R: x++; break;
			default: y++; break; // D
			}

			// coordinates are out of range
			if ((x < 0) || (x >= MAZEW) || (y < 0) || (y >= MAZEH)) break;

			// check wall on new position
			if (*BoardAddr(x, y) == S_WALL_HIDE) break;
		}
	}
}

// get one tile (returns S_WALL if out of range)
u8 GetTile(s8 x, s8 y)
{
	if ((x < 0) || (x >= MAZEW) || (y < 0) || (y >= MAZEH)) return S_WALL;
	if ((x == PosX) && (y == PosY)) return S_FACE;
	if ((x == StopX) && (y == StopY)) return S_DOOR;
	u8 tile = *BoardAddr(x, y);
	if (tile == S_WALL_HIDE) tile = S_WALL;
	if (tile == S_EMPTY_HIDE) tile = S_EMPTY;
	if (tile == S_DOOR_HIDE) tile = S_DOOR;
	return tile;
}

// hide face
void Hide()
{
	*BoardAddr(PosX, PosY) = S_EMPTY;
}

// show face
void Show()
{
	*BoardAddr(PosX, PosY) = S_FACE;
}

// check if position is free
Bool IsEmpty(s8 x, s8 y)
{
	u8 t = GetTile(x, y);
	return (t == S_EMPTY) || (t == S_DOOR);
}

// show all maze
void ShowAll()
{
	int x, y;
	for (x = 0; x < MAZEW; x++)
	{
		for (y = 0; y < MAZEH; y++)
			*BoardAddr(x, y) = GetTile(x, y);

		sleep_ms(40);
	}
}

// look around
void Look()
{
	if (PosX > 0) *BoardAddr(PosX-1, PosY) = GetTile(PosX-1, PosY);
	if (PosX < MAZEW-1) *BoardAddr(PosX+1, PosY) = GetTile(PosX+1, PosY);
	if (PosY > 0) *BoardAddr(PosX, PosY-1) = GetTile(PosX, PosY-1);
	if (PosY < MAZEH-1) *BoardAddr(PosX, PosY+1) = GetTile(PosX, PosY+1);
}

// clear display and start new scene
void Clear()
{
	// generate new maze
	Gener();

	// generate stop position
	for (;;)
	{
		StopX = RandU8Max(MAZEW-1);
		StopY = RandU8Max(MAZEH-1);
		if (*BoardAddr(StopX, StopY) == S_EMPTY_HIDE) break;
	}
	*BoardAddr(StopX, StopY) = S_DOOR_HIDE;

	// generate start position
	for (;;)
	{
		PosX = RandU8Max(MAZEW-1);
		PosY = RandU8Max(MAZEH-1);
		if ((*BoardAddr(PosX, PosY) == S_EMPTY_HIDE) &&
			(abs(PosX - StopX) > 4) && (abs(PosY - StopY) > 4)) break;
	}
	Show();

	// look around
	Look();

	// reset animation
	Anim = 0;
}

int main()
{
	int i;
	char ch;

	// initialize random number generator
	RandInitSeed();

	// copy tiles images to RAM buffer (flash would be too slow)
	memcpy(TilesImg_Copy, TilesImg, sizeof(TilesImg));

	// initialize videomode
	Video(DEV_VGA, RES_ZX, FORM_TILE8, Board, TilesImg_Copy);
	if (MAZEW != MAPW) pScreen->strip[0].seg[0].offx = -4; // center image on the screen
	if (MAZEH != MAPH) pScreen->strip[0].seg[0].offy = -4;

	// initialize stdio
	stdio_init_all();

	// display help
	DispHelp();

	// clear display and start new scene
	Clear();

	// main loop
	while (True)
	{
		// face animation
		Anim++;
		if (Anim == 90) *BoardAddr(PosX, PosY) = S_WINK;
		if (Anim == 100)
		{
			*BoardAddr(PosX, PosY) = S_FACE;
			Anim = 0;
		}

		// key service
		ch = GetChar();
		switch (ch)
		{
		// key "H" = show door
		case KEY_HELP:
			{
				u8 t = *BoardAddr(StopX, StopY);
				int k;
				for (k = 5; k > 0; k--)
				{
					*BoardAddr(StopX, StopY) = S_DOOR;
					sleep_ms(200);
					*BoardAddr(StopX, StopY) = S_DOOR_HIDE;
					sleep_ms(100);
				}
				*BoardAddr(StopX, StopY) = t;
			}
			FlushChar();
			break;

		// left
		case KEY_L:
			if ((PosX > 0) && IsEmpty(PosX-1, PosY))
			{
				*BoardAddr(PosX-1, PosY) = S_LEFT1;
				*BoardAddr(PosX, PosY) = S_LEFT2;
				sleep_ms(SPEED);
				*BoardAddr(PosX-1, PosY) = S_RIGHT1;
				*BoardAddr(PosX, PosY) = S_RIGHT2;
				sleep_ms(SPEED);
				Hide();
				PosX--;
				Show();
				Look();
			}
			FlushChar();
			break;

		// right
		case KEY_R:
			if ((PosX < MAZEW-1) && IsEmpty(PosX+1, PosY))
			{
				*BoardAddr(PosX, PosY) = S_RIGHT1;
				*BoardAddr(PosX+1, PosY) = S_RIGHT2;
				sleep_ms(SPEED);
				*BoardAddr(PosX, PosY) = S_LEFT1;
				*BoardAddr(PosX+1, PosY) = S_LEFT2;
				sleep_ms(SPEED);
				Hide();
				PosX++;
				Show();
				Look();
			}
			FlushChar();
			break;

		// up
		case KEY_U:
			if ((PosY > 0) && IsEmpty(PosX, PosY-1))
			{
				*BoardAddr(PosX, PosY-1) = S_UP2;
				*BoardAddr(PosX, PosY) = S_UP1;
				sleep_ms(SPEED);
				*BoardAddr(PosX, PosY-1) = S_DOWN1;
				*BoardAddr(PosX, PosY) = S_DOWN2;
				sleep_ms(SPEED);
				Hide();
				PosY--;
				Show();
				Look();
			}
			FlushChar();
			break;

		// down
		case KEY_D:
			if ((PosY < MAZEH-1) && IsEmpty(PosX, PosY+1))
			{
				*BoardAddr(PosX, PosY) = S_DOWN1;
				*BoardAddr(PosX, PosY+1) = S_DOWN2;
				sleep_ms(SPEED);
				*BoardAddr(PosX, PosY) = S_UP2;
				*BoardAddr(PosX, PosY+1) = S_UP1;
				sleep_ms(SPEED);
				Hide();
				PosY++;
				Show();
				Look();
			}
			FlushChar();
			break;

		// no key
		case 0:
			break;

		// invalid key
		default:
			DispHelp();
			FlushChar();
			break;
		}

		// SOLVED
		if ((PosX == StopX) && (PosY == StopY))
		{
			// show all maze
			ShowAll();

			// winking
			for (i = 0; i < 6; i++)
			{
				*BoardAddr(PosX, PosY) = S_WINK;
				sleep_ms(150);
				*BoardAddr(PosX, PosY) = S_FACE;
				sleep_ms(150);
			}
			*BoardAddr(StopX, StopY) = S_DOOR;

			// wait for a key press
			FlushChar();
			while (GetChar() == 0) {}

			// new scene
			Clear();
			FlushChar();
		}

		// animation delay
		sleep_ms(20);
	}
}

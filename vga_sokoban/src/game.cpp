
// ****************************************************************************
//
//                                Game engine
//
// ****************************************************************************

#include "include.h"

// buffers
u8 Board[MAPWMAX*MAPHMAX]; // game board
int MapW, MapH;		// current board dimension
int TileSize;		// current tile size (16, 20, 24, 28 or 32)

// current game state
u16 MarkNum;		// number of remaining marks
u8 LevelW, LevelH;	// level width and height
u8 LevelX, LevelY;	// level coordinates
u8 PosX, PosY;		// player coordinates
s8 OffX, OffY;		// board offset (0 or -TileSize/2)

// set player graphics position
void SetPlayer(int x, int y, u8 tile)
{
	sLayer* lay = &LayerScreen[1];
	lay->init = VGAKEY((x-OffX)*Vmode.cpp, TileSize, 65);
	lay->y = y-OffY;
	lay->img = &TilesImg_Copy[TileSize*tile];
	lay->on = True;
}

// soft move player in direction
void MovePlayer(u8 dir)
{
	int dx = (dir == DIR_L) ? -1 : ((dir == DIR_R) ? 1 : 0);
	int dy = (dir == DIR_U) ? -1 : ((dir == DIR_D) ? 1 : 0);
	int x = PosX*TileSize;
	int y = PosY*TileSize;
	u8 tile = FACE_R + dir*4;

	SetPlayer(x, y, tile);
	sleep_ms(MOVESPEED);
	x += dx*(TileSize/4);
	y += dy*(TileSize/4);
	
	SetPlayer(x, y, tile);
	sleep_ms(MOVESPEED);
	x += dx*(TileSize/4);
	y += dy*(TileSize/4);

	u8 tile2 = tile + ((((PosX+PosY)&1) == 0) ? 1 : 3);

	SetPlayer(x, y, tile2);
	sleep_ms(MOVESPEED);
	x += dx*(TileSize/4);
	y += dy*(TileSize/4);

	SetPlayer(x, y, tile2);
	sleep_ms(MOVESPEED);
	x += dx*(TileSize/4);
	y += dy*(TileSize/4);

	PosX += dx;
	PosY += dy;
	SetPlayer(x, y, tile);
}

// clear board
void ClearBoard()
{
	memset(Board, EMPTY, MAPWMAX*MAPHMAX);
	sLayer* lay = &LayerScreen[1];
	lay->on = False;
}

// initialize level videomode (uses LevelW and LevelH)
void LevelVmode()
{
	TileSize = 32;
	MapW = WIDTH/TileSize;
	MapH = HEIGHT/TileSize;
	if ((LevelW > MapW) || (LevelH > MapH))
	{
		TileSize = 28;
		MapW = WIDTH/TileSize;
		MapH = HEIGHT/TileSize;
	}
	if ((LevelW > MapW) || (LevelH > MapH))
	{
		TileSize = 24;
		MapW = WIDTH/TileSize;
		MapH = HEIGHT/TileSize;
	}
	if ((LevelW > MapW) || (LevelH > MapH))
	{
		TileSize = 20;
		MapW = WIDTH/TileSize;
		MapH = HEIGHT/TileSize;
	}
	if ((LevelW > MapW) || (LevelH > MapH))
	{
		TileSize = 16;
		MapW = WIDTH/TileSize;
		MapH = HEIGHT/TileSize;
	}
	if ((LevelW > MapW) || (LevelH > MapH))
	{
		TileSize = 12;
		MapW = WIDTH/TileSize;
		MapH = HEIGHT/TileSize;
	}
	if ((LevelW > MapW) || (LevelH > MapH))
	{
		TileSize = 8;
		MapW = WIDTH/TileSize;
		MapH = HEIGHT/TileSize;
	}

	// prepare level coordinates
	if (LevelW > MapW) LevelW = MapW;
	if (LevelH > MapH) LevelH = MapH;
	LevelX = (MapW - LevelW)/2;
	LevelY = (MapH - LevelH)/2;
	OffX = - ((MapW - LevelW) & 1) * (TileSize/2);
	OffY = - ((MapH - LevelH) & 1) * (TileSize/2);

	// set sprite
	sLayer* lay = &LayerScreen[1];
	lay->on = False;
	__dmb();
 	lay->img = &TilesImg_Copy[TileSize*FACE_D];
	lay->init = VGAKEY(((TileSize-1)*MapW/2-OffX)*Vmode.cpp, TileSize, 65);
	lay->trans = TileSize/4;
	lay->x = (TileSize-1)*MapW/2 - OffX;
	lay->y = (TileSize-1)*MapH/2 - OffY;
	lay->w = TileSize;
	lay->h = TileSize;
	lay->wb = TileSize*TILES_NUM;

	// set tile mode
	SetTileMode();
}

// display program info
void DispInfo()
{
	printf("\nSokoban for Raspberry Pico\n");
	printf("version " VERSION "\n");
	printf(COPYRIGHT "\n");
	uint sysclk = clock_get_hz(clk_sys);
	printf("System clock: %u kHz\n", sysclk/1000);
//	uint hfreq = sysclk/Vmode.div/Vmode.htot;
//	float vfreq = (float)hfreq/Vmode.vtot;
	printf("Screen resolution: %u x %u @ %.2f Hz, %d Hz, cpp %u\n",
		Vmode.width, Vmode.height, Vmode.vfreq, (int)(Vmode.hfreq+0.5f), Vmode.div*Vmode.cpp);
	printf("Total authors: %u\n", AutNum);
	int i, j;
	int k = 0;
	int m = 0;
	for (i = 0; i < AutNum; i++)
	{
		k += Author[i].collnum;
		for (j = 0; j < Author[i].collnum; j++) m += Author[i].collect[j].levnum;
	}
	printf("Total collections: %u\n", k);
	printf("Total levels: %u\n", m);
	if (LevNum > 0)
	{
		printf("Current level %u, size %ux%u, board %ux%u, tile %u, collection %s\n",
			Level+1, LevelW, LevelH, MapW, MapH, TileSize, CollName);
	}
}

// detect board dimension
void BoardDim()
{
	LevDef = Levels[Level*2]; // current level definition
	LevSolve = Levels[Level*2+1]; // current level solve

	// get board definition
	const char* s = LevDef;

	// detect board dimension
	LevelW = 1;
	LevelH = 0;
	int i = 0;
	char ch;
	const char* s2 = s;
	while ((ch = *s2++) != 0)
	{
		// next row
		if ((ch == '!') || (ch == '|'))
		{
			LevelH++;
			if (i > LevelW) LevelW = i;
			i = 0;
		}
		else
			i++;
	}
	if (i > LevelW) LevelW = i;
	if (i > 0) LevelH++;
};

// initialize current level
//   x = grass (empty)
//   # = wall
//   ! or | = next row
//   space or _ or - = floor
//   $ or b = box
//   * or B = box on mark
//   . = mark
//   @ or p = player
//   + or P = player on mark
void LevelInit()
{
	// detect board dimension
	BoardDim();

	// initialize level videomode
	LevelVmode();

	// clear screen
	ClearBoard();

	// decode level
	char ch;
	int x, y;
	y = LevelY;
	x = LevelX;
	MarkNum = 0;
	PosX = LevelX + LevelW/2;
	PosY = LevelY + LevelH/2;
	u8* d = BoardAddr(x,y);
	const char* s = LevDef;
	while ((ch = *s++) != 0)
	{
		// next row
		if ((ch == '!') || (ch == '|'))
		{
			y++;
			if (y >= MapH) break;
			x = LevelX;
			d = BoardAddr(x,y);
		}
		else
		{
			if (x >= MapW) continue;
	
			switch (ch)
			{
			// grass (empty)
			case 'x':
				ch = EMPTY;
				break;

			// wall
			case '#':
				ch = WALL;
				break;

			// player
			case 'p':
			case '@':
				PosX = x;
				PosY = y;
				ch = FLOOR;
				break;

			// player on mark
			case 'P':
			case '+':
				PosX = x;
				PosY = y;
				ch = MARK;
				MarkNum++;
				break;

			// box
			case 'b':
			case '$':
				ch = CRATE;
				break;

			// box on mark
			case 'B':
			case '*':
				ch = FULL;
				break;

			// mark
			case '.':
				ch = MARK;
				MarkNum++;
				break;

			// floor
			// case ' ':
			// case '_':
			// case '-':
			default:
				ch = FLOOR;
				break;
			}

			// increase position
			*d++ = ch;
			x++;
		}
	}

	// set player, direction down
	SetPlayer(PosX*TileSize, PosY*TileSize, FACE_D);

	// flush keys
	FlushChar();
}

// check floor (with or without mark, but no box)
Bool IsFloor(u8 x, u8 y)
{
	if (((u32)x >= (u32)MapW) || ((u32)y >= (u32)MapH)) return False;
	u8 tile = *BoardAddr(x,y);
	return (tile == FLOOR) || (tile == MARK);
}

// check box (with or without mark)
Bool IsBox(u8 x, u8 y)
{
	if (((u32)x >= (u32)MapW) || ((u32)y >= (u32)MapH)) return False;
	u8 tile = *BoardAddr(x,y);
	return (tile == CRATE) || (tile == FULL);
}

// check mark (with or without box)
Bool IsMark(u8 x, u8 y)
{
	if (((u32)x >= (u32)MapW) || ((u32)y >= (u32)MapH)) return False;
	u8 tile = *BoardAddr(x,y);
	return (tile == MARK) || (tile == FULL);
}

// hide box
void HideBox(u8 x, u8 y)
{
	u8* b = BoardAddr(x, y);
	u8 tile = *b;
	if (tile == FULL)
	{
		MarkNum++;
		*b = MARK;
	}
	else
	{
		*b = FLOOR;
	}
}

// show box
void ShowBox(u8 x, u8 y)
{
	u8* b = BoardAddr(x, y);
	u8 tile = *b;
	if (tile == MARK)
	{
		MarkNum--;
		*b = FULL;
	}
	else
	{
		*b = CRATE;
	}
}

// step one level (key = move key, returns False on unsupported key)
Bool Step(char key)
{
	int dx = (key == KEY_L) ? -1 : ((key == KEY_R) ? 1 : 0);
	int dy = (key == KEY_U) ? -1 : ((key == KEY_D) ? 1 : 0);
	if (dx + dy == 0) return False;

	if (IsBox(PosX+dx, PosY+dy) && (IsFloor(PosX+2*dx, PosY+2*dy)))
	{
		HideBox(PosX+dx, PosY+dy);
		ShowBox(PosX+2*dx, PosY+2*dy);
	}
	int dir = (key == KEY_L) ? DIR_L :
		((key == KEY_R) ? DIR_R :
		((key == KEY_U) ? DIR_U : DIR_D));
	if (IsFloor(PosX+dx, PosY+dy)) MovePlayer(dir);

	return True;
}

// step solve animation (return True = break)
Bool StepAnim(char key)
{
	if ((key >= 'a') && (key <= 'z')) key -= 32;
	if (key == 'L')
		Step(KEY_L);
	else if (key == 'R')
		Step(KEY_R);
	else if (key == 'U')
		Step(KEY_U);
	else if (key == 'D')
		Step(KEY_D);

	return (GetChar() != 0);
}

// play subanimation (in brackets; returns True = break)
Bool SubAnim(const char* s)
{
	int i;
	char ch;
	while ((ch = *s++) != 0)
	{
		// end of brackets
		if (ch == ')') break;

		// loop (except last passage of the loop)
		if ((ch >= '0') && (ch <= '9'))
		{
			i = ch - '0';
			for (; i > 1; i--) if (StepAnim(*s)) return True;
			continue;
		}

		if (StepAnim(ch)) return True;
	}
	return False;
}

// play level solve (returns True on break from keyboard)
Bool PlaySolve()
{
	int i;

	// re-initialize current level
	LevelInit();

	// prepare pointer to level solution
	const char* s = LevSolve;

	// macro loop
	char ch;
	while ((ch = *s++) != 0)
	{
		if ((ch == '(') || (ch == ')')) continue;

		// loop (except last passage of the loop)
		if ((ch >= '0') && (ch <= '9'))
		{
			i = ch - '0';
			ch = *s;
			if ((ch >= '0') && (ch <= '9'))
			{
				i = i*10 + (ch - '0');
				s++;
			}

			for (; i > 1; i--)
			{
				if (*s == '(')
				{
					if (SubAnim(s+1)) return True;
				}
				else
					if (StepAnim(*s)) return True;
			}
			continue;
		}

		// step
		if (StepAnim(ch)) return True;
	}

#ifndef AUTOMODE // automode - autorun all levels to check solutions
	// solved animation
	SolvedAnim();
#endif

	return False;
}

// display solved animation (returns True of solved)
Bool SolvedAnim()
{
	// check if solved
	if (MarkNum > 0) return False;

#ifdef AUTOMODE // automode - autorun all levels to check solutions
	return True;
#endif

	// play sound
	PlaySound(YippeeSnd, sizeof(YippeeSnd));

	// animation
	int i, j;
	u8* s;
	u8 k;
	sLayer* lay = &LayerScreen[1];
	for (i = 5; i > 0; i--)
	{
		// hide boxes
		s = Board;
		for (j = MapW*MapH; j > 0; j--)
		{
			k = *s;
			if (k == FULL) *s = MARK;
			s++;
		}

		// set winning image
		lay->img = &TilesImg_Copy[TileSize*FACE_WIN];

		// delay
		sleep_ms(100);

		// show boxes
		s = Board;
		for (j = MapW*MapH; j > 0; j--)
		{
			k = *s;
			if (k == MARK) *s = FULL;
			s++;
		}

		// set down image
		lay->img = &TilesImg_Copy[TileSize*FACE_D];

		// delay
		sleep_ms(100);
	}

	return True;
}

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... right\n", KEY_R);
	printf("%c ... up\n", KEY_U);
	printf("%c ... left\n", KEY_L);
	printf("%c ... down\n", KEY_D);
	printf("%c ... help solve scene\n", KEY_HELP);
	printf("%c ... restart scene\n", KEY_RESTART);
	printf("%c ... previous scene\n", KEY_PREV);
	printf("%c ... next scene\n", KEY_NEXT);
	printf("%c ... program info\n", KEY_INFO);
	printf("Esc ... leave scene\n");
}

// level info
void LevelInfo()
{
	SetTextMode();
	FlushChar();
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));

	PrintSetPos(4,1);
	PrintText(SelAuthor);
	PrintText(AutName);

	PrintSetPos(4,3);
	PrintText(SelColl);
	PrintText(CollName);	

	PrintSetPos((TEXTW-8)/2, 10);
	PrintText("LEVEL ");
	char buf[12];
	DecNum(buf, Level+1);
	PrintText(buf);
}

// game loop
void GameLoop()
{
	int i;

	// initialize current level
	LevelInit();

	// flush characters from keyboard
	FlushChar();

	while (True)
	{
		// get key
		i = GetChar();

#ifdef AUTOMODE		// automode - autorun all levels to check solutions
		if (i == 0)
		{
			int a, c;
			int levinx, levcur, levnum;
			levnum = 0;
			levcur = 0;
			levinx = 0;
			for (a = 0; a < AutNum; a++)
			{
				for (c = 0; c < Author[a].collnum; c++)
				{
					if ((a == AutInx) && (c == CollInx)) levcur = levnum + Level;
					levnum += Author[a].collect[c].levnum;
				}
			}
			printf("checking level %u (%u of %u) of collection %s by %s\n",
				Level+1, levcur, levnum, CollName, AutName);
			sleep_ms(10); // delay to complete message transmission
			i = KEY_HELP;
		}
#endif
		if (i != 0)
		{
			// Esc return to selection
			if ((i == KEY_ESC) || (i == KEY_ESC2) || (i == KEY_ESC3)) return;

			// program info
			if (i == KEY_INFO)
			{
				DispInfo();
			}

			// help solution
			else if (i == KEY_HELP)
			{
#ifdef AUTOMODE // automode - autorun all levels to check solutions
				if (PlaySolve()) return;
				if (GetChar() != 0) return;
#else
				PlaySolve();
				LevelInit();
#endif
			}

			// restart scene
			else if (i == KEY_RESTART)
			{
				LevelInit();
			}

			// next scene
			else if (i == KEY_NEXT)
			{
				Level++;
				if (Level >= LevNum) Level = 0;
				LevelInfo();
				sleep_ms(200);
				FlushChar();
				LevelInit();
			}

			// previous scene
			else if (i == KEY_PREV)
			{
				Level--;
				if (Level < 0) Level = LevNum-1;
				LevelInfo();
				sleep_ms(200);
				FlushChar();
				LevelInit();
			}

			// step
			else
			{
				// one step
				FlushChar();
				if (!Step(i))
				{
					// invalid character
					DispHelp();
				}
			}

			// solved
			if (SolvedAnim())
			{
				sleep_ms(200);
				ClearBoard();
#ifndef AUTOMODE	// automode - autorun all levels to check solutions
				sleep_ms(200);
#endif

				// increase scene level
				Level++;
				if (Level >= LevNum)
#ifdef AUTOMODE // automode - autorun all levels to check solutions
				{
					// next collection of current author
					int c = CollInx + 1;
					if (c < CollNum)
					{
						CollInx = c; // select next collection
						Level = 0; // selected level
						CollName = Collect[c].name; // name of collection
						Levels = Collect[c].levels; // pointer to list of levels
						LevNum = Collect[c].levnum; // number of levels
					}

					// 
					else
					{
						// next author
						int a = AutInx + 1;
						if (a < AutNum)
						{
							AutInx = a;
							CollInx = 0; // selected collection
							AutName = Author[a].author; // author's name
							Collect = Author[a].collect; // pointer to list of collections
							CollNum = Author[a].collnum; // number of collections

							Level = 0; // selected level
							CollName = Collect[0].name; // name of collection
							Levels = Collect[0].levels; // pointer to list of levels
							LevNum = Collect[0].levnum; // number of levels
						}
						// else stop at last level
						else
						{
							Level--;
							return;
						}
					}
				}
				if (GetChar() != 0) return;
				LevelInit();
#else
					// else reset to first level
					Level = 0;

				// level info
				LevelInfo();
				sleep_ms(1500);
				FlushChar();
				LevelInit();
				FlushChar();
#endif
			}
		}
	}
}

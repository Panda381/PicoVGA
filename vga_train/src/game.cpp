
// ****************************************************************************
//
//                                Game engine
//
// ****************************************************************************

#include "include.h"

// buffers
u8 Board[MAPSIZE];	// game board
u8 Dir[MAPSIZE];	// direction map DIR_*
u8 PswBuf[PSWLEN];	// password buffer

// current game state
u8 Level;		// current level
u8 HeadX, HeadY;	// head (loco) coordinates
u8 GateX, GateY;	// gate coordinates
u16 Length;		// train length (including loco)
u16 ItemNum;		// number of items on game board
u8 State;		// game state S_*
u8 Phase;		// current animation phase
u8 CurDir;		// current direction DIR_*
int Score;		// current score

// key buffers for 2 keys (0=no key)
char KeyBuf1, KeyBuf2;

// texts
const char LevelTxt[] = "LEVEL";
const char PswTxt[] = "password";
const char LevelHlp[] = "ENTER:PSW";
const char OkHlp[] = "ENTER:OK";
const char EscHlp[] = "ESC:BACK";
const char CongTxt[] = "CONGRATULATIONS!";
const char Cong2Txt[] = "You became absolute";
const char Cong3Txt[] = "winner of the game!";
const char ScoreHlp[] = "SCORE";

// clear info row
void InfoClear()
{
	memset(Text, ' ', sizeof(Text));
	memset(TextCol, COL_BLACK, sizeof(TextCol));
}

// display text from ROM to info row
void InfoDispText(u8 x, const char* txt, u8 col)
{
	char ch;
	while ((ch = *txt++) != 0)
	{
		Text[x] = ch;
		for (ch = 0; ch < 8; ch++) TextCol[x*8+ch] = col;
		x++;
	}
}

// display info bottom row
void InfoRow()
{
	// clear info row
	InfoClear();

	// display score
	InfoDispText(0, ScoreHlp, COL_GREEN);
	char buf[10];
	DecUNum(buf, Score);
	InfoDispText(sizeof(ScoreHlp), buf, COL_YELLOW);
	
	// display text ENTER: PSW
	InfoDispText((TEXTMAX - 10)/2, LevelHlp, COL_RED);

	// display level
	InfoDispText(TEXTMAX - sizeof(LevelTxt) - 3, LevelTxt, COL_GREEN);
	DecUNum(buf, Level);
	InfoDispText(TEXTMAX - 3, buf, COL_YELLOW);
}

// enter password
void Psw()
{
	// display help
	InfoClear();

	// display help
	InfoDispText(0, OkHlp, COL_GREEN);
	InfoDispText(TEXTMAX - sizeof(EscHlp) + 1, EscHlp, COL_GREEN);

	// load password
	char buf[PSWLEN+1];
	memcpy(buf, &LevelPsw[Level*PSWLEN], PSWLEN);
	buf[PSWLEN] = 0;

	// display password
	int x = (TEXTMAX - (sizeof(PswTxt) - 1 + 1 + 5))/2;
	InfoDispText(x, PswTxt, COL_RED);
	x += sizeof(PswTxt) - 1 + 1;
	InfoDispText(x, buf, COL_YELLOW);

	// edit password
	int pos = 0;
	char c;
	for (;;)
	{
		// input keys
		c = GetChar();

		// convert to upper case
		if ((c >= 'a') && (c <= 'z')) c -= 32;

		// Esc break
		if (c == KEY_ESC)
		{
			InfoRow();
			return;
		}

		// OK
		if (c == KEY_OK)
		{
			// restart scene
			InfoRow();
			OpenLevel();
			InitLevel();
			return;
		}

		// back space
		if (c == KEY_BS)
		{
			if (pos > 0)
			{
				pos--;
				buf[pos] = ' ';
				InfoDispText(x, buf, COL_YELLOW);
			}
		}

		// valid key
		if ((c >= 'A') && (c <= 'Z'))
		{
			if (pos == 0) memset(buf, ' ', PSWLEN);
			buf[pos++] = c;
			InfoDispText(x, buf, COL_YELLOW);

			// whole password, try to search
			if (pos == PSWLEN)
			{
				int i;
				for (i = 1; i <= LEVNUM; i++)
				{
					// check password
					if (memcmp(buf, &LevelPsw[i*PSWLEN], PSWLEN) == 0)
					{
						// initialize new level
						Level = i;
						InfoRow();
						OpenLevel();
						InitLevel();
						return;
					}
				}
				InfoRow();
				return;
			}
		}
	}
}

// clear level screen
void ClearLevel(u8 tile)
{
	u8 x, y;

	// clear screen with bricks
	for (x = 0; x < MAPW; x++)
	{
		for(y = 0; y < MAPH; y++)
			Board[x + y*MAPW] = tile;
		
		sleep_ms(20);
	}
}

// open level
void OpenLevel()
{
	// clear screen with bricks
	ClearLevel(WALL);

	// set info box ON
	DrawClear(&BoxCanvas);
	LayerOn(INFO_LAYER);

	// display frame
#define FDX1  4
	DrawFrame(&BoxCanvas, FDX1, FDX1, BOXW-2*FDX1, BOXH-2*FDX1, COL_WHITE);

	// display current scene
	int x, x2;
	char buf[10];
	int n = DecUNum(buf, Level);
	x = (BOXW - (6+n)*16)/2;
	DrawText(&BoxCanvas, LevelTxt, x, 2*16, COL_GREEN, FontBold8x8, 8, 2, 2);
	x += 6*16;
	DrawText(&BoxCanvas, buf, x, 2*16, COL_YELLOW, FontBold8x8, 8, 2, 2);

	// display password
	DrawText(&BoxCanvas, PswTxt, (BOXW - 8*8)/2, 4*16+4, COL_GREEN, FontBold8x8, 8, 1, 1);
	memcpy(buf, &LevelPsw[Level*PSWLEN], PSWLEN);
	buf[PSWLEN] = 0;
	DrawText(&BoxCanvas, buf, (BOXW - 5*16)/2, 5*16+4, COL_YELLOW, FontBold8x8, 8, 2, 2);

	// display info row
	InfoRow();

	// wait
	sleep_ms(250);
	FlushChar();
#ifndef AUTOMODE // automode - run levels to check solutions (help completes scene)
	while (GetChar() == 0) {}
#endif

	// set info box OFF
	LayerOff(INFO_LAYER);

	// clear screen with empty
	ClearLevel(EMPTY);
}

// congratulate
void CongLevel()
{
	// clear screen with bricks
	ClearLevel(WALL);

	// set info box ON
	DrawClear(&BoxCanvas);
	LayerOn(INFO_LAYER);

	// display frame
	DrawFrame(&BoxCanvas, FDX1, FDX1, BOXW-2*FDX1, BOXH-2*FDX1, COL_WHITE);

	// display text
	DrawText(&BoxCanvas, CongTxt, (BOXW - (sizeof(CongTxt)-1)*8)/2, 37, COL_YELLOW, FontBold8x8, 8, 1, 1);
	DrawText(&BoxCanvas, Cong2Txt, (BOXW - (sizeof(Cong2Txt)-1)*8)/2, 68, COL_GREEN, FontBold8x8, 8, 1, 1);
	DrawText(&BoxCanvas, Cong3Txt, (BOXW - (sizeof(Cong3Txt)-1)*8)/2, 84, COL_GREEN, FontBold8x8, 8, 1, 1);

	// wait
	sleep_ms(250);
	FlushChar();
	while (GetChar() == 0) {}

	// set info box OFF
	LayerOff(INFO_LAYER);

	// clear screen with empty
	ClearLevel(EMPTY);
}

// initialize current level
void InitLevel()
{
	// copy items to game board
	memcpy(Board, &Levels[MAPSIZE*Level], MAPSIZE);

	// analyse board
	u8 b;
	int x, y;
	ItemNum = 0;
	for (y = 0; y < MAPH; y++)
	{
		for (x = 0; x < MAPW; x++)
		{
			// get item from board
			b = Board[x+y*MAPW];

			// locomotive
			if ((b >= LOCOMIN) && (b <= LOCOMAX))
			{
				HeadX = x;
				HeadY = y;
			}

			// gate
			else if (b == GATE)
			{
				GateX = x;
				GateY = y;
			}

			// item
			else if ((b >= ITEMMIN) && (b <= ITEMMAX))
			{
				ItemNum++;
			}
		}
	}

	// reset variables
	State = S_WAIT;
	Length = 1;
	CurDir = DIR_R;
	Phase = 0;
	KeyBuf1 = 0;
	KeyBuf2 = 0;

	// display info row
	if (Level == 0)
		InfoClear();
	else
		InfoRow();
}

// train step
void StepLevel()
{
	// next position
	s8 x = HeadX;
	s8 y = HeadY;
	u8 d = CurDir;
	if (d == DIR_L) x--;
	if (d == DIR_U) y--;
	if (d == DIR_R) x++;
	if (d == DIR_D) y++;
	u8* bold = &Board[HeadX + HeadY*MAPW]; // current position
	u8* bnew = &Board[x + y*MAPW]; // new position
	u8 b = *bnew; // item on new position

	// crash
	if ((x < 0) || (x >= MAPW) || // x is out of board
		(y < 0) || (y >= MAPH) || // y is out of board
		((b != EMPTY) && // not empty field
		((b <= GATEMIN) || (b > GATEMAX)) && // not open gate
		((b < ITEMMIN) || (b > ITEMMAX)))) // not valid item
	{
		State = S_CRASH;	// crash state
		b = CRASH;		// crash image

		// crash animation
		PlaySound(CrashSnd, sizeof(CrashSnd));

		while (True)
		{
			*bold = b;		// set locomotive crash image
			sleep_ms(GAMESPEED);
			b++;
			if (b > CRASHMAX) b = CRASHMAX - 2;
			if (GetChar() != 0) break;
		}

		// restart new level
		InitLevel();
		return;
	}

	// set loco to new position
	u8 b2;
	if (d == DIR_L)
		b2 = LOCO_L; // direction left
	else if (d == DIR_U)
		b2 = LOCO_U; // direction up
	else if (d == DIR_R)
		b2 = LOCO_R; // direction right
	else b2 = LOCO_D; // direction down
	*bnew = b2; // store new locomotive image
	Dir[x + y*MAPW] = d; // store new direction at this point
	HeadX = x; // new locomotive position
	HeadY = y;

	// move wagons
	int i;
	for (i = Length; i > 0; i--)
	{
		d = Dir[x + y*MAPW];
		if (d == DIR_L) x++;
		if (d == DIR_U) y++;
		if (d == DIR_R) x--;
		if (d == DIR_D) y--;

		bnew = &Board[x + y*MAPW];
		*bold = (*bnew - WAGON)/4*4 + WAGON + d;
		bold = bnew;
	}

	// collect item, increase train length
	if ((b >= ITEMMIN) && (b <= ITEMMAX))
	{
		// collect sound
		PlaySound(CollectSnd, sizeof(CollectSnd));

		// increase train length
		Length++;

		// new wagon
		*bold = (b - ITEMMIN)/3*4 + WAGON + Dir[x + y*MAPW];

		// decrease number of items
		ItemNum--;

		// start opening gate
		if (ItemNum == 0) Board[GateX + GateY*MAPW] = GATE+1;

		// count score
		if (State == S_GO)
		{
			Score += 10;
			InfoRow();
		}
	}
	else
	{
		// step sound
		PlaySound(StepSnd, sizeof(StepSnd));

		// empty last position
		*bold = EMPTY;
	}

	// gate
	if ((HeadX == GateX) && (HeadY == GateY))
	{
		int s = State;
		State = S_FINISH;
		sleep_ms(500);
		FlushChar();

#ifndef AUTOMODE // automode - run levels to check solutions (help completes scene)
		if (s == S_HELP) return;
#endif

		// play sound
		PlaySound(SuccessSnd, sizeof(SuccessSnd));
		sleep_ms(1000);

		// open next level
		if (Level < LEVNUM)
		{
			Level++;
			OpenLevel();
		}
		else
			CongLevel();
		InitLevel();
	}
}

// level animation - called every single game step
void AnimLevel()
{
	// set phase of the objects
	int i;
	u8 b;
	for (i = 0; i < MAPW*MAPH; i++)
	{
		b = Board[i];

		// animate items
		if ((b >= ITEMMIN) && (b <= ITEMMAX))
		{
			b = (u8)((b-ITEMMIN)/3*3 + Phase + ITEMMIN);
			Board[i] = b;
		}

		// animate locomotive
		else if ((b >= LOCOMIN) && (b <= LOCOMAX))
		{
			b = (u8)((b-LOCOMIN)/3*3 + Phase + LOCOMIN);
			Board[i] = b;
		}

		// animate gate
		else if ((b > GATEMIN) && (b < GATEMAX))
		{
			Board[i] = b + 1;
		}
	}

	// increase animation phase
	Phase++;
	if (Phase >= 3)
	{
		Phase = 0;

		// change direction by keyboard (and potentially start the game)
		char c = KeyBuf1;
		KeyBuf1 = KeyBuf2;
		KeyBuf2 = 0;
		if (c != 0)
		{
			if (State == S_WAIT) State = S_GO;
			if (c == KEY_D) CurDir = DIR_D;
			if (c == KEY_R) CurDir = DIR_R;
			if (c == KEY_L) CurDir = DIR_L;
			if (c == KEY_U) CurDir = DIR_U;
		}

		// one step
		if ((State == S_GO) || (State == S_HELP)) StepLevel();
	}
}

// help level (returns True on break from keyboard)
Bool HelpLevel()
{
	char b;

	// re-initialize current scene
	InitLevel();

	// help mode
	State = S_HELP;

	// prepare pointer to level solution
	const char* s = Solution[Level];

	// macro loop
	while (State == S_HELP)
	{
		// get next key from solution macro
		b = *s++;
		if (b == 0)
		{
			State = S_FINISH;

			// wait 1.6 seconds on end of scene
			for (b = 10; b > 0; b--)
			{
				if (GetChar() != 0) return True;
				AnimLevel();
				sleep_ms(GAMESPEED);
			}
			return False;
		}
		if (b == 'R') CurDir = DIR_R;
		if (b == 'U') CurDir = DIR_U;
		if (b == 'L') CurDir = DIR_L;
		if (b == 'D') CurDir = DIR_D;

		AnimLevel();
		sleep_ms(GAMESPEED);
		AnimLevel();
		sleep_ms(GAMESPEED);
		AnimLevel();

		// text on demo screen
		if ((Level == 0) && (HeadY == 9))
		{
			if ((HeadX > 4) && (HeadX <= 4 + TITLENUM))
			{
				Board[HeadX-1 + HeadY*MAPW] = TITLEMIN + HeadX - 5;
			}
		}

		sleep_ms(GAMESPEED);

		// break help
		if (GetChar() != 0) return True;
	}

	// no break from keyboard
	return False;
}

// game loop - called every single game step (returns True on break Esc)
Bool GameLoop()
{
	// animation
	AnimLevel();

	// key input
	char c = GetChar();

#ifdef AUTOMODE // automode - run levels to check solutions (help completes scene)
	c = KEY_HELP;
#endif

	if (c == 0) return False;

	// convert to upper case
	if ((c >= 'a') && (c <= 'z')) c -= 32;

	switch (c)
	{
	// enter password
	case KEY_OK:
		Psw();
		break;

	// Esc, restart
	case KEY_ESC:
		// break
		if (State != S_GO) return True; 

		// restart scene
		InitLevel();
		break;

	// help
	case KEY_HELP:
		HelpLevel();
		InitLevel();
		break;

	// direction
	case KEY_R:
	case KEY_U:
	case KEY_L:
	case KEY_D:
		// save key into key buffer
		if (KeyBuf1 == 0)
			KeyBuf1 = c;
		else
		{
			if (KeyBuf2 == 0)
				KeyBuf2 = c;
			else
			{
				KeyBuf1 = KeyBuf2;
				KeyBuf2 = c;
			}
		}
		break;

	// unknown key - display help
	default:
		printf("Invalid key: ");
		if (c < 32) printf("0x%02X\n", c); else printf("'%c'\n", c);
		DispHelp();
		FlushChar();
	}

	// no break
	return False;
}

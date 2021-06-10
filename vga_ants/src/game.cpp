
// ****************************************************************************
//
//                                 Game engine
//
// ****************************************************************************

#include "include.h"

const int CastleX[2] = { 72+16, WIDTH-72-16-128 }; // castle X coordinate
const int FenceX[2] = { 72+160, WIDTH-72-160-8 }; // fence X coordinate
const int StateX[2] = { 0, WIDTH-72}; // state X coordinate

// player state
u8 Player;		// active player
int Last;		// last laid card (-1 = none)
Bool LastDiscard;	// last card was discarded
Bool Demo;		// demo mode
sPlayer Players[2];	// player's game parameters
int SelCard;		// selected card (cursor)
int FreePos;		// free card position
int EndGame = -1;	// end game, player's victory (-1 = no win)

// parameter foreground color
const u8 ParFgCol[8] = { COL_YELLOW, COL_WHITE, COL_YELLOW, COL_WHITE,
			COL_YELLOW, COL_WHITE, COL_WHITE, COL_WHITE };

// card table
const sCard Card[CARDTYPES] = {

// bricks
	{	PAR_BRICKS,	1,	PAR_FENCE,	+3 },	// 0: wall
	{	PAR_BRICKS,	1,	PAR_CASTLE,	+2 },	// 1: base
	{	PAR_BRICKS,	3,	PAR_FENCE,	+6 },	// 2: defense
	{	PAR_BRICKS,	3,	PAR_NUM,	0 },	// 3: reserve (castle +8, fence -4)
	{	PAR_BRICKS,	5,	PAR_CASTLE,	+5 },	// 4: tower
	{	PAR_BRICKS,	8,	PAR_BUILDERS,	+1 },	// 5: school
	{	PAR_BRICKS,	10,	PAR_NUM,	0 },	// 6: wain (castle +8, enemy castle -4)
	{	PAR_BRICKS,	12,	PAR_FENCE,	+22 },	// 7: fence
	{	PAR_BRICKS,	18,	PAR_CASTLE,	+20 },	// 8: fort
	{	PAR_BRICKS,	39,	PAR_CASTLE,	+32 },	// 9: Babylon

// weapons
	{	PAR_WEAPONS,	1,	PAR_FENCE,	-2 },	// 10: archer
	{	PAR_WEAPONS,	2,	PAR_FENCE,	-3 },	// 11: knight
	{	PAR_WEAPONS,	2,	PAR_FENCE,	-4 },	// 12: rider
	{	PAR_WEAPONS,	4,	PAR_FENCE,	-6 },	// 13: platoon
	{	PAR_WEAPONS,	8,	PAR_SOLDIERS,	+1 },	// 14: recruit
	{	PAR_WEAPONS,	10,	PAR_FENCE,	-12 },	// 15: attack
	{	PAR_WEAPONS,	12,	PAR_NUM,	0 },	// 16: saboteur (enemy stocks -4)
	{	PAR_WEAPONS,	15,	PAR_NUM,	0 },	// 17: thief (transfer enemy stocks 5)
	{	PAR_WEAPONS,	18,	PAR_CASTLE,	-10 },	// 18: swat
	{	PAR_WEAPONS,	28,	PAR_FENCE,	-32 },	// 19: banshee

// crystals
	{	PAR_CRYSTALS,	4,	PAR_BRICKS,	+8 },	// 20: conjure bricks
	{	PAR_CRYSTALS,	4,	PAR_BRICKS,	-8 },	// 21: crush bricks
	{	PAR_CRYSTALS,	4,	PAR_WEAPONS,	+8 },	// 22: conjure weapons
	{	PAR_CRYSTALS,	4,	PAR_WEAPONS,	-8 },	// 23: crush weapons
	{	PAR_CRYSTALS,	4,	PAR_CRYSTALS,	+8 },	// 24: conjure crystals
	{	PAR_CRYSTALS,	4,	PAR_CRYSTALS,	-8 },	// 25: crush crystals
	{	PAR_CRYSTALS,	8,	PAR_WIZARDS,	+1 },	// 26: sorcerer
	{	PAR_CRYSTALS,	21,	PAR_FENCE,	-25 },	// 27: dragon
	{	PAR_CRYSTALS,	22,	PAR_CASTLE,	+22 },	// 28: pixies
	{	PAR_CRYSTALS,	25,	PAR_NUM,	0 },	// 29: curse (all +1, enemie's all -1)
};

// generate new card
int NewCard()
{
	// unlinear randomness - cards with low number will be most plentiful
	int card = (int)(pow((RandFloat()*0.99f), 1.6f) * CARDTYPES);
	
	// change organization of card order - 3 groups from weakest to strongest cards
	card = (card/3) + (card % 3)*10;
	return card;
}

// test cards permission
void Permission()
{
	// initialize players
	int i, j, card, costs, par;
	sPlayer* p = Players;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < CARDNUM; j++)
		{
			// check card cost
			card = p->cards[j];
			if (card < 0) // invalid card
				p->disable[j] = True;
			else
			{
				costs = Card[card].costs;
				par = Card[card].type;
				p->disable[j] = costs > p->par[par];
			}
		}

		// next player
		p++;
	}
}

// display one card
void DispCard(int type, int x, int y, int shadow, Bool disable, Bool back, Bool discard)
{
	// invalid card
	if (type < 0) return;

	// display card shadow
	if (shadow != 0) DrawBlit(&Canvas, &CardsCanvas, x + shadow, y + shadow,
				CARD_SHADOW*CARDW, 0, CARDW, CARDH, TRANSCOL);

	if (back)
	{
		// display card back side
		DrawBlit(&Canvas, &CardsCanvas, x, y, CARD_BACK*CARDW,
			0, CARDW, CARDH, TRANSCOL);
	}

	else
	{
		// display card
		DrawBlit(&Canvas, &CardsCanvas, x, y, type*CARDW,
			0, CARDW, CARDH, TRANSCOL);

		// card is disabled
		if (disable)
			DrawBlit(&Canvas, &CardsCanvas, x, y, CARD_SHADOW*CARDW,
					0, CARDW, CARDH, TRANSCOL);

		// card is discarded
		if (discard)
			DrawBlit(&Canvas, &CardsCanvas, x, y, CARD_DISCARD*CARDW,
					0, CARDW, CARDH, TRANSCOL);
	}
}

// display cards of active player
void DispCards()
{
	int x = 0; // display 8 cards * 4 pixels = 512 pixels
	sPlayer* p = &Players[Player];
	int i = 0;
	for (i = 0; i < CARDNUM; i++)
	{
		if (p->cards[i] < 0)
			DrawImg(&Canvas, &BackgroundCanvas, x, HEIGHT-CARDH,
				x, HEIGHT-CARDH, CARDW, CARDH);
		else
			DispCard(p->cards[i], x, HEIGHT-CARDH, 4, p->disable[i],
				p->comp && !Demo, False);
		x += CARDW;
	}
}

char NumBuf[20];

// display state of one player
void DispState1(int player)
{
	int i, k;
	sPlayer* p;
	p = &Players[player];

	// display status background (size 72 x 256)
	DrawImg(&Canvas, &StateCanvas, StateX[player], STATEY, 0, 0, 72, 256);

	// display values
	for (i = 0; i < PAR_NUM; i++)
	{
		// decode parameter
		int n = DecNum(NumBuf, p->par[i]);
		n = StateX[player]+54 - n*4;

		// display parameter
		DrawText(&Canvas, NumBuf, n, STATEY+i*32+9,
			ParFgCol[i], FontBoldB8x16, 16);
	}
}

// display states of players
void DispState()
{
	DispState1(0);
	DispState1(1);
}

// display castle of one player
void DispCastle(int player)
{
	// display grass (width 160, height 32)
	DrawBlit(&Canvas, &GrassCanvas, CastleX[player] - 16,
		CASTLEY-16, 0, 0, 160, 32, TRANSCOL);

	// prepare castle height
	int h = Players[player].par[PAR_CASTLE]; // h is in range 0..100
	if (h > CASTLEMAX) h = CASTLEMAX;

	// display shadow
	DrawBlit(&Canvas, &CastleShadowCanvas, CastleX[player],
		CASTLEY - h - 16, 100-h, 0, 228, h+16, TRANSCOL);

	// display castle (width 128, height 32..232)
	int pixh = 2*h + 32; // image height is in range 32..232
	DrawBlit(&Canvas, &CastleCanvas, CastleX[player],
		CASTLEY - pixh, 128*player, 0, 128, pixh, TRANSCOL);
}

// dispay fence of one player
void DispFence(int player)
{
	// prepare fence height
	int h = Players[player].par[PAR_FENCE]; // h is in range 0..100
	if (h > CASTLEMAX) h = CASTLEMAX;

	// display shadow
	DrawBlit(&Canvas, &FenceShadowCanvas, FenceX[player],
		CASTLEY - h - 8, 100-h, 0, 100, h+8, TRANSCOL);

	// display fence (width 8, height 16..216)
	int pixh = 2*h + 16; // image height is in range 16..216
	DrawBlit(&Canvas, &FenceCanvas, FenceX[player],
		CASTLEY - pixh, 0, 0, 8, pixh, TRANSCOL);
}

// draw title selection
void DispSelTitle()
{
	int t = ((int)(time_us_64()/100000)) % 3;
	if (Player==0) DrawBlit(&Canvas, &SelectCanvas, 0, 0, 72*t, 0, 72, 40, TRANSCOL);
	if (Player==1) DrawBlit(&Canvas, &SelectCanvas, WIDTH-72, 0, 72*t, 0, 72, 40, TRANSCOL);
}

// display titles
void DispTitle()
{
	DrawImg(&Canvas, &BlacksRedsCanvas, 4, 4, 0, 0, 64, 32);
	DrawImg(&Canvas, &BlacksRedsCanvas, WIDTH-4-64, 4, 64, 0, 64, 32);
}

// flag animation
void DispFlag()
{
	int t = ((int)(time_us_64()/200000)) & 3;
	int player;
	int i, k;
	sPlayer* p;
	for (player = 0; player < 2; player++)
	{
		p = &Players[player];

		// get castle height
		int h = Players[player].par[PAR_CASTLE]; // h is in range 0..100
		if (h > CASTLEMAX) h = CASTLEMAX;
		int pixh = 2*h + 32; // image height is in range 32..232

		// prepare flag coordinate
		int x = CastleX[player] + 128/2 - 16 + 8;
		int y = CASTLEY - pixh;

		// draw background
		DrawImg(&Canvas, &BackgroundCanvas, x, y, x, y, 32, 32);

		// draw flag
		DrawBlit(&Canvas, &FlagsCanvas, x, y, (t + player*4)*32, 0, 32, 32, TRANSCOL);
	}
}

// cursor ON
void CursorOn()
{
	if (!Players[Player].comp)
	{
		DrawBlit(&Canvas, &CursorCanvas, SelCard*CARDW + 16, HEIGHT-CARDH+32,
			0, 0, 32, 32, TRANSCOL);
	}
}

// cursor OFF
void CursorOff()
{
	sPlayer* p = &Players[Player];
	DispCard(p->cards[SelCard], SelCard*CARDW, HEIGHT-CARDH, 4,
		p->disable[SelCard], p->comp && !Demo, False);
}

// display whole game area
void DispAll()
{
	// display background on top (above status)
	DrawImg(&Canvas, &BackgroundCanvas, 0, 0, 0, 0, WIDTH, STATEY);

	// display titles
	DispTitle();

	// draw title selection
	DispSelTitle();

	// display middle part (betweeen statuses)
	DrawImg(&Canvas, &BackgroundCanvas, 72, STATEY, 72, STATEY, WIDTH-2*72, 256);

	// display castles and fences
	DispCastle(0);
	DispFence(0);
	DispCastle(1);
	DispFence(1);

	// display flags
	DispFlag();

	// display middle cards
	DispCard(0, MIDX1, 0, 4, False, True, False);
	DispCard(Last, MIDX2, 0, 4, False, False, LastDiscard);

	// display state
	DispState();

	// display below part of background
	DrawImg(&Canvas, &BackgroundCanvas, 0, STATEY+256, 0, STATEY+256,
		WIDTH, HEIGHT-STATEY-256);

	// display cards
	DispCards();
}

// start new game
void NewGame(Bool comp1, Bool comp2)
{
	// computer state
	Players[0].comp = comp1;
	Players[1].comp = comp2;
	Demo = (comp1 && comp2);

	// starting player
	if (comp1 && !comp2)
		Player = 1;
	else if (!comp1 && comp2)
		Player = 0;
	else
		Player = RandU8() & 1;

	// none last laid card
	Last = -1;
	LastDiscard = False; // last card was discarded

	// initialize players
	int i, j;
	sPlayer* p = Players;
	for (i = 0; i < 2; i++)
	{
		// set player's parameters
		p->par[PAR_CASTLE] = 30;
		p->par[PAR_FENCE] = 10;
		p->par[PAR_BUILDERS] = 2;
		p->par[PAR_BRICKS] = 5;
		p->par[PAR_SOLDIERS] = 2;
		p->par[PAR_WEAPONS] = 5;
		p->par[PAR_WIZARDS] = 2;
		p->par[PAR_CRYSTALS] = 5;

		// generate cards
		for (j = 0; j < CARDNUM; j++) p->cards[j] = NewCard();

		// next player
		p++;
	}

	SelCard = 3;

	// test cards permission
	Permission();

	// display whole game area
	DispAll();

	// display cursor
	CursorOn();
}

// delay with flag animation
void WaitFlag(u8 del)
{
	for (; del > 0; del--)
	{
		WaitVSync();
		DispFlag();
		DispSelTitle();
		sleep_ms(40);
	}
}

// card animation
void AnimCard(int type, int x1, int y1, int x2, int y2, Bool back, Bool discard)
{
	// play sound
	PlaySound(CardSnd, sizeof(CardSnd));

#define ANIMSTEPS 16 // number of steps of animation

	int i, x, y, xs, ys, s;
	for (i = 0; i < ANIMSTEPS; i++)
	{
		// current card position
		x = (x2 - x1)/ANIMSTEPS*i + x1;
		y = (y2 - y1)/ANIMSTEPS*i + y1;

		// shadow position
		s = (int)(4 + 60*sinf(PI*i/ANIMSTEPS));
		xs = x + s;
		ys = y + s;

		// flag animation
		WaitVSync();
		DispFlag();

		// draw title selection
		DispSelTitle();

		// save shadow screen content
		DrawImg(&Save2Canvas, &Canvas, 0, 0, xs, ys, CARDW, CARDH);

		// save card screen content
		DrawImg(&SaveCanvas, &Canvas, 0, 0, x, y, CARDW, CARDH);

		// draw card
		DispCard(type, x, y, s, False, back, discard);

		// wait
		sleep_ms(20);

		// restore screen content
		DrawImg(&Canvas, &SaveCanvas, x, y, 0, 0, CARDW, CARDH);
		DrawImg(&Canvas, &Save2Canvas, xs, ys, 0, 0, CARDW, CARDH);
	}
}

// take new card
void TakeCard()
{
	// generate new card
	int card = NewCard();

	// card animation
	sPlayer* p = &Players[Player];
	AnimCard(card, MIDX1, 0, FreePos*CARDW, HEIGHT-CARDH, p->comp && !Demo, False);

	// display new card
	p->cards[FreePos] = card;
	p->disable[FreePos] = False;

	// test cards permission
	Permission();

	// redraw all cards
	DispCards();

	// delay
	WaitFlag(5);
}

// change values animation
void ChangeAnim()
{
	int i, player, x, y, par, save;

	// length of animtaion
	for (i = 3; i > 0; i--)
	{
		// display values
		save = 0;
		x = 64;
		for (player = 0; player < 2; player++)
		{
			// prepare X coordinate
			x = (player == 0) ? 64 : (WIDTH-64-32);
			y = STATEY + 6;
			sPlayer* p = &Players[player];

			// loop parameters
			for (par = 0; par < PAR_NUM; par++)
			{
				// parameter changed
				if (p->add[par] != 0)
				{
					// push screen
					DrawImg(&Save3Canvas, &Canvas, 0, save, x, y, 32, 25);

					// draw cloud
					DrawBlit(&Canvas, &CloudCanvas, x, y, 0, 0, 32, 25, TRANSCOL);

					// draw value
					if (p->add[par] >= 0)
					{
						NumBuf[0] = '+';
						int n = DecNum(NumBuf+1, p->add[par])+1;
						DrawText(&Canvas, NumBuf, x+12-n*4, y+3,
							COL_SEMIGREEN, FontBold8x16, 16);
					}
					else
					{
						int n = DecNum(NumBuf, p->add[par]);
						DrawText(&Canvas, NumBuf, x+12-n*4, y+3,
							COL_SEMIRED, FontBold8x16, 16);
					}
					save += 25;
				}
				y += 32;
			}
			x = WIDTH - 64 - 32;
		}

		// delay with flag animation
		WaitFlag(2);

		// pop screen
		save = 0;
		x = 64;
		for (player = 0; player < 2; player++)
		{
			y = STATEY + 6;
			sPlayer* p = &Players[player];

			// loop parameters
			for (par = 0; par < PAR_NUM; par++)
			{
				// parameter changed
				if (p->add[par] != 0)
				{
					// pop screen
					DrawImg(&Canvas, &Save3Canvas, x, y, 0, save, 32, 25);
					save += 25;
				}
				y += 32;
			}
			x = WIDTH - 64 - 32;
		}

		// delay with flag animation
		WaitFlag(2);
	}
}

// display win game
void WinGame(int player)
{
	EndGame = player;

	// prepare castle height
	sPlayer* p = &Players[player];

	// get castle height
	int h = Players[player].par[PAR_CASTLE]; // h is in range 0..100
	if (h > CASTLEMAX) h = CASTLEMAX;
	int pixh = 2*h + 32; // image height is in range 32..232

	// prepare trumpet coordinate
	int x = CastleX[player] + 128/2 - 32;
	int y = CASTLEY - pixh;

	// play fanfare
	PlaySound(FanfaresSnd, sizeof(FanfaresSnd));

	// delay - wait for sounds
	while (PlayingSound())
	{
		// animate flags
		WaitVSync();
		DispFlag();

		// draw trumpet image
		DrawBlit(&Canvas, &TrumpetCanvas, x, y, player*32, 0, 32, 32, TRANSCOL);

		// animate title
		DispSelTitle();

		// delay
		sleep_ms(30);
	};

	// play applaus
	PlaySound(ApplauseSnd, sizeof(ApplauseSnd), True);

	// winning animation
	y = CASTLEY - 32 + 16;
	x = CastleX[player];
	int anim = 0;
	FlushChar();
	int i = Demo ? 200 : 1000000000;
	for (; i > 0; i--)
	{
		// key
		if (GetChar() != 0) break;

		// save background
		DrawImg(&Save4Canvas, &Canvas, 0, 0, x, y, 128, 32);
		
		// draw image
		DrawBlit(&Canvas, &WinCanvas, x, y, player*4*128 
				+ (anim>>2)*128, 0, 128, 32, TRANSCOL);
		anim++;
		if (anim >= 16) anim = 0;

		// animate flags
		WaitVSync();
		DispFlag();

		// animate title
		DispSelTitle();

		// delay
		sleep_ms(30);

		// restore background
		DrawImg(&Canvas, &Save4Canvas, x, y, 0, 0, 128, 32);
	}

	// stop sound
	StopSound();

	// start new game
	NewGame(Players[0].comp, Players[1].comp);
}

// put card (pos = card position)
void PutCard(int pos, Bool discard)
{
	int i, j;

	// card is disabled
	sPlayer* p = &Players[Player];
	if (p->disable[pos]) discard = True;

	// free card position
	FreePos = pos;

	// card type
	int card = p->cards[pos];
	const sCard* c = &Card[card];

	// subtract card value (if not discarded)
	if (!discard)
	{
		// cost card
		p->par[c->type] -= c->costs;

		// display state
		DispState1(Player);

		// test cards permission
		Permission();
	}

	// delete card
	p->cards[pos] = -1; // no card

	// redraw all cards
	DispCards();

	// card animation
	AnimCard(card, pos*CARDW, HEIGHT-CARDH, MIDX2, 0, False, discard);
	Last = card;
	LastDiscard = discard;

	// dispay last card
	DispCard(Last, MIDX2, 0, 4, False, False, LastDiscard);

	// execute card
	if (!discard)
	{
		// save old state
		int castle1 = Players[0].par[PAR_CASTLE];
		int castle2 = Players[1].par[PAR_CASTLE];
		int fence1 = Players[0].par[PAR_FENCE];
		int fence2 = Players[1].par[PAR_FENCE];
		const u8* snd = NULL;
		int sndlen = 0;

		// clear additions of both players
		for (i = 0; i < PAR_NUM; i++)
		{
			Players[0].add[i] = 0;
			Players[1].add[i] = 0;
		}

		// parameter change
		if (c->param != PAR_NUM) // not extra
		{
			// change to enemy
			if (c->value < 0) p = &Players[Player ^ 1];

			// play sound
			switch (c->param)
			{
			// increase power
			case PAR_BUILDERS:
			case PAR_SOLDIERS:
			case PAR_WIZARDS:
				snd = IncreasePowerSnd;
				sndlen = sizeof(IncreasePowerSnd);
				break;

			// castle
			case PAR_CASTLE:
				if (c->value >= 0)
				{
					// build castle
					snd = BuildCastleSnd;
					sndlen = sizeof(BuildCastleSnd);
				}
				else
				{
					// ruin castle
					snd = RuinCastleSnd;
					sndlen = sizeof(RuinCastleSnd); 
				}
				break;

			// fence
			case PAR_FENCE:
				if (c->value >= 0)
				{
					// build fence
					snd = BuildFenceSnd;
					sndlen = sizeof(BuildFenceSnd);
				}
				else
				{
					if (p->par[PAR_FENCE] < -c->value)
					{
						// ruin fence
						snd = RuinFenceSnd;
						sndlen = sizeof(RuinFenceSnd);
					}
					else
					{
						// ruin castle
						snd = RuinCastleSnd;
						sndlen = sizeof(RuinCastleSnd);
					}
				}
				break;

			// stocks
			// PAR_BRICKS
			// PAR_WEAPONS
			// PAR_CRYSTALS
			default:
				if (c->value >= 0)
				{
					// increase stock
					snd = IncreaseStocksSnd;
					sndlen = sizeof(IncreaseStocksSnd);
				}
				else
				{
					// decrease stock
					snd = DecreaseStocksSnd;
					sndlen = sizeof(DecreaseStocksSnd);
				}
				break;
			}

			// set parameter addition
			p->add[c->param] = c->value;
		}

		// extra service
		else
		{
			switch (card)
			{
			// reserve (castle +8, fence -4)
			case 3:
				p->add[PAR_CASTLE] = 8; // castle +8
				if (p->par[PAR_FENCE] >= 4) // fence -4
					p->add[PAR_FENCE] = -4;
				else
					p->add[PAR_FENCE] = - p->par[PAR_FENCE];

				// build castle
				snd = BuildCastleSnd;
				sndlen = sizeof(BuildCastleSnd);
				break;

			// wain (castle +8, enemy castle -4)
			case 6:
				p->add[PAR_CASTLE] = 8; // castle +8
				Players[Player ^ 1].add[PAR_CASTLE] = -4; // enemy castle -4

				// build castle
				snd = BuildCastleSnd;
				sndlen = sizeof(BuildCastleSnd);
				break;
				
			// saboteur (enemy stocks -4)
			case 16:
				p = &Players[Player ^ 1];
				p->add[PAR_BRICKS] = -4;
				p->add[PAR_WEAPONS] = -4;
				p->add[PAR_CRYSTALS] = -4;

				// decrease stock
				snd = DecreaseStocksSnd;
				sndlen = sizeof(DecreaseStocksSnd);
				break;

			// thief (transfer enemy stocks 5)
			case 17:
				{
					p = &Players[Player ^ 1];

					int bricks = p->par[PAR_BRICKS];
					if (bricks > 5) bricks = 5;
					p->add[PAR_BRICKS] = -bricks;

					int weapons = p->par[PAR_WEAPONS];
					if (weapons > 5) weapons = 5;
					p->add[PAR_WEAPONS] = -weapons;

					int crystals = p->par[PAR_CRYSTALS];
					if (crystals > 5) crystals = 5;
					p->add[PAR_CRYSTALS] = -crystals;

					p = &Players[Player];
					p->add[PAR_BRICKS] = bricks;
					p->add[PAR_WEAPONS] = weapons;
					p->add[PAR_CRYSTALS] = crystals;

					// increase stock
					snd = IncreaseStocksSnd;
					sndlen = sizeof(IncreaseStocksSnd);
				}
				break;

			// curse (all +1, enemie's all -1)
			case 29:
				for (i = 0; i < PAR_NUM; i++) p->add[i] = 1;

				p = &Players[Player ^ 1];
				for (i = 0; i < PAR_NUM; i++)
				{
					if (p->par[i] > 0) p->add[i] = -1;
				}

				snd = CurseSnd;
				sndlen = sizeof(CurseSnd);
				break;
			}
		}

		// display state
		DispState();

		// change values animation
		ChangeAnim();

		// delay - wait for sounds
		while (PlayingSound()) (WaitFlag(1));

		// update parameters
		for (i = 0; i < 2; i++)
		{
			p = &Players[i];
			for (j = 0; j < PAR_NUM; j++)
			{
				p->par[j] += p->add[j];

				// check underflow
				switch (j)
				{
				case PAR_FENCE:
					if (p->par[j] < 0)
					{
						p->par[PAR_CASTLE] += p->par[j];
						if (p->par[PAR_CASTLE] < 0) p->par[PAR_CASTLE] = 0;
						p->par[j] = 0;
					}
					break;

				case PAR_BUILDERS:
				case PAR_SOLDIERS:
				case PAR_WIZARDS:
					if (p->par[j] < 1) p->par[j] = 1;
					break;

				default:
					if (p->par[j] < 0) p->par[j] = 0;
					break;
				}
			}
		}

		// test cards permission
		Permission();

		// play sound
		if (snd != NULL) PlaySound(snd, sndlen);

		// redraw screen - only if castles or fences change
		if ((castle1 != Players[0].par[PAR_CASTLE]) ||
			(castle2 != Players[1].par[PAR_CASTLE]) ||
			(fence1 != Players[0].par[PAR_FENCE]) ||
			(fence2 != Players[1].par[PAR_FENCE]))
		{
			DispAll();
		}
		else
		{
			// display state
			DispState();

			// redraw all cards
			DispCards();
		}

		// delay
		WaitFlag(4);
		while (PlayingSound()) (WaitFlag(1));
	}

	// check player's 0 victory
	if ((Players[0].par[PAR_CASTLE] >= 100) ||
		(Players[1].par[PAR_CASTLE] <= 0))
	{
		WinGame(0);
		return;
	}

	// check player's 1 victory
	if ((Players[1].par[PAR_CASTLE] >= 100) ||
		(Players[0].par[PAR_CASTLE] <= 0))
	{
		WinGame(1);
		return;
	}

	// take new card
	TakeCard();

	// change active player
	Player ^= 1;

	// increase stocks
	p = &Players[Player];
	p->par[PAR_BRICKS] += p->par[PAR_BUILDERS];
	p->par[PAR_WEAPONS] += p->par[PAR_SOLDIERS];
	p->par[PAR_CRYSTALS] += p->par[PAR_WIZARDS];

	// display state
	DispState1(Player);

	// test cards permission
	Permission();

	// redraw all cards
	DispCards();

	// clear player's selection frame
	DrawImg(&Canvas, &BackgroundCanvas, 0, 0, 0, 0, 72, 40);
	DrawImg(&Canvas, &BackgroundCanvas, WIDTH-72, 0, WIDTH-72, 0, 72, 40);
	DispTitle();
}

// find best card
int FindCard()
{
	int i;
	sPlayer* p = &Players[Player];

	// find best enabled card (expensive cards are better)
	int foundinx = -1; // found card position
	int foundval = 0; // found card value
	int card, testval;
	const sCard* c;
	for (i = 0; i < CARDNUM; i++)
	{
		if (!p->disable[i])
		{
			// get card
			card = p->cards[i];
			c = &Card[card];
			testval = c->costs; // card value

			// workers have preference
			if ((c->param == PAR_BUILDERS) ||
				(c->param == PAR_SOLDIERS) ||
				(c->param == PAR_WIZARDS))
			{
				testval = 100;
			}

			// found card with higher value
			if ((testval > foundval) || ((testval == foundval) && (RandU8() < 0x60)))
			{
				foundinx = i;
				foundval = testval;
			}
		}
	}

	// enabled card not found - find card for discard 
	//    (discard expensive cards, they cannot be use for a long time)
	if (foundinx < 0)
	{
		foundinx = 0;

		for (i = 0; i < CARDNUM; i++)
		{
			if (p->disable[i])
			{
				// get card
				card = p->cards[i];
				c = &Card[card];
				testval = c->costs; // card value

				// found card with higher value
				if (testval > foundval)
				{
					foundinx = i;
					foundval = testval;
				}
			}
		}
	}

	return foundinx;
}

// auto play
void AutoPlay()
{
	// small delay
	WaitFlag(8);

	int foundinx = FindCard();

	// put card
	PutCard(foundinx, Players[Player].disable[foundinx]);
}

// game
void Game(Bool comp1, Bool comp2, Bool autodemo)
{
	char ch;

	// start new game
	EndGame = -1;
	NewGame(comp1, comp2);

	// main loop
	while (true)
	{
		// active player is computer
		if (Players[Player].comp)
		{
			// auto play
			AutoPlay();

			// display cursor
			CursorOn();

			// flush keyboard
			if (!Demo)
				FlushChar();
			else
			{
				if (GetChar() != 0)
				{
					StopSound();
					return;
				}
			}

			// return from auto demo
			if (autodemo && (EndGame >= 0))
			{
				StopSound();
				return;
			}
		}
		else
		{
			// input from keyboard
			ch = GetChar();

			// serve keyboard
			switch (ch)
			{
			// quit
			case KEY_QUIT:
				StopSound();
				return;

			// left
			case KEY_L:
				WaitVSync();
				CursorOff();
				SelCard--;
				if (SelCard < 0) SelCard = CARDNUM-1;
				CursorOn();
				FlushChar();
				break;

			// right
			case KEY_R:
				WaitVSync();
				CursorOff();
				SelCard++;
				if (SelCard >= CARDNUM) SelCard = 0;
				CursorOn();
				FlushChar();
				break;

			// discard
			case KEY_DISCARD:
				PutCard(SelCard, True);
				CursorOn();
				FlushChar();
				break;

			// select
			case KEY_SELECT:
				PutCard(SelCard, Players[Player].disable[SelCard]);
				CursorOn();
				FlushChar();
				break;

			// help
			case KEY_HELP:
				CursorOff();
				SelCard = FindCard();
				CursorOn();
				FlushChar();
				break;

			// no key
			case 0:
				// birds
				if (!PlayingSound())
				{
					PlaySound(BirdsSnd, sizeof(BirdsSnd), True);
				}
				break;

			// invalid key
			default:
				DispHelp();
				FlushChar();
				break;
			}
		}

		// draw title selection
		DispSelTitle();

		// wait for VSync scanline (to avoid flag flickering)
		WaitVSync();

		// flag animation
		DispFlag();

		// short delay
		sleep_ms(30);
	}
}

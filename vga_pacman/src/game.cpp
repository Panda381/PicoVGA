
// ****************************************************************************
//
//                                 Game
//
// ****************************************************************************

#include "include.h"

// shift X coordinate in direction (wrap coordinate and direction)
s8 ShiftX(s8 x, s8 dir)
{
	dir &= 3;
	x += DirX[dir];
	if (x < 0) x += MAPW;
	if (x >= MAPW) x -= MAPW;
	return x;
}

// shift Y coordinate in direction (wrap coordinate and direction)
s8 ShiftY(s8 y, s8 dir)
{
	dir &= 3;
	y += DirY[dir];
	if (y < 0) y += MAPH;
	if (y >= MAPH) y -= MAPH;
	return y;
}

// get board 1 step in (wrapped) direction
u8 GetBoardDir(s8 x, s8 y, s8 dir)
{
	x = ShiftX(x, dir);
	y = ShiftY(y, dir);
	return Board[y*MAPW + x];
}

// check free tile on the direction (gate = gate is transparent)
Bool CheckBoard(s8 x, s8 y, s8 dir, Bool gate)
{
	u8 b = GetBoardDir(x, y, dir);
	return (b == TILE_EMPTY) || (b == TILE_DOT) || (b == TILE_PELLET) ||
		(b == TILE_PELLETOFF) || ((b == TILE_GATE) && gate);
}

// update sprite coordinates and animation phase
void SpriteUpdate()
{
	int i, k;
	sChar* ch;
	Bool moving;
	for (i = 0; i < 5; i++)
	{
		ch = &Chars[i];
		ch->sprite.x = ch->x;
		ch->sprite.y = ch->y;
		moving = (ch->dx != 0) || (ch->dy != 0);
		k = i;
		if (ch->state == S_FRIGHTEN)
		{
			k = CH_FRIGHTEN;
			if ((FrightenCnt < 3000/SPEED) && ((FrightenCnt & 4) == 0)) k = CH_FROZEN;
		}
		else if (ch->state == S_EATEN)
			k = CH_EYES;
		k = SpriteInx[k*4*4 + ch->dir*4 + (moving ? Phase : 1)]; // get sprite index
		ch->sprite.img = &SpritesImg_Copy[k*SPRITEW];
		ch->sprite.x0 = &SpritesX0[k*SPRITEH];
		ch->sprite.w0 = &SpritesW0[k*SPRITEH];
	}
}

// display score
void DispScore()
{
	// score
	PrintHome();
	PrintText("    SCORE ");
	DecUNum(NumBuf, Score);
	PrintText(NumBuf);

	// max. score
	PrintSpcTo(22);
	PrintText("HIGH SCORE ");
	DecUNum(NumBuf, MaxScore);
	PrintText(NumBuf);

	PrintSpcTo(TEXTMAX);
}

// display status line
void DispStatus()
{
	int i, j, k;

	// remaining lives
	for (i = 0; i < 5; i++)
	{
		if (i < Lives)
			DrawImg(&Canvas, &StatusCanvas, i*BOTTOMH+2*BOTTOMH, 0, 0, 0, BOTTOMH, BOTTOMH);
		else
			DrawRect(&Canvas, i*BOTTOMH+2*BOTTOMH, 0, BOTTOMH, BOTTOMH, COL_BLACK);
	}	

	// level
	j = 0;
	k = Level;
	if (k > 6) j = k - 6;
	for (i = 0; i < 7; i++)
	{
		if (j > FRUITTABMAX-1) j = FRUITTABMAX-1;
		if (j <= k)
			DrawImg(&Canvas, &StatusCanvas, WIDTH-3*BOTTOMH-i*BOTTOMH,
				0, (FruitTab[j]+1)*BOTTOMH, 0, BOTTOMH, BOTTOMH);
		else
			DrawRect(&Canvas, WIDTH-3*BOTTOMH-i*BOTTOMH, 0, BOTTOMH, BOTTOMH, COL_BLACK);
		j++;
	}	
}

// add (and display) score
void AddScore(int score)
{
	Score += score;
	if (Score > MaxScore) MaxScore = Score;
	DispScore();

	// extra pacman
	if ((Score >= 10000) && (Score - score < 10000))
	{
		Lives++;
		DispStatus();
		PlaySound(ExtraPacSnd, sizeof(ExtraPacSnd));
		while (PlayingSound()) {}
	}
}

// update blink pellets
void BlinkPellets()
{
	u8 b = Blink + 1;
	int i;
	u8* s;

	if (b == 3)
	{
		b = 0;

		int i;
		s = Board;
		for (i = MAPSIZE; i > 0; i--)
		{
			if (*s == TILE_PELLET)
				*s = TILE_PELLETOFF;
			else if (*s == TILE_PELLETOFF)
				*s = TILE_PELLET;
			s++;
		}
	}

	Blink = b;
}

// dot eaten
void EatDot()
{
	DotCnt--;
	int i;

	// appear fruit
	if ((DotCnt == DOT_FRUIT1) || (DotCnt == DOT_FRUIT2))
	{
		// get bonus symbol
		i = Level;
		if (i > FRUITTABMAX-1) i = FRUITTABMAX-1;
		i = FruitTab[i] + SPRITE_FRUIT;

		// display fruit
		FruitSprite.img = &SpritesImg_Copy[i*SPRITEW];
		FruitSprite.x0 = &SpritesX0[i*SPRITEH];
		FruitSprite.w0 = &SpritesW0[i*SPRITEH];
		FruitSprite.x = (WIDTH-SPRITEW)/2;
		FruitSprite.y = MAPTOY(17);

		// fruit time counter 10 seconds
		FruitCnt = 10*1000/SPEED;
	}
}

// move characters (returns False on death)
Bool Move()
{
	int i, j, dist, bestdist;
	s8 targx, targy, bestx, besty, dir, dir2, bestdir, x0, x2, y0, y2, dx, dy, xpac, ypac, dirpac;
	u8 tile;
	sChar* ch;
	sChar* ch2;
	Bool athome, atgate;

	// prepare pacman coordinates
	xpac = XTOMAP(Chars[CH_PACMAN].x);
	ypac = YTOMAP(Chars[CH_PACMAN].y);
	dirpac = Chars[CH_PACMAN].dir;

	for (i = 0; i < 5; i++)
	{
		ch = &Chars[i];

		// move
		ch->x += ch->dx;
		if (ch->x >= MAPWIDTH) ch->x -= MAPWIDTH;
		if (ch->x < 0) ch->x += MAPWIDTH;
		ch->y += ch->dy;
		if (ch->y >= MAPHEIGHT) ch->y -= MAPHEIGHT;
		if (ch->y < 0) ch->y += MAPHEIGHT;
		ch->steps--;

		// end of step
		if (ch->steps <= 0)
		{
			// pacman
			if (i == CH_PACMAN)
			{
				// correction coordinates if step is not precise
				ch->x = MAPTOX(xpac);
				ch->y = MAPTOY(ypac);

				// collision with ghost
				for (j = 1; j < 5; j++)
				{
					// check distance to ghost
					ch2 = &Chars[j];
					if (((ch2->x - ch->x)*(ch2->x - ch->x) + 
						(ch2->y - ch->y)*(ch2->y - ch->y)) < SPRITEW*SPRITEH)
					{
						// eat ghost
						if (ch2->state == S_FRIGHTEN)
						{
							ch2->state = S_EATEN;
							PlaySound(EatGhostSnd, sizeof(EatGhostSnd));
							AddScore(Eaten);
							Eaten *= 2; // increase eaten bonus
						}

						// eaten by the ghost
						else if (ch2->state != S_EATEN)
						{
							// Pacman death
							PlaySound(DeathSnd, sizeof(DeathSnd));
							Lives--;
							if (Lives >= 0) DispStatus();

							// hide ghosts
							int n;
							for (n = 1; n < 5; n++) Chars[n].sprite.y = HEIGHT + 100;

							// animate death
							for (n = SPRITE_DIE; n < SPRITE_DIE+SPRITE_DIENUM; n++)
							{
								ch->sprite.img = &SpritesImg_Copy[n*SPRITEW];
								ch->sprite.x0 = &SpritesX0[n*SPRITEH];
								ch->sprite.w0 = &SpritesW0[n*SPRITEH];
								sleep_ms(300);
							}

							ch->sprite.y = HEIGHT+100;
							sleep_ms(2000);
							return False;
						}
					}
				}

				if ((FrightenCnt > 0) && !PlayingSound())
					SetNextSound(FrightenSnd, sizeof(FrightenSnd));

				// collect dot
				tile = Board[ypac*MAPW + xpac];
				if (tile == TILE_DOT)
				{
					if (FrightenCnt == 0) SetNextSound(WakkaSnd, sizeof(WakkaSnd));
					Board[ypac*MAPW + xpac] = TILE_EMPTY;
					AddScore(10);
					EatDot();
				}

				// collect pellet
				else if ((tile == TILE_PELLET) || (tile == TILE_PELLETOFF))
				{
					SetNextSound(FrightenSnd, sizeof(FrightenSnd));
					if (Level < FRIGHTENTABMAX) FrightenCnt = FrightenTab[Level]*1000/SPEED;
					Eaten = 200;
					Board[ypac*MAPW + xpac] = TILE_EMPTY;
					AddScore(50);

					// frighten ghosts
					for (j = 1; j < 5; j++)
					{
						ch2 = &Chars[j];
						if (ch2->state != S_EATEN)
						{
							if (FrightenCnt > 0) ch2->state = S_FRIGHTEN;
							ch2->dir = (ch2->dir + 2) & 3; // turn around
						}
					}
					EatDot();
				}

				// collect bonus fruit
				else if ((FruitCnt > 0) && 
					(((ch->x  - FruitSprite.x)*(ch->x  - FruitSprite.x) +
					((ch->y  - FruitSprite.y)*(ch->y  - FruitSprite.y))) < SPRITEW*SPRITEH))
				{
					// add score
					j = Level;
					if (j > FRUITTABMAX-1) j = FRUITTABMAX-1;
					j = FruitTab[j];
					j = BonusTab[j];
					AddScore(j);

					// play sound
		       			PlaySound(EatFruitSnd, sizeof(EatFruitSnd));

					// hide fruit
					FruitSprite.y = HEIGHT+100;
					FruitCnt = 0;
				}
				else
				{
					if (FrightenCnt == 0) SetNextSound(SirenSnd, sizeof(SirenSnd));
				}

				// change direction
				if (CheckBoard(xpac, ypac, NextDir, False))
				{
					dirpac = NextDir;
					Chars[CH_PACMAN].dir = dirpac;
				}

				// check tile if it is empty
				if (CheckBoard(xpac, ypac, dirpac, False))
				{
					// do step
					dx = ShiftX(xpac, dirpac) - xpac;
					if (dx < MAPW/2) dx += MAPW;
					if (dx > MAPW/2) dx -= MAPW;
					ch->dx = dx*CHARSPEED;

					dy = ShiftY(ypac, dirpac) - ypac;
					if (dy < MAPH/2) dy += MAPH;
					if (dy > MAPH/2) dy -= MAPH;
					ch->dy = dy*CHARSPEED;

					ch->steps = CHARSTEPS;
				}

				// else stop moving
				else
				{
					ch->dx = 0;
					ch->dy = 0;
					ch->steps = 1;
				}
			}
			else
			{
				// prepare current coordinate
				x0 = XTOMAP(ch->x);
				y0 = YTOMAP(ch->y);
				dir = ch->dir;

				// correction current coordinate - step can be not precise during eaten state
				ch->y = MAPTOY(y0);
				ch->x = MAPTOX(x0);

				// check if at home
				athome = (x0 >= HOMEXMIN) && (x0 <= HOMEXMAX) &&
					(y0 >= HOMEYMIN) && (y0 <= HOMEYMAX);

				// check if at gate
				atgate = ((dir == DIR_U) || (dir == DIR_D)) &&
					(x0 == HOMEXMID) &&
					(y0 >= 11) && (y0 <= HOMEYMAX);

				// ghost at home or at the gate
				if (athome || atgate)
				{
					// correct coordinates
					ch->x += TILESIZE/2;
					ch->y += TILESIZE/2;
					if (atgate) ch->x = (WIDTH-SPRITEW)/2;

					// sleeping at home
					if (ch->sleeptimer > 0)
					{
						if (y0 == HOMEYMIN)
						{
							ch->dy = CHARSPEED;
							ch->dir = DIR_D;
						}

						if (y0 == HOMEYMAX)
						{
							ch->dy = -CHARSPEED;
							ch->dir = DIR_U;
						}
						ch->steps = CHARSTEPS;
						continue;
					}

					// eaten mode - go home
					if (ch->state == S_EATEN)
					{
						targx = HOMEXMID;
						targy = HOMEYMAX;
					}

					// respawn at home
					if (athome)
					{
						if (ch->state == S_EATEN) ch->state = (ScatterCnt > 0) ? S_SCATTER : S_CHASE;

						// go out from the house
						targx = HOMEXMID;
						targy = 0;
					}
				}
				else
				{
					// prepare new target tile
					switch (ch->state)
					{
					// scatter mode - go to corners
					case S_SCATTER:
						switch (i)
						{
						case CH_BLINKY: // Blinky: target to right up corner
							targx = MAPW-3;
							targy = -3;
							break;

						case CH_PINKY: // Pinky: target to left up corner
							targx = 3;
							targy = -3;
							break;

						case CH_INKY: // Inky: target to right down corner
							targx = MAPW-1;
							targy = MAPH+2;
							break;

						case CH_CLYDE: // Clyde: target to left down corner
							targx = 0;
							targy = MAPH+2;
							break;
						}
						break;

					// chase mode - follow pacman
					case S_CHASE: // target is tile with pacman
						switch (i)
						{
						case CH_BLINKY: // Blinky: target is tile with pacman
							targx = xpac;
							targy = ypac;
							break;

						case CH_PINKY: // Pinky: target is 4 steps before pacman
							targx = xpac + 4*DirX[dirpac];
							targy = ypac + 4*DirY[dirpac];

							// direction UP adds 4 steps to the left
							if (dirpac == DIR_U) targx -= 4;
							break;

						case CH_INKY: // Inky: 2 steps before pacman and then inverse vector to Blinky

							// reference is 2 steps before pacman
							targx = xpac + 2*DirX[dirpac];
							targy = ypac + 2*DirY[dirpac];

							// direction UP adds 2 steps to the left
							if (dirpac == DIR_U) targx -= 2;

							// use inverse vector to Blinky position
							targx = targx + (targx - XTOMAP(Chars[CH_BLINKY].x));
							targy = targy + (targy - YTOMAP(Chars[CH_BLINKY].y));
							break;

						case CH_CLYDE: // Clyde follow pacman (dist > 8) or scatter (dist < 8)

							// check distance to pacman
							targx = xpac - x0;
							targy = ypac - y0;

							if (((int)targx*targx + (int)targy*targy) >= 8*8)
							{
								// distance is > 8 tiles, target is tile with pacman
								targx = xpac;
								targy = ypac;
							}
							else
							{
								// distance is < 8 tiles, target is left down corner
								targx = 0;
								targy = MAPH+2;
							}
							break;
						}
						break;

					// eaten mode - go home
					case S_EATEN:
						targx = HOMEXMID;
						targy = HOMEYMAX;
						break;

					// other modes - random
					default:
						targx = x0 + RandS8MinMax(-10, +10);
						targy = y0 + RandS8MinMax(-10, +10);
						break;
					}
				}
				
				// find best next tile
				bestdist = 100*100;
				bestdir = dir;
				bestx = x0;
				besty = y0;
				for (dir2 = dir-1; dir2 <= dir+(athome ? 2 : 1); dir2++)
				{
					// check tile if it is empty
					if (CheckBoard(x0, y0, dir2, (athome || (ch->state == S_EATEN))))
					{
						// check distance to target
						x2 = ShiftX(x0, dir2);
						y2 = ShiftY(y0, dir2);
						dist = (targx-x2)*(targx-x2) + (targy-y2)*(targy-y2);

						// better distance
						if (dist < bestdist)
						{
							bestdist = dist;
							bestx = x2;
							besty = y2;
							bestdir = dir2;
						}
					}
				}

				// not found
				if (bestdist == 100*100)
				{
					ch->dx = 0;
					ch->dy = 0;
					ch->steps = 1;
				}
				else
				{
					// wrap new direction
					bestdir &= 3;

					// start moving to next tile
					ch->dir = bestdir;

					dx = bestx - x0;
					if (dx < MAPW/2) dx += MAPW;
					if (dx > MAPW/2) dx -= MAPW;

					dy = besty - y0;
					if (dy < MAPH/2) dy += MAPH;
					if (dy > MAPH/2) dy -= MAPH;

					if (ch->state == S_FRIGHTEN)
					{
						ch->dx = dx*(CHARSPEED/2);
						ch->dy = dy*(CHARSPEED/2);
						ch->steps = CHARSTEPS*2;
					}
					else if (ch->state == S_EATEN)
					{
						ch->dx = dx*CHARSPEED*2;
						ch->dy = dy*CHARSPEED*2;
						ch->steps = CHARSTEPS/2;
					}
					else
					{
						ch->dx = dx*CHARSPEED;
						ch->dy = dy*CHARSPEED;
						ch->steps = CHARSTEPS;
					}
				}
			}
		}
	}

	return True;
}

// initialize new game (cont = continue current level)
void NewGame(Bool cont)
{
	int i;

	// switch sprite layer off
	LayerOff(SPRITE_LAYER);

	// initialize game screen
	if (!cont)
	{
		VideoGameInit();
		FrightenCnt = 0; // frighten counter
		DotCnt = DOT_NUM; // dot counter
		FruitSprite.y = HEIGHT+100;
		FruitCnt = 0; // fruit counter
	}
	else
	{
		// display ready text
		for (i = 11; i <= 16; i++) Board[17*MAPW+i] = 35 + i - 11;
	}

	// display status line
	DispStatus();

	// display score
	DispScore();

	// play start music
	PlaySound(StartSnd, sizeof(StartSnd));

	// delay
	sleep_ms(2000);

	// initialize variables
	Phase = 0; // reset animation phase
	NextDir = DIR_L; // pacman next direction
	Blink = 0;

	// prepare sprites
	for (i = 0; i < 5; i++)
	{
		Chars[i].steps = CHARSTEPS/2;
		Chars[i].dx = 0;
		Chars[i].dy = 0;
		Chars[i].state = S_SCATTER;
		Chars[i].anim = i*4*4;
		Chars[i].sleeptimer = 0;
	}

	Chars[CH_PACMAN].x = (WIDTH-SPRITEW)/2;
	Chars[CH_PACMAN].y = MAPTOY(23);
	Chars[CH_PACMAN].dx = CHARSPEED;
	Chars[CH_PACMAN].dir = DIR_L;

	Chars[CH_BLINKY].x = (WIDTH-SPRITEW)/2;
	Chars[CH_BLINKY].y = MAPTOY(11);
	Chars[CH_BLINKY].dx = CHARSPEED;
	Chars[CH_BLINKY].dir = DIR_L;

	Chars[CH_PINKY].x = (WIDTH-SPRITEW)/2;
	Chars[CH_PINKY].y = MAPTOY(14);
	Chars[CH_PINKY].dy = CHARSPEED;
	Chars[CH_PINKY].dir = DIR_D;

	Chars[CH_INKY].x = (WIDTH-SPRITEW)/2-SPRITEW;
	Chars[CH_INKY].y = MAPTOY(14);
	Chars[CH_INKY].dy = -CHARSPEED;
	Chars[CH_INKY].dir = DIR_U;
	Chars[CH_INKY].sleeptimer = 5000/SPEED; // sleep 5 seconds

	Chars[CH_CLYDE].x = (WIDTH-SPRITEW)/2+SPRITEW;
	Chars[CH_CLYDE].y = MAPTOY(14);
	Chars[CH_CLYDE].dy = -CHARSPEED;
	Chars[CH_CLYDE].dir = DIR_U;
	Chars[CH_CLYDE].sleeptimer = 15000/SPEED; // sleep 15 seconds

	SpriteUpdate();

	// switch sprite layer on
	LayerOn(SPRITE_LAYER);

	// delay, wait for music end
	sleep_ms(2000);
	while (PlayingSound()) {}

	// clear ready text
	for (i = 11; i <= 16; i++) Board[17*MAPW+i] = 0;

	// prepare scatter timer
	i = Level;
	if (i > 4) i = 4;
	ScatterCnt = ScatterTab[i*4*2]*1000/SPEED;
	ScatterTabNext = 1;
	ChaseCnt = 0;
}

// wake up ghosts
void WakeUp()
{
	int i;

	// wake up ghosts
	for (i = 1; i < 5; i++)
	{
		if (Chars[i].sleeptimer > 0) Chars[i].sleeptimer--;
	}
}

// unfrighten ghosts, update scatter and chase timers
void Unfrighten()
{
	int i;

	if (FrightenCnt > 0)
	{
		FrightenCnt--;
		if (FrightenCnt == 0)
		{
			for (i = 1; i < 5; i++)
			{
				if (Chars[i].state == S_FRIGHTEN)
				{
					Chars[i].state = (ScatterCnt > 0) ? S_SCATTER : S_CHASE;
				}
			}
		}
	}

	// unpause scatter/chase counters
	else
	{
		if (ScatterCnt > 0)
		{
			ScatterCnt--;
			if (ScatterCnt == 0)
			{
				for (i = 1; i < 5; i++)
				{
					if (Chars[i].state == S_SCATTER)
					{
						Chars[i].state = S_CHASE;
						Chars[i].dir = (Chars[i].dir + 2) & 3; // turn around
					}
				}

				i = Level;
				if (i > 4) i = 4;
				i = ScatterTab[i*4*2 + ScatterTabNext];
				ChaseCnt = i*1000/SPEED;
				ScatterTabNext++;
			}
		}

		else if (ChaseCnt > 0)
		{
			ChaseCnt--;
			if (ChaseCnt == 0)
			{
				for (i = 1; i < 5; i++)
				{
					if (Chars[i].state == S_CHASE)
					{
						Chars[i].state = S_SCATTER;
						Chars[i].dir = (Chars[i].dir + 2) & 3; // turn around
					}
				}

				i = Level;
				if (i > 4) i = 4;
				i = ScatterTab[i*4*2 + ScatterTabNext];
				ScatterCnt = i*1000/SPEED;
				ScatterTabNext++;
			}
		}
	}
}

// open new game
void OpenGame()
{
	char ch;

	// initialize new game
	Score = 0; // reset score
	Level = 0; // start level
	Lives = 4; // remaining lives
	NewGame(False);

	// game loop
	while (True)
	{
		// keyboard
		ch = GetChar();
		switch (ch)
		{
		// left
		case KEY_L:
			NextDir = DIR_L;
			break;

		// right
		case KEY_R:
			NextDir = DIR_R;
			break;

		// up
		case KEY_U:
			NextDir = DIR_U;
			break;

		// down
		case KEY_D:
			NextDir = DIR_D;
			break;

		// pause
		case KEY_PAUSE:
			StopSound();
			FlushChar();
			while (GetChar() == 0) {}
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

		// increase animation phase
		Phase = (Phase+1) & 3;

		// increase pellet blink counter
		BlinkPellets();

		// wake up ghosts
		WakeUp();

		// unfrighten ghosts, update scatter and chase timers
		Unfrighten();

		// hide bonus
		if (FruitCnt > 0)
		{
			FruitCnt--;
			if (FruitCnt == 0) FruitSprite.y = HEIGHT+100;
		}

		// move characters
		if (!Move())
		{
			// death
			if (Lives < 0) return;
			NewGame(True);
		}

		// update sprites
		SpriteUpdate();

		// animation delay
		sleep_ms(SPEED);

		// next level
		if (DotCnt <= 0)
		{
			StopSound();
			sleep_ms(2000);
			Level++;
			NewGame(False);
		}
	}
}


// ****************************************************************************
//
//                                 Open screen
//
// ****************************************************************************

#include "include.h"

const char* OpenCharName[4] = { "SHADOW", "SPEEDY", "BASHFUL", "POKEY" };
const char* OpenCharNick[4] = { "\"BLINKY\"", "\"PINKY\"", "\"INKY\"", "\"CLYDE\"" };
const char* OpenScore[4] = { "200", "400", "800", "1600" };
const u8 OpenCharCol[4] = { COL_BLINKY, COL_PINKY, COL_INKY, COL_CLYDE };

// open screen (break with a valid key)
void OpenScreen()
{
	int i, j, k, step, blink;
	sChar* ch;

	// initialize open screen
	VideoOpenInit();

	// clear open screen
	DrawClear(&Canvas);

	// draw logo
	DrawImg(&Canvas, &LogoCanvas, (WIDTH-LOGOW)/2, 30, 0, 0, LOGOW, LOGOH);
	sleep_ms(500);

	// draw Pico
	DrawText(&Canvas, "for Raspberry Pico", (WIDTH-18*8)/2, 65, COL_GREEN, FontBold8x8);
	sleep_ms(500);

	// draw title
	DrawText(&Canvas, "CHARACTER / NICKNAME", 90, 100, COL_WHITE, FontBold8x8);
	sleep_ms(500);

	// draw characters
	int y = 125;
	for (i = 0; i < 4; i++)
	{
		DrawImg(&Canvas, &SpritesCanvas, 60, y-8, (i*8+SPRITE_BLINKY+4)*SPRITEW, 0, SPRITEW, SPRITEH);
		sleep_ms(500);
		DrawText(&Canvas, OpenCharName[i], 105, y, OpenCharCol[i], FontBold8x8);
		sleep_ms(250);
		DrawText(&Canvas, OpenCharNick[i], 180, y, OpenCharCol[i], FontBold8x8);
		sleep_ms(250);
		y += 32;
	}
	sleep_ms(500);

	// draw dot points
#define X4 120
#define Y4 320
	DrawImg(&Canvas, &TilesCanvas, X4, Y4, TILE_DOT*TILESIZE, 0, TILESIZE, TILESIZE);
	DrawText(&Canvas, "10 pts", X4+25, Y4+2, COL_WHITE, FontBold8x8);

	// draw pellet points
#define Y5 (Y4+20)
	DrawImg(&Canvas, &TilesCanvas, X4, Y5, TILE_PELLET*TILESIZE, 0, TILESIZE, TILESIZE);
	DrawText(&Canvas, "50 pts", X4+25, Y5+2, COL_WHITE, FontBold8x8);
	sleep_ms(500);

	// destination pellet
#define Y3 250
#define X6 60
	DrawImg(&Canvas, &TilesCanvas, X6, Y3+6+16, TILE_PELLET*TILESIZE, 0, TILESIZE, TILESIZE);
	sleep_ms(500);

	// prepare sprites for animation
	for (i = 0; i < 5; i++)
	{
		ch = &Chars[i];
		ch->dx = -CHARSPEED;
		ch->dy = 0;
		ch->x = (MAPW + i*2 + 1)*TILESIZE;
		ch->y = Y3;
		ch->dir = DIR_L;
		ch->anim = i*4*4;
	}
	Chars[0].x -= 12;
	Phase = 0; // reset animation phase
	FrightenCnt = 8000/SPEED;
	SpriteUpdate();
	LayerOn(SPRITE_LAYER);

	// play sound (2-times)
	PlaySound(IntermissionSnd, sizeof(IntermissionSnd), True);

	// animate sprites to the left
	blink = 0;
	do {
		// shift sprites
		for (j = 0; j < 5; j++) Chars[j].x -= CHARSPEED;

		// increase animation phase
		Phase = (Phase+1) & 3;

		// update sprites
		SpriteUpdate();

		// animate pellets
		blink++;
		if (blink == 3)
		{
			// clear pellets
			DrawRect(&Canvas, X4, Y5, 12, 12, COL_BLACK);
			DrawRect(&Canvas, X6, Y3+6+16, 12, 12, COL_BLACK);
		}

		if (blink == 6)
		{
			// draw pellets
			blink = 0;
			DrawImg(&Canvas, &TilesCanvas, X4, Y5, TILE_PELLET*TILESIZE, 0, TILESIZE, TILESIZE);
			DrawImg(&Canvas, &TilesCanvas, X6, Y3+6+16, TILE_PELLET*TILESIZE, 0, TILESIZE, TILESIZE);
		}

		// animation delay
		sleep_ms(SPEED);

	} while (Chars[CH_PACMAN].x > X6+4);

	// clear eaten pellet
	DrawRect(&Canvas, X6, Y3+6+16, 12, 12, COL_BLACK);

	// change sprites to frighten
	Chars[0].dx = CHARSPEED;
	Chars[0].dir = DIR_R;
	for (i = 1; i < 5; i++)
	{
		Chars[i].state = S_FRIGHTEN;
		Chars[i].dx = CHARSPEED/2;
		Chars[i].dir = DIR_R;
	}

	// animate sprites to the right
	step = 0;
	do {
		// shift sprites
		for (j = 0; j < 5; j++) Chars[j].x += Chars[j].dx;

		// increase animation phase
		Phase = (Phase+1) & 3;

		// update sprites
		SpriteUpdate();

		// eat ghosts
		j = (step - 8)/12;
		if (((step - 8) - j*12 == 0) && (j < 4))
		{
			// hide pacman
			Chars[0].y = HEIGHT+100;

			// hide ghost
			Chars[j+1].y = HEIGHT+100;

			// stop sound
			if (j > 1) SetNextSound(NULL, 0);

			// update sprites
			SpriteUpdate();

			// display score
			DrawText(&Canvas, OpenScore[j], Chars[0].x+8, Y3+8+16, COL_SCORE, FontThin8x8);

			// wait (and blink pellet)
			for (k = 0; k < 14; k++)
			{
				blink++;
				if (blink == 3)
				{
					// clear pellets
					DrawRect(&Canvas, X4, Y5, 12, 12, COL_BLACK);
				}

				if (blink == 6)
				{
					// draw pellets
					blink = 0;
					DrawImg(&Canvas, &TilesCanvas, X4, Y5, TILE_PELLET*TILESIZE, 0, TILESIZE, TILESIZE);
				}

				// animation delay
				sleep_ms(SPEED);
			}

			// clear score
			DrawRect(&Canvas, Chars[0].x+8, Y3+8+16, 32, 8, COL_BLACK);

			// show pacman
			Chars[0].y = Y3;

			// update sprites
			SpriteUpdate();
		}

		// animate pellet
		blink++;
		if (blink == 3)
		{
			// clear pellets
			DrawRect(&Canvas, X4, Y5, 12, 12, COL_BLACK);
		}

		if (blink == 6)
		{
			// draw pellets
			blink = 0;
			DrawImg(&Canvas, &TilesCanvas, X4, Y5, TILE_PELLET*TILESIZE, 0, TILESIZE, TILESIZE);
		}

		// animation delay
		sleep_ms(SPEED);

		step++;

	} while (Chars[CH_PACMAN].x < WIDTH);
}

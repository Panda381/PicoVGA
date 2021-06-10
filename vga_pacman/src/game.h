
// ****************************************************************************
//
//                                 Game
//
// ****************************************************************************

#ifndef _GAME_H
#define _GAME_H

// shift X coordinate in direction (wrap coordinate and direction)
s8 ShiftX(s8 x, s8 dir);

// shift Y coordinate in direction (wrap coordinate and direction)
s8 ShiftY(s8 y, s8 dir);

// get board 1 step in (wrapped) direction
u8 GetBoardDir(s8 x, s8 y, s8 dir);

// check free tile on the direction (gate = gate is transparent)
Bool CheckBoard(s8 x, s8 y, s8 dir, Bool gate);

// update sprite coordinates and animation phase
void SpriteUpdate();

// display score
void DispScore();

// add (and display) score
void AddScore(int score);

// updatge blink pellets
void BlinkPellets();

// move characters (returns False on death)
Bool Move();

// open new game
void OpenGame();

#endif // _GAME_H

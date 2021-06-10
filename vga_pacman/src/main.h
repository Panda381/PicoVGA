
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#ifndef _MAIN_H
#define _MAIN_H

// initialize open screen
void VideoOpenInit();

// initialize game screen
void VideoGameInit();

// display help
void DispHelp();

// get character from keyboard (0 = no key)
char GetChar();

// flush characters from keyboard
void FlushChar();

#endif // _MAIN_H

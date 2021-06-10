
// ****************************************************************************
//
//         Print to attribute text buffer (format GF_ATEXT and GF_MTEXT)
//
// ****************************************************************************

#ifndef _PRINT_H
#define _PRINT_H

// text colors (if using PC CGA colors)
#define PC_BLACK	0
#define PC_BLUE		1
#define PC_GREEN	2
#define PC_CYAN		3
#define PC_RED		4
#define PC_MAGENTA	5
#define PC_BROWN	6
#define PC_LTGRAY	7
#define PC_GRAY		8
#define PC_LTBLUE	9
#define PC_LTGREEN	10
#define PC_LTCYAN	11
#define PC_LTRED	12
#define PC_LTMAGENTA	13
#define PC_YELLOW	14
#define PC_WHITE	15

// compose PC color
#define PC_COLOR(bg,fg) (((bg)<<4)|(fg))

// ASCII characters
#define CHAR_CR	'\r'
#define CHAR_LF	'\n'
#define CHAR_TAB '\t'
#define CHAR_FRAME 16	// frame base
#define FRAME_L	B0	// frame left flag
#define FRAME_U	B1	// frame up flag
#define FRAME_R B2	// frame right flag
#define FRAME_D B3	// frame down flag

#define CHAR_FRAME_FIRST 17 // first frame character
#define CHAR_FRAME_LAST 31 // last frame character
#define CHAR_VLINE (CHAR_FRAME|FRAME_U|FRAME_D) // vertical line
#define CHAR_HLINE (CHAR_FRAME|FRAME_L|FRAME_R) // horizontal line

// current print buffer
extern u8* PrintBuf;

// size of print buffer
extern int PrintBufW, PrintBufH, PrintBufWB;

// print position
extern int PrintX, PrintY;

// print color
extern u8 PrintCol;

// setup print service (if bufwb < 2*bufw, use mono text)
void PrintSetup(u8* buf, int bufw, int bufh, int bufwb);

// clear text screen, using current color
void PrintClear();

// print home
void PrintHome();

// set print position
void PrintSetPos(int x, int y);

// shift relative print position
void PrintAddPos(int x, int y);

// set print color (2x4 bits of colors, use PC_COLOR macro)
void PrintSetCol(u8 col);

// print character, not using control characters
void PrintChar0(char ch);

// print character, using control characters CR, LF, TAB
void PrintChar(char ch);

// print space character
void PrintSpc();

// print space to position
void PrintSpcTo(int pos);

// print repeated character
void PrintCharRep(char ch, int num);

// print repeated space
void PrintSpcRep(int num);

// print text
void PrintText(const char* text);

// print horizontal line into screen, using current color (must not stretch outside valid range!)
void PrintHLine(int x, int y, int w);

// print vertical line into screen, using current color (must not stretch outside valid range!)
void PrintVLine(int x, int y, int h);

// print frame, using current color
void PrintFrame(int x, int y, int w, int h);

#endif // _PRINT_H

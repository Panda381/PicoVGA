
// ****************************************************************************
//
//                   Print to attribute text buffer (format GF_ATEXT)
//
// ****************************************************************************

#include "include.h"

// current print buffer
u8* PrintBuf;

// size of print buffer
int PrintBufW, PrintBufH, PrintBufWB;

// print position
int PrintX, PrintY;

// print color
u8 PrintCol;

// use mono mode
Bool PrintMonoMode;

// setup print service (if bufwb < 2*bufw, use mono text)
void PrintSetup(u8* buf, int bufw, int bufh, int bufwb)
{
	PrintBuf = buf;
	PrintBufW = bufw;
	PrintBufH = bufh;
	PrintBufWB = bufwb;
	PrintX = 0;
	PrintY = 0;
	PrintMonoMode = (bufwb < 2*bufw);
	PrintCol = PC_COLOR(PC_BLACK, PC_WHITE);
}

// clear text screen, using current color
void PrintClear()
{
	int i, y;
	u8* d;
	u8 col = PrintCol;
	for (y = 0; y < PrintBufH; y++)
	{
		d = &PrintBuf[y*PrintBufWB];
		for (i = PrintBufW; i > 0; i--)
		{
			*d++ = ' ';
			if (!PrintMonoMode) *d++ = col;
		}
	}
	PrintX = 0;
	PrintY = 0;
}

// print home
void PrintHome()
{
	PrintX = 0;
	PrintY = 0;
}

// set absolute print position
void PrintSetPos(int x, int y)
{
	PrintX = x;
	PrintY = y;
}

// shift relative print position
void PrintAddPos(int x, int y)
{
	PrintX += x;
	PrintY += y;
}

// set print color (2x4 bits of colors, use PC_COLOR macro)
void PrintSetCol(u8 col)
{
	PrintCol = col;
}

// print character, not using control characters
void PrintChar0(char ch)
{
	if (((u32)PrintX < (u32)PrintBufW) && ((u32)PrintY < (u32)PrintBufH))
	{
		if (PrintMonoMode)
		{
			u8* d = &PrintBuf[PrintX + PrintY*PrintBufWB];
			*d = ch;
		}
		else
		{
			u8* d = &PrintBuf[PrintX*2 + PrintY*PrintBufWB];
			*d++ = ch;
			*d = PrintCol;
		}
	}
	PrintX++;
}

// print character, using control characters CR, LF, TAB
void PrintChar(char ch)
{
	// CR
	if (ch == CHAR_CR)
	{
		PrintX = 0;
	}

	// LF
	else if (ch == CHAR_LF)
	{
		PrintX = 0;
		PrintY++;
	}

	// Tab
	else if (ch == CHAR_TAB)
	{
		PrintX = (PrintX + 7) & ~7;
	}

	// character
	else
		PrintChar0(ch);
}

// print space character
void PrintSpc()
{
	PrintChar0(' ');
}

// print space to position
void PrintSpcTo(int pos)
{
	while (PrintX < pos) PrintSpc();
}

// print repeated character
void PrintCharRep(char ch, int num)
{
	for (; num > 0; num--) PrintChar(ch);
}

// print repeated space
void PrintSpcRep(int num)
{
	for (; num > 0; num--) PrintSpc();
}

// print text
void PrintText(const char* text)
{
	char ch;
	while ((ch = *text++) != 0)
	{
		PrintChar(ch);
	}
}

// print horizontal line into screen, using current color (must not stretch out of valid range)
void PrintHLine(int x, int y, int w)
{
	u8 col = PrintCol;
	u8* d = &PrintBuf[((PrintMonoMode) ? x : (x*2)) + y*PrintBufWB];
	u8 ch;

	// start of line
	ch = *d;
	if ((ch < CHAR_FRAME_FIRST) || (ch > CHAR_FRAME_LAST)) ch = CHAR_FRAME;
	ch |= FRAME_R;
	*d++ = ch;
	if (!PrintMonoMode) *d++ = col;

	// inside line
	for (w -= 2; w > 0; w--)
	{
		ch = *d;
		if ((ch < CHAR_FRAME_FIRST) || (ch > CHAR_FRAME_LAST)) ch = CHAR_FRAME;
		ch |= FRAME_L | FRAME_R;
		*d++ = ch;
		if (!PrintMonoMode) *d++ = col;
	}

	// end of line
	ch = *d;
	if ((ch < CHAR_FRAME_FIRST) || (ch > CHAR_FRAME_LAST)) ch = CHAR_FRAME;
	ch |= FRAME_L;
	*d++ = ch;
	if (!PrintMonoMode) *d = col;
}

// print vertical line into screen, using current color (must not stretch out of valid range)
void PrintVLine(int x, int y, int h)
{
	u8 col = PrintCol;
	int wb = PrintBufWB;
	u8* d = &PrintBuf[((PrintMonoMode) ? x : (x*2)) + y*wb];
	u8 ch;

	// start of line
	ch = *d;
	if ((ch < CHAR_FRAME_FIRST) || (ch > CHAR_FRAME_LAST)) ch = CHAR_FRAME;
	ch |= FRAME_D;
	*d = ch;
	if (!PrintMonoMode) d[1] = col;
	d += wb;

	// inside line
	for (h -= 2; h > 0; h--)
	{
		ch = *d;
		if ((ch < CHAR_FRAME_FIRST) || (ch > CHAR_FRAME_LAST)) ch = CHAR_FRAME;
		ch |= FRAME_D | FRAME_U;
		*d = ch;
		if (!PrintMonoMode) d[1] = col;
		d += wb;
	}

	// end of line
	ch = *d;
	if ((ch < CHAR_FRAME_FIRST) || (ch > CHAR_FRAME_LAST)) ch = CHAR_FRAME;
	ch |= FRAME_U;
	*d = ch;
	if (!PrintMonoMode) d[1] = col;
}

// print frame, using current color
void PrintFrame(int x, int y, int w, int h)
{
	PrintHLine(x, y, w);
	PrintVLine(x, y, h);
	PrintVLine(x + w - 1, y, h);
	PrintHLine(x, y + h - 1, w);
}

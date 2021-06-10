
// ****************************************************************************
//
//                                 Select
//
// ****************************************************************************

#include "include.h"

// print position
//u8 PrintX, PrintY, PrintCol;

const char SelTitle[] = "Select Author";
const char SelTitleName[] = "Author Name";
const char SelTitleColl[] = "Collections";
const char SelTitleLev[] = "Levels";
const char SelTitleTotal[] = "Total";

const char SelCollect[] = "Select Collection";
const char SelCollName[] = "Collection Name";
const char SelAuthor[] = "Author: ";
const char SelColl[] = "Collection: ";

const char SelLevel[] = "Select Level";

#define AUTNAME_W	50	// width of author's name column
#define AUTCOLL_W	13	// width of column with number of collections
#define AUTLEV_W	13	// width of column with number of levels

#define COLNAME_W	(AUTNAME_W+1+AUTCOLL_W) // width of colelction name column

// redraw one author
int CollTotal;
int LevelTotal;
void AuthorSelect1(int inx)
{
	// prepare coordinates on screen
	int y = inx + 7;

	// pointer to author
	const sAuthor* aut = &Author[inx];

	// set color
	PrintSetCol((inx == AutInx) ? PC_COLOR(PC_WHITE, PC_BLACK) : PC_COLOR(PC_BLACK, PC_WHITE));

	// print author name
	PrintSetPos(1, y);
	PrintSpc();
	PrintText(aut->author);

	// print number of collections
	PrintSpcTo(1+AUTNAME_W);
	PrintChar(CHAR_VLINE);
	char buf[12];
	int n = DecNum(buf, aut->collnum);
	PrintSpcRep(AUTCOLL_W/2+2-n);
	CollTotal += aut->collnum;
	PrintText(buf);

	// print number of levels
	PrintSpcTo(1+AUTNAME_W+1+AUTCOLL_W);
	PrintChar(CHAR_VLINE);
	int i, j;
	j = 0;
	for (i = 0; i < aut->collnum; i++) j += aut->collect[i].levnum;
	LevelTotal += j;
	n = DecNum(buf, j);
	PrintSpcRep(AUTLEV_W/2+2-n);
	PrintText(buf);

	// clear rest of row
	PrintSpcTo(TEXTW-1);
}

// display select help
void DispSelHelp()
{
	printf("\n");
	printf("%c ... up\n", KEY_U);
	printf("%c ... down\n", KEY_D);
	printf("%c ... program info\n", KEY_INFO);
	printf("space ... select\n");
	printf("Esc ... back\n");
}

// display select help
void DispSelHelp2()
{
	printf("\n");
	printf("%c ... right\n", KEY_R);
	printf("%c ... up\n", KEY_U);
	printf("%c ... left\n", KEY_L);
	printf("%c ... down\n", KEY_D);
	printf("%c ... program info\n", KEY_INFO);
	printf("space ... select\n");
	printf("Esc ... back\n");
}

// select author (returns True = OK, False = Esc)
Bool AuthorSelect()
{
	// set text mode
	SetTextMode();

	// flush characters from keyboard
	FlushChar();

	// print title frame
	PrintSetCol(PC_COLOR(PC_YELLOW, PC_BLACK));
	int x = (TEXTW - sizeof(SelTitle) + 1 - 4)/2;
	PrintFrame(x, 0, sizeof(SelTitle) - 1 + 4, 3);

	// print title
	PrintSetPos(x+1, 1);
	PrintSpc();
	PrintText(SelTitle);
	PrintSpc();

	// print table frame
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintHLine(0, 4, TEXTW);
	PrintHLine(0, 6, TEXTW);
	PrintHLine(0, 6+AutNum+1, TEXTW);
	PrintVLine(0, 4, 3+AutNum+1);
	PrintVLine(1+AUTNAME_W, 4, 3+AutNum+1);
	PrintVLine(1+AUTNAME_W+1+AUTCOLL_W, 4, 3+AutNum+1);
	PrintVLine(TEXTW-1, 4, 3+AutNum+1);

	// print table head
	int y = 5;
	PrintSetPos(1 + (AUTNAME_W - sizeof(SelTitleName)+1)/2, y);
	PrintText(SelTitleName);
	PrintSetPos(1 + AUTNAME_W + 1 + (AUTCOLL_W - sizeof(SelTitleColl)+1)/2, y);
	PrintText(SelTitleColl);
	PrintSetPos(1 + AUTNAME_W + 1 + AUTCOLL_W + 1 + (AUTLEV_W - sizeof(SelTitleLev)+1)/2, y);
	PrintText(SelTitleLev);

	// print list of authors
	CollTotal = 0;
	LevelTotal = 0;
	int i;
	for (i = 0; i < AutNum; i++)
	{
		AuthorSelect1(i);
	}

	// print total
	y = AutNum + 7 + 1;
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintSetPos(2, y);
	PrintText(SelTitleTotal);

	char buf[12];
	int n = DecNum(buf, CollTotal);
	PrintSetPos(1+AUTNAME_W+1+AUTCOLL_W/2+2-n,y);
	PrintText(buf);

	n = DecNum(buf, LevelTotal);
	PrintSetPos(1+AUTNAME_W+1+AUTCOLL_W+1+AUTLEV_W/2+2-n,y);
	PrintText(buf);

	// select
	char c;
	int j;
	for (;;)
	{
		c = WaitChar();

		switch (c)
		{
		case KEY_L:
		case KEY_U:
			i = AutInx;
			AutInx = -1;
			AuthorSelect1(i);
			i--;
			if (i < 0) i = AutNum-1;
			AutInx = i;
			AuthorSelect1(i);

			CollInx = 0; // selected collection
			AutName = Author[i].author; // author's name
			Collect = Author[i].collect; // pointer to list of collections
			CollNum = Author[i].collnum; // number of collections
			break;

		case KEY_R:
		case KEY_D:
			i = AutInx;
			AutInx = -1;
			AuthorSelect1(i);
			i++;
			if (i > AutNum-1) i = 0;
			AutInx = i;
			AuthorSelect1(i);

			CollInx = 0; // selected collection
			AutName = Author[i].author; // author's name
			Collect = Author[i].collect; // pointer to list of collections
			CollNum = Author[i].collnum; // number of collections
			break;

		case KEY_INFO:
			DispInfo();
			break;

		case KEY_OK:
		case KEY_OK2:
			CollInx = 0; // selected collection
			AutName = Author[AutInx].author; // author's name
			Collect = Author[AutInx].collect; // pointer to list of collections
			CollNum = Author[AutInx].collnum; // number of collections
			return True;

		case KEY_ESC:
		case KEY_ESC2:
		case KEY_ESC3:
			return False;

		default:
			// display select help
			DispSelHelp();
			break;
		}
	}
}

// redraw one collection
void CollSelect1(int inx)
{
	// prepare coordinates on screen
	int y = inx + 8;

	// pointer to author
	const sCollect* coll = &Collect[inx];

	// set color
	PrintSetCol((inx == CollInx) ? PC_COLOR(PC_WHITE, PC_BLACK) : PC_COLOR(PC_BLACK, PC_WHITE));

	// print collection name
	PrintSetPos(1, y);
	PrintSpc();
	PrintText(coll->name);

	// print number of levels
	PrintSpcTo(1+COLNAME_W);
	PrintChar(CHAR_VLINE);
	LevelTotal += coll->levnum;
	char buf[12];
	int n = DecNum(buf, coll->levnum);
	PrintSpcRep(AUTLEV_W/2+2-n);
	PrintText(buf);

	// clear rest of row
	PrintSpcTo(TEXTW-1);
}

// select collection (returns True = OK, False = Esc)
Bool CollSelect()
{
	// set text mode
	SetTextMode();

	// flush characters from keyboard
	FlushChar();

	// print title frame
	PrintSetCol(PC_COLOR(PC_YELLOW, PC_BLACK));
	int x = (TEXTW - sizeof(SelCollect) + 1 - 4)/2;
	PrintFrame(x, 0, sizeof(SelCollect) - 1 + 4, 3);

	// print title
	PrintSetPos(x+1, 1);
	PrintSpc();
	PrintText(SelCollect);
	PrintSpc();

	// print author's name
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintSetPos(0, 4);
	PrintText(SelAuthor);
	PrintText(AutName);

	// print table frame
	int y = 5;
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintHLine(0, y, TEXTW);
	PrintHLine(0, y+2, TEXTW);
	PrintHLine(0, y+2+CollNum+1, TEXTW);
	PrintVLine(0, y, 3+CollNum+1);
	PrintVLine(1+COLNAME_W, y, 3+CollNum+1);
	PrintVLine(TEXTW-1, y, 3+CollNum+1);

	// print table head
	y = 6;
	PrintSetPos(1 + (COLNAME_W - sizeof(SelCollName)+1)/2, y);
	PrintText(SelCollName);
	PrintSetPos(1 + COLNAME_W + 1 + (AUTLEV_W - sizeof(SelTitleLev)+1)/2, y);
	PrintText(SelTitleLev);

	// print list of collections
	LevelTotal = 0;
	int i;
	for (i = 0; i < CollNum; i++)
	{
		CollSelect1(i);
	}

	// print total
	y = CollNum + 8 + 1;
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintSetPos(2, y);
	PrintText(SelTitleTotal);

	char buf[12];
	int n = DecNum(buf, LevelTotal);
	PrintSetPos(1+COLNAME_W+1+AUTLEV_W/2+2-n,y);
	PrintText(buf);

	// select
	char c;
	int j;
	for (;;)
	{
		c = WaitChar();

		switch (c)
		{
		case KEY_L:
		case KEY_U:
			i = CollInx;
			CollInx = -1;
			CollSelect1(i);
			i--;
			if (i < 0) i = CollNum-1;
			CollInx = i;
			CollSelect1(i);

			Level = 0; // selected level
			CollName = Collect[i].name; // name of collection
			Levels = Collect[i].levels; // pointer to list of levels
			LevNum = Collect[i].levnum; // number of levels
			break;

		case KEY_R:
		case KEY_D:
			i = CollInx;
			CollInx = -1;
			CollSelect1(i);
			i++;
			if (i > CollNum-1) i = 0;
			CollInx = i;
			CollSelect1(i);

			Level = 0; // selected level
			CollName = Collect[i].name; // name of collection
			Levels = Collect[i].levels; // pointer to list of levels
			LevNum = Collect[i].levnum; // number of levels
			break;

		case KEY_INFO:
			DispInfo();
			break;

		case KEY_OK:
		case KEY_OK2:
			Level = 0; // selected level
			CollName = Collect[CollInx].name; // name of collection
			Levels = Collect[CollInx].levels; // pointer to list of levels
			LevNum = Collect[CollInx].levnum; // number of levels
			return True;

		case KEY_ESC:
		case KEY_ESC2:
		case KEY_ESC3:
			return False;

		default:
			// display select help
			DispSelHelp();
			break;
		}
	}

	return False;
}

#define LEVW	8	//  __10__  6 chars + 2 space
#define ROWLEV	10	// number of level columns per row
int LevRows;		// number of level rows

// print 1 level
void LevSelect1(int inx)
{
	char buf[12];
	int n = DecNum(buf, inx+1);
	PrintSetCol((inx == Level) ? PC_COLOR(PC_WHITE, PC_BLACK) : PC_COLOR(PC_BLACK, PC_WHITE));
	int col = inx % ROWLEV;
	int row = inx / ROWLEV;
	PrintSetPos(col*LEVW+1, row+7);
	int x1 = (LEVW - 2 - n + 1)/2;
	int x2 = (LEVW - 2 - n)/2;
	PrintSpcRep(x1);
	PrintText(buf);
	PrintSpcRep(x2);
}

// select level (returns True = OK, False = Esc)
Bool LevSelect()
{
	// set text mode
	SetTextMode();

	// flush characters from keyboard
	FlushChar();

	// print title frame
	PrintSetCol(PC_COLOR(PC_YELLOW, PC_BLACK));
	int x = (TEXTW - sizeof(SelLevel) + 1 - 4)/2;
	PrintFrame(x, 0, sizeof(SelLevel) - 1 + 4, 3);

	// print title
	PrintSetPos(x+1, 1);
	PrintSpc();
	PrintText(SelLevel);
	PrintSpc();

	// print author's name
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintSetPos(4, 4);
	PrintText(SelAuthor);
	PrintText(AutName);

	// print collection name
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintSetPos(0, 5);
	PrintText(SelColl);
	PrintText(CollName);

	// prepare number of level rows
	LevRows = (LevNum + ROWLEV - 1) / ROWLEV;

	// print table frame
	int y = 6;
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintFrame(0, y, TEXTW, LevRows+2);

	// print list of levels
	int i;
	for (i = 0; i < LevNum; i++)
	{
		LevSelect1(i);
	}

	// select
	char c;
	int j;
	for (;;)
	{
		c = WaitChar();

		switch (c)
		{
		case KEY_U:
			i = Level;
			Level = -1;
			LevSelect1(i);
			i -= ROWLEV;
			if (i < 0) i = LevNum-1;
			Level = i;
			LevSelect1(i);

			LevDef = Levels[i*2]; // current level definition
			LevSolve = Levels[i*2+1]; // current level solve
			break;

		case KEY_L:
			i = Level;
			Level = -1;
			LevSelect1(i);
			i--;
			if (i < 0) i = LevNum-1;
			Level = i;
			LevSelect1(i);

			LevDef = Levels[i*2]; // current level definition
			LevSolve = Levels[i*2+1]; // current level solve
			break;

		case KEY_D:
			i = Level;
			Level = -1;
			LevSelect1(i);
			i += ROWLEV;
			if (i > LevNum-1) i = 0;
			Level = i;
			LevSelect1(i);

			LevDef = Levels[i*2]; // current level definition
			LevSolve = Levels[i*2+1]; // current level solve
			break;

		case KEY_R:
			i = Level;
			Level = -1;
			LevSelect1(i);
			i++;
			if (i > LevNum-1) i = 0;
			Level = i;
			LevSelect1(i);

			LevDef = Levels[i*2]; // current level definition
			LevSolve = Levels[i*2+1]; // current level solve
			break;

		case KEY_INFO:
			DispInfo();
			break;

		case KEY_OK:
		case KEY_OK2:
			LevDef = Levels[i*2]; // current level definition
			LevSolve = Levels[i*2+1]; // current level solve
			return True;

		case KEY_ESC:
		case KEY_ESC2:
		case KEY_ESC3:
			return False;

		default:
			// display select help
			DispSelHelp2();
			break;
		}
	}

	return False;
}

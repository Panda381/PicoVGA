
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// draw box
ALIGNED u8 Box[WIDTH*HEIGHT];

// buffer to save screen
//  During card animation, SaveCanvas and Save2Canvas:
//   - card buffer 64*96 = 6144
//   - shadow buffer 64*96 = 6144
//      total 12288 bytes
//  During change animation, Save3Canvas:
//   - 16 parameters of 32*25 = 400
//      total 12800 bytes
//  Winning, Save4Canvas:
//   - animation 128*32 = 4096
ALIGNED u8 SaveScreen[12800];

// canvases
sCanvas BackgroundCanvas;
sCanvas BlacksRedsCanvas;
sCanvas CardsCanvas;
sCanvas CastleCanvas;
sCanvas CastleShadowCanvas;
sCanvas CloudCanvas;
sCanvas CursorCanvas;
sCanvas FenceCanvas;
sCanvas FenceShadowCanvas;
sCanvas FlagsCanvas;
sCanvas GrassCanvas;
sCanvas OpenCanvas;
sCanvas OpenSelCanvas;
sCanvas OpenSel2Canvas;
sCanvas SelectCanvas;
sCanvas StateCanvas;
sCanvas TitleCanvas;
sCanvas Title2Canvas;
sCanvas TrumpetCanvas;
sCanvas WinCanvas;
sCanvas SaveCanvas;
sCanvas Save2Canvas;
sCanvas Save3Canvas;
sCanvas Save4Canvas;

// open selection
int OpenSelInx = 0;

// open text
const char* OpenText[] = {
	"None of the black or red ants remember",
	"who and when started their age-old war",
	"for the anthill \"At the Two Spruces\".",
	"In order to put an end to the eternal",
	"battles, they decided to build castles,",
	"with the help of which they would gain",
	"dominance over the whole territory.",
	"",
	"The aim of the game is to build a castle with a height of",
	"100 or destroy the opponent's castle. Each card consumes",
	"a certain amount of resources (number at the top right).",
	"The rate of resource generation depends on the amount of",
	"workers.",
};

// initialize canvases
void InitImg()
{
	BackgroundCanvas.img = (u8*)BackgroundImg;
	BackgroundCanvas.w = 512;
	BackgroundCanvas.h = HEIGHT;
	BackgroundCanvas.wb = 512;
	BackgroundCanvas.format = CANVAS_8;

	BlacksRedsCanvas.img = (u8*)BlacksRedsImg;
	BlacksRedsCanvas.w = 128;
	BlacksRedsCanvas.h = 32;
	BlacksRedsCanvas.wb = 128;
	BlacksRedsCanvas.format = CANVAS_8;

	CardsCanvas.img = (u8*)CardsImg;
	CardsCanvas.w = 2112;
	CardsCanvas.h = CARDH;
	CardsCanvas.wb = 2112;
	CardsCanvas.format = CANVAS_8;

	CastleCanvas.img = (u8*)CastleImg;
	CastleCanvas.w = 256;
	CastleCanvas.h = 232;
	CastleCanvas.wb = 256;
	CastleCanvas.format = CANVAS_8;

	CastleShadowCanvas.img = (u8*)CastleShadow;
	CastleShadowCanvas.w = 228;
	CastleShadowCanvas.h = 116;
	CastleShadowCanvas.wb = 228;
	CastleShadowCanvas.format = CANVAS_8;

	CloudCanvas.img = (u8*)CloudImg;
	CloudCanvas.w = 32;
	CloudCanvas.h = 25;
	CloudCanvas.wb = 32;
	CloudCanvas.format = CANVAS_8;

	CursorCanvas.img = (u8*)CursorImg;
	CursorCanvas.w = 32;
	CursorCanvas.h = 32;
	CursorCanvas.wb = 32;
	CursorCanvas.format = CANVAS_8;

	FenceCanvas.img = (u8*)FenceImg;
	FenceCanvas.w = 8;
	FenceCanvas.h = 216;
	FenceCanvas.wb = 8;
	FenceCanvas.format = CANVAS_8;

	FenceShadowCanvas.img = (u8*)FenceShadowImg;
	FenceShadowCanvas.w = 100;
	FenceShadowCanvas.h = 116;
	FenceShadowCanvas.wb = 100;
	FenceShadowCanvas.format = CANVAS_8;

	FlagsCanvas.img = (u8*)FlagsImg;
	FlagsCanvas.w = 256;
	FlagsCanvas.h = 32;
	FlagsCanvas.wb = 256;
	FlagsCanvas.format = CANVAS_8;

	GrassCanvas.img = (u8*)GrassImg;
	GrassCanvas.w = 160;
	GrassCanvas.h = 32;
	GrassCanvas.wb = 160;
	GrassCanvas.format = CANVAS_8;

	OpenCanvas.img = (u8*)OpenImg;
	OpenCanvas.w = 384;
	OpenCanvas.h = 192;
	OpenCanvas.wb = 384;
	OpenCanvas.format = CANVAS_8;

	OpenSelCanvas.img = (u8*)OpenSelImg;
	OpenSelCanvas.w = 512;
	OpenSelCanvas.h = 64;
	OpenSelCanvas.wb = 512;
	OpenSelCanvas.format = CANVAS_8;

	OpenSel2Canvas.img = (u8*)OpenSel2Img;
	OpenSel2Canvas.w = 128;
	OpenSel2Canvas.h = 64;
	OpenSel2Canvas.wb = 128;
	OpenSel2Canvas.format = CANVAS_8;

	SelectCanvas.img = (u8*)SelectImg;
	SelectCanvas.w = 216;
	SelectCanvas.h = 40;
	SelectCanvas.wb = 216;
	SelectCanvas.format = CANVAS_8;

	StateCanvas.img = (u8*)StateImg;
	StateCanvas.w = 72;
	StateCanvas.h = 256;
	StateCanvas.wb = 72;
	StateCanvas.format = CANVAS_8;

	TitleCanvas.img = (u8*)TitleImg;
	TitleCanvas.w = 224;
	TitleCanvas.h = 84;
	TitleCanvas.wb = 224;
	TitleCanvas.format = CANVAS_8;

	Title2Canvas.img = (u8*)Title2Img;
	Title2Canvas.w = 96;
	Title2Canvas.h = 80;
	Title2Canvas.wb = 96;
	Title2Canvas.format = CANVAS_8;

	TrumpetCanvas.img = (u8*)TrumpetImg;
	TrumpetCanvas.w = 64;
	TrumpetCanvas.h = 32;
	TrumpetCanvas.wb = 64;
	TrumpetCanvas.format = CANVAS_8;

	WinCanvas.img = (u8*)WinImg;
	WinCanvas.w = 1024;
	WinCanvas.h = 32;
	WinCanvas.wb = 1024;
	WinCanvas.format = CANVAS_8;

	SaveCanvas.img = SaveScreen;
	SaveCanvas.w = CARDW;
	SaveCanvas.h = CARDH;
	SaveCanvas.wb = CARDW;
	SaveCanvas.format = CANVAS_8;

	Save2Canvas.img = &SaveScreen[CARDW*CARDH];
	Save2Canvas.w = CARDW;
	Save2Canvas.h = CARDH;
	Save2Canvas.wb = CARDW;
	Save2Canvas.format = CANVAS_8;

	Save3Canvas.img = SaveScreen;
	Save3Canvas.w = 32;
	Save3Canvas.h = 400;
	Save3Canvas.wb = 32;
	Save3Canvas.format = CANVAS_8;

	Save4Canvas.img = SaveScreen;
	Save4Canvas.w = 128;
	Save4Canvas.h = 32;
	Save4Canvas.wb = 128;
	Save4Canvas.format = CANVAS_8;
}

// display help
void DispHelp()
{
	printf("\n");
	printf("%c ... left\n", KEY_L);
	printf("%c ... right\n", KEY_R);
	printf("space ... select\n");
	printf("%c ... discard\n", KEY_DISCARD);
	printf("%c ... help move\n", KEY_HELP);
	printf("%c ... quit\n", KEY_QUIT);
}

// get character from keyboard (0 = no key)
char GetChar()
{
	char c = getchar_timeout_us(0);
	if (c == (char)PICO_ERROR_TIMEOUT) c = 0;
	if ((c >= 'a') && (c <= 'z')) c -= 32;
	return c;
}

// flush characters from keyboard
void FlushChar()
{
	while (GetChar() != 0) {}
}

// display open screen
void DispOpen()
{
	// clear screen
	DrawRect(&Canvas, 0, 0, WIDTH, HEIGHT, COL_BLACK);

	// display ants
	DrawImg(&Canvas, &OpenCanvas, 0, 0, 0, 0, 192, 192);
	DrawImg(&Canvas, &OpenCanvas, WIDTH-192, 96, 192, 0, 192, 192);

	// display title
	DrawImg(&Canvas, &TitleCanvas, 192+32, 0, 0, 0, 224, 84);
	DrawImg(&Canvas, &Title2Canvas, 210, 92, 0, 0, 96, 80);

	// display open text
	int y = 192;
	int i;
	for (i = 0; i < count_of(OpenText); i++)
	{
		DrawText(&Canvas, OpenText[i], 8, 192+i*10, COL_WHITE, FontBold8x8);
	}
}

// display open selection
void DispOpenSel()
{
	DrawImg(&Canvas, &OpenSelCanvas, 0, HEIGHT-64, 0, 0, WIDTH, 64);
	DrawBlit(&Canvas, &OpenSel2Canvas, OpenSelInx*128, HEIGHT-64, 0, 0, 128, 64, COL_BLACK);
}

// main function
int main()
{
	char ch;
	u32 t;

	// initialize random number generator
	RandInitSeed();

	// initialize videomode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// initialize canvases
	InitImg();

	// initialize stdio
	stdio_init_all();

	// initialize sound output
	PWMSndInit();

	// display open screen
	DispOpen();
	DispOpenSel();

	// main loop
	t = time_us_64();
	while (true)
	{
		// input from keyboard
		ch = GetChar();
		switch (ch)
		{
		// cursor left
		case KEY_L:
			OpenSelInx--;
			if (OpenSelInx < 0) OpenSelInx = 3;
			DispOpenSel();
			FlushChar();
			t = time_us_64();
			break;

		// cursor right
		case KEY_R:
			OpenSelInx++;
			if (OpenSelInx > 3) OpenSelInx = 0;
			DispOpenSel();
			FlushChar();
			t = time_us_64();
			break;

		// run game
		case KEY_SELECT:
			Game(OpenSelInx >= 2, ((OpenSelInx & 1) != 0), False);
			DispOpen();
			DispOpenSel();
			FlushChar();
			t = time_us_64();
			break;
	
		// no key
		case 0:
			if ((u32)(time_us_64() - t) >= 15000000ul) // auto demo after 15 seconds
			{
				Game(True, True, True);
				DispOpen();
				DispOpenSel();
				FlushChar();
				t = time_us_64();
			}
			break;

		// unknown key
		default:
			DispHelp();
			FlushChar();
			t = time_us_64();
			break;
		}
	}
}


// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************
// Set videomodes from USB console and display monoscope.
// To use UART console, edit "stdio output" in Makefile.

/*
 n | key | timing | Hres | Vres |ratio|  scan | FPS | sysclk
---+-----+--------+------+------+-----+-------+-----+-------
 0 |  0  | PAL    |  640 |  480 | 4:3 | 15624 |  25 | 121714
 1 |  1  | PAL    |  720 |  576 | 5:4 | 15624 |  25 | 121714
 2 |  2  | PAL    |  768 |  576 | 4:3 | 15625 |  25 | 130000
 3 |  3  | PAL    | 1024 |  576 |16:9 | 15625 |  25 | 130000
 4 |  4  | PALp   |  256 |  192 | 4:3 | 15624 |  50 | 121714
 5 |  5  | PALp   |  320 |  240 | 4:3 | 15624 |  50 | 121714
 6 |  6  | PALp   |  360 |  288 | 5:4 | 15624 |  50 | 121714
 7 |  7  | PALp   |  384 |  288 | 4:3 | 15624 |  50 | 121714
 8 |  8  | PALp   |  512 |  288 |16:9 | 15625 |  50 | 130000
 9 |  9  | NTSC   |  640 |  480 | 4:3 | 15734 |  30 | 122666
10 |  A  | NTSC   |  600 |  480 | 5:4 | 15736 |  30 | 128000
11 |  B  | NTSC   |  848 |  480 |16:9 | 15735 |  30 | 126666
12 |  C  | NTSCp  |  256 |  192 | 4:3 | 15734 |  60 | 122666
13 |  D  | NTSCp  |  320 |  240 | 4:3 | 15734 |  60 | 122666
14 |  E  | NTSCp  |  300 |  240 | 5:4 | 15733 |  60 | 121333
15 |  F  | NTSCp  |  424 |  240 |16:9 | 15735 |  60 | 126666
16 |  G  | EGA    |  320 |  200 |16:10| 31469 |  70 | 126000
17 |  H  | EGA    |  640 |  400 |16:10| 31469 |  70 | 126000
18 |  I  | EGA    |  500 |  400 | 5:4 | 31471 |  70 | 138000
19 |  J  | EGA    |  528 |  400 | 4:3 | 31467 |  70 | 124800
20 |  K  | EGA    |  704 |  400 |16:9 | 31465 |  70 | 138666
21 |  L  | VGA    |  320 |  240 | 4:3 | 31469 |  60 | 126000
22 |  M  | VGA    |  640 |  480 | 4:3 | 31469 |  60 | 126000 *
23 |  N  | VGA    |  848 |  480 |16:9 | 31470 |  60 | 133714
24 |  O  | SVGA   |  400 |  300 | 4:3 | 37879 |  60 | 120000
25 |  P  | SVGA   |  800 |  600 | 4:3 | 37879 |  60 | 120000
26 |  Q  | SVGA   | 1064 |  600 |16:9 | 37883 |  60 | 159600
27 |  R  | XGA    | 1024 |  768 | 4:3 | 48363 |  60 | 195000
28 |  S  | XGA    | 1360 |  768 |16:9 | 48367 |  60 | 259200
29 |  T  | VESA   | 1152 |  864 | 4:3 | 53696 |  60 | 244800
30 |  U  | HD     | 1280 |  960 | 4:3 | 51859 |  53 | 266400
*/

#define PI_MONOSCOPE 31

#include "include.h"

u16 Rows[962];	// RLE rows
u8 Img[180000] __attribute__ ((aligned(4))); // RLE image
int MonoSel = 22; // selected videomode

// monoscope descriptor
typedef struct {
	int		width;		// width
	int		height;		// height
	int		full;		// full width
	int		imgsize;	// image size
	const u16*	rows;		// pointer to rows
	const u8*	img;		// pointer to image
	const sVideo*	video;		// videomode timings
	Bool		dbly;		// double y
} sMono;

// available videomodes
sMono Mono[] = {
// TV PALi
	{ 640, 480, 720, count_of(Monoscope640x480), Monoscope640x480_rows, Monoscope640x480, &VideoPAL, False }, // 4:3
	{ 720, 576, 720, count_of(Monoscope720x576), Monoscope720x576_rows, Monoscope720x576, &VideoPAL, False }, // 5:4
	{ 768, 576, 768, count_of(Monoscope768x576), Monoscope768x576_rows, Monoscope768x576, &VideoPAL, False }, // 4:3
	{ 1024, 576, 1024, count_of(Monoscope1024x576), Monoscope1024x576_rows, Monoscope1024x576, &VideoPAL, False }, // 16:9
// TV PALp
	{ 256, 192, 360, count_of(Monoscope256x192), Monoscope256x192_rows, Monoscope256x192, &VideoPALp, False }, // 4:3
	{ 320, 240, 360, count_of(Monoscope320x240), Monoscope320x240_rows, Monoscope320x240, &VideoPALp, False }, // 4:3
	{ 360, 288, 360, count_of(Monoscope360x288), Monoscope360x288_rows, Monoscope360x288, &VideoPALp, False }, // 5:4
	{ 384, 288, 384, count_of(Monoscope384x288), Monoscope384x288_rows, Monoscope384x288, &VideoPALp, False }, // 4:3
	{ 512, 288, 512, count_of(Monoscope512x288), Monoscope512x288_rows, Monoscope512x288, &VideoPALp, False }, // 16:9
// TV NTSCi
	{ 640, 480, 640, count_of(Monoscope640x480), Monoscope640x480_rows, Monoscope640x480, &VideoNTSC, False }, // 4:3
	{ 600, 480, 600, count_of(Monoscope600x480), Monoscope600x480_rows, Monoscope600x480, &VideoNTSC, False }, // 5:4
	{ 848, 480, 848, count_of(Monoscope848x480), Monoscope848x480_rows, Monoscope848x480, &VideoNTSC, False }, // 16:9
// TV NTSCp
	{ 256, 192, 320, count_of(Monoscope256x192), Monoscope256x192_rows, Monoscope256x192, &VideoNTSCp, False }, // 4:3
	{ 320, 240, 320, count_of(Monoscope320x240), Monoscope320x240_rows, Monoscope320x240, &VideoNTSCp, False }, // 4:3
	{ 300, 240, 300, count_of(Monoscope300x240), Monoscope300x240_rows, Monoscope300x240, &VideoNTSCp, False }, // 5:4
	{ 424, 240, 424, count_of(Monoscope424x240), Monoscope424x240_rows, Monoscope424x240, &VideoNTSCp, False }, // 16:9
// EGA
	{ 320, 200, 320, count_of(Monoscope320x200), Monoscope320x200_rows, Monoscope320x200, &VideoEGA, True }, // 16:10
	{ 640, 400, 640, count_of(Monoscope640x400), Monoscope640x400_rows, Monoscope640x400, &VideoEGA, False }, // 16:10
	{ 500, 400, 500, count_of(Monoscope500x400), Monoscope500x400_rows, Monoscope500x400, &VideoEGA, False }, // 5:4

	{ 528, 400, 528, count_of(Monoscope528x400), Monoscope528x400_rows, Monoscope528x400, &VideoEGA, False }, // 4:3
	{ 704, 400, 704, count_of(Monoscope704x400), Monoscope704x400_rows, Monoscope704x400, &VideoEGA, False }, // 16:9
// VGA
	{ 320, 240, 320, count_of(Monoscope320x240), Monoscope320x240_rows, Monoscope320x240, &VideoVGA, True }, // 4:3
	{ 640, 480, 640, count_of(Monoscope640x480), Monoscope640x480_rows, Monoscope640x480, &VideoVGA, False }, // 4:3
	{ 848, 480, 848, count_of(Monoscope848x480), Monoscope848x480_rows, Monoscope848x480, &VideoVGA, False }, // 16:9
// SVGA
	{ 400, 300, 400, count_of(Monoscope400x300), Monoscope400x300_rows, Monoscope400x300, &VideoSVGA, True }, // 4:3
	{ 800, 600, 800, count_of(Monoscope800x600), Monoscope800x600_rows, Monoscope800x600, &VideoSVGA, False }, // 4:3
	{ 1064, 600, 1064, count_of(Monoscope1064x600), Monoscope1064x600_rows, Monoscope1064x600, &VideoSVGA, False }, // 16:9
// XGA
	{ 1024, 768, 1024, count_of(Monoscope1024x768), Monoscope1024x768_rows, Monoscope1024x768, &VideoXGA, False }, // 4:3
	{ 1360, 768, 1360, count_of(Monoscope1360x768), Monoscope1360x768_rows, Monoscope1360x768, &VideoXGA, False }, // 16:9
// VESA
	{ 1152, 864, 1152, count_of(Monoscope1152x864), Monoscope1152x864_rows, Monoscope1152x864, &VideoVESA, False }, // 4:3
// HD
	{ 1280, 960, 1280, count_of(Monoscope1280x960), Monoscope1280x960_rows, Monoscope1280x960, &VideoHD, False }, // 4:3
// PI
	{ 1024, 768, 1024, count_of(PiMonoscope), PiMonoscope_rows, PiMonoscope, &VideoXGA, False }, // 4:3
};

#define MONO_NUM count_of(Mono) // number of videomodes

// prepare videomode configuration
void MonoCfg(int inx)
{
	sMono* mono = &Mono[inx]; // selected videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = mono->video; // video timings
	Cfg.width = mono->width; // screen width
	Cfg.height = mono->height; // screen height
	Cfg.wfull = mono->full; // full width
	Cfg.dbly = mono->dbly; // double Y
	Cfg.mode[IMG_LAYER] = LAYERMODE_RLE; // layer mode
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup
}

// init videomode
void MonoInit(int inx)
{
	// terminate current driver
	VgaInitReq(NULL);

	// prepare videomode configuration
	MonoSel = inx;
	MonoCfg(inx);

	// initialize base layer 0 to simple color (will be not visible)
	ScreenClear(pScreen);
	sStrip* t = ScreenAddStrip(pScreen, Vmode.height);
	sSegm* g = ScreenAddSegm(t, Vmode.width);
	ScreenSegmColor(g, 0xff00ff00, 0x00ff00ff);

	// copy image into RAM buffer (flash is not fast enough)
	sMono* mono = &Mono[inx];
	memcpy(Rows, mono->rows, (mono->height+1)*2);
	memcpy(Img, mono->img, mono->imgsize);

	// setup layer 1 with RLE image of the monoscope
	LayerSetup(IMG_LAYER, Img, &Vmode, mono->width, mono->height, 0, Rows);
	LayerOn(IMG_LAYER);

	// initialize system clock
	if (clock_get_hz(clk_sys) != Vmode.freq*1000)
		set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// reinitialize stdio UART
#if PICO_STDIO_UART
	setup_default_uart();
#endif

	// initialize videomode
	VgaInitReq(&Vmode);
}

// display list of available videomodes
void MonoList()
{
	printf("\n");

	// print header
	printf(" n | key | timing | Hres | Vres |ratio|  scan | FPS | sysclk\n");
	printf("---+-----+--------+------+------+-----+-------+-----+-------\n");

	// print modes
	int i;
	sMono* mono;
	for (i = 0; i < MONO_NUM; i++)
	{
		mono = &Mono[i];

		// prepare videomode configuration
		MonoCfg(i);

		// index
		printf("%2u |", i);

		// key
		if (i < 10)
			printf("  %c  |", i + '0');
		else
			printf("  %c  |", i - 10 + 'A');

		// timing name
		if (i == PI_MONOSCOPE)
			printf(" PICO   |");
		else
			printf(" %s  |", Vmode.name);

		// horizontal resolution
		int w = Vmode.width;
		printf("%5u |", w);

		// vertical resolution
		int h = Vmode.height;
		printf("%5u |", h);

		// ratio
#define EPS 0.02f
		float r = (float)w/h;
		if (fabs(r - 4.0/3) < EPS)
			printf(" 4:3 |");
		else if (fabs(r - 5.0/4) < EPS)
			printf(" 5:4 |");
		else if (fabs(r - 3.0/2) < EPS)
			printf(" 3:2 |");
		else if (fabs(r - 10.0/9) < EPS)
			printf("10:9 |");
		else if (fabs(r - 16.0/9) < EPS)
			printf("16:9 |");
		else if (fabs(r - 8.0/5) < EPS)
			printf("16:10|");
		else
			printf("     |");

		// horizontal frequency
		float f = Vmode.freq*1000.0f; // system frequency at Hz
		float k = f/Vmode.div; // frequency of state machine clock at Hz
		int hor = (int)(k/Vmode.htot + 0.5f); // horizontal frequency
		printf("%6u |", hor);

		// vertical frequency
		int vert = (int)(k/Vmode.htot/Vmode.vtot + 0.5f); // vertical frequency
		printf("%4u |", vert);

		// system frequency 
		printf("%7u", Vmode.freq);

		// current videomode
		if (i == MonoSel) printf(" *");

		// end of line
		printf("\n");
	}

	// print current frequency
	uint hz = clock_get_hz(clk_sys);
	printf("current mode: %u, current sysclk: %u kHz\n", MonoSel, hz/1000);
	printf("Press key: ");
}

int main()
{
	char c;
	int i;

	// run VGA core
	multicore_launch_core1(VgaCore);

	// run default video mode VGA 640x480
	MonoInit(22);

	// initialize stdio
	stdio_init_all();

	while (true)
	{
		// print list
		MonoList();

		// get key
		c = getchar();
		if ((c >= 'a') && (c <= 'z')) c -= 32;
		if (c < 32)
			printf("0x%02X\n", c);
		else
			printf("%c\n", c);

		// set required videomode
		if ((c >= '0') && (c <= '9'))
			MonoInit(c - '0');
		else if ((c >= 'A') && (c <= 'A'+MONO_NUM-11))
			MonoInit(c - 'A' + 10);
		else
			printf("\nInvalid key command\n");
	}
}


// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// page list
const u16* const ImgRowsList[PAGES] = { // list of rows
	Img01_rows,
	Img02_rows,
	Img03_rows,
	Img04_rows,
	Img05_rows,
	Img06_rows,
	Img07_rows,
	Img08_rows,
	Img09_rows,
	Img10_rows,
	Img11_rows,
	Img12_rows,
	Img13_rows,
	Img14_rows,
	Img15_rows,
	Img16_rows,
	Img17_rows,
	Img18_rows,
	Img19_rows,
	Img20_rows,
	Img01_rows,
	Img22_rows,
};

const u8* const ImgList[PAGES] = { // list of images
	Img01,
	Img02,
	Img03,
	Img04,
	Img05,
	Img06,
	Img07,
	Img08,
	Img09,
	Img10,
	Img11,
	Img12,
	Img13,
	Img14,
	Img15,
	Img16,
	Img17,
	Img18,
	Img19,
	Img20,
	Img01,
	Img22,
};

const int ImgSizeList[PAGES] = { // list of image sizes
	sizeof(Img01),
	sizeof(Img02),
	sizeof(Img03),
	sizeof(Img04),
	sizeof(Img05),
	sizeof(Img06),
	sizeof(Img07),
	sizeof(Img08),
	sizeof(Img09),
	sizeof(Img10),
	sizeof(Img11),
	sizeof(Img12),
	sizeof(Img13),
	sizeof(Img14),
	sizeof(Img15),
	sizeof(Img16),
	sizeof(Img17),
	sizeof(Img18),
	sizeof(Img19),
	sizeof(Img20),
	sizeof(Img01),
	sizeof(Img22),
};

// image copy
u16 Img_rows_Copy[IMGHEIGHT+1];
u8 Img_Copy[110000] __attribute__ ((aligned(4)));

// copy of font
u8 Font_Copy[2048] __attribute__ ((aligned(4)));

// text screen (character + 2x4 bit attributes)
u8 Text[TEXTSIZE*2];

// current page
int Page = 0;

const char Title[] = "THE GINGERBREAD HOUSE";

// Text
const char* PageText[PAGES] = {
	// 1
	"            Gemtree Software presents fairy tale for Raspberry Pico\n\n"
	"\n\n"
	"                   (c) 2021 Miroslav Nemecek, panda38.sweb.cz",

	// 2
	"1) Once upon a time there lived a poor wood-cutter, his wife and their two\n"
	"children. The children were called John and Mary. Their father used to go to\n"
	"the forest to dig the stubs. In the summer nice weather, he used to take the\n"
	"kids with him. John and Mary picked up strawberries and they always brought\n"
	"a full jug for their mother.",

	// 3
	"2) One day the father had his job far in the forest and he didn't want the\n"
	"children to go with him, because their legs could hurt them. But John and Mary\n"
	"promised that their legs would not hurt so their father took them with him.\n",

	// 4
	"3) They went for a long time through the forest pathways till they came to a\n"
	"glade. Father admonished the kids not to go too far away, because they could\n"
	"lose their way. Afterwards he began to work.",

	// 5
	"4) John and Mary went to picked up strawberries. They weren't afraid of\n"
	"losing their way, because all the time they heard the wooden axe of their\n"
	"father striking at the stubs.",

	// 6
	"5) When they picked up the full jug and ate bread their mother had given to\n"
	"them for their way, they sat down under a big tree, because their legs would\n"
	"carry them no longer. But after a while, their eyes closed of fatigue and\n"
	"John and Mary fell fast asleep.",

	// 7
	"6) When they awoke at last, it was getting dark in the forest. The children\n"
	"got frightened and looked quickly for their father. They shouted: \"Daddy!,\n"
	"Daddy!\", but their father did not answer. Only the cuckoo gossiped somewhere\n"
	"in the forest brushwood: \"Cuckoo, cuckoo, cuckoo\" and owl had hooted:\n"
	"\"Hoo, hoo\". The darkness thickened and John and Mary searched for their way\n"
	"in vain. They had lost it.",

	// 8
	"7) They stayed alone in the forest and the night was falling. They walked\n"
	"through the brushwood and were frightened. When they didn't know how to get\n"
	"out, Mary, completely depressed, told John: \"John, climb up the tree as high\n"
	"as you can and look at all sides. You may see the light from our house\n"
	"somewhere. Are you frightened?\" \"No, I am not, Mary. Wait a moment, I will\n"
	"be up immediately.\"",

	// 9
	"8) John climbed up the tree, looked around, and suddenly caught sight of a\n"
	"small light afar. He climbed down the tree quickly and told Mary what he had\n"
	"seen. And they went on this direction. At that moment, the clouds dispersed,\n"
	"the moon came out and showed them their way.",

	// 10
	"9) They reached a big meadow, where a nice little house stood. When they\n"
	"approached this house, they wondered. It was made from the gingerbread. They\n"
	"gazed at the house for a while and in the end John broke off a piece from it.\n"
	"Oh, it was such a sweet gingerbread. Mary broke off a piece as well.",

	// 11
	"10) The door of this gingerbread house opened suddenly and an ugly witch went\n"
	"out of the house. The kids were very frightened and before they could recover\n"
	"themselves, the old witch took them firmly by their hands and whimpered: \"Have\n"
	"you enjoyed my gingerbread, dear children? Have you enjoyed it? Don't be afraid\n"
	"of me. You'll be well with me. Very well. Ha-ha, ha-ha.\"",

	// 12
	"11) She closed both of them into the stable. Oh, how sad they were there. But\n"
	"the witch was very lucky to catch the children and she laughed again and\n"
	"again.",

	// 13
	"12) In the morning, she pulled Mary out of the stable, but John remained\n"
	"closed there. Mary had to help her and the witch cooked good meals and fed\n"
	"John to get fat as soon as possible. She was a very wicked witch and she\n"
	"wanted to eat those children.",

	// 14
	"13) She smacked her lips again and again and proved daily whether John was\n"
	"getting fat: \"Show me your finger John. Show it and I'll look at it.\" She\n"
	"wanted to test whether John was already thick enough. But John was a clever\n"
	"boy and stretched out always a little piece of wood on the witch. The witch\n"
	"did not recognize anything. She always cut into the piece of wood by her\n"
	"knife and recognized that John was still too thin.",

	// 15
	"14) However, one morning the witch ordered Mary to bring a lot of wood,\n"
	"because she was going to roast some meat that day. Afterwards, she made a\n"
	"fire in the stove and prepared a big shovel. As soon as she brought the stove\n"
	"to a great heat, she said: \"And now we bring the meat to be roasted.\" She\n"
	"went into the stable and brought John. The things were looking bad.",

	// 16
	"15) The witch already kept the shovel, opened the stove and grimaced at John.\n"
	"\"Come on, you dear kid, do sit down on the shovel and look into the stove\n"
	"whether it is already warm enough. I will bake you cakes.\" But John\n"
	"purposely sat only on the edge of the shovel and immediately fell from it.\n"
	"The witch was angry and grumbled.",

	// 17
	"16) Suddenly, Mary had a good idea and said: \"So, granny, show us how to sit\n"
	"on the shovel.\" \"I will show it to you, kids, I will. Do keep the shovel\n"
	"well.\"",

	// 18
	"17) The children leapt to the shovel, the witch sat down on it properly, and\n"
	"John and Mary pushed her into the stove and closed the door. Done. So much\n"
	"cry. The witch shook the stove door so that the whole gingerbread house\n"
	"vibrated.",

	// 19
	"18) But the children didn't mind it. They ran out from the gingerbread house\n"
	"and aimed to the forest. They ran through the first path they saw and did not\n"
	"look back at all.",

	// 20
	"19) Fortunately, the path led directly to their parent's house. John and Mary\n"
	"ran home quite out of breath. Their father and mother sat there sadly and\n"
	"they were crying. But suddenly the children appeared. They were so happy.",

	// 21
	"20) And the gingerbread house with the wicked witch disappeared somewhere in\n"
	"the forest and nobody heard anything about it anymore.",

	// 22
	"\n\n"
	"                                T H E     E N D\n",
};

// open page
void OpenPage()
{
	LayerOff(IMG_LAYER);

	PrintSetup(Text, TEXTW, TEXTH, TEXTWB);
	int inx = Page;
	PrintSetCol(PC_COLOR(PC_BLACK, PC_WHITE));
	PrintClear();
	memcpy(Img_rows_Copy, ImgRowsList[inx], (IMGHEIGHT+1)*sizeof(u16));
	memcpy(Img_Copy, ImgList[inx], ImgSizeList[inx]);
	PrintText(PageText[inx]);

	// page 0
	if (inx == 0)
	{
		PrintSetCol(PC_COLOR(PC_BLACK, PC_LTRED));
		PrintSetPos((TEXTW - sizeof(Title)+1)/2, 2);
		PrintText(Title);
	}

	LayerOn(IMG_LAYER);
}

// initialize videomode
void VideoInit()
{
	// setup videomode
	VgaCfgDef(&Cfg); // get default configuration
	Cfg.video = &VideoVGA; // video timings
	Cfg.width = WIDTH; // screen width
	Cfg.height = HEIGHT; // screen height
	Cfg.freq = 150000; // user faster sys_clk (AText mode is not fast enough)
	Cfg.mode[IMG_LAYER] = LAYERMODE_RLE; // layer 1 mode
	VgaCfg(&Cfg, &Vmode); // calculate videomode setup

	// initialize base layer 0
	ScreenClear(pScreen);

	// initialize base layer 0 to simple color (will not be visible) + text segment
	sStrip* t = ScreenAddStrip(pScreen, IMGHEIGHT);
	sSegm* g = ScreenAddSegm(t, WIDTH);
	ScreenSegmColor(g, 0, 0);
	t = ScreenAddStrip(pScreen, TEXTHEIGHT);
	g = ScreenAddSegm(t, WIDTH);
	ScreenSegmAText(g, Text, Font_Copy, 8, DefPal16, TEXTWB);

	// setup layer 1 with RLE image
	LayerSetup(IMG_LAYER, Img_Copy, &Vmode, IMGWIDTH, IMGHEIGHT, 0, Img_rows_Copy);
	LayerOn(IMG_LAYER);

	// initialize system clock
	set_sys_clock_pll(Vmode.vco*1000, Vmode.pd1, Vmode.pd2);

	// initialize videomode
	VgaInitReq(&Vmode);
}

int main()
{
	char ch;

	// copy font to RAM buffer
	memcpy(Font_Copy, FontBold8x8, sizeof(FontBold8x8));

	// run VGA core
	multicore_launch_core1(VgaCore);

	// initialize videomode (and open first page)
	VideoInit();

	// open first page
	Page = 0;
	OpenPage();

	// initialize stdio
	stdio_init_all();

	// main loop
	while (true)
	{
		ch = getchar();
		switch (ch)
		{
		case 'J':
		case 'j':
			Page--;
			if (Page < 0) Page = PAGES-1;
			OpenPage();
			break;

		case 'L':
		case 'l':
			Page++;
			if (Page >= PAGES) Page = 0;
			OpenPage();
			break;

		default:
			printf("J ... previous page\n");
			printf("L ... next page\n");
			printf("sys_clk = %ukHz\n", clock_get_hz(clk_sys)/1000);
			break;
		}
	}
}

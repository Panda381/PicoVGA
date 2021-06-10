
// ****************************************************************************
//
//                                 Game levels
//
// ****************************************************************************
// definitions: https://sokoban.info (search "var Board" in source file of the web page)
// solutions: http://ysokoban.atspace.eu/sdb, https://sourceforge.net/projects/sokobanyasc

//   x = grass (empty)
//   # = wall
//   ! or | = next row
//   space or _ or - = floor
//   $ or b = box
//   * or B = box on mark
//   . = mark
//   @ or p = player
//   + or P = player on mark

#include "include.h"

// intro level (tiles 32x32, board 20x15)
const char* IntroLevel[] = {
	"x##xx#xx#x#xx#x!"
	"#xxx#x#x#x#x#x#!"
        "x#xx#x#x##xx#x#!"
        "xx#x#x#x#x#x#x#!"
        "##xxx#xx#x#xx#!"
	"!"
	"xxxxxxx##xxx#xx#xx#!"
	"xxxxxxx#x#x#x#x##x#!"
	"xxxxxxx##xx###x####!"
	"xxxxxxx#x#x#x#x#x##!"
	"xxxxxxx##xx#x#x#xx#!"
	"###################!"
	"#.    $  @  $    .#!"
	"#. $     *     $ .#!"
	"###################!",
	"rrRRRRRlldRRullllllllllLLLLLrrdLL",
};

// authors
const sAuthor Author[] = { // list of authors
	{ "Aymeric du Peloux", PelouxCol, PelouxColNum },
	{ "Brian Damgaard", DamgaardCol, DamgaardColNum },
	{ "David Holland", HollandCol, HollandColNum },
	{ "David W. Skinner", SkinnerCol, SkinnerColNum },
	{ "Evgeny Grigoriev", GrigorCol, GrigorColNum },
	{ "Jean-Pierre Martel", MartelCol, MartelColNum },
	{ "Jordi Domenech", DomenechCol, DomenechColNum },
	{ "Lee J. Haywood", HaywoodCol, HaywoodColNum },
	{ "Many authors of Loma", LomaCol, LomaColNum },
	{ "Marko Dzekic", DzekicCol, DzekicColNum },
	{ "Rick Sladkey", SladkeyCol, SladkeyColNum },
	{ "Thinking Rabbit", RabbitCol, RabbitColNum },
	{ "Yoshio Murase", MuraseCol, MuraseColNum },
};

// selected level
int Level;		// current level 0..
const char* LevDef;	// current level definition
const char* LevSolve;	// current level solve

// selected collection
int LevNum = 0;		// number of levels of current collection
const char** Levels = NULL; // pointer to list of levels
const char* CollName;	// name of current selected collection

// selected author
int CollNum;		// number of collections of current author
int CollInx;		// selected collection of current author
const sCollect* Collect; // pointer of current list of collections
const char* AutName;	// name of current selected author

// authors
const int AutNum = count_of(Author); // number of authors
int AutInx = 0;	// selected author

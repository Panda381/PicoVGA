
// ****************************************************************************
//
//                                 Game levels
//
// ****************************************************************************

#ifndef _LEVELS_H
#define _LEVELS_H

// structure of one collection
typedef struct {
	const char* name;	// name of the collection
	const char** levels;	// pointer to levels (definition + solution)
	int	levnum;		// number of levels
} sCollect;

// structure of one author
typedef struct {
	const char* author;	// author of the collection
	const sCollect* collect; // pointer to collections
	int	collnum;	// number of collections
} sAuthor;

// selected level
extern int Level;		// current level 0..
extern const char* LevDef;	// current level definition
extern const char* LevSolve;	// current level solve

// selected collection
extern int LevNum;		// number of levels of current collection
extern const char** Levels;	// pointer to list of levels
extern const char* CollName;	// name of current selected collection

// selected author
extern int CollNum;		// number of collections of current author
extern int CollInx;		// selected collection of current author
extern const sCollect* Collect; // pointer of current list of collections
extern const char* AutName; 	// name of current selected author

// authors
extern const sAuthor Author[]; // list of authors
extern const int AutNum; // number of authors
extern int AutInx;	// selected author

// collections
extern const sCollect RabbitCol[];
extern const int RabbitColNum;

extern const sCollect PelouxCol[];
extern const int PelouxColNum;

extern const sCollect MuraseCol[];
extern const int MuraseColNum;

extern const sCollect GrigorCol[];
extern const int GrigorColNum;

extern const sCollect HaywoodCol[];
extern const int HaywoodColNum;

extern const sCollect HollandCol[];
extern const int HollandColNum;

extern const sCollect SkinnerCol[];
extern const int SkinnerColNum;

extern const sCollect MartelCol[];
extern const int MartelColNum;

extern const sCollect SladkeyCol[];
extern const int SladkeyColNum;

extern const sCollect DamgaardCol[];
extern const int DamgaardColNum;

extern const sCollect LomaCol[];
extern const int LomaColNum;

extern const sCollect DomenechCol[];
extern const int DomenechColNum;

extern const sCollect DzekicCol[];
extern const int DzekicColNum;

// intro level (tiles 24x24, board 26x20)
extern const char* IntroLevel[];

#endif // _LEVELS_H

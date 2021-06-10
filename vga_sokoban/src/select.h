
// ****************************************************************************
//
//                                 Select
//
// ****************************************************************************

#ifndef _SELECT_H
#define _SELECT_H

extern const char SelAuthor[];
extern const char SelColl[];

// display select help
void DispSelHelp();

// select author (returns True = OK, False = Esc)
Bool AuthorSelect();

// select collection (returns True = OK, False = Esc)
Bool CollSelect();

// select level (returns True = OK, False = Esc)
Bool LevSelect();

#endif // _SELECT_H

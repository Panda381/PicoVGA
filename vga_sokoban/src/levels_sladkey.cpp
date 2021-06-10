
// ****************************************************************************
//
//                        Game levels - Rick Sladkey
//
// ****************************************************************************
// These levels are Copyright (c) 2009 by Rick Sladkey <rick.sladkey@gmail.com>
// Original website: http://home.comcast.net/~jrsladkey/sokoban/index.htm
//
// The puzzles in the collection may be freely distributed provided they remain
// unchanged and are credited with the author's name.
//
// The puzzles may be included with any program under the GNU General Public
// License, version 2.0 or later, with the following restrictions (see the
// Additional Terms section of the GPL).
// (1) A copy of this text must be included with the program, and also with
// all derivatives of that program which include any of the puzzles.
// (2) Misrepresentation of the origin of the puzzles is prohibited, and
// modified versions must be marked as such.
//
// Author's note:
// The Warehouse Volume I - Vertical Mobility (50 puzzles, released January, 2010)
// I would like to dedicate this level-set to  Aymeric du Peloux for inspiration,
// to lotecsoftware.com who provided the Sokoban player for my mobile phone,
// and to my family for supporting my projects.
//
// The subtitle of this level-set "Vertical Mobility" is a reference to the fact
// that all of the levels are taller than they are wide, and with sizes chosen
// so that they can be played on a display with the size and aspect ratio of
// a typical mobile phone without rotation.

#include "include.h"

// The Warehouse Volume I - Vertical Mobility 1, (c) Rick Sladkey
const char* SladkeyCol1[] = {


	// 1 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"### @#!"
	"#    #!"
	"# .#.###!"
	"# $    #!"
	"##*#*# #!"
	"# $    #!"
	"#   ####!"
	"#####!",
	"dlllddRuurrddrrddllldlluRUUluurrrddrrddllLdlUrrrruullDuuulllddrRlluurr"
	"rdDllUluRRurDllddrrrrddlLLdlluRUUrrrrddllLdlu",

	// 2 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"####!"
	"#@ #!"
	"#  #####!"
	"#  $   #!"
	"#****..#!"
	"#  $   #!"
	"# ## ###!"
	"#    #!"
	"######!",
	"ddDDrRRddlllUUUUrRRDDurrdLLuulllddddrrrUUrruuLddlddllluurRlluurrDRRllu"
	"llddddrrruUruuLrddlddllluurRuRDllluRuuulDDrddrruuLrddlllddrrrUUlluUluu"
	"rDd",

	// 3 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x#####!"
	"x# . #!"
	"##$. #!"
	"# $.$##!"
	"# $.$ #!"
	"#  .$ #!"
	"## . @#!"
	"x######!",
	"uLruLUluurDDDrddllluluuRlddrURUdlluRdddrrruuLuuullDDuurrddLUrddrddlllu"
	"luuRlddrURUdlluRdddrrruuLDrdl",

	// 4 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"###@ #!"
	"#    #!"
	"# $$$###!"
	"##$.$  #!"
	"x#.....#!"
	"##$.   #!"
	"# $ ####!"
	"#   #!"
	"#####!",
	"dDDRddlUruUlulldRururDDDDllUURlddrruUddrruLdllluurDldRRRlldddlluRdrUUu"
	"lDuuurrDrddLLddlluRdrUlUUrRuuluurDDDulDulluRdrruulDDld",

	// 5 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"xx#   #!"
	"###$. #!"
	"#  $.###!"
	"# #$.  #!"
	"#    # #!"
	"## @#  #!"
	"x##   ##!"
	"xx#####!",
	"uruuLDDruuuulDDrddllluuRRllddrrUrUdrrddldllUluluurRuurrdLDldRulllddrdr"
	"UruuuulDrdddllluurRllddrrUrUddllluurRddddrruruul",

	// 6 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x#####!"
	"x#   ##!"
	"x# #  ##!"
	"x#  #@ #!"
	"###$.  #!"
	"#  .$###!"
	"# #$. ##!"
	"#   #  #!"
	"#    # #!"
	"###    #!"
	"xx######!",
	"dlDlllddrrUdddrrruuluLuLDDuururuulullddrDDrdrdrddlluLulluuRRlldddRurUr"
	"UdrdrddlllUUlluurRuRDluuluurrdrdrdLuulullddrddllddrru",

	// 7 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x####!"
	"##  ####!"
	"# @$$  #!"
	"# $ .*.#!"
	"##$.   #!"
	"x# * ###!"
	"x# . #!"
	"x#####!",
	"ldRDrruRdllluRluurDlddrrddllUdrruulDurruuLLDRllluRurDrdddllUURDulluRur"
	"Dd",

	// 8 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx#####!"
	"x###   #!"
	"x#  .# #!"
	"x#  *  #!"
	"###$#$##!"
	"#   * #!"
	"#   . #!"
	"### @ #!"
	"xx#####!",
	"luuUURuurrddLDDLLuuluRdddrruuLrddlluUdddlluRdrruruulldDldRuuurrruullDu"
	"rrddlddlluuluRdddrruuLrruullDlDDuururrddlLrddlLddrrUUUdlluUruurrddLddl"
	"ldlluRRuulur",

	// 9 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"x##   ##!"
	"x# .#  ##!"
	"x# * #  #!"
	"##$@$   #!"
	"#  * #  #!"
	"#  . ####!"
	"###  #!"
	"xx####!",
	"DrdLuuUrDrruulullDDrdDllURRRlldddrUUluuulDruurrdrdrddlUlLulDDuuuurrdrd"
	"rdLLLdlUUrddddlUUlldRurruullDDrUrdddlUruulldldr",

	// 10 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx#####!"
	"x###   #!"
	"## $ #$##!"
	"# $ ... #!"
	"# # @ # #!"
	"# ... $ #!"
	"##$# $ ##!"
	"x#   ###!"
	"x#####!",
	"urrrddLLuuluurrDulldddldlluuRuRldlddrrurrdrruuLuullDDulldlddrrRddllUdr"
	"ruuluRuuurrddrddldLruruuluullddRlulldlddRddrrUULrdrruLULuulldRd",

	// 11 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx#####!"
	"x###   #!"
	"##  .# #!"
	"#   *  #!"
	"#  #*###!"
	"##  $ #!"
	"x## @ #!"
	"xx#   #!"
	"xx#####!",
	"luluuurrurrddlLulldddrdrruLUUrruullDDDDuuulldddRddrruLUUULrrruullDldRd"
	"dlluluRddrrddlUruuuulldddRluuurrddDuuuurrddLruulldlldddrruUddlddrUUllu"
	"ur",

	// 12 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx####!"
	"x###  #!"
	"x# .  #!"
	"x# $  #!"
	"###*# #!"
	"#  $  #!"
	"#@ . ##!"
	"#  ###!"
	"####!",
	"rrruruuullldRurrdddlLUUluRdddrruuLrddlluUdddlluRdrruruulldDrruuuulDrdd"
	"dldLuuuluRdddrruuLruulDlDDDrruuLrddllllddrUluRRuUrrddLdLUlldr",

	// 13 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"###  #!"
	"#    ###!"
	"# ##   #!"
	"#  +*# #!"
	"#  #   #!"
	"## ** ##!"
	"x# #  #!"
	"x# $* #!"
	"x###  #!"
	"xxx####!",
	"lluurrrdrrddllUUddrddlUrdddlUruuuruulldllddRRllddRRUrULdddrUUdllluuuur"
	"rDDLrDrddlUlluUrrDrdLuuuuurrddLruulldDDDrUlllUluuurrurDDDDuurrddLdLUrd"
	"dddlUUruuruullulllddRddddr",

	// 14 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx#####!"
	"x###   #!"
	"x#  *  #!"
	"x# #. ##!"
	"## $* #!"
	"#  #. #!"
	"#  $* #!"
	"#  #  #!"
	"####@ #!"
	"xxx####!",
	"ruuulDLrrddlUruuuulDruuulDllddRRUdlluurRlldddlddrUrRUrULdddrUluuuulldd"
	"DldRRluuuurrdddDuuuuurrdLulDDDrUluurrdLulDllddRlddrrrUUUdddllluuuurrur"
	"rdLddddddlu",

	// 15 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"###  #!"
	"# @* ###!"
	"# #.   #!"
	"# $* # #!"
	"# #. # #!"
	"# $* # #!"
	"# #. # #!"
	"# $*   #!"
	"###  ###!"
	"xx####!",
	"RurDldRddlUrdddlUrdddlUruuuuuulllddddRRllddRRUrULddlluuuuuurrrddlDuruu"
	"lllddddddrruruUluUruLdddrddlddrUrruuuuuLLDldDrUluUrrrdddddlllUdrrruuuu"
	"ulllddrdDuuluuruulDrdrrdddddlLulUrdddlUlluuRluuRluuRlddddddrrrrruuuuul"
	"lDDDDuuuurrdddddll",

	// 16 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"###  ##!"
	"# @$  #!"
	"#.#.  #!"
	"# $*  #!"
	"# #. ##!"
	"# $* #!"
	"#.#. #!"
	"# $$ #!"
	"###  #!"
	"xx####!",
	"RurDrddldlUrdddlUrdddlUruuuuruullllddddRRllddRRUrULddlluuuuuurrrrddlld"
	"urruullDurrddlUlullddddddrruruUUruuLLrrddldlUUddrddlUddlluuRRUruruulDl"
	"DDrUldDllddrrUrULuurruululDDurrddlDldddlluuuuuuRlddddddrruuLrddlluUrru"
	"ruruulDlDDrUldDllddrrUrULuurDldddlluuUURlddddrruuLrddlluUrrururuulDlDd"
	"uurrdLdlDllddrrUrULrUUruulDlDDuurrdLdddlddrUUUUlDruUruulDlDllDDRluurru"
	"rrdLuuuld",

	// 17 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx####!"
	"xxx#  #!"
	"####  ##!"
	"#  $$  #!"
	"# #$.# #!"
	"# #..  #!"
	"#@   ###!"
	"######!",
	"rrrurruululDrrddllldlluuurRRDullldddrruUddlluuurRdrUldddrUrruuLLDldRuu"
	"ruulDDDlddlluuurRdrUldddrUluurrrddLLrruullDuruulDd",

	// 18 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"xx#   #!"
	"### # #!"
	"#  $  ##!"
	"# .*.  #!"
	"###$##@#!"
	"xx#    #!"
	"xx######!",
	"ullLUlldRRurruullDurrddlLdlluRRuurrdddLruuullddRdrUllldRurrdrddlllUUlu"
	"RdddrrruulLLuuurrDDLdlddrrruuLuuulldd",

	// 19 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx####!"
	"x###  #!"
	"##    ##!"
	"# $# . #!"
	"#@ $.# #!"
	"###.$  #!"
	"x#. #$##!"
	"x#    #!"
	"x#   ##!"
	"x#####!",
	"rRdRUUrrddLLulDDlddrrurUdlLdlUruuururrddLLuuruulDDDuullDldRRDRUUdlluur"
	"RdrrddLddllUUddrruuLuuuurDlllddr",

	// 20 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x#####!"
	"x#   #!"
	"## #$##!"
	"#   $ ###!"
	"# ..*.. #!"
	"### $   #!"
	"xx##$# ##!"
	"xxx#@  #!"
	"xxx#####!",
	"rruuulLLdRurrdddllUUluRRldddrruuLulDluulldRRdrruuLrddlluRlluuurrDDLruu"
	"lldDrddrUUddrrddllUUluurrDLdddrruuruLdddlluuRlddrruUlluulluurrDd",

	// 21 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x#####!"
	"x# @ #!"
	"x# # ##!"
	"## *  #!"
	"#  .$ #!"
	"# $.$##!"
	"##$. #!"
	"x# * #!"
	"x# * #!"
	"x# . #!"
	"x#####!",
	"rddrdLuuulldddldRDrrUUUdLDlluRuRDrdddddlluURDluUURDulluRurDrruLdlluuur"
	"rDDrdLuuulldddddrrUULDlluRuuurrdDLDlUrrrdLulldddddrrUULDruUUruLuullDDd"
	"RDrUllldRurrdddllUURDulluRuuurrdDLDlUrrrdLulldddrrUULDlluRdrruruLuulld"
	"DDldr",

	// 22 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x####!"
	"x#@ #####!"
	"x#  $   #!"
	"x# *$*  #!"
	"##..*..##!"
	"#  *$* #!"
	"#   $  #!"
	"#####  #!"
	"xxx ####!",
	"dddrRRDrddlULUdrruLuLLUluurDRDuRDrruLLrdDDldlLUlldRRluUURuulDDrRRuLdll"
	"uurDrrrrdLddlddrUUlLLdlluRdrRurrddlu",

	// 23 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"xx#   #!"
	"xx# # #!"
	"xx#   #!"
	"### ####!"
	"#   $  #!"
	"# #$*.@#!"
	"#   .###!"
	"###  #!"
	"xx####!",
	"ulLLDRddlUUUrrrdLLdllluuRRDrdLuuUUrruullDDDDDrruLdlUrdddlUruulllddRRdr"
	"UllluurrDRulllddrRdrUluuUUrruullDDDDDullddrr",

	// 24 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"xx#  #!"
	"###  #!"
	"#  * ##!"
	"#@.#$ #!"
	"## *  #!"
	"#  #  #!"
	"#    ##!"
	"#  ###!"
	"####!",
	"rdddrruuUULuurDDDrddldlluuuluRRlddddrruruulDLruUlldDDlddrUrrUruLuulldd"
	"DldRuuuurrddLruulldDDlddrUUUrrddLruuuuluurDDDDllUluRdddlddrUUUddrrUrul",

	// 25 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"x## @ #!"
	"x#  # ##!"
	"##.$.  #!"
	"# $#$  #!"
	"# .$.###!"
	"# #   #!"
	"#     #!"
	"#   ###!"
	"#####!",
	"ldldRRDDDrdLLruuuuluurrdDrdLulDDDlddlluuurRdrrdLuUUruuullddRdrUlllDldr"
	"RdrUUdllldddrrUUddlluuurRllddRdrUUrULddlluuururRDrruLLLuurrDullddrdrru"
	"l",

	// 26 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx######!"
	"xx##    #!"
	"xx#  #@ #!"
	"###$.$  #!"
	"#  .#. ##!"
	"#  $.$##!"
	"## ## #!"
	"x#    #!"
	"x######!",
	"ullddRdDlLulldRddrrrUUlLrrUrUruullldlDDlDRuuururrrddldldddlllUdrrruuur"
	"uruulllddlddRlulldRddrrruUddllluuRuuururrrddlLLulDruurrDrdLl",

	// 27 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"x##   #!"
	"##.$. #!"
	"# $@$##!"
	"# .$.#!"
	"##   #!"
	"x##  #!"
	"xx####!",
	"DlluRuRurrdLLDlddRUrULdddrUUluuurrdLulDDDrUdllluRRdrddlUruLuuurrdLulDd"
	"DrUllldRdRluurrdLddru",

	// 28 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x####!"
	"x#  ##!"
	"x#   ##!"
	"##$.$ #!"
	"# .@. #!"
	"# $.$##!"
	"##   #!"
	"x#####!",
	"lUdrrruLulDldldRdrrUUruLululDDDRUrrdLddllURUdlluRuRDluuurDrDrdLuullddd"
	"drrUULUluurDrd",

	// 29 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"#####!"
	"#   ##!"
	"#    #!"
	"## # ##!"
	"#  $* #!"
	"#  *. #!"
	"###  ##!"
	"xx#@ #!"
	"xx####!",
	"ruuULDlluRuurrDDLdlUUdrrrdLLrddlUUruuululldRddldRuRDrruLLdlUrrdddlUruu"
	"lldRurDuuuLulldRDDldRRuruuLulDDurrddldlluRuurrddrdLLruuullddRdddrUluul"
	"ldr",

	// 30 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x######!"
	"x#    ##!"
	"## ##  #!"
	"#@$$ # #!"
	"# $ .  #!"
	"###.. ##!"
	"x#  # #!"
	"x#    #!"
	"x#  ###!"
	"x####!",
	"dRUdRdrruLuLDDDldRuuulluRdrrrruululllDDldRuuurrrdrddlluLDrrruulullldDl"
	"dRRDDlddrUUUrrddLruuuruululllddrrDulldRddlddrUu",

	// 31 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x######!"
	"x#    #!"
	"x# #  #!"
	"x# *  #!"
	"###*# ##!"
	"# $.$  #!"
	"#  . # #!"
	"###@   #!"
	"xx######!",
	"rrruuluuuulllddRRlDDRddlUUUddlluRdrrdrruuLuUluullddRdDRdLdrrruuLLruuLu"
	"urDDDuuulllddRdDrddlUUlldRurrddrruuLLruul",

	// 32 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"#####!"
	"#   ##!"
	"#  * ###!"
	"## * @ #!"
	"x# *   #!"
	"x#$.$###!"
	"x# . #!"
	"x#####!",
	"luLulldRddRddlUUrRuuLDDuuulldRurDrddllUdrrurrdLLuululldRdRRuLdldddrrUu"
	"LrddlluUruurDDrruLLdllddrrUdlluurDuRuulDDuuulldRurDrddllUdrrurrdLLuulu"
	"lldr",

	// 33 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"x##  #!"
	"x# * #!"
	"x# * #!"
	"x#@* #!"
	"## * #!"
	"# $.$##!"
	"#  .  #!"
	"#  #  #!"
	"####  #!"
	"xxx####!",
	"RDrDDllUdrrrddlUruLuululuuRDrDDlUrdDDLUdrrddlUruLuuulluururDDDlUrdDDlu"
	"dllddrUluRUrruullDurrddlUrddDLUlldRurruullDDrUdllddrUluRurrddLUllddrUl"
	"uRdrrrddlUrul",

	// 34 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"#######!"
	"#     #!"
	"# #*# #!"
	"#     #!"
	"###@####!"
	"# * .  #!"
	"#   $  #!"
	"#  #####!"
	"#  #!"
	"####!",
	"ulluurrDurrddlLdddlluRdrUrrdLLuUUrruullDDDDllddrUluRRRdLulDruuuuullddr"
	"luurrdDDDrdrruLLdLUUUddlldRlddrUUluRRRdrruLdlLullddru",

	// 35 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"x##   #!"
	"x# @#*##!"
	"x#   * #!"
	"###*#  #!"
	"#  .  ##!"
	"#   $##!"
	"#  # #!"
	"##   #!"
	"x#####!",
	"dDDrruruLddlDLuuuuurrDDLruulldDDDrrUUddllllddrdrrUUddlluluurruurrddLLu"
	"uuurrDDllddrdddlluluuRlddrUddrruuLUUUrruullDldRddrrUUddlluuRldddrddllu"
	"luuRlddrUrUdllur",

	// 36 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"x####!"
	"x#  ####!"
	"## *   #!"
	"#  *#  #!"
	"#@# $.##!"
	"# *   #!"
	"# #*  #!"
	"#   ###!"
	"#####!",
	"uruRldlddRRuUllddddrrUrruuLDLddlluuuurrDDuuluurDldlddRRurruuLLulDrrrdd"
	"llUddllddrrUUUrrddLruulldRlllddrrUruLurruulLDDrddldlluuuuRlddddrruruur"
	"uullulDrrrddllUdrddldlluuuuRlddddrrurrUluld",

	// 37 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxxx####!"
	"xx###  #!"
	"x##   *#!"
	"x# @#* #!"
	"##  *  ##!"
	"#  *#$  #!"
	"# *  .# #!"
	"#####   #!"
	"xxxx#####!",
	"dRRDrrddllUllUluururrDrDLuuurDDullldlddrdrrUUUdddlluluururRddddlluUddr"
	"ruuLLdlldRRuurruullDlDDuururrdddddrruuLrddlluUUlLuurrDrDLdddrruuLrddll"
	"uUruulullddddRlulldRRuuulDrddlluRuururrdrddlUdrrddllULLrrdrruululd",

	// 38 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"###  @#!"
	"#  $# #!"
	"# .$. #!"
	"##.$. #!"
	"## $###!"
	"#   #!"
	"#   #!"
	"#####!",
	"dddlLDlUURdrruuullDDuurrdddlLdlddrUUUrruuulldDlDDuuruurrdddlLulluRdrdr"
	"ruuullDDlDRuuurrddLLddddlluRdrUUUlDruUrruullDlDRddlUrdddlUu",

	// 39 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"xx#   #!"
	"###$# #!"
	"# .$. #!"
	"#  * ###!"
	"# .$.  ##!"
	"###$#   #!"
	"x# @    #!"
	"x#   ####!"
	"x#####!",
	"rruulLDurrddldlluRRRuuluuLDDDuuurruullDDDlluRdrUrddrddldlluRuUruLdrrdd"
	"LdlUUUruulllddRRRuullDRurruullDurrddlLddrUldddrruruLdrrdLLLdlUUu",

	// 40 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx#####!"
	"xxx#   #!"
	"x###$# #!"
	"x# .$. #!"
	"x# #* ###!"
	"##  *   #!"
	"#  .$.  #!"
	"#  #$#  #!"
	"##  @####!"
	"x#####!",
	"lluurRRuLdllddrrUdlluurRuruuLDDuurruullDDrddlDlluuuRRDuuurrddLdlUllddd"
	"rrULrruulDrdLdllddrrUUUruullldDuurrrddldddlluluRddrruuuLrrrrddlUruLLuu"
	"llldDrRdRUlllDRRddllUluRuuurrrruullDurrddlLDDlldddrruUUrrrddlUruLLu",

	// 41 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx#####!"
	"x##   #!"
	"x#  # #!"
	"##.$. #!"
	"# $*$ #!"
	"# .$.##!"
	"###  #!"
	"xx#@ #!"
	"xx#  #!"
	"xx####!",
	"ruuUruuulldldDRluurDuurrddLDruuulldldRldRDDrddlUUUUluururrdddLDDuuruuu"
	"lldlddldRRluuururrdddlLUlDrrruLLdddrUUlddddrUUluurruuullDd",

	// 42 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxxxx####!"
	"x#####  #!"
	"##  # @ #!"
	"#  $.$  #!"
	"#  .*. ##!"
	"###$.$##!"
	"xx#   #!"
	"xx#  ##!"
	"xx####!",
	"lDlLdlluRRdDrddlUUUluurDRDDlUruRurrdLdLLuRlddlddrUrUUluLDlluRRdrrrUruu"
	"lDlDurrdLdLddllUdrruuruuld",

	// 43 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"######!"
	"#   @##!"
	"#   * #!"
	"### * ###!"
	"x###$   #!"
	"x#  . # #!"
	"x#   #  #!"
	"x###   ##!"
	"xxx#####!",
	"lddRluurDrDulldRDRdLuuurDldddlluRdrUUUruLLrdddrUldddrruruuLLdlUUluurDd"
	"DrdLuuurDlluulldRRdrddddrruruulLdlUddllur",

	// 44 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"###  #!"
	"# *  #!"
	"#@*  #!"
	"##*# ##!"
	"# $   #!"
	"# .## #!"
	"#     #!"
	"#  ####!"
	"####!",
	"uRRdrddrddlllluuRddrrruuluululldRDDlddrrrruuluuLrddrddlllluurDuuUrrddl"
	"ruuluurDDllluRddDlddRUUrrrddlLrruulllUUrrDulldddlddrUrrruuLuullddDuuur"
	"rddLruulldDlddRUUrruuuulDrdLrddrddlLrruulllldddru",

	// 45 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxxxx####!"
	"######  #!"
	"#     @ #!"
	"# # *   #!"
	"#  #*####!"
	"##  * #!"
	"x## * ##!"
	"xx# $  #!"
	"xx# .  #!"
	"xx###  #!"
	"xxxx####!",
	"llldRulllddrdrdddrruuuLUUlullddrdRdRlululuurrdrdDrDLDuuuuRurrdLLuLDDDl"
	"luluurRRRldddrdDllUdrrrddlUruLuuluurrruulDrdLLullllddrdRdRUldddRUrrdLu"
	"lluurrDDlUdrrddlUruLullddRUrrdl",

	// 46 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx####!"
	"xx##  #!"
	"xx# * #!"
	"xx#@* #!"
	"xx# * #!"
	"x###* ###!"
	"##  *   #!"
	"#  #$   #!"
	"#   . ###!"
	"#  #  #!"
	"#######!",
	"dRluuRDrDDDLDRuuuulldRDrddlUrdddlUlluuRRDrdLLruuUrDDurrdLLuulUluurDrDd"
	"DluUluururDDDlUdddlldlddrUrrUUrrdLulUUrDldllDlddrUrrUUUddrruLdlddrUUlu"
	"llDldRRluurrdrrul",

	// 47 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx####!"
	"xxx#  ###!"
	"xxx#    #!"
	"xxx# .# #!"
	"####$.$ #!"
	"# @ $.$##!"
	"# # #. #!"
	"#   #  #!"
	"########!",
	"rRUUrurrddLDLddrUUlLuurDDuuuulDDurrrddLdlUUluRdddrddlUUlLddlluuRRRRUUl"
	"DrrDlLuuuurDDlddrruruuLrddldlddrUUlluurDDlLddlluuRRRuuuurDrrddl",

	// 48 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xxx####!"
	"xxx#  ###!"
	"x### .  #!"
	"x#  $.$ #!"
	"##@##*###!"
	"#   $.$ #!"
	"#    .  #!"
	"##   ####!"
	"x#####!",
	"ddrrruLLdrrrruLLUULuurDDDDrdLLdlluRuRRdLdlluluRuuRRllddddrruuLrrdrruLl"
	"uUluurDDDDLdRuuullldDRluurrrurrdLLdddldllURuRlddrUrUUUdddlluRdrUrrdLul"
	"lldlluRRRlluurr",

	// 49 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"xx####!"
	"xx#  ##!"
	"x## . #!"
	"## $.$###!"
	"#  #*   #!"
	"# #@* # #!"
	"# #$.$  #!"
	"#   .####!"
	"##   #!"
	"x##  #!"
	"xx####!",
	"DDlluuuruRurrDDrrddlLrruullDuuulldRlldldddrruuRUUddlddrUdllluuururrdrr"
	"rddlLUdLdllluuururrdRluluurDrDDlUlldldddrrruUUruLddddlldRdrUUUUUruuLDd"
	"DlDDlluuuruRldldddrruururuululDrrddlUddlddrUdddlUluluuuruRldldddrRurrr"
	"ruuLLDurrddll",

	// 50 (Rick Sladkey: The Warehouse Volume I - Vertical Mobility 1)
	"#####xx####!"
	"#   ####  #!"
	"# $    $$ #!"
	"##$# ###  #!"
	"x# #...  ##!"
	"## #.#.# #!"
	"#@  ...# #!"
	"#  ### #$##!"
	"# $$    $ #!"
	"#  ####   #!"
	"####xx#####!",
	"dddrUUluRRRuurrddddllLrrruuuullddRlllldddrUrrrrrdrruLLLuUlluurrrrddDuu"
	"ullllddrrUdddrdrruLuuuuuruulDDDlLddlluuuurrRlllddddrruuLrddlllllddrUlu"
	"RRRuUrrddddLLLrrruuuullddRlllldddrUrrrrRdrruLLLuUlluurrrrDDDuuullllddr"
	"rUdlllllddrUluRRRuurRddddLLLrrruuuullddllldddrUrrrrrdrruLuuuuuruulDlll"
	"lDDrrddddRdrruLuuuuLLLrddddllllluurrrRllllddrrrrruUUdddllllUluRRRRllld"
	"drrrrRdrruLuuuulLrrddddLLLLLrrruUUdllllldddrUUluRRRRlllddrrrruUddrruuu"
	"uUruulDlllllulldRDDDDlddrUluRRRRlllddrrrrrruuuuUruulDllllLulDDDDDlddru"
	"luRRRllddrrrrrruuuuUruLLLLLLulDDDDuuurrrrrrddddddllllllluuRr",
};

const sCollect SladkeyCol[] = {
	{ "The Warehouse Volume I - Vertical Mobility", SladkeyCol1, count_of(SladkeyCol1)/2 },
};

const int SladkeyColNum = count_of(SladkeyCol);

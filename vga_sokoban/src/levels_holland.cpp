
// ****************************************************************************
//
//                       Game levels - David Holland
//
// ****************************************************************************
// Author: David Holland
// These levels are © David Holland <dholland@dholland.karoo.co.uk>
// These levels may be distributed freely as long as this copyright message is retained.
//
// Author's note:
// There are no computer-generated levels as I am trying to evolve a puzzle-making style,
// and so experimenting with as many different forms as possible. Some of the puzzles
// are very, or slightly, symmetrical as a stylistic device (in this I am influenced
// by David W. Skinner's excellent Sasquatch puzzle sets at his Sokoban page).
// Others are completely unsymmetrical and the style is in the variations alone.
//
// Bagatelle is a French word for a trinket, from the Italian for a conjuror's trick.
// The collection contains fairly simple puzzles (of less difficulty than my previous
// collection maelstrom) of various sizes. Some of the small puzzles are easier versions
// of puzzles in my other collections. Others are my take on some classical Sokoban
// themes (goals in a line, in a cross shape, objects outside goal room for tricky
// start and finish). The problems posed by each puzzle are of a fairly straightforward
// kind, but are nevertheless quite varied. The puzzles are in roughly ascending
// order of difficulty.

#include "include.h"

// DH1, (c) David Holland
const char* HollandCol1[] = {

	// 1 Abstract
	"x######!"
	"x#    #!"
	"##. * ##!"
	"# . $  #!"
	"# #**# #!"
	"#  *+* #!"
	"## $$ ##!"
	"x#    #!"
	"x######!",
	"LUUluurrrddrddLLrddlULrruruuluulllddrdDRluuluurrrddLDDuuruulDDuullddRL"
	"UurrdLrrdrddLddllUUUURlddddrruuLUUldDrrddlUUrruuLuullDDllddRRlluurruuR"
	"RddrddlddlllUdrrruuruuluullddllddRdRRdrUllluluurruurrddLL",

	// 2 CarouseL"
	"xxx####xx#####!"
	"####  ####   #!"
	"# $  $     $ ####!"
	"# #   # ### #   #!"
	"#  $   $ # $$ $ #!"
	"###  ## $@$     ##!"
	"xx#$ ##  # $$ $$ #!"
	"xx#    $  ## ##  #!"
	"x### #$##  ...# ##!"
	"x#  ..*.*..##.# #!"
	"x# #..*.....*.# #!"
	"x#   ########   #!"
	"x#####xxxxxx#####!",
	"LuLuulLddlddddddrRRuRRuulLLLrrruuuluullddlddDDurrrruuulDDrdLLLrrrrdrrR"
	"RdddrruuuuULullDDuurrdLullLLLulDDrdrdddrrRllluurrRuUruLLLdRurrrdrddddD"
	"LlUlllluurrruUruuurrdDlldlddlllddrrrrdrruuuuruLLLuLDDulluLLddrdrDldRRR"
	"LllulldlluRRRRlllldldlluurRRRdrRRRRlluuuluuuluullddlddDDurrDDldldlluuR"
	"RRdRRRRRUluulLLLrrruuuluullddlddDDurrdDldRRllldlluurRRluuuuuuruulDDDDD"
	"DDurrdDRRllldldlluurRRRuurruuulLLulDDDDDurrddldldlluurRuurrddRdLuuullD"
	"DRluuuuurrrDDrdrdRddlLrruulDrdLuuulLLLrdDrRlluurrrdDuuluurrdrruLLLLulD"
	"DuulllddDDurrddlLddlluuRRRRRRRurDluulLLLrrruurrrrruurDrdLLLLLLLulDDuuL"
	"LlddDDurrddlLddlluuRRRRRRRuulLLLrruuulllddDDurrddlLddlluuRRRRRRlluuruU"
	"UuurrrurrdLdDuuLLLLLLulDDDDDDDDllddrrUdlluurRRRRluurruurrdrrruuLdLLLLU"
	"LDDrdLLLrruuulllddDDurrddlLddlluuRRRRuuruuuuurrrrdDrdLLLLulDDrdLLLrruU"
	"UlllddDDurrddlLddlluuRRRluuuulUlluuRRDullddrRurDDDDDDllddrrUdlluurRuuU"
	"UuuruulDDDDDDDDuulUUruuulllddrRurDDDDD",

	// 3 CrissCross
	"xxx#####!"
	"xx##  @####!"
	"xx#  #$$  #!"
	"###.#   # #!"
	"#  $#.#$  #!"
	"#   ...  ##!"
	"###$#.#$ #!"
	"xx#     ##!"
	"xx###   #!"
	"xxxx#####!",
	"DRdDrdLLLuuRurDDullddrRllLLUlldRRRRddllUdrruuuurrddLruulldDDulLddrRuuU"
	"UruulldlDDDrrrrurruuLLdddlllluuururrDrdddlluuRldddddrruUrULLrdddlluuUL"
	"LuuururrdrDDuurrddLdLLrruruulldDrdLddLdlUllUUUlldRR",

	// 4 Pattern-osteR"
	"xx####!"
	"xx#  #!"
	"xx#  #x#######!"
	"xx#  #x#..   #!"
	"xx# ####..##$###!"
	"xx#  $ $.*     #!"
	"xx# #$ #*.# $# #!"
	"###$#  #..#  # #!"
	"#   #$ #*.# $# #!"
	"# # #  $..#  # ##!"
	"# #$#$ #..$  #  #!"
	"#   #  #..#   # #!"
	"# #@# $#*.#$# # #!"
	"#  $#  #..#   # #!"
	"##   $ $ $ ###  #!"
	"x####   #      ##!"
	"xxxx############!",
	"UllddrdrrRuuuruuRRddDruuUUUlUUUdddrdddRRuuuuurrrdddddrddddldlllllUUUlU"
	"UrrruuuuulLDlUruurrrDulllddrrddddddrrddllUUUlllddrdddrrrrruruuuuluuuuU"
	"LLLdddDrDLLLulDDurrrdddrruuLrddlluUruLLLullluuuuRRdrUUdlllddddddlddrUL"
	"DddrURRlllllluluuuuurrUUUrRRRRdrUlllddddlDDDrUUluRRRUUddDrrruuuuurrrdD"
	"DddrddddldlllllUUdlllUUUUluRRldddddlllluluurrdDldRRRdrUUdrrrrdrrrruruU"
	"UuluuuuulllddrDDDllllUUrUdldllldddDrUUUluRRluuuullldddlldddddrrdrRdrUR"
	"RrrdrrrruruuuuluuuuullDDDlddllUUddlUlluuuulllddddDDDDldRRRRRRllUUUUluR"
	"UulUdDDDurRRdrUdrrdddrruuLrddlluUruLLLrruurDDldddrruuLrddlluUruLLruuuU"
	"ULrrrrdddddrddddldlllllUlllllluuuuuuuuurRRRllllUUruulDDDDDDDDDDDDldRRR"
	"DrUUUUUlDDDuuuuRRRllluuuulldddddddddrRdrUUUUUluRR",

	// 5 Salamandar v3
	"xxxxxx#####!"
	"#######   ###!"
	"#   ## $ $  #!"
	"# # ##    # #!"
	"# #..$ $ ## #!"
	"#  .$# $#   #!"
	"###..# $ @$ #!"
	"xx#**# $ # ##!"
	"xx#..#   # #!"
	"xx#..##### ##!"
	"xx#.*#   $  #!"
	"xx#..# $    #!"
	"xx##.### #####!"
	"xx# $      $ #!"
	"xx#   ####   #!"
	"xx#####xx#####!",
	"UrruuulLdldLurrurrdddlldlddlluuuUrrururrddddLdddddllddllldlluRuuluuuUU"
	"UlluuurrdDDDDDDDuuuurDluuurRRddddrruuRurruuulldldLLLLDllluuurrdDDurrrD"
	"DddrruuLrddlluUUdrrrurruuulldlldLLLdlDDrUUllluuurrdDDuRRRddrrrurruuulL"
	"DldLLLLdddlDDrUUUUlDDDuuuURRRddrrrurrdLLLrrdddddllddllLdlluRuuUUUUUluU"
	"RrrddddrruurrdddddllddllLdlUUUUUUluurUldddrUluulluuurrDDDDDrddddddrrrR"
	"UurruuuuullddlluuuulLdlddrUUllluuurrdDDDrdddddddrrrruurruuuuullddlluuU"
	"UlLdlUrdddddddddrrrrrrdrruLLLLLLLdlUUUUUUUUdddddddrrrruuulldRurDDurruU"
	"UuullddlluuuulllddrdddddddrrrRuuuRdrUUUUddddllddlllluuuuuuululluuurrDD"
	"DurrrddddrruururruuulldldLLLLDDDDDDuuuuullluuurrdDuulldddrRurrrrruruuL"
	"LDDrdLLLLDDDDDuuuullluuurrdDuulldddrRurrrrruruLulDDrdLLLLDDDDuuullluuU"
	"RrdDuulldddrRurrrruulDrdLLLDDDuullluuurrdDuulldddrRurrrddddrruuLUluurR"
	"DLLLLDDullluuurrdDuulldddrRurrrrddrddlUUUluurrdLLLLDllluuurrdDrrrrdddL"
	"UUruLLLrrrddrrurrdLLLLdlUUruLLrrddrrrdddddllddRRdrruLLLLLLLdlU",

	// 6 Saturnine
	"##########!"
	"#   ##   ######!"
	"# $   $ $ #   #!"
	"# $ #  .$ #   #!"
	"###  ##.#  $ ##!"
	"####$##.###. #!"
	"#   *.......$#!"
	"#    ##.##   #!"
	"##$####.######!"
	"#  $ # . #   #!"
	"#  #  **$    #!"
	"#  $ # @ # $ #!"
	"# $   #####  #!"
	"###   #xxx####!"
	"xx#####!",
	"UUUUUrrrruruulDDulluuLullDRddDDDurrrdrrUUUluurrdLulDDlluuLulDDDDDllLdL"
	"LuRRRRRRRlluuuullllddrDuluurrrrddddllLdlluRRRRRRlllluuluuulldRRRRRurDD"
	"DDuuullllddrddrrRuuuulllllldRurrrrrddddllluulUluRRRRurDDDuurrdLulDullD"
	"RulllddrdddllDDlddrUUUUluRRRRRlllldddddldRRdrruLuLrddlUlUUUUUluRRRRllL"
	"DdddddrruLdlUUUUUluRRRlldddddrruuLrddlluUUUluRRldddrrdrRdrURRRurrdLLLL"
	"LrrrrrddlUruLLLL",

	// 7 Spade
	"xxxxx####!"
	"xxx###  ####!"
	"x### $ $   #!"
	"x#   #..#$ #!"
	"x# $$#*.#  #!"
	"x#   ....$ #!"
	"## # .#.#  #!"
	"# $##$#.#$ #!"
	"# @$    .$ #!"
	"##  #  ##  #!"
	"x###########!",
	"RRRUUluRRRdddLdlUUUluRllluurrDullddrRdrddrruuuuuluurDDDDDuuuurrrdddddD"
	"LLLLdlUUdlllUUUrruuuRldddlldddrrrrrrrruuuuuulllulDrrrrddlUrdddlULrrddD"
	"LllllllluuurruuurrrddDrrruuuLLrrddddddlUUddllllllluuurruullDDDDldRRRRR"
	"RRlllllluuurruuurrurDDurrrdddLLrrddddlUUUruLUUruLLrddddddllllllluuurrU"
	"UurrurDlllddLulDDDDldRRRRRR",

	// 8 Storm (in a teacup) v6
	"####!"
	"#  #######!"
	"#        #!"
	"#  ###$# #!"
	"##.# # . #!"
	"x# # #$* #!"
	"x#.### + #!"
	"x# $ #$* #!"
	"x# #   . #!"
	"##.####* #!"
	"#  $ $ * #!"
	"#       ##!"
	"#########!",
	"RuuuulllllldddddddddrruLdrrruLdlllUUUUUUUUluurDDDDDDDDuuuuuuurrrrrrddD"
	"DddlllluLrdrrrruuuuuullllllddddDrrdrrrruuuullUdrruulLLLLrrrrrddddddllL"
	"LulluuuuluurDDurrrrrrddddlUrdddlUUlDrrdddLUUUddddlluRdllluRdllluRuUUrR"
	"DrRurrddlUlllullddddrrrrrUruuuuuuuullddDDDuuuuurrddddddddlldlllluuuurR"
	"DrRllullddddrruLdlUrrRR",

	// 9 briefcase alt 23
	"xx#####!"
	"###   #!"
	"# $*@.###!"
	"# # *$  #!"
	"# #. .# #!"
	"# #$* $ #!"
	"#    .###!"
	"###   #!"
	"xx#####!",
	"DldDRUrDuUrrddLLulluRuulDrddrdrruulLdlldRddlUlluuuuRRurrDDrrddlLrruulL"
	"DlDRuuuulldllddddrrdrUllluuuurrurrdddllDurruuulldllddddrRuurruuLLrrddL"
	"LdddrrUUUUrrddLruulldlldddrruUddlluRluuURuulDDrdDrrruulLrrddllllddrUlL"
	"LuuuuR",

	// 10 ninevah
	"xxx#####!"
	"####   #!"
	"#@$  # #!"
	"# $$$  #!"
	"##.#.  #!"
	"#  ..# #!"
	"#  #.* #!"
	"# $.$ ##!"
	"###   #!"
	"xx#####!",
	"RDDDrruUrrdddLddlluRdrUlUUlllddRUluRuuRRDDurruuullDDlluRdrDrruLLrruulL"
	"DDLulD",
};

// DH2, (c) David Holland
const char* HollandCol2[] = {

	// 1 Butterfly #3
	"###############!"
	"#   #     #   #!"
	"#  . * *@*  . #!"
	"##$##  *$ ##$##!"
	"#    #   # $  #!"
	"#  #*#####.#  #!"
	"# $* #   # .$ #!"
	"##   #*.$#   ##!"
	"x###     * ###!"
	"x#  . * * $. #!"
	"x# ## ###.## #!"
	"x#    #x#    #!"
	"x######x######!",
	"UlldLurrrdLrRRRurrdLDDrddLdlldLLLdRurDllLLddllluurRRuRllullUluurrrDDDL"
	"LuRlluurDldRdrrDrdddllluurRllddrrruURuRRdrRuurruruuluuLLLulldRRulllldD"
	"RdrrUruulllDlLLulldRDDrrdDDDulluRlluurDldRuuuuRRRurrdLLLLulDDDuurrrrrU"
	"RrdLLrrRRurrdLLLLrrrddrddlUUUddddlluuuRldddddlluRdrUUUddllluurDldRlldL"
	"DdllluurRuRRdRUllldRluulluluurrrdDDDulluRdrUllluurDldRuuuurrrurrdLLLrR"
	"RurrddldllUluurrdLurrrdLrrrurrdLLLrrdDrddlUUU",

	// 2 Crossed Swords Version 10
	"x#####x#####!"
	"##   ###   ######!"
	"#  #  ##      $ ##!"
	"# $$   ##*###  $ ##!"
	"#  # $ #...  #  $ ##!"
	"# $# # # *$# ##  $ #!"
	"#    $ #...#   #$  #!"
	"##  #####.## $    ##!"
	"# .#...##.### ##  #!"
	"# *.*....*.. $#####!"
	"# .#. .##.### #####!"
	"## # ####.#       #!"
	"## $  ###*#$#$$ $ #!"
	"#  ##   $@$    ## #!"
	"# $ $ #$### # $   #!"
	"#     #     ##    #!"
	"###################!",
	"RRRRdRdrrruuuulllluUlllLLLLdllddrddLdllluuruuuUUdddddlddrrrruuuluurruU"
	"LDrrrrrrrrddrrrrddddlllulullllUUUdddrrrrdrdrrruuuullllllDurruulllLdddD"
	"RRuurrrrrrddddllluluUUllddRllluuuuuuuluurrDLulDurrrrddrrdrrruruLuLuLuL"
	"LLLLulldRDDDDDDDDDuuuuuuurrrddrrdrrruuululullllLulDDDDuuurrrrdRdRdRDrR"
	"ULuLuLrdrddlUlUlUdrdrruLuLuLLLLLulDDurrrrrrdrddlUlUdrrrddddlUUUddllulL"
	"DRRRRdrUUdllllluuulldlDDDDDurrrrUdlllluuuururrdddRRRllddllllLLLullDDRU"
	"LuRdlllddddlddrrrruurrRRRRddllllUdrrrruuuurrUUUdlllluuuuluRRluurrrrdrD"
	"RdrdrruLuLuLuLLLLLulDDDDDDDuuuuuurrrrrrdrdrddlUlUlUdrdrruLuLuLLLLLulDD"
	"UrrrrrrdrdddrddlUUUlUlUdrdrddllulldRRRllddddrrrrddddlllulUUUUUUdddrrdL"
	"UrrrddddllluUUdlUUllddRluurrUUlllLuuuuruLuurrrrdrdrdrruLuLuLLrrdrdddrD"
	"DlUllulldRRRRUUlUlUluLLLulDDDDDDDDLLLLdlUllddddlddrrrruurRRRRRuurruuUD"
	"LllluuuuuuurrrrdrdrdrruLuLuLLLLLulDDDDDDDuuuuuurrrrrrdrddlUlUdrrddddrU"
	"UruLdlUddllulldRRRlldddddrddlUUUUUUdlllLLLLLLLrrrrrruuuuuuurrrrdrdrdrR"
	"ULuLuLLLLLulDDDDDDDuuuuuurrrrrrdrdddrddlUUUlUlUdrdrddllulldRRRlldddddR"
	"RuLdlUUUUdlllLLLLrrruuuuuuurrrrdrdrdrruLuLuLLLLLulDDDDDDDuuuuuurrrrrrD"
	"RdddrddlUUUlUlUdrdrddllulldRRRllddddrrrrdLLLdlUUUUUdddllddRlllllllddlL"
	"LluuruuuluurDrrdrUrrrRRluuuuuuurrrrdrdrdrruLuLuLLLLLulDDDDDDDuuuuuurrR"
	"RrrdrddlUlUdrrrddddlUUdllulldRRRlldddddrrrrddlLdlUUdlUUUUUUdddddlllllL"
	"LlddlllluuruuUluurDrrrrrrRuuuuuuurrrrdrdrdRdrddlUUUddllulldRRRllddddrR"
	"DLdlUUUUUdddddllllllllddlllluuruuUluurDrrrrrrruuuuuuurrrrdrdrdrdrruLuL"
	"ULuLLLLLulDDDDDDuuuuurrrrrrdrdrddlUlUlUdrdrruLuLuLLLLLulDDDDDuuuurrrrR"
	"RdrddlUlUdrruLuLLLLLulDDDDuuurrrrrrddlUruLLLLLulDDDuurrrrrrdddrrdddlUU"
	"UruLdlUruLdlUruLLLLLulDDurrrrrrdddrddllulluuLrdddRRRRdrUUruLdlUruLdlUR"
	"ULdlUruLLLLLulDrrrrrrdddrddlllddddddllllllllddlllluuruuUluRRRRRRRllllL"
	"LuUruruuuuulldlddddRluurDDDDldRRRRRRllllluuuuuluurDDDDDDldRRRRRlllluuU"
	"UuuuurrddLruulldDDDDDDldRRRRllluuuuuurrdddLruuullddDDDldRRRlluuuuuurrR"
	"RdddLLLruuullddDDDldRRluuurrrruuLulDDurrddlLLruuullddDDDldRddddlddrUUU"
	"UUUddddddrruLdlUUUUUddddrrruulUdLrrddllluUU",

	// 3 Egg
	"xxxxx#######!"
	"xxxx##     ##!"
	"xxx##  # #  ##!"
	"xxx#  #   #  #!"
	"xx## #  *  # ##!"
	"x##  # * * #  ##!"
	"##  ##$.#.$##  ##!"
	"#  # $  #  $ #  #!"
	"# # *  *.* .* # #!"
	"#  $ ##. .## $  #!"
	"# # *. *.*  * # #!"
	"#  # $  #  $ #  #!"
	"##  ##$.#.$##  ##!"
	"x##  # * * #  ##!"
	"xx## #  *  # ##!"
	"xxx#  # @ #  #!"
	"xxx##  # #  ##!"
	"xxxx##     ##!"
	"xxxxx#######!",
	"RuruLddlddllululuulululuurRdRdRRuRurrDDDuuullUddldllululluurururuururU"
	"RrddldldDrUrUUdrrdLddDllddldllulullddrdrdrddrdrdrruululuUrUUddlddrdrdD"
	"LlululuulululuurrdrdrRdrDluuurDlllululluurururuurururrrrdrdrddrdrdrddL"
	"LuLuLLdlUUdrrrdrddLdLLulLuulUUluuRurrdrdDlddlddrrdrruruululLulDrrrdrdR"
	"RddldldlddldldlluururuUlUdrddldlddrrururuurururuulldldlLuLrddlUrdddlUD"
	"DlddllululuulululuurrdrdrrddrRlluulluluuRRRRuulDrdLuuuururrdDrddrrdrdD"
	"LUddlluRlddddldllUluuulluluuruRRurDluuurDRluurrdLdllddlldDllluurururuU"
	"RururrDDlDlddddL",

	// 4 Figure Eight
	"x#####xxx#####!"
	"x#   #####   #!"
	"##     *     ##!"
	"# **##$.$##** #!"
	"#  . # * # .  #!"
	"# ** #$.$# ** #!"
	"##   # . #   ##!"
	"x### ## ## ###!"
	"xx#  ## ##  #!"
	"xx#    $    #!"
	"xx#### @ ####!"
	"xxxxx#####!",
	"LulluuuuulDrddddrrdrrurruuuuurUdlddrrUruLruLuulldllLLLLulldDlddRdRlulU"
	"UruurrdrrrrrrRurDDrddldlldddlldlluRuuuuUrUdldddddllluuUlluluuruurrdrrR"
	"RddllUdrdddddllluuulluluurDrrDDllURlluuruurrdLDDullddrdrrDDldRRRdrUUUU"
	"LUUrruulLLLulDrrrrrddllUdrruulLddddrUluuurrRRurrddrddldlldddlLdlUUUUrU"
	"UUdddldddllluuulluluurDrrDDDDldRRRdrUrrruuurruruuluulldlLddddlluuuuLLU"
	"LlDDldRuuurrdLulDrrrrddddrruuuurrurrddrddldlldddlllUUddrrruuurruruulDU"
	"UulldRurD",

	// 5 Meshed Squares
	"x############!"
	"### .*.*.$  ##!"
	"#   * $ * $  ##!"
	"#  $.$.*.*.$  #!"
	"# $ * *@* * $ #!"
	"#  $.*.*.$.$  #!"
	"##  $ * $ *   #!"
	"x##  $.*.*. ###!"
	"xx###########!",
	"LuUrRdRdLdDuurRdLrDrrruuulululLDllldRullLLDrRRdRlullllluRRlldddrdrRuRL"
	"URldddRUllluRlURuRRlUllldRRurrrrrrurrdLLLLLLrrrrrrrdDDrdLLruLruLUruLLL",

	// 6 Skewsymmetric Pattern #6
	"xxxxxxxxx#####!"
	"xxxxxx####   #!"
	"xxx####    # #!"
	"####  $ # $  ##!"
	"#   .#.$.$.$. #!"
	"# # $.$.$.$.# #!"
	"#  $.$.$.#.$.$##!"
	"##  $.#.$.$.$  #!"
	"x# #.$.$ $.$.# #!"
	"x#  $.$.$.#.$  ##!"
	"x##$.$.#.$.$.$  #!"
	"xx# #.$.$.$.$ # #!"
	"xx# .$.$.$.#.   #!"
	"xx##  $ # $  ####!"
	"xxx# #  @ ####!"
	"xxx#   ####!"
	"xxx#####!",
	"LuLddlluuuluUddrdddrruuuUrRuRuUrRdDLLrrrRuruulLrrddldddldlLuULLdRuuuuL"
	"LuUrUrRuUrrdrdDuululldddRDululldldddRurrUdllUlulUlLdRdLdDrDuRlUluuuulL"
	"LddrdRlddRRldddrdddrruuuRddrrUUdrrruruuuLrruuLLDLruruuulullddllLLrrrrU"
	"UlulldDDDurrruurrdrdddrddldddldllldllldlluuuluuuluuuluurrrurRlldddDllU"
	"RUdlluurRdddlddrdddrRldddrruuLrddlluUrrrdrrurrruruulUdDrdrruuLLruuuluU"
	"UlulllDrRuruullDDulllDD",

	// 7 Square Version 3
	"xxxxxx#####!"
	"xxxxxx#   #!"
	"####### # #!"
	"#    $ $ $#!"
	"# # ..... #!"
	"#  $.$$$.$#!"
	"### .@# . #!"
	"xx#$.$$$.$##!"
	"xx# .....  #!"
	"xx#$ $ $   #!"
	"xx# # ######!"
	"xx#   #!"
	"xx#####!",
	"LuuulllddrRurDDuurruRdrddrDullUrurDDldddrruLdlUlldLullUUruurrRuuurrdDL"
	"DDrdDuuluuruulldDldRlllddrUluRluRRlllllddrRdrUldddrUdrdddlluUUUUdddRlD"
	"DrruUruLUdrrrdLLrrrruLLLrruuulldDLLUURRuUrrDDDDuuuuuullDDllllllddrRddD"
	"DddrruUrrrrruL",

	// 8 Clover Version 4
	"x####x####!"
	"##  ###  ##!"
	"#    #  . #!"
	"#   * *   #!"
	"## * $ * ##!"
	"x## *@* ##!"
	"## * * * ##!"
	"#   * *   #!"
	"#    #    #!"
	"##  ###  ##!"
	"x####x####!",
	"RuLuRurrddLUluRdllddrUdlLdRdRUddrruuLUdLddrUllLuurDldRldlluRluRRuruuLD"
	"UullddRDuluurrdrdLuulldR",

	// 9 Interlocked Goals
	"#########!"
	"#   #   ####!"
	"#    * ..$ #!"
	"###$## # $ ##!"
	"xx#  $  #  @##!"
	"xx##   .###  ###!"
	"xxx####    # $ #!"
	"xxxxxx#$.#*    #!"
	"xxxxx## * . ####!"
	"xxxxx# $.*.##!"
	"xxxxx#     #!"
	"xxxxx#######!",
	"DrddldlddlllluRuRuuluuluuLrdddlluRdrrdrddlddrUUddrruururuululuuLLLullD"
	"RdDrddDDrddrruururuulullUluLulDlLLulldRRRRurrdrdrrdrdrddldlddlluuluuuU"
	"LlllUdrrrrddddrddrruururuulullulululldlLddrrrrddddrdRdllluRRluuuuulldR"
	"UrDDDDrddlluRuuuuulllluurrurrdrdrrdrdrddldlLrruruulullululLLrDDrddrrrD"
	"RrrruLdlllullluuluurrdrrdrdrDrdLLruululuuLLLulldRRlddldRullluuRRRllluL"
	"LdRRR",

	// 10 Prefab #5
	"xxxxxxxxxx####!"
	"xxxxxxx####  ######!"
	"xxxxxxx#  # .##   #!"
	"xxxxxxx#  $  #  # #!"
	"x#######.*.**#$## #!"
	"x#        #     # ##!"
	"## ##$##### $  $#  #!"
	"#  # . *  ####  ## #!"
	"# ##$* *$ #   #  # #!"
	"# #  .....$@$    # #!"
	"# #   ##  ######## #!"
	"# ##  ##  #        #!"
	"#  ######## ########!"
	"##          #!"
	"x############!",
	"LLLruulDDLLuullDDRddlUluRuurrdRdrruLdrrrurrdLLLLLrddlUrurrrrrruuluullL"
	"DRluUUrDllLdllllDulllddldddddrdrrrrrrrrruurrrrrrruuuuuluuuulldlDDlLuuU"
	"UlDDrdLrdrruururrddddrdddddlllllllddllllllllluluuuuuruurrrrrrruuRRdLrR"
	"DdlUruLrUddrrrDDlUruLLLdlUdrRurrddlUruLLdlUrrrddDrdLLLLLL",
};

// Bagatelle, (c) David Holland
const char* HollandCol3[] = {

	// 1 Bowtie 3
	"###################!"
	"##               ##!"
	"x##  $ $.$.$ $  ##!"
	"xx##  $.$.$.$  ##!"
	"xxx## .$.$.$. ##!"
	"xxxx## .$.$. ##!"
	"xxxxx## .$. ##!"
	"xxxxxx## . ##!"
	"xxxxxxx##@##!"
	"xxxxxx## . ##!"
	"xxxxx## .$. ##!"
	"xxxx## .$.$. ##!"
	"xxx## .$.$.$. ##!"
	"xx##  $.$.$.$  ##!"
	"x##  $ $.$.$ $  ##!"
	"##               ##!"
	"###################!",
	"UruruUddldlluRuUdddddrdrdrdrdrddlUlUlUlUlUUUUUURlddddddrdrdrddlluUlUUU"
	"UUUUddddddlUrddrrrdrruLLdLdllluUlUdrddlUlUlldRRRdrrUUUUUUUUluluUrDullL"
	"UluurrrrdDuurrrrrrddldllldLDDDDDDDuuuuuuururrruruulllldDLDDDDDDDuuuuuU"
	"UruulDDDDDDDuuuuuuurrrdLLrrDrruLLLullDDDDDuuuuullldRDRluullldRddrdrRlL"
	"UluuRDrDuluurD",

	// 2 Boxin 10
	"xx#########!"
	"x##   #   ##!"
	"##  # # #  ##!"
	"#  # $.$ #  #!"
	"# #  * .  # #!"
	"#   .#*# $  #!"
	"###.$#@#$.###!"
	"#  $.###.$  #!"
	"# #  . . .# #!"
	"#  #  $  #  #!"
	"##  #$#$#  ##!"
	"x##   #   ##!"
	"xx#########!",
	"UUrUrddDrDrrddldldllUULulluUluurRlldlluurururrdDRDulldlddrddrrdrruLLrD"
	"DdrrururuulluluullulldlddrdddRRlluuuluururrdrrddrdrrddldldlluUluLdlUlU"
	"LlddrdrdrrUUrrddrrururuulluluuuLdrrDrruululullDD",

	// 3 Cross 7
	"xx#########!"
	"xx#@   #  ####!"
	"xx# $  # $$  #!"
	"xx#  $ $  #  #!"
	"xx##$ #.#   ####!"
	"xx## ##.###    #!"
	"xx#  *......#  #!"
	"xx#  ##.##### ###!"
	"#### ##.##  # $ #!"
	"#    $   #$   # #!"
	"# #  ##  $  #   #!"
	"# ########  #####!"
	"#        # ##!"
	"########   #!"
	"xxxxxxx#####!",
	"DdrDrUrRdddddddrRRdddllullllllluuurrruuuRRlldddllldddrrrrrrrdrruuulllU"
	"UuUUdrrrruulluLLLuulllddrdDuuluurrrddrrrdrrddllllddddrrrdddllulllllllU"
	"UurrruuluRRRlldddllldddrrrrrrrdrruuullluuuUrrrruulluluurDldlluulllddrD"
	"DddddRRlluuurrrrrrruuuuLLulDrrrddllUdrruulLrrdddrrdddddrruuLrddlluUUUR"
	"ULLrddddllulDDlllUUdlllllldddrrrrrrrdrruUrUdlddllullllllluuurrrrrrrdrR"
	"URRlldlllullluuuuuuluurDDDuuurrddLdlDDDDuurrrrrrrUUlluLLLuulldDDuuurrD"
	"DLdlUrrrrruulDrddrrUruLLLrrdddrrdddrrddllUUUUruLLrddddlllddrUluRRllddD"
	"DllullllllluuurrRRRlluuurrrrrrrUUlluLLLuulllddrdDuuluurrrddrrrdrrdrrdD"
	"DrrddllUUUUruLLrddddllldlllUllluuluRRRRRRllllluuuluurDDDDuuuurrdLrdrrR"
	"DrrDrrddddllldlllullluuluRRRRRlllluuuluurDDDDuuurrdLrrrrdrrdrrddddlllD"
	"LllullluuluRRRRllluuruulDDDuurrrrrdrrdrrddddllldlllullluuluRRRlluuurrR"
	"RruulDrdLLLLulDDDuurrrrrdrrdrrddddllldlllullluuluRRluuurrrrrdrrUruLLLU"
	"LDrdLLLLulDDDuurrrrrdrrdrrddddllldlllullluuluR",

	// 4 Diode 1
	"x####!"
	"x#  #######!"
	"x#   $@#  #!"
	"x# #.#$   #!"
	"x# #* .#$ #!"
	"## #. *  ##!"
	"#  .#$# ##!"
	"#       #!"
	"####   ##!"
	"xxx#####!",
	"DuLLLulDDDDDrdrrUUlUUddrddllulldRRRdrruruurUruulDllulLLulDDDDDrdrdrruR"
	"UuLULrdrddldlluRuUrrddLdlUlluluuuurrrrDullllddddldRRRdrruruulllUUddrrR"
	"RUruulDllulLLulDDDDuuurrdddrrULdlUdrrrddldlluRUUrrddLdlUUdrruulLddlllL"
	"URuuuurrrrDDLdddrruurUruLLrddlddllllluuuuurrrrD",

	// 5 Fizzgig 1
	"xxxxxxxx####!"
	"xxx######  #####!"
	"#### .. $$ #   #!"
	"#    *$ #    $ #!"
	"#  # .## .## ###!"
	"## #*.##$### #!"
	"x#     @     #!"
	"## ###$##.*# ##!"
	"#  ##. ##. #  #!"
	"#     # $* $  #!"
	"#  # $$ .. ####!"
	"####  ######!"
	"xxx####!",
	"LluuluurDDuurrdLulDllldddrrrrrrrrrruuullldlDururuulDLLLdlllldddrrrrrRU"
	"UrUruLLLdlllllddddddrrrurUdldllluuuuuurrrrrurrddlddlLLLLrrrddldlddrUlU"
	"LluuUUUluRRRlldddrrrrrrRddrddlllLLdlUrrrrrruuluulllddlDuruurrrddrddlUU"
	"DdlluRdrruulDldllLuuruulllldddrRlluuurrrrrruururrrddddddLLdLUlldlldlUR"
	"RrRurrrruuuuuullldlddrRRllluururrrurrdLLLLulDrrrddDDDrdLLLrruuullllllD"
	"DlDuruulllldddrRdRUdRR",

	// 6 Fork 7
	"xxxxx#####!"
	"xx####   #!"
	"xx#  # $ #!"
	"xx#. .@*######!"
	"x##..*.. #   #!"
	"##  #*#    # #!"
	"#  ##.# $$#  #!"
	"# # $.    # ##!"
	"#   ## # $   #!"
	"###### $ $ $ #!"
	"xxxxx#  ######!"
	"xxxxx####!",
	"DLullddldlddrruRRuUULrdddlldlluururUrrrrdddLLrrrddLdlUUdrruuluurrrurrD"
	"DlddldLLuuUdddrruruuruulldlLullldddRRlluuulldldlddrruRRuuuluulDrdrrrrD"
	"DlUrrrurrddlddldlluUUdddrruruuruulldlLuLLuuurrdLDldLdddRRururrurrddldD"
	"LdllLdlUUdrrrruruuruulldlluLulLLrddddRluuuurrdLulDDurrrddlUruLLulDrrrD"
	"RrurrddlddldlluUrULdddlluuRUUruLLruuulDrdLrddddlddrruUruLdlUUruLrddddD"
	"RruLrrrdLLLLLdlUUdrrUUruLdlUUUdddLrrrdrruuruulldLLdlU",

	// 7 Four Block 1
	"#############!"
	"#     #     #!"
	"# *.*$#$*.* #!"
	"# .$. @..$. #!"
	"# *.* # *.* #!"
	"# $ $ # $.$ #!"
	"### ##### ###!"
	"# $.$ # $.$ #!"
	"# *.* # $.$ #!"
	"# .$.. ..$  #!"
	"# *.*$#$$ $ #!"
	"#     #     #!"
	"#############!",
	"LlLdddddDrrrrrRuuuuuUrrddLruulllllllluurrDullddddddddrrrrrruuuUrruullL"
	"LlLddLruurrrrrrddllUdddddlllllluuuUUUddrruurrddRluullddllddddlluuRlddR"
	"RrrrrrruuuUlluullddlldDuurruuuullllddddRluuuurrrrddrrddrrrruulLLLddrrU"
	"DlluurRddddddllllllllddrrrrUdlllluuuurruUrruuRRddrrddddlllLLLrrrrrrddR"
	"RuLruLLLLLLuuLrddrruuRDrUUUrruuuullllDurrrrddddllddddLLLrrrrddllUdlUdR"
	"RUUUUUdddrruLruL",

	// 8 Handsaw 1
	"#####!"
	"#   #####!"
	"#       #!"
	"##$# .$ #!"
	"#. * #$##!"
	"#.$.$  #!"
	"#.$.. ##!"
	"#$ ####!"
	"#@ #!"
	"####!",
	"UUURDrrUUUrurrdLLuLDDDrrUdllLdllddrUluuRRdLurRuuuLulldRDDDlDRddlUruurR"
	"UuuLulDDDuurrdddlLuuurrrrrdLddLL",

	// 9 Line 7
	"xxxxxxxx######!"
	"xxxx#####    ####!"
	"x#### $  $##   @###!"
	"## $  $ # $ ### $ ##!"
	"#  $ #$## # ### $  #!"
	"# #$.............. #!"
	"#  $ ### #$####   ##!"
	"##   # $  $ #x##  #!"
	"x#####      #xx####!"
	"xxxxx########!",
	"DddllllllldddrrruLUddlluuurRRRRRRuuulllulllDDDuuurrrdrrrdddllllldddllU"
	"UulllluuruRRRllldlddrrrrdddrruuurrrrruuulllulllDurrrdrrrddddrruuuLrddD"
	"LlullllldddlluuuRRRRRllllllllluururrrrDDuulllldlddddlluRlluurRDrrrrrRR"
	"RRllluuulllldlDldRRRRRRuuulldLDuurrrdddRRuuLrddlllddRdrUUdlluurRdddllL"
	"LuRRRdrUUdlluulLLLulllddrdrrUdlluRURRRRllluuRurDDullddrRlllddrUluRdllL"
	"UurRluRRDuRurDDuurrrDDuuurrrdrrrDDRurD",

	// 10 Moebius 1
	"xxx####!"
	"x###  #!"
	"x#@$. ##!"
	"x#$* . #!"
	"##  .  #!"
	"# $*$* #!"
	"#   . ##!"
	"###  ##!"
	"xx####!",
	"RRurDDldDuurrddLdLUUllDRurUruulDllDurrrdrddlUUdllURlddRddlUUlldRRuruuL"
	"LDurrdrruLLuurDldddldlluRuRluuR",

	// 11 Raygun 1
	"#################!"
	"#    ....    #  #!"
	"# #.  $@$.**.   #!"
	"# #. * #$#   #$ #!"
	"#   #. #  ####  #!"
	"#####$##      $ #!"
	"xxxx#  ## ####  #!"
	"xxxx## $ $ #x####!"
	"xxxxx#  $  #!"
	"xxxxx##    #!"
	"xxxxxx######!",
	"LdLUrrurrdLLLurrrrrrddlULLLLrrrrrrrrddlUruLLLrrrddddlUUdlllllluUUdddrD"
	"DrddlUUUdddlluRlluulUUruUrrdddRRRRRllllddlddrUUUddllluuluuruurrrrdrruL"
	"LrrrrrddlUrdddlUUruuLLLdlluulLddddRRRRRlllldddllluRRdrUUdllluluuruuLDU"
	"LullldddrruRuulDrrrrrurrdLLLLLLrrrrrrdrruLLrrrrrddlUrdddlUUruuLLLdlluU"
	"LlddddRRRRRllllluuuurrddrruLrrrrddlUruLLLuLLLrrrdrrrddddlUUUruLL",

	// 12 Seesaw 8
	"########!"
	"#      ##!"
	"# @ # . #!"
	"# $ $.$ #!"
	"##.#$#$##!"
	"#  . .  #!"
	"# *$# . #!"
	"##     ##!"
	"x#######!",
	"DuurrrddLLrrurrdLDDlddrUUUUruLulllddrRllulldRuurrrrdDDDllllUUluRurrrrD"
	"DllDurruulDrdddlLuuRlddrruUddlddlllUURRllddrUluUUluurDDDDuuuurrrddlLrR"
	"UullDlDRR",

	// 13 Shuffle 2
	"########!"
	"#  #   #!"
	"#  * . #!"
	"# .$*$ #!"
	"## * . #!"
	"# *$*  #!"
	"# @ #  #!"
	"########!",
	"UURRllddrURlluUluurDDDuuRRDDLUdddlluRdrUUdlUUluurDDDrruLruurrddLrdLLrR"
	"DdlU",

	// 14 Slinky 5
	"####!"
	"#  #####!"
	"# $#...###!"
	"#    $$$ #####!"
	"# $#.*.  .#  #!"
	"#@ # $ .*.#$ #!"
	"##### $$$    #!"
	"xxxx## ...#$ #!"
	"xxxxx######  #!"
	"xxxxxxxxxx####!",
	"UurrrdRRRRlllluurrDLdlUlllddrUluRRRdrRuulDrddrDuRuuLrddlluUllllluurDlD"
	"RRRddRdRdRRUUlDrrrrrddlUruLLLLulLuLUrddddRUrrrrruulDrdLLLLuLDllURuurrDL",

	// 15 Small2
	"xxx####!"
	"xxx#  #!"
	"####$.######!"
	"#   $.$ #  #!"
	"# $  +     #!"
	"####$*###* #!"
	"#### .### ##!"
	"#   #.  # #!"
	"#       # #!"
	"#### #  # ##!"
	"xxx# ####  #!"
	"xxx#       #!"
	"xxx#  ######!"
	"xxx####!",
	"LlulldRRRRDDlUruuLLdRurDlddrDrdLLLulldRRRRurrddlUruLdlldddrrrrruuuuuUR"
	"UulDllLLDuulldRuruulDDrDrruLdlUlldRllluRRR",

	// 16 Small Cross9
	"####!"
	"#  #######!"
	"# $$ $ $ ##!"
	"#  $@$ #  #!"
	"## #*#  # #!"
	"#  *.   # #!"
	"# $#.#. # #!"
	"#   .. #  #!"
	"### *..  ##!"
	"xx########!",
	"DDrrddllldRurruullDDllluurDuuuluurDDDDlddRRRuuuuuLrdddddllluurDldRRluU"
	"UuRurDDDrruuuLLdRlllluurDldRRRuLdlluurDldRRurDDuurrDDrddlddrruruuuuluL"
	"LddDDDuuuuuLLLdlluurDldRRurDRurDDD",

	// 17 Teapot 3
	"xxxxx#######!"
	"xxxxx#     #!"
	"xxxx##.*$# #!"
	"xxxx#  ..$ #!"
	"#####$# $###!"
	"# $   # .#!"
	"# #* *  $#!"
	"#@ .. #  #!"
	"###   ####!"
	"xx#####!",
	"RrruurDldllluuRRDullddrRurrrruuullDDuurrdddlLuuuruurrrrddLLrruullDLDRL"
	"LlddLLdddrrUULrrrurUUllldDuurrrddldlLuuurrDuuurrrddLLdlUlldddddllulluU"
	"RRRlllddrrdrruLrurrUruullldDlDuruurrrddlddrUluUrurruullD",

	// 18 Torch 1
	"####xx####!"
	"#  ####  #!"
	"# .    . #!"
	"#  ####$ #!"
	"## #    ##!"
	"## .$*# ##!"
	"# *#$ #  #!"
	"#@$    . #!"
	"#  ####  #!"
	"####xx####!",
	"RUUUUluurDrrrrrDDllDLurrruulllllDDDDlddrURRRUdlllUUUUluurDrrrrrddDDrdD"
	"LUUUUllldDrdRluluurrrUruulDlllllDDDDlddrUrRuuurrrUruLLLLLrrrrddddrddlU"
	"UUUUdllldddRR",

	// 19 Tree 12
	"x########!"
	"x#   #  #!"
	"## #$# $#!"
	"#       #!"
	"#  #*# $##!"
	"#  ..*   #!"
	"####.### #!"
	"#  ..* $ #!"
	"#@ #.#  ##!"
	"# $    $#!"
	"#  ###  #!"
	"####x####!",
	"DdrUrrrruuLLuulluurrrrddrrddLLLrrruulluulllluurrDullddddrrdDrrrruulluU"
	"LLLruulldDlddrrrUUrrddLrrrddlllluUUdllluurrRddrruurDldllddrrrruuLLuuuU"
	"RDDDldLLuuRlddddrrrruuLuuulDllddddrrdddrUUlulluuuurrrddLLrruullldDuulL"
	"LddrRlluurDldRuuuurrDDrrDrdLrrddLLddllllluurRllddrUluR",

	// 20 Two Piece 7
	"xxx########xxx#####!"
	"xx##   #  #####   #!"
	"x##    #  $       #!"
	"x#  # ##   ##### ###!"
	"##. . .## ##  $    #!"
	"#   #      #@ $  # #!"
	"#   ..####  ####$# #!"
	"########x## $      #!"
	"xxxxxxxxxx#####   ##!"
	"xxxxxxxxxxxxxx#####!",
	"UrRRRuulllllLdlddrdrdRRRRdrruruuuLLrrdddldlluRUUUUddddlllllululuuluurD"
	"DDuurrrrrrurrdLLLLLLLrrrrrrdddlLuRdrUUddddllllluluLLLLulllddrrUrrrruuL"
	"UurDDDuurrrrrrurrdLLLLLLLrrrrrrddrrdddLdlUUUUUddddllllluluLLLLuLLLulDD"
	"RdrrUrrrruuluurDDDuurrrrrrurrdLLLLLLLrrrrrrddlllldRRRurrrdddlluUUUdddD"
	"LlllluluLLLLuLLLddrrUUUddrrrruuluurDDDuurrrrrrurrdLLLLLLLrrrrrrdddddlL"
	"LlluluLLLLulllddrrUruLddllulldRRuuulDruururrdLdddrrrruuluurDDDuurrrrrR"
	"RdddddllllluluLLLLulDuLLuuRurDDullddddlluRdrUUrRuullDlDRddlU",
};

// Maelstrom, (c) David Holland
const char* HollandCol4[] = {

	// 1
	"x#######!"
	"x#     ###!"
	"x# .* .  #!"
	"x#.## #$$#!"
	"##*#.    ##!"
	"# $ . .#  #!"
	"# . ##$   #!"
	"###$ $@$ ##!"
	"xx#   ####!"
	"xx#####!",
	"UUdrruulLLdlldlluRRRRurrrddlldLdllUUddrruLrruUluuuulllddDDRRRuuurrrDDL"
	"LrrDrdLdLLLdllUUddrruruUddrruuuuulllLullddddRRRUUddlldddrruLdlUUdrrrrR"
	"UuuuullullllddddRluuuurrdLulDDuurrrrdLLLulDrrrrrrddlLrrdddlluUlUUddrdD"
	"RruuuuullLLrrrrddlLdlUUdrrruullLddrrUruLrddddLdlU",

	// 2
	"xxxx#########!"
	"xxxx#   #   #!"
	"xxxx#  . $. #!"
	"xxxx##$### ##!"
	"#####   #   #####!"
	"#  ##$.*$..$##  #!"
	"#     . # .  $  #!"
	"# $#  $ # $  #. #!"
	"## ##.#####.## ##!"
	"# .# $  #  $ #$ #!"
	"#  $  .$#$.   . #!"
	"#  ##$..@..$##  #!"
	"#####   #   #####!"
	"xxxx## ###$##!"
	"xxxx#  $ .  #!"
	"xxxx#   #   #!"
	"xxxx#########!",
	"LluurDllluRuuurrdLuuurDRRuruuLLLulldRDDrdrrdrrddDlddllLulluuUluRddddrR"
	"DrrruuruuulUUUddlllullDRRRRdrrdddrdrrUUUruulDLLLdddldRRRllldlllulluuuR"
	"UdlluRuurrdrrurrDDDDDllDurrrdLLdLdrrUluurrdLuuuuuulldddRluuurrddDlluuL"
	"LulldRRRlllddrUdrUllddddrruLdlUUUluRlllDDDlddrURRRurrdddllUUUdddrddRRR"
	"DrruLUUluLrdrruuullD",

	// 3
	"####x######!"
	"#  ###    #!"
	"#  #   ...#!"
	"#  #  #...#!"
	"## ##$ #  #!"
	"x# $   #  #!"
	"##@$## # ##!"
	"# $$      #!"
	"#  $ ## $ #!"
	"## #$####$###!"
	"#...*.  $ $ #!"
	"#  .  #     #!"
	"#############!",
	"DRRRRuullLrrrddllllDDDrdrruLUULulldRddldRuuuurRdddLLrrrrrdrruLLLLLLrrR"
	"RrrdrruLLLLLLLuuLuluUrrrUUluRRurrddddddrdDuuluuuuuulldldddrddRdRUUUUrU"
	"UlLdRddddlluullllddrrRRRdrUUUUUluurDrDLddddlllldddrrrrdrruLLLLLdlUUUlU"
	"RRRRdrUUUUUruulldRdddddrDDuullluuuluuRldddllDldRRRRRllldddrrrrdrruLLLL"
	"RrruulUUUUUddddllllllldRRluuuUUluurDDDDDrdrDDullluRRRRRRdrUUUUdrU",

	// 4
	"x###########!"
	"x#         ####!"
	"## #######    #####!"
	"# $#  #  ####     ##!"
	"#    $$ .#  # $$$  #!"
	"#  #  # *#.$  $  # #!"
	"##  #  #.#.#  #$   #!"
	"#  $#.*....## $   ##!"
	"#  $  #....@# $ ###!"
	"## $$$#.... # ###!"
	"###   #######  #!"
	"xx##         $ #!"
	"xxx##########  #!"
	"xxxxxxxxxxxx####!",
	"LuuuRRdrddddrddlUlllllllluUUURRdrrruuurrdrdddDrdLuuuuRRdLuluURRDrrruuL"
	"UllDurrdLrrddllULLLLLulDDDDrdLLruuuurrrddrdrUUruLLLLrddDDDrddlUUUUUUlU"
	"LulDDDldllullddddrrrrrrRllllllluuuurrdrruLLruUluurDDDDrddLUdrrruLuuurR"
	"DrddddrddlUUUUUrruulLLLulDDDlLddrUdrruLLLrruuurrrrrrdrruulullllDurrDLD"
	"LLLulDDDuurrrruululllulllllllldDlddrUrrdrDDDDDldRRRRRRRRllllllluuuuuuL"
	"UurDRRurDDDDDrdrruLuuurrrruululllulllllllldDldRRRRRRurDDDDuuulllllluuU"
	"RrrrrrrrdrrrdDrdLLLulDDDDrdLuuuurrrruurrrdLLrdLLLLLulDDDDuuurrrrrddllU"
	"DrrurrdLuullLLLulDDDuurrruurDrdLLLLulDDurrrdddddrddlUUUUUUdddddllllllL"
	"LuuuuuUluRRRurDDDuullllllddddRRlluuuuuuurrrrrrrrdrrrddrdLLLulDrrrdddrR"
	"UUruLLLLLrrddddddlllllllluuUUUUluRRRurDDulllddddddllURdrUUUUUluRRRurDL"
	"LllllddddRRdrUUUUluRRRlllllddrDldRRdrU",

	// 5
	"xxxxxxxx####!"
	"xx#######  #!"
	"xx#       $#!"
	"xx# *####. #!"
	"xx# .   #.$#!"
	"####$#$.#. ####!"
	"#  $ #  $     #!"
	"# ##.#  ####* #!"
	"# # .#### @   #!"
	"# #  $     #  #!"
	"#    ##    ####!"
	"############!",
	"RrruulllluuuullllllddrDDDDlddrURRRRRurrrruulllluuuullllllddrrrrddlUdrR"
	"RuuuullllllddrUddddDldRRRRdrruurrrruullLLLLuuLLrrddrrrrrrddllllddllulL"
	"LuuuuUrrrddrruuurDDluuuurDDDlddlluulllluuRRRRRlllllddrrrrdddlUUdrrruuU"
	"RuulDllllllddrUddddddrrrdrruurrrruullLLLLuuLLrrddrrrrrrddllllddllulllU"
	"UuuUrrrddrruuruulDrdDldlluulllluuRRRRRlllllddrrrrdddlUUdrrruruulDruuuL"
	"DDullllllddrUluRRRRRlllldddddddrrrdrruurrrruullLLLLuuLLrrddrrruuuuulDL"
	"LllldDDDDDldRuuuuurrrdddlUUruLLrrddrrrrrrddlUruLLLLLrruuuulllllldDDDDD"
	"LddrUUUUUUrrdddrUrrrrrddlllddllulLrrdrruurrruulllllluullddddlddlluuuuR"
	"RllddddrruuruUUdddlddrUUdrrrdrruLLLLrrrrurrruulluuuulllllllddRddlllddD"
	"DrrrUrrrrrdrUluRRlldlllllldlluuuurrruuluurrrrrrrddddrrrdddlUruullllllL"
	"UuL",

	// 6
	"xxx#######!"
	"x###  #  ##!"
	"## $    $@#!"
	"# $ $ #.# #!"
	"# ## #..# #!"
	"# #   . # #!"
	"# #   *.$ #!"
	"# ## ######!"
	"#    #!"
	"######!",
	"LLddddLLrruuuurrddddLLullluUruRldlddrrrdrruuuululDllulDrrrDDldldRulllD"
	"RddllluuuuuRuRRRllldldddddrrruuurrdLruuruurrddddlLUllluUruRldlddrrrdrR"
	"UuuululDllulDlldldddddrrruUluRRdRUlldddllluuuuururrDDDldRRluuuulldRurD"
	"DullldddddrrruuluRR",

	// 7
	"#################!"
	"#     #   #     #!"
	"# .$.$. .  $.$. #!"
	"## *#$## ##$#. ##!"
	"x#      $.#  $ #!"
	"x## ###*.*# # ##!"
	"x#  #.* $ * #  #!"
	"x# * $.$@$.$ * #!"
	"x#  # * $ *.#  #!"
	"x## # #*.*### ##!"
	"x# $  #.$      #!"
	"## .#$## ##$#* ##!"
	"# .$.$  . .$.$. #!"
	"#     #   #     #!"
	"#################!",
	"LrDrRuLuUdddlluuRuUlllllddlddrdDldddrruRRRdrUlllldlluuuruuluuruuluuurR"
	"DLrRRRurrdrRurrDrddLddrddlddllllUdrrrrrdddlluRlLLLdllullldlluuuruuluuR"
	"UurrUdrrrddlddrRuUlDrdddrrDurruuruuluuruuullldRRllllulldlLddllddlddrdD"
	"LdddrruLrrrrdrrurRuurruuruulDlLuuuUddddrruuuLrdddllLLuluulllllddlddrdD"
	"RruuUdddDulluuluuruurruurrurrdrRdDDDuurrdddlLuuuuullulldllddrrrddrdddD"
	"RrrruUddllddlldlluRRlllLuulluuluuruurruurrurrdLLrrrrddrrddrddlddllllLD"
	"UruuuuluuUdddlddRUUrdD",

	// 8
	"xxxxxxx####!"
	"x#######  #!"
	"x#  ##  $ ##!"
	"x# $    $  #!"
	"x# ###$#$# ####!"
	"## ##  .$..#  #!"
	"#   #  .$.    #!"
	"# $  # #####$ #!"
	"##$  #$...    #!"
	"x#@. .$..* ####!"
	"x###########!",
	"RuuulldRurDrddllUdrrrRUrrrrrrruulDrdLLLLLdLLuUUruRldRRRRluuulLDDldlluR"
	"RdRRRuuulldDldRuuuruulDlldDDldRdddLLuululuuuRRRllldddrdrddrrrrurrrrruU"
	"UlDDrdLLLLrdLLLLuuuurruUrrdddRluuullddllddddrrrrurrruuulDDrdLLLdlllluU"
	"UurrRluuruulDDDuullDlllldddrdrddRRRRlllluululldRddRRRRRluuuurRuuulldDD"
	"DDDuuurruuLulDDulllldddddRdrrRuuuluRuulllldddrDrDullddrRuulD",

	// 9
	"########!"
	"#      ##!"
	"#  # ** #!"
	"#   $ . #!"
	"##$#$#.##!"
	"#  *@$. #!"
	"# . #.$ #!"
	"##     ##!"
	"x#######!",
	"LddrrrUUddllluurRlldlluRUUluurDDDDldRdrrruulLrrddllluUUUluurrrrrDLdLDU"
	"RuullllddrddddrrruuLLrrdrruLddlllluUrruururrdLDDrdLdlllluurruuRlddlldD"
	"RrrruuuUruLulllllddrRRRlddllddrrrruuuUllddRlllddrrrruUddlllUluRRRluulL"
	"DurrddldlluRuuluurrrDullDDDDuurRR",

	// 10
	"xxxxxxxxxx####!"
	"###########  #!"
	"#   #   # $  #!"
	"#  $   $ $ $ #!"
	"##$ #*## ## ##!"
	"x# $#.*.*.*  #!"
	"x##  ..*..#  #!"
	"x# $#*+*.*#$ #!"
	"x#  #..*..  ##!"
	"x#  *.*.*.#$ #!"
	"x## ## ##*# $##!"
	"x# $ $ $   $  #!"
	"x#  $ #   #   #!"
	"x#  ###########!"
	"x####!",
	"DldRddRdrruUddlluRlluuuuulllDlddrRRuruuRRluRuuLulldDDuuurrdLrrdddddrrR"
	"UruuluUlLLdddddrrruUUdddllluullddRRllldlldDrRRuUluRRlldllluururRRllldD"
	"LdRRRllddlddrUUUdrrruUluRuuRuruuLullDDDuulLdDDrRllDlddRRRuruRuuruulLuL"
	"DDDRRddlUddldllddrrruUUdlllluururRRluuurrrrrrruulDrdLLLLLLulDDDRluurrR"
	"RuRdrruulDrdLLLLLLulDlldddrRDRddddldLullddrUUUdrrrRdrrUrRuUUUruulUdrdD"
	"LddddllLLLLLrruuuuUllldlddRRRllluuruuuurrDDDuuurrrrrurrdLLLLLLulDDDuuR"
	"RrrrrddrddlUUUddddddddrruLLLLLLLuUUdlllluurDldRRRlluuurRuuurrrrrurrdLD"
	"DddddrDldlllllLdllUUddrruruUddrrrrruuuuuuuuLLLLLulDDDuullulldRRRlddlUR"
	"DdddldRRRlldddrruLdlUUdrrrrrrrruuuuuuuulllllulDDullulldRRRldddddldRRlD"
	"DrrrrrrrrdrruLLLLLLLLLdlUUdrrrrrrrruuuuuuuulllllulDlldddddldR",

	// 11
	"xx####!"
	"xx#@ #####!"
	"###$$*   #!"
	"# * $ *# #!"
	"# #. $ . #!"
	"#   .. ###!"
	"#####  #!"
	"xxxx####!",
	"DDRluurDRRDDLUddllUURuulDDrDrruuLrddlddrUUlluluurDrDDrrruuLLDldRllUluU"
	"RDldRR",

	// 12
	"xxxxx####!"
	"xxxxx#  #!"
	"xxxxx# $######!"
	"xxxxx#  #    #!"
	"xxxxx#.$#$## ##########!"
	"xxxxx#.   ..   $      #!"
	"xxxxx#.$#$**$#   #$#$ #!"
	"######  # .. #$ $ $  ##!"
	"#      ##$..$#   $   #!"
	"# ####### .. ######$###!"
	"#   $ $ $$.#$$ $ $    #!"
	"# #...*...$..*....*.# #!"
	"# #...*.#....#..*.*.# #!"
	"# # $ $ $ **$$ $  $ # #!"
	"# ####### #. ######## #!"
	"# #     #$*.$##       #!"
	"# #@$ $ # .. #  #######!"
	"# ####$ #$..$#$.#!"
	"#  $ $    ##   .#!"
	"# $    $#    #$.#!"
	"######  ######  #!"
	"xxxxx####xxxx#$ #!"
	"xxxxxxxxxxxxx#  #!"
	"xxxxxxxxxxxxx####!",
	"UrrrrdddrrdrrrurrruuurrrrrruuuuulldLrddLUlLullLLdllUdrruLdDDrUldDDrUlU"
	"UullullLLdlluulluurrrrruuurrrrrrrrdrruLdddlUdrrUrRdrruLLdLLuluurrrDDrD"
	"DDlDurrrdddddlllllldddlllULuuuuullulllldlluulluurrrrruuurrrrrrrRRddrdR"
	"RlluluullllllllluurDluuurDDldddddlllllddrrddrrurrrrdrrurrrrrdrRuurrrdD"
	"DddlllllldddddlUrdddlUUruuuuurrrrrruuuuulluUllluluulllllllLrrrrrrrrddR"
	"DrrrddlddllullllldllulllldlluulluurrrrruuUUUrDlddddlllllddrrddrrurrrrD"
	"RrdddddrdrRlluluuuuuurrrrrdrruuruullluluulllllllLulDrrrrrrrrrddrdrrrdD"
	"RrdddddllllllddDDDlUruuuurrrrrruuuuulllddllulllllddddddrdrRdrUllluluuU"
	"UullulllldlluulluurrrrrurUdldlllllddrrddrrurrrrdrrurrrrrdrruurrrdddddL"
	"LlllldlDururrrrrruuuuulllddlluRllllllddrUldddrUUluuRRRddLLUdddlddrUUUU"
	"RruuRRddLLrrurrdLLuuuRDuRDuRuullluluulllllllLddldlllllddrrddrrurrrrdrR"
	"DDDDuuuuuRRRRRRlllddLLUluRRRRRddLLuullldlluRRdDDrddlllUUURurrddlDrdLrU"
	"UuulDDDuuuuRRRRlddLLulDDuuullllddRRRurDuullllllddRRRRRuuUUrrDulllDrdLL"
	"LuRldddlluuuRRllddlluuRRlDlddRRRRuuLLLrdLdrrrRRUruLLLLLrrrrrrRRRuLdllL"
	"UurrDulllDrdLLLuRlddLLuuRDrrrrrRRlddddddddllluUUUUUUruLLLLulDulllldddD"
	"DddddRRRuRRRRlllldllluuuuuuuuuuurrrrruruurrrrrrrrddrdrrrddlllDuLLLrDRL"
	"LlddddddddlllUUUUUUUruLLLLulllllddddddddrRRRRRRllllllluuuuuuuurrrrrdrR"
	"RrrrddddddddlllUUUUUUUruLLuRurrrDuluullDDDldLddrrdddddlllddrUluRRllllL"
	"LluuuuuuuuuurrrrruruuuuuulDDrddrrDDDDrDDrRRRlluuluurDDDullddrRRldddddD"
	"DrRuururrrrrruuuuuLLLLLLLLdllluurrDullddrRllLLuRurUluRluurrruulllDDDDD"
	"DDldRRUUUluuurrrrrrddlUruLLLLLrruullldDDDDDrddlluRdrUUrrdrrrrrrruuluuU"
	"LLLLLLLLrruullldDDDDDuRdddlluRdrUUrrdrrrrrrruuruLrUruLLLdDLdRurDDuuluU"
	"LLLLLLLLrruullldDDDDDrddlluRurrruuUdddddddddddddlllUUUUUUURuUlldRddddD"
	"DddrrrurruururrrrrruuuuulLLLLLLLrrrrrruuullLUllulLLLrrrrdddRRRRurDDuuL"
	"UulLLLLLLrddddDDuuuuuuuullldDDDDDRdDlluRdddddddddrrrurruururrrrrruuuuU"
	"LLLLLLLLrrrrrruullllUUruLLLLuullldddddddddddddddllllldRRdrUluRRllllllL"
	"UuuuuuuurrrrrRDrrrUluuuuuuurrrddddddDrrrrrrrrrdddddlllllldlddlldlllUUU"
	"UUUUddddddlluuulldRDrddlluRRRllllllluuuuuuuuuurrrrruruurrdddddrdLLruuU"
	"UuuuurrrdddddddrrrrrrrrrdddddlllllldlddlldlllUUUUUUUddddddllluuurDDldR"
	"RllllllluuuuuuuuuurrrrruruurrdddddrdLuuuuuuuurrrdddddddrrrrrrrrrdddddL"
	"LlllldlddlldlllUUUUUUUddddddllluuullldRRRurDDldRRllllllluuuuuuuurrrrrR"
	"RRuuuuuuurrrdddddddrrrrrrrrrdddddlllllldlddddddrUUluulldlllUUUUUU",

	// 13
	"xx#####!"
	"xx#  @###!"
	"### #$  #!"
	"# $* .  #!"
	"# . .*# #!"
	"## ## $ #!"
	"x#    ###!"
	"x######!",
	"DrdLDllURRdlllluRRdrruuullDDuurrddLdLUlldRRurrurrdLLLLdlddrrrUUddllluU"
	"RurRurrdddLruuulldlldlluRRldddrrrUULLrrdrruuullullDDlDRuuurrdDLrurrdLR"
	"DdlldlllU",

	// 14
	"###################!"
	"#      #          #!"
	"# $ $    @$ $ $ $ #!"
	"###$#  $#.#$  #$###!"
	"xx#  #  #.#  #  #!"
	"xx##  ###.###  ##!"
	"xxx##  ##.##  ##!"
	"xxxx##.. . ..##!"
	"xxxx##..$.$..##!"
	"xxx##  ##.##  ##!"
	"xx##  ###.###  ##!"
	"xx#  #  #.#  #  #!"
	"###$#  $#.#$  #$###!"
	"# $ $    ..   $ $ #!"
	"#      #   #      #!"
	"###################!",
	"DddddddddddlllldlluRRRdllllluRRRdrruRRdrUUUUUULullddldldlDurururuurrdR"
	"DddddrrrrdrruLLLdrrrrruLLLdlluLLdllulldlluLuurururuurrdrRurrddrdrdrDuL"
	"UluluulldlluRuuuuuurrdLulDDDDDDDuuuuuuurrrrdLLLurrrrrdLLLLurrrrrrdLLLL"
	"UllllDDDDDDlllddldldldddrrrurrdrrurrdrruRuulululuuurururUdldldldddrdrD"
	"RdddlllulldllulldllluuurururuurrrRdRlullllddldldldddrrrurrdrrurrdrrruU"
	"UlululUllulldRRRlluuuuuullllulldRRRullllldRRRurrdRRurDDDDDDldRullluluL"
	"UlUdrdrdrddRldldldldddrrrurrdrruLuuuUURuLLLdldldldldddrrrurRdrUUUUUUrU"
	"LLrddddddrrrdrruLLLLdlUUUUdddrrrrrrdrruLLLLLLLdlUUUddrrruulDrdLLdlUUdL"
	"LldlluRRRRdrUlllllldlluRRRRRRRRllluurDldRRllllluururururRurrdLLLrruuuU"
	"UuurrdLulDDDDDDrdLLruuuuuulllulldRRRRurDDDDDDuuuuulllllulldRRRRRRurDDD"
	"DDuuuulllddrUluRRurDDDDuuuurrrrdLLLulDDDuuurrrrrrrdLLLLLLulDDurrrddlUR"
	"ULLulD",

	// 15
	"x#######xx####x####!"
	"x#  #  #xx#  ###  #!"
	"x# $$  #### $ $   #!"
	"x#  #$ #  # $  $  #!"
	"x## #@    #   ## ##!"
	"xx# #$ #$ #   $  #!"
	"xx# #  # ## $ #  #!"
	"x## #### ####$####!"
	"x#   $ # #     #!"
	"x#  # .* ..$#  #!"
	"### # .  $. # ##!"
	"# .* ##   ##  * #!"
	"# ..* ##### $.. #!"
	"##...$     ..*. #!"
	"x#  .###### ## ##!"
	"x######xxx#    #!"
	"xxxxxxxxxx######!",
	"RrrDDDDDrrurrrddddrdddllluurRuulDrdLulDlllllLuLLdRuuLuuuuuuuuluurDDDDD"
	"DDDDDDrdRRRRRRRurruuuullldlluuuuulluulLrrddlUdrrrdddddrrurrrddddlldllL"
	"LllluuluuuuuuuuluurDrRurDDldRRlluullDDDDDDDDDrdddlluRUUUUUUUUUUluRRRlL"
	"DdddddddddrrdLdlUUUUUUUUUUUluRdddddddddddrrrrrrrrurruuuullldllLdlluRuL"
	"LrrddrdrrUruurrrdddddLLLLLLLLulluuuUddddddrUrrrrrrrrrurrdLLLLLLLLLLLrR"
	"RrrrrrruuuuuUUURRdrUUUruulDlLdlDDDDDDDDuuulllddldllulluullddddDldRurrR"
	"RrrrrrrruLuuuuuuulldRurDDDDDDDrdLLLLLLLLLLLuuuuurrrddrdrrurrUluRRllddL"
	"DllulluulldddddrrrrrrrrrruuuuUUUlluuuRluurDDDrDDDDDDDDrdLLLLLLLLLLrrrR"
	"RrrrruuuuuuuurrruULulLDDDDDDDDDDrdLLLLLLLLLrrrrrrrruuuuuuuuuuurrdLulDD"
	"DDDDDDDlDRdrddlllUdrrruuruuLDlluRuuuuuuuurrrruulDrdLLLulDDDDDDDDDldRuU"
	"UuuulluRluuuurDDDrDDDDDDDDuuuuuulluRurDDDDDDDuuulllddldllulluullUUUUUL"
	"UurDDDDDDDDDDuuurrrddrRRluuuuuruulDllluuLrddrrrDDDDDLdlluulluuuuuluurD"
	"RrurDDldRRlluullDDDDDDDDuurrddrrurRluuuuruulDDDDDuuuullluullddddddrrdD"
	"RruRuuuuullddlUUUdrrrdddddldlluulluuuuuurRurDDldRRlluullddddddrrddrrdR"
	"RuLLruuuuuruulDDDDDDlddrruLdlU",

	// 16
	"xxxx####!"
	"x####  #!"
	"x#  #  ##!"
	"x#  *.  ###!"
	"x# .*.#   #!"
	"###$.$$ # #!"
	"#@$...##  #!"
	"# #$# $  ##!"
	"#   #  ###!"
	"#### $ #!"
	"xxx#   #!"
	"xxx#####!",
	"RRUUluurDRDrUllldRddllddrrUUUUluurDrrdDDLLuUluRdddrruLdlddlluuRRUUluuR"
	"DDDrruuLrddlluluurDrrruulDrdLrrddLLdDRdddlluRUUUUUdrrurrddldLLdlddrUUL"
	"UUUrrurrddldlLdlU",

	// 17
	"xxxx####!"
	"xxx##  ########!"
	"xx##   $  #   #!"
	"xx#   $ .  .  #!"
	"### # $ *#$#$##!"
	"# $ ####  ... #!"
	"# # #   #$##  #!"
	"# #.# *   #  ###!"
	"# .* # * *  #  #!"
	"##$ .#$.$.#.@  #!"
	"#  #. .$. #$** #!"
	"#  *.###  # . ##!"
	"# $$ $ #### . #!"
	"##   #    #*$$#!"
	"x##    ##     #!"
	"xx#############!",
	"DurrdLulluuruullllUluLulldlddddDrddrrRuRldllluuluuuuururrdrRddrrrrddlD"
	"LLullDlDururrdLrrruruulllluuRRRurrdLDDlllDDuuluullulldRdRRllulldddddlL"
	"UuuRldddrrrdddddllUluurUdlddrRdrUUdddrruuLrdrrrdrrrrUUUUruulDlluurUruL"
	"UuLLLulLdRRRRurDDullllldlluRRRRRDullllluurDldRRlllldDDulldddRddlddrUUU"
	"RlddddrrUrrdrrrdrrrruulluUddrrddlU",

	// 18
	"xxx####!"
	"####  ####!"
	"# $ .. $ #!"
	"# # ** # #!"
	"# # .* # #!"
	"#  $.*   #!"
	"### ##$###!"
	"xx#   @#!"
	"xx######!",
	"UUULULuurDldDrrdrruuuLLLulDrrrrdddlluUdlllDlluuuRRRDullldddrruUrRdrddD"
	"LllUUURuuurDlddldddrrruurruuulLLulDDurrrrdddllddllluulluuurRlldddrrddR"
	"RruurruuulllulDllldddrruUddlluuurRdddddrrruuuUddrruuulL",

	// 19
	"xx####!"
	"xx#  #####!"
	"x##$ #   ####x#####!"
	"## $   $  $ ###   #!"
	"# $   #*#   ## $  #!"
	"#   ###+###    # ##!"
	"## # ......# $ $ ##!"
	"x# # *****.. # $  #!"
	"##  #*.*.*## $ $  #!"
	"#  $#..*..#### #  #!"
	"#     ###  ###  ###!"
	"### $   $$      #!"
	"xx#######  ######!"
	"xxxxxxxx####x####!",
	"DlDDuulldRurDurrDDuurrdLrrruurrddddddlllluluUUdddrddlUUdrrrrruuuuuullL"
	"UllululldlldldldddddrrrdrrRlllullluuuuuluRuRRdLruuulDDlDDDDDDldRRdRRuU"
	"UUrurrRdrrruulullululldLdlLuurDrrurrdLLLLrrrrrdrrdrddlllulluUddldlluRR"
	"LdddddlluluuuuuruUrrrurrdLLrrrdrrdrrrddddddllllulUUlULUUUdddrdrddrdrrR"
	"RuuuuuullddllLuLrddddrddlUUUUlUlUUdlldddddRRRllluuuuurrdLulDrrrdrddrdD"
	"LUUdrrrrruuuuuullddllLLruLdLLrUdrrrrruRurDDDDDrdLLLLLulUUddrddlUUdrrrR"
	"RuuuuulldllLLrrrrdRluurrdDDDrdLLLLLulUUluRRldddrddlUUUUluulldRullldRRU"
	"RrDRddddlllluuUdddrrrruuuuullldRullldRRlddddlluRdrUUUdddrrrruuuuullllL"
	"DRdddllluuuuuruulDDDDDDldRRRdrUUUUluRRRlldddddrrrrrrrrruuuuuuuRurDDDLR"
	"UulldDDDDDrdLLLLLdlUUUUUddddrrrrruuuuurrDLulDDDDrdLLLLLdlUUUUdddrrrrrU"
	"UuurrrddlULulDDDrdLLLLLdlUUUddrrrrruuurrruLLulDDDDrdLLLLLdlUUdrrrrruuU"
	"UuulllullululldLdLLuRuulDDlDDDDDDldRRRdrUUUUluRRldddddrrrrrrrrruuuuuuL"
	"LlullululldLdlLulDDDDDDldRRRdrUUUUluRddddllluuuuuuururDrrurrdLLLdLLulD"
	"DDDDDldRRRdrUUUUdddllluuuuuuururDrrrrrdrruLLLLLLdLLulDDDDDDldRRRdrUUUD"
	"DllluuuuuuururDrdLLulDDDDDDldRRRdrUUdllluurDldRRdrU",

	// 20
	"xxxxxxxxxx####!"
	"xxx########  #!"
	"x###  # $ $$ #!"
	"x# $ $$   #  ####!"
	"x#    $ ##  ##  #!"
	"x###  #  #   $$ #!"
	"xxx# #.. ##  #  #!"
	"x### #.+.. #   ##!"
	"##.. $ $ #$. $  #!"
	"# .. #### . ### #!"
	"# ** .   .$. $  #!"
	"#  ##############!"
	"####!",
	"LdLLuuuuuurDldddddrruuruuuLLulDDDrURurDDrdLuullluurDldRRurDllllluRRRdR"
	"RDrddlldlluUUUluRddddddlluRdrUUUUddddlllddrUluRurrddLUluRdrUdlllddrUlU"
	"RRdrrrrrrurrdLLLLLLLLullddrUluRurrrrurrrrDDrdLLLLLLLLrrrrrrruuulllldlL"
	"LldlddrUrrUdrrrrrruuulllldlLLrrrurrrrdrrurrdLLLrrrrddlLLLLLLLLLLLruurR"
	"UrrrrDDurrrruuruulDDDlluuRlluuruulDDDldRRdddlddrrrruuLLruuruulDDDldLLD"
	"DLLLLLLLuurrurruuluurruRldllddDrdrrDDrdrrrruuLLLLruuuRlddrruruulDDDuuL"
	"LluuruulDDDldRRRlluuulldlluRRRlllddllLuurDRdrddrdrrDrddrrrruuLLruuruuL"
	"DDDldLLddLLLLLrrruRdrrrrruuLuuullluuruulDDDldRRRlluuullllDDDrddrrDDurR"
	"UrrdrddllllLrrrrruulLLrruuruulDDDuullluuulllldddrddrrdddrrrrruuLulldLD"
	"UrurrdLLuuuluuulllldddrddrrDulldLLuRRuulDuuullldRRulllldRRRurrDDrdddlL"
	"URdlLLUUUruurrddDuuullddldddrrrrULuuuulldRurDDDuuulllldRRRurDDrD",

	// 21 Maelstrom Collection #9 variant
	"########!"
	"#      ##!"
	"#  # ** #!"
	"#   $   #!"
	"##*#*# ##!"
	"#  *@*  #!"
	"#   #.* #!"
	"##     ##!"
	"x#######!",
	"LddrrrUUddllluurRlldlluRUUluurDDDDldRdrrruulLrrddllluUUUluurrrrrDLdLDU"
	"RuullllddrddddrrruuLLrrdrruLddlllluUrruururrdLDDrdLdlllluurruuRlddlldD"
	"RrrruuuUruLulllllddrRRRlddllddrrrruuuUllddRlllddrUluRRuullDurrddldlluR"
	"UuluurDDuurrDDrrdD",
};

// Cantrip, (c) David Holland
const char* HollandCol5[] = {

	// 1 Bigt2
	"#####!"
	"#   ####!"
	"# #$   ###!"
	"# #.*$*  #!"
	"# # .* # #!"
	"#  . $.#@#!"
	"###  $ # #!"
	"xx####   #!"
	"xxxxx#####!",
	"DdlluuuLURdddLUlllluuuurrDDDuuullddddrRRRUruuLLrrddldlllluuuurrDDDuurR"
	"RddlLdLUrrruullDDrruLdddrdrruuuuLLulDDurrrddddlluUUdddrruuuulLdlllddRR"
	"LluurrruulllullddddRluuuurrdrrDrrrddddllUUUddllUR",

	// 2 Bola1
	"x#####!"
	"x#   #####!"
	"x#     $@#!"
	"x## ##.#*###!"
	"### # $  $ #!"
	"# $ .$. .# #!"
	"#   $ ##$# #!"
	"###.#.  .  #!"
	"xx#   ######!"
	"xx#####!",
	"LLLLulDDDDrRRUldddrrrrruuuLLLrrrdddllUULuRdddllluulluuurrrrrDDDlLLdddL"
	"LuUUUUdddddrruuuuRdrruuullDDuurrddLruullllulldRddddddrruuuRUldddrrrrrU"
	"UuLLLrdDuuuulllLulldRddddddrruuurRurDuuulllLulDDDDRRuRRdrUrrdddlLUdrrU"
	"UullllldddrRlluullDRurDlllluRR",

	// 3 Boomerang5
	"xx####!"
	"###  #!"
	"#@$ .#####!"
	"# *$ $ $ #!"
	"## * * . #!"
	"x# . . ###!"
	"x# . ###!"
	"x## $#!"
	"xx#  #!"
	"xx####!",
	"RRurDDDLddrUrruuLDrdLLdlluRRluURuulDDrDrruLdrrruLLdllUlulldRDRRlluurDR"
	"DRRuLLLulldRdRRlddrUluluurDrrrddLLUddlddrUUUrruulLDuLulldRdRDDuuluurDR"
	"RrddlLUdrruulDuLLulldRdRRlluurDrdddllUUddrrddlU",

	// 4 Canine4
	"#####!"
	"#   #####!"
	"# # $ $ #!"
	"# $$. *@#!"
	"# #  ** #!"
	"# ### *##!"
	"#  # .* #!"
	"##  . . #!"
	"x##     #!"
	"xx#######!",
	"LLDDDldRuuuurrdLulDllURRdDDldlluluuuRRlluurrDulldddddrdrruruuuuLDrdddL"
	"DlluluuurRdRlulldddrdrruruUddlddrUUddrruuLrdLLdllululuuurrdrrrDDuuruuL"
	"DDlllulluurrDrDRlululldddddrdrdrruLuRUUrruulDuLDDDuulLuullddRRRRuLdllL"
	"UurrDullddrRdRlulldddrdR",

	// 5 Catkins5
	"x#####!"
	"##   #####!"
	"#  # $@$ #!"
	"# #..#*  #!"
	"#  .   . #!"
	"## $.#.* #!"
	"x# $ $$# #!"
	"x#####   #!"
	"xxxxx#####!",
	"DrdLLLuuulldlddrRRRRuuLrddllllluururrDrrdrrddddllUUddrruuLULuullulldlD"
	"DrrrRRDrrddllUUUllddRluullddRRuurrdrruLLLLdLUlluururrdDDrrrruuLLLrrDDL"
	"LlllluururrDrrrrdddddllUUddrruuuuullllulldlddrrddlUrurrRdddrruuuuulllL"
	"UlldlddRddrrRllluuluururrdrrrrdddddllU",

	// 6 Clasp1
	"xxxxxx#####!"
	"x######   #!"
	"x#   # $  #!"
	"##  $..#$ #!"
	"#  #**.   #!"
	"#@# *.*#  #!"
	"#   ##   ##!"
	"### $  ###!"
	"xx###  #!"
	"xxxx####!",
	"UrurRlldlddrruRURRuuRurrddddldllUUlldldlluuruurrDlldlddrrdRRdrUUrruuLL"
	"DDuurrruuulldlDLLullddlddrrurRlldlluuruurrdrDRuururrdLDrddldllULuuruRL"
	"DlddrUddrruruulDLLddrrUruuuulDllDlDururrrddLddlluUlululldRRlldlddrrdrR"
	"DrUUrruuLLrrruulDrdLL",

	// 7 Cossack2
	"xxxx####!"
	"#####  ##!"
	"#   $ $ ##!"
	"#   #.$. #!"
	"##  **.#@#!"
	"x#   . $ #!"
	"x#####  ##!"
	"xxxxx####!",
	"DLLLLrrrruuluLDlDLdRuuruulDLLdlddRUrrdLulluluRRRRDrruLulDlllddrrdrRULR"
	"UruLLLLDlluRRRRurDrdrddLdlUluURuulDllldddRRlURlluurDldR",

	// 8 Flagon1
	"xx########!"
	"xx#   #  #!"
	"x##$#   .##!"
	"## .* #   #!"
	"#  .* *$# #!"
	"#   . #@$ #!"
	"#  # ##$###!"
	"####    #!"
	"xxx######!",
	"ULrUruulDllullDDlddrrrUrrUruLddlldllluuruurrdDLDLrRuuulldDrrddLddrrrUU"
	"UUrrddLruulldDuuruulDLrrdrddlluUdLLdlddrrrUUddllluuruulDDuuluurrDDurRD"
	"RrddllUlLuurrurDlllddrrUddrruuLuLLrrdrddlluUdllulluurrDrRddlldlUrrruuL"
	"LDuullddlDlddrURUrRdLruuurrdddddlllUUruuuulldDlDlddrURUdlluR",

	// 9 Fretsaw1
	"##########!"
	"#@ *.##  #!"
	"# $   $  #!"
	"###*..#  #!"
	"xx#  $  ##!"
	"xx# .#. #!"
	"xx# $ $ #!"
	"xx####  #!"
	"xxxxx####!",
	"DRRDrddldRuuRRdrddlUUrUUruulDDDDuLLuuRldlluRuLddrrdrruruulDlLddrrUruLD"
	"DllulluurDldDRRRdrUUruulDLLddrrUruLdddlddrUUUlllddRluurrrdddlUlluuluRL"
	"UurDrDullddrUdddrrruulLulDluuurDrddrrUruulDLLddlluRluurDllluRRdddrrrrU"
	"RuLLLLrrrddlllluUrrrrddddllllUU",

	// 10 Gyroscope2
	"xx#####!"
	"###   ###!"
	"# $ #$  #!"
	"# ....* #!"
	"#  *. $ #!"
	"## # # ##!"
	"x# $$* #!"
	"x## @ ##!"
	"xx#####!",
	"UUULuuurrDrrddLddLdlUrruuruulDDuululldddrRUdlluRRlluurrDrrddLULuullddL"
	"LuRdrdrRurrdLulLLrruullDllddRddRdrrurUUruuLrddlddldlluRUUddlluuluurruR"
	"RDrrddlL",

	// 11 Heart4
	"####xxx####!"
	"#  #####  #!"
	"#    $@$  #!"
	"# *.$#*.* #!"
	"## . # . ##!"
	"x# . #$. #!"
	"x## $$  ##!"
	"xx#  #  #!"
	"xx#######!",
	"LLDldlUluurDDrruLdddrUldddrURRdrUUUlDrruUruulDLDurrdLddlluRdddlUllluuR"
	"DluuurrRRDDDulUrrruulDrdLulDuLLLDllluurDRRRRllldddrUUlulldRurDrddlddrU"
	"RrUrrUUllulLLdlluurDldRurrddDllUdrruuurrdrrruulDrdLddllUddlLdlUruuuurR"
	"RlllddddrrurruuruulDllllddddrrdrU",

	// 12 Loom1
	"xxx#####!"
	"x###   ###!"
	"x# $ # * #!"
	"## $*.*  #!"
	"#  *   . #!"
	"#@  ###  #!"
	"#####x####!",
	"UrRRUrRdrruLLdLLLdlluRRRRRuuullDDRdLLdlluRuRRuurrdDLdlLuluRddrruLLrrrU"
	"UllDurrddrruLrdddlUUlldRllluRlddlluRdrUruuurrDulldllDRddlluR",

	// 13 Moebius2
	"x####!"
	"##  ####!"
	"# $  $ #!"
	"# $... ##!"
	"#@*$$$* #!"
	"## ...  #!"
	"x##   ###!"
	"xx#####!",
	"URRDuuulDlddRdRUddrruULrdrruLuuLLrrdddldlluRuURurDllddlluluurDRDrddlUL"
	"UluururDRDDurrDLululllddrURuulDlddrdrdrrUUrrdLuuuLLLdDRRlllluuRurDlD",

	// 14 Notchwheel1
	"xxxxx####!"
	"x#####  #!"
	"## $  $ #!"
	"#@$.#.* ##!"
	"# $.$ .  #!"
	"##$.*#.  #!"
	"x#      ##!"
	"x#  ######!"
	"x####!",
	"RuRDDRRRdrruLuLDruuulDrddlllluuRRRDrdddllllUUrrRurDluulllldldRRddrrrUU"
	"RrdLdlllluuluurrrrurDDDllLLddrrrrUruLuullllDDulldRuurrrrrddddlllllUUluR",

	// 15 Osmosis1
	"##########!"
	"#   #    #!"
	"# #$. .# #!"
	"#@#. * # #!"
	"# # * .# #!"
	"# #*$*$# #!"
	"# $      #!"
	"####  ####!"
	"xxx####!",
	"DddRRRRUdllURUUlDrddrRUUULrdddlluuRuuurrrdddddLLLUUUrDllluRdrdddlUlURU"
	"UlDrrruLdlddrrrruuuuulllDDuurrrdddddllllllluuuuurrDRlulldddddrrruuUrrD"
	"LDlddrUrUdrruuuuulllD",

	// 16 Pinwheel3
	"x####!"
	"x#  ######!"
	"x#   $@$ #!"
	"x# **##. #!"
	"##$.$  . #!"
	"#  .# .*##!"
	"#    $  #!"
	"######  #!"
	"xxxxx####!",
	"LLLDDRRdrdrUUruuLDDDlluRllluurDldRRdrdLLLUlldRRuUruulDlDDrUluRuulDDrdR"
	"RdrrUruulLLLrrrrddlUddlddrUUllulluluurDrDulldRdddRRurrUruuLLLLrrrrddlD"
	"DdlUlllulldRRuuuluurDldDrddlluRdrRRRdrUlluuLrR",

	// 17 Quarkspin3
	"xx####!"
	"###  #####!"
	"#  .$  . ##!"
	"# $*@#$*  #!"
	"## .$* .  #!"
	"x### #  ###!"
	"xxx#   ##!"
	"xxx#####!",
	"DllURuRRRDRdrruLuLLdRurDlddlULLUlldRRRRddllUdrruulLuluurDRRDDllUluRdlL"
	"LuRdrruulDrddrruuLLrrdrruLLddllddrrUrULuurrdrdLuullddddlluuuuRR",

	// 18 Shuffle1
	"xxxx#####!"
	"xx###   #!"
	"###..$. #!"
	"# $ $.$##!"
	"# #$. * #!"
	"#  . *$ #!"
	"##   # @#!"
	"x########!",
	"UuLLrrddlUruLdLLdlluRUURuRurrdLLrDDrddlUUUddlLdlluRRRlluurRDLulDrrrrdD"
	"LUruLLLruuurrdLulDDurDDrddlUUUlldRlddlluRdrUllluuRRRlD",

	// 19 Space Invader1
	"xxx#####!"
	"x###   #!"
	"## .$.$#!"
	"#  .** ##!"
	"# * . * #!"
	"##   $$ #!"
	"x#  ## @#!"
	"x########!",
	"UuLLLdllUluRurRurrDLLDLDlddrUrUUlDrdLurrrrddlUruLULuurDDDrddlULUUdlluR"
	"DrdrruLuuullDDlddRRlluuruurrddLrdrddlUlUdllulluRdrddlU",

	// 20 Splittee1
	"x#######!"
	"##  #  ##!"
	"#     $ #!"
	"# ** **@#!"
	"# * # * #!"
	"##  .  ##!"
	"x#  .$##!"
	"x##   #!"
	"xx#####!",
	"DLruuLDLDurrdLdLLLrrruulDruuulDDullDRRulllldRRDDrddlUUUUlldRurDDrddlUL"
	"UUrDldRuuuRurrrddldLLLddrrUdlluuulluururDrrrrddldLruruulDulldRullllddR"
	"RddlUrddrruuU",
};

// Bagatelle 2, (c) David Holland
const char* HollandCol6[] = {

	// 1 Boxclever14
	"x###############!"
	"x#             #!"
	"x#.## #### ###.#!"
	"x#   * $ $ *   #!"
	"x# $#   $  #$$ #!"
	"##   ##.#.# $  ##!"
	"# $$ #..*.. #$  #!"
	"#    #.*.*.#    #!"
	"####*$*#.#*$*####!"
	"#    # *...#    #!"
	"# $$ #@.*..# $$ #!"
	"##   ##.#.##   ##!"
	"x# $$#  $  #$$ #!"
	"x#   * $ $ *   #!"
	"x#.#####.#####.#!"
	"x#             #!"
	"x###############!",
	"UUUddRRuuLuuullUllluurrrrrrrrdddlddrdDuuluuruuullllllllddrrrrdrddRdRlL"
	"UuullullluurrrrrrrrdddldDlluuRuLdllullluurrrrrrrrddLDlldddrddldddldLLL"
	"UluURurUUllUUUUrrrdrrdddrddldRRddLdddlllllluUrrrrRlllllddrrrrrruUllllL"
	"UUrDldRRRRUUUruuuuluullulllddddrrddDDDuuuuulluurrDDlluRluuurrrdrruLdrR"
	"RuLrruurrrrddllLLrrrrddlUrdddlUUruuuulllldddlllddrrrruRRlldlllddddrddL"
	"RuullluRdrUUUluuurrruuullllllllDDDDrddlluRdrrDDDDlddlddrrrrrruUlUUUruU"
	"UluuuluLLLrrrdrrrruuurrrrdddDllldllLdlUUdrrrrurrruuuulllldddlluLLLdrRD"
	"DrrrrurrruuuullllddLLLddddrdddlluRdrrddLdddlllllluurRRRRlllluurDldlddR"
	"RrrrruUlUUUrrddLruulUUUluuuRurruulllllllldDDDrrDDDDDDlddRRRRUrruuluuuL"
	"UuulluLLrrdrrrurruurrrrddddllldllLdlUUdrrrrurrruuuullllddlldLdddrdddlL"
	"URdrrddllldllluurDuuuuuuullDldRRluurrdDlluRdrDDDDlluluRRlddrddlddrrrrR"
	"RuUluUUrUUUluuuurrruulllllllldDDDrddrdDuuluuluuuurrrrrrrrrrrrddddllldL"
	"LLddddlluRdrUUUdddrddLdddlllllluurRRRRlllllddrrrrrruUlUUUdddlllluuluuR"
	"RuuluuluuuurrrrrrrrddlllddDRRlddddlluRdrUUUdddrddLdlUUUdddlllluurDldRR"
	"RRlllllddrrrrrruUllllluuluurrDDuuuuluuluuuurrrrrrrrddllldddRddddlluRdR"
	"UUUdddrddLdllllluurDldRRRRlllllddrrrrrruUlUUUluRdrUUddrddLdlllluuuuuuL"
	"UurDDDDDDDldRRRRlllllddrrrrrruUlUUUluRdrrddLdlUUdrrrdLuuulUlldRdddlllL"
	"LddrrrrrruUruLdlUUUluRddddllluuuuuullluRRluuuuurrrrrrrrdddLLulDDuuLLLL"
	"RrrrrrruulllllllldDDDrrDDDDDDDldRRRRlllllddrrrrrruUruLdddrrrrrruullLLL"
	"RrrrrddlllllluUlUUUddRdrrrrrruulDrdLLLLLrrrrrddlllllluUrUUdLdlllluuuuU"
	"UllluRRurDDDDDDDldRRRRlllllddrrrrrruUlUUdRdlllluuuuuuuulluuuurrrDurrrR"
	"RrrrrddLLLLLdllulLLLDDuurruullldDDDDRurDDDDDDDldRRRRlllllddrrrrrruUrrR"
	"RruulDrdLLLLULDlUdllluuuulDDDulDDRRuuuuuRluullldRRurDluuuurrdRurDrruLL"
	"LLLLdlUrrrrrrrrrrrrddlUdddrUUUULLLLLLLLrrrrrrrddlUruLrddddlDLrDrDDDluU"
	"UrrDDDDLL",

	// 2 Doodle8
	"#####!"
	"#   ######!"
	"#      $ #!"
	"## # #   #!"
	"#  *  ####!"
	"#.$*$.#!"
	"#. . .#!"
	"# .#$ #!"
	"# .*. #!"
	"#$#$#$#!"
	"#  $  #!"
	"## @ ##!"
	"x#####!",
	"LulUUUrurrruulLrrddllULUUdddrrruLdllddlddrdrrurUUUUlllddRRUruLddlllddR"
	"DrruLUdrruUUluuuuululldRddddddRllddRdrUUdrruuuluuuuuLulDDDDDDuuuuurrrR"
	"DrruLLLLLulDDDDD",

	// 3 Eightfold21
	"xxxxxxxx####!"
	"xxx######  ##!"
	"xxx#@ $     #!"
	"#### $### # ##!"
	"#   $ ## .#  #!"
	"#  #    ** # #!"
	"## ####... # #!"
	"x#. ### # #  #!"
	"x#$  $  $   ##!"
	"x#. ####   ##!"
	"x####xx#####!",
	"RRRRRddDDllddRdrrururuuuluuLulDDDDrdLLruulDllllUdrrrrruuullllDDllldddR"
	"DdlUUUUluRRRdRRRRuruulllllDrDuurrrrrrddrdddldldllullLLLuluuurRdRRRllUU"
	"LuRRRRllllddlldddrddlUUdrrrrrrdrruLLLLLLLulDrrrrrrrUdrruruuuluululDDuL"
	"LlllddlldD",

	// 4 Heart1
	"####xxx####!"
	"#  #####  #!"
	"#    $  $ #!"
	"# ..$# .. #!"
	"## . #$.$##!"
	"x# .$# . #!"
	"x##  #$$##!"
	"xx#  # @#!"
	"xx#######!",
	"UUUUluLLLdlluurDDrdrDluuurrrdrrruulDLLLLLrrrrdddlUUrurrdLulDuLLLDllluU"
	"RDRRRRRlllldddrUUlulldRurDuRRRdrrruulDLLLLLrrrdddrddlUUUUrDDuuurrdLulD"
	"ULLLdllluurDRRRRRllldddlddrUUUUlDDuuulldRurRRRdrrruulDrdLuLLdddrrUdllD"
	"DrUluuuuLLLDlluurDldRurrdddllUdrrddlU",

	// 5 Holster7
	"xxx####!"
	"xxx#  #######!"
	"xxx#$       #!"
	"xx##..#### $##!"
	"xx# *.#  # $ ####!"
	"xx# .. $ #   $  #!"
	"xx# .* # ##  # $#!"
	"xx# ####..## #@ #!"
	"xx# #  .*.# $$ $#!"
	"x## #  #..   #  #!"
	"x#.*.# ### #### ##!"
	"##.*.$ #   # $ $ #!"
	"#.*..    $ #  $  #!"
	"#...## #####$$ $ #!"
	"##### $ $ $ $ $  #!"
	"xxxx#            #!"
	"xxxx##############!",
	"DdrdDrddddllluRdllluRdllluRdllluRdllluRuuuuuurRllddddllldlUURdrrrdddrR"
	"ULdlUUUrrurruullullddDuuurrdrrddlldlLLLLulDrdLurrrrdddrrrruLLLdlUUUrrU"
	"RruullullddDuuurrdrrddlldlLdddrrrrrruLLLLLdrrrrrrruLLLLLLdrrrrrrrruLLL"
	"LLLrrrrrruuullDllDurrDLruurrdLuuuluurDDDDlDlddLdllllllUUUrrurruurrURlL"
	"DlddlldllLLUlUUUUUruruuurrrrrdddrrdDuulluuullllldddldldddddlddrUrrrrrU"
	"RrdLLLLLLLUlDrrrrrrrruuuruRuuulluuullllldddldldddDuuuururuulDDruuurrrR"
	"RdddrruLrdddddllllullddDuuurrdrrdddlllLLLuLDrrruLruuurruuuLLLullDDDDDD"
	"UuuuuurrdLulDDDDDuuuuurruurrrrrrDullllllulDDrddrrrddddrrrruuuullUUruLL"
	"LLLrrrrdddrrddddlllluuuullllluRuuurDldddrrrrdddlldddddddrruLdlUUUUUUlU"
	"RRlddddrrrruuullUUrDldRRdddlllldddrrrruLLLdlUUUUUUluRRlddddrrrruuuluuL"
	"DlldddddddrrrrrruLLLLLdlUUUUUUluRRRllddddrrrruuulUllldddddddrrrrrrrrrU"
	"LLLLLLLLdlUUUUUUluRRRllddddddrrrrrrruulDrdLLLLLLdlUUdrrrrrrrrrruuLDLrU"
	"UuuuuluuLLuLuullllllldddrrrrDulllluuurrrrrrrddrdddddLLdddlllLLLLLrrrrR"
	"RrruuurruuulUlUUruLLLLLLulDDDldRuuurrrrrrdddrruLdlUUruLLLLLLulDDDuurrR"
	"RrrrdddrrrrDDDDlULrrdDDDrddLLLLLLLLLdlUUUUUUluRRlddddrrrruuurrUUUddrrR"
	"DdddDrdLLLLLLLLLdlUUdrrrrrrrrruuuuuuuuullLdlUruLdlUUruLLLLLLulDDurrrrR"
	"RrddddrdddlldddlllLLLLrrrddrrrrrruurDrdLLLLLLLdlUUdrrrrrrrrruuuuuulllL"
	"DldddlllLLLrrddrrrrrruuuRRDDrdLLLLLLLLdlUUUrrrruuurrurrrddDDDrdLLLLLLL"
	"LLdlUUdrrrrrrrrruuuuuulUUruLLLdlUruLdlUUruLLLLLLulDrrrrrrrddddrdddlldD"
	"DlllLLrUUUluR",

	// 6 Jellyfish2
	"xxx######!"
	"x###    ####!"
	"x#     *#  #!"
	"x#$$ $ $ $ #!"
	"## #*#*# # ##!"
	"# @*.. ...  #!"
	"#   #####   #!"
	"#####xxx#####!",
	"RRRRRRRdrruLLLuuRurDDullddLLUURRddllLLUURuurrDLDllddrrUUddrrrdrruLLLuU"
	"RurDDullddrdrruLuullLLddRlllLdlluRRRRRuuruulllDDDuuurrrddlddlLLdlluRRR"
	"UuRlullDDuurrdddldlluRuuRurDDuuurDRDLulD",

	// 7 Midblock7
	"#####xxx#####!"
	"#   ##x##   #!"
	"# $  ### $  #!"
	"## #  # @# ##!"
	"x# ##.*.## ##!"
	"## # .*..#  #!"
	"#    .***$$ #!"
	"# $$ ....#  #!"
	"###  $#  ####!"
	"##  $ ## $ #!"
	"#  $ ###   #!"
	"#   ##x#####!"
	"#####!",
	"LddLDurrDLddrUUddddrruLdlUUluuLLdRuuruuruRurrdLdddrddlULLLulDlLuRdrruU"
	"UruRurrdLddDrdLLLLuuuruRurDDDDrdLLruuuulldldddLLuuRldRlddldldlddrUrUrU"
	"UUruulDlDRdddldlluRuRlddrUrUUUluRdRUluulululldRddddRRRdddlluURlddrruUU"
	"LuRuuluLulldRddddldRRluRRuruuluLulDDDDuuurrdrddldlddRUrUUddlluRdrUdllL"
	"LuRRRdddrU",

	// 8 Pinball15
	"xxxxxxxxxxxxxx#######!"
	"#####xxxxx#####     #!"
	"#   #######  # .### ###!"
	"# $   @      # ..$    #!"
	"##### ##$### #$.$ #$# #!"
	"# $ $  # .## # . #  # #!"
	"#      #$.#  #$* #    #!"
	"## #####  #    .#   ###!"
	"x# #   .#.# ##$*### #!"
	"x# #.$.   #*## .$ # #!"
	"## ##$#.  .  #$.. # #!"
	"#  ..*.##$## # .### #!"
	"# $.*   $     #     #!"
	"#####  $  # $ #######!"
	"xxxx##### # $ #!"
	"xxxxxxxx# $ # #!"
	"xxxxxxxx###   #!"
	"xxxxxxxxxx#####!",
	"RrrrrrddddldDuuuruuullllllldddllldddddrdRRdrRuRRRRddddrruuuuLLLLdddRlU"
	"UurrruuLLLulllulldRurrdrrdrruuuuruuullllllldddllldddddrrdrdrruLuLUUluR"
	"RldRRdRRDDLLdllUUUdddrrurruullulLrrdrrddrrruulLLLrrruuurrrrDDlUruLLLuL"
	"DDDuurrrrUUUUrRRRDDlddrdddddllllulUUrDrruLdlluUrDldRuuuLLLuuuulllllllD"
	"DdllldddddrdrrdrrurruuuuuuulUdrdddddddrrruuLLrrddllllldllulluluuuuurrR"
	"UuurrRRRRurDDDDlDDDuuRRRdrUUUlDrdLLLuuuullllllldddllldddddrdrrdrrurruU"
	"UUUUdlUUUdddrdddddrrruuLLrrddllllldllulluluuuuurrruuurrRRRRurDDDDlDDDU"
	"URRRuurrUrurruullllDldDDDrDDDuuLLLuuuulllllllllulldRRRRRRRRRRurDDDDlDD"
	"URRRdrUUdllluuuullllllldddlluRdrUUddllldddddrdrrdrrurruUUUUluuuullLLLU"
	"LldRRRRdddllldddddldRRluuuuuuluRRdrruuuRRRRRRurDDDDldRRRurDDullluuuulL"
	"LlddddrdddddllLulLLdlUUUUUUruRdrUUddlllluRRlddddddrrrrddlUruLLLdlUUUUU"
	"DdddrrrrdrrruuuuuluuuullLLLulldRRRRRRRRRRurDDDDldRRRurDllluuuulllllllD"
	"DdlluRdrUUdlllldRRRllddddddrRurrddlUruLLLdlUUUUUdddddrrrrrrruuuuuluuuU"
	"LlLLLulldRRRRddlllldRddddddrrrrrrrrrruuLrddrddddllUUUdddrruuuulLLLLLLD"
	"LUruLLdrrrrrrrdddlluUddrruuulLLLLdlUruLddrrRurrrdddlluUUUUULLrrdddrrrR"
	"DdLUruLLLLLLdlUrrrdddrrUUruLLLLLLdlUllluuuuuuurrdLulDDDDDDldRRluuuuuuU"
	"RrrrdLLLulDDDDDDldRuuuuuuurrruuRRRRRRurDDDDldRRRuuuRDluuurDDuuurrrrddL"
	"LLrrruulllldlddrUrrrrddlddrUrruuuLLLLLrrrrrdddllUUddrruuulLLLdL",

	// 9 Spin6
	"#####xxx####!"
	"#   #####  #!"
	"# # #.$    ##!"
	"#   * $ #   #!"
	"### #.### # #!"
	"##  # $.* # #!"
	"#      .#.# #!"
	"# $####$$.* #!"
	"#   ## $ .###!"
	"### @  ####!"
	"xx######!",
	"LulluurrrruuuuRRdLulDLLdddrruUUdddrruLdllluuurrdDuurruRRdddLLLrrruuulL"
	"LdllldddllddrrdrrruRRlUUddldlllulluurruuurrrrurrdddddLruuuurrddddLLuuU"
	"UuurDldddddrruuuuLulllldllldddllddrrdrrrurURRlldldlllulluurruuurrrrurR"
	"DDDDuuuullldllldddrRUrRRllldlluuurrrrurrddDlllldlluuuuullddRRdddllddrR"
	"DrrruruUddldlllulluurrrrRuRlldllllddrrdrrruruUllllllddrUluRRRRR",

	// 10 Squarespiral9
	"xxx######!"
	"xxx#    ##!"
	"xx##$##  ####!"
	"xx#  .#  #  ###!"
	"xx#   #  $ $  #!"
	"xx### ## #. # #!"
	"####. .*.## # #!"
	"#    #*#*#  # #!"
	"# #$##.*.     #!"
	"# #  #.##$#####!"
	"# $  $      #!"
	"###  #$ #@  #!"
	"xx####  ## ##!"
	"xxxxx##    #!"
	"xxxxxx######!",
	"UllluuRRUUUUluuulllDDrdddldlDDrddlUrRRRRRllluurrRRuruuluurDrrddddlLLLL"
	"UuuuRlddddrrrrruuuullulDllluuulllddrdddldllldddRRRRRRdddrrruuluUddrddL"
	"LluuulllllluuurrdDuururuuulldRuuurrrdrDDDDLLLuUddrrruurrrrrddddlllLddD"
	"RddllluuuluuUdddrdddrrruuluuurrrruuuulllllluuullldddrddRddddrdddrrruuL"
	"UuurruuUdddrruuuulLLLrrddddlldddrddllluuuluuuuluuluuurrrddrDDurrrddddL"
	"LdddrddlllulUUUUUdddddrdrrruuluLLdlUUUddrrrdrruLLLLdlUUdlluluulldddrRR"
	"RRddrdrrruuullLdlU",

	// 11 Ukasar4
	"xxxxxxxxxxxx#####!"
	"xx#######xxx#   #!"
	"xx#     ##### # #!"
	"xx#      #  #   #!"
	"xx##.##  #    $####!"
	"x##...#  #$###  $ ###!"
	"x#  #.*.##  ##$   $ #!"
	"x#$##.*.    #   $ $ #!"
	"x#  #... ####$  #$  #!"
	"x#$ #####.    $# $  #!"
	"x#  ## $ .$ # $    ##!"
	"x#$....#@ #.###   ##!"
	"x#  #..##*$   #####!"
	"x# #..*.   #  #!"
	"x# #  .*  ## ##!"
	"x#  ##.###   #!"
	"##$$# .# $$  #!"
	"# $  $ $ $  ##!"
	"#     #     #!"
	"#############!",
	"RDuuurrdddrdddllDrddllluuRRurruuulLdLLdLLUlldRRdddRdrrrruUruuuulldllLR"
	"RruruuulldRldDrrrddddlddlllluluuuluuuruRRlldldddrRuLddddrdrrURurruuuuL"
	"LdLLLdldddrRRlllLdlluRRdlllluRRdrruRuuururruululldllldldddDuuuuruulDDR"
	"UuuulDDrdrrrurrRdddlldllUUddrrurruuullldLrurrrddrrrddddlluRdrUUUruLLLD"
	"LlldlluuururrrdDuullldldddrruLddddRRdrrrUUruuuulldLLLdldddrruRRuRldllD"
	"LlldlluRRdlllluRRdrruRuuururruuuurrrrdRRdrruruuruuLDlLululUllllDDrdLLL"
	"DlULrUUUruLLulldddldlDDrddddlDDDDuuuuruuuuluururrdDrrrrruuurrruuurrddL"
	"RuulldDrddDrrdrrrddldldllullulllldllldlLrrurrrurrrrdrrdrrururuulllullD"
	"LDururrdLdLUUUddrrrruLrrdddldldllulUUUruulULLLulDDDrdLLLdlUUUddlluullD"
	"LddrddlDDrUrrrurrrdddlldllUUddrruLrrruuullldLrDuurrrdddlldldddRdrrrruU"
	"RUUUruLLLdllldllUUrDDDuuuuurrrdDrrrddddlluRdrUUUruLLLdLLLdlluurDuuurrR"
	"DDrrrddddlddllURdrUUluRdrUUUruLLLdLLLLDlUruuurrrdDrdLLLrruuulllddDrrrR"
	"UrrddddllddllluRRRdrUUluRddlllllldlluRRRRRRRllllllldlluRRRRllluurDldRD"
	"RruRRRRdrrUUrUUUruLLLdlllluuurrrdDrdLLLdLUUdrrruuuurrrRdrrdrruruUUlllU"
	"UlulllldddllllluulldlddrdDlddDDDDrdRRRRdrruRuuRdrUUUruLLLrrddddllddrUU"
	"DdlllluRRRllllllluuluuuuuruulDDDDDDDuuuuuuuuururrddrrrrruuurrrrdrddrrR"
	"DddldllullullllddDrdLLLdlUlldRurrrrrurrddddlluRdrUUUruLLLrrddddlldlllL"
	"LlluuluuuuuuuuururrddrrrrruuurrrrdrddrrrdddldllullullllddDrdLLLLLrrrrR"
	"UrrddddllddrUUluRdrUUUruLLLrrddddlldllllllluuluuuuuuuuururrddrrrrruuuR"
	"RrrdrddrrrdddldllullullllddDrdLLLLrrrrurrddddlldllllllldlluRRRRRRRRRdR"
	"UUluRdrUUUruLLLrrddddlldllllllluulDuuuuuuuuuururrddrrrrruuurrrrdrddrrR"
	"DddldllullullllddDrdLLLrrdLruurrrddddlldllllllldlluRRRRRRRRRdrUUluRdrU"
	"UUruLLLrrddddlldlllllllluuuuuuuuuuururrddrrrrruuurrrrdrddrrrdddldllulL"
	"UllllddDrdLLrrurrddddlldlluRRdrUluRdrUUUruLLLrrddddlllldlllllluuuuuuuU"
	"UuururuuurrdLulDDurrrrddlddlluuLrddrrrrruuurrruuurrddLruulldDrddrddlUU"
	"ULLLulDDDrdLLLLuuUruLLLulDDurrrddddrrruuurrruuurrddLruulldDrddddrrrrdD"
	"DldllulUUUUUULLLulDDDrdLLLdlUUUUruLLLulDrrrdddLrddlUlUdrrrrruuurrruuuR"
	"RddLruulldDrddddrrruLLdlUUULLLulDDDrdLLLdlUUUUddLdrrrruuurrruuurrddLrU"
	"UlldDrddddrrrrruLLLLdlUUULLLulDDDrdLLLdlUrrruuurrruuurrddLruulldDrdddD"
	"DddrRuRUUruLLLdlUUULLLulDDDrdLLLLdlUrUUruuLLLrrDDDDrrruuurrruuurrddLrU"
	"UlldDrddddlDrdLLLLrDLurrrrdrrdrUUUddrUUUruLLLLdlUUULLLulDDDrdLLLdLUUUU"
	"DddrrruuurrruuurrddLruulldDrdddrrrrdLLLdlUUUULLLulDDDrdLLLdlUUUruuLDDD"
	"DrrruuurrruuurrddLruulldDrdddrrruLLdlUULLLulDDDrdLLLLLrrrruuurrruuurrD"
	"DLruulldDrdLLLulDDDrdLLLLuuuuulldRurDDDDuuuulllldRRRurDDD",

	// 12 Wye11
	"#########!"
	"#   #   ##!"
	"#     $$ #!"
	"##.#*.#. #!"
	"x#$.  . ##!"
	"## .  *$##!"
	"#  ##*#  #!"
	"# $@$    #!"
	"#######  #!"
	"xxxxxx####!",
	"RRUUlllUrrUruLdddrUrrDLLLuuurDuurrDLulDldddrruLrrUruLulldDuurrdLrdddDR"
	"DdlUUUllddRluulUllddldRRRRuuruLLdrrrUUruLullDDuurrdddddrddlUUUllddRluU"
	"LuRuuurrdLulDDDDrrUUruLLulDDDldRuuulLulldRRRRurrdLulDrrddddrddlUUUU",
};

// Cantrip 2, (c) David Holland
const char* HollandCol7[] = {

	// 1 Area52
	"x##########!"
	"##   ##  .#!"
	"# $  ##*#.##!"
	"#  $   .*. #!"
	"#   $ #.$. #!"
	"### $ #*#  #!"
	"xx###$#   ##!"
	"xxxx#  # ##!"
	"xxxx## @ #!"
	"xxxxx#####!",
	"RuuruuuLLLLdLLUdrruLrrrrrdddlddllulUUUluRRRRlllddddrdrruulUURuLdddrruR"
	"ULruLuullDDRluurrdDrddldlddlluluuuuRRuurrddDuuullddDRluuurrddLdlUrrrdL"
	"LulllluullDlddRRlURRRRRRdrUUdllllluullDldRRRRRRRdrUllllddddrdrruurUruU"
	"LllllllddRUrurrrrrddldlddlluluUlluuRRRRRlllluulDldRRRRRlllddrUluRR",

	// 2 Aitch11
	"xx#####!"
	"x##   #!"
	"x#  #$###!"
	"x# . *  #!"
	"x# ..*  #!"
	"###. .# #!"
	"#@$$$ $ #!"
	"#   #####!"
	"#####!",
	"DrrUUruulldRdddlluRdrUUrrdLLuUluurDrDulldRdddlluRdrUUUluurDrRDrrddLLLL"
	"UUluRdddrrrruullLrrrddlllluUluururrDDuulldlddrddrrrruulLuuulldDuurrddL"
	"RdrruLrdddllUdlluRlddlluRdrU",

	// 3 Anaconda15
	"##########!"
	"#   ##   ##!"
	"#    $    #!"
	"##$## ... #!"
	"#  $ #*#.##!"
	"#    *+#.#!"
	"#  $$##  #!"
	"#  #  #$ #!"
	"####   $ #!"
	"xxx# .####!"
	"xxx####!",
	"UUruulDLLLulldRRRRdRddLLDLruuLDlluRUddlddrUUUdrruLrddDrddlUUULuurDrruU"
	"RuulDDulllulldRRRRRurrdrdLdddddLLLulUlulluRUddrRRlddrddlUUUddrrrruulDR"
	"DLLrruuuuuuulldlllulldRRRRllldddlddrUUUUddrRddrDrrruuuuuuullDRllllullD"
	"RRRRRurrDDDDDlddllluuuuLdlUUdddrrddrrruuruuuuulldRurDDulllllulldRRRRRR"
	"UrDllllllddddrrddrrrrUU",

	// 4 Crosstwist27
	"xxxxxx#####!"
	"#######   #!"
	"#  #@$    #!"
	"# . *$#$$ #!"
	"# *.  #  ##!"
	"##  # $ ##!"
	"x##.**# .#!"
	"xx#.     #!"
	"xx##  #  #!"
	"xxx#######!",
	"RRRDDDDrdLuuuuuurrdLulDDDDDrddlULLULrddlUlUUlUluurDrDrrULuRRRdddDrddlU"
	"LluUUluurrrdddDrdLuuuuulllddrdRluluurrrddDllddlluUlURlluurDRddlUrdddrR"
	"ULruuLLrrdrrDrddlULLdlUlUUddrruLrurrDrdLLLdlUrrruuuuuurrdLulDDDDDrdLLL"
	"LrrruuuuurrdLulDDDDullddrRdrUluuuuullDDD",

	// 5 Eightpin14
	"xxx#####!"
	"xxx#   #!"
	"####$$ ###!"
	"# $ .# * #!"
	"#  #. .  #!"
	"#  . *#$ #!"
	"##. #.$@##!"
	"x##$   ##!"
	"xx#   ##!"
	"xx#####!",
	"UruLLuuullDDDuuurrdddLDDuLLdlUluuRRlDDrrrurrddLdLUddllUUdRdrUruruuluuU"
	"LldRurDD",

	// 6 Engine1
	"xxxx#####!"
	"x####   #!"
	"x# $@*  ####!"
	"## ### ##  #!"
	"# $.#  #.  #!"
	"#    $ $   #!"
	"# .* #. ** #!"
	"###  #   ###!"
	"xx########!",
	"RurDDDDRddlUUUdLLLrddlUlluuRDldRuRRRurDrRurrdLLLddrUUrrdLLulLLLLrddlUL"
	"LuuruuRRRurrdLDDldRRRdrUllllldllluurDldRuuuurrRurDDDldlLrruruullllddDR"
	"RrRRRddllUUUUddrrdrruLruulDDLLrddlluRlUlllluuurrrurrdLdDD",

	// 7 Face1
	"###########!"
	"#    .  $@#!"
	"#  *# #*  #!"
	"##  *.. ###!"
	"x#$ #.#$ #!"
	"x#  $.$  #!"
	"x#  ###  #!"
	"x####x####!",
	"LLLLLLDldDrUluluRRRRddLLdlUrdddlUUrurruullDulldRurrrddddLLulURdddlUUdR"
	"RruurrDrddlULLuurrDrdLuullddLLuuRRuullDulldRurrrddddllulURdddlUUdrrruU"
	"UullDDRluulldRurrrdDllDlUrrruullDulldRdRRlldddrUUluRluurrrRRDrruLLLrdD"
	"DrddlULrUU",

	// 8 Footy6
	"x########!"
	"x#      #!"
	"##$* * $#!"
	"# $. .#.#!"
	"#@$.#. .#!"
	"##$*$*  #!"
	"x#      #!"
	"x########!",
	"URRRuRurrDDDllUdrddlUdllURdrruuruuulllddlDulldRurruurrrdddlddllllUUluR"
	"DddrruLdrrruLruruuulllddrDuluullDDRluRurrrrdddlddllluUUlldRuuurrrrrddD"
	"LluLLrrdrddlUdlluRdrruuruuullllldDrDulldRuuurrrrrdddlddlluRdlllURlUUrR"
	"RDrruuullDRurDullllDRdLDlluRdrUruullDurrddldlluRdddrUdrrULdrrrUL",

	// 9 Hinge10
	"##########!"
	"#   #@   #!"
	"#   ***# ###!"
	"## #.*.#$  #!"
	"x# # *.    #!"
	"x#  #.### ##!"
	"x#  #     #!"
	"x#  $ $#  #!"
	"x#### $ ###!"
	"xxxx#   #!"
	"xxxx#####!",
	"RDDLDRuuulDLLulDrrrrddllURuLddrrRRUrrdLddllllUUrrRurDllllluurrurrDDuuL"
	"LldlddrUddddddrruLdlUUUrDluUUluuLulldRDDDrddRRuuuluuLulDrrddrrULdrrRuR"
	"RdLLuuullDLLLulldRRRRddddrrrrUdlllldlluuluUddrddrrddrruLUluRdddlUruulU"
	"UuullulldRdddrddrRurDluuuuuurrrdddLLrruuulllddDDDuuuulLulldRRRlldddrdD"
	"LUUUUddddrrRuuurrruuulllDllulldRRldddddrrruuuUddddddrruLdlUUUUUrrrurrD"
	"LLLrrddlLLDlUUddddrruLdlUUU",

	// 10 Meshcross1
	"xxx#####!"
	"xx##   ####!"
	"x##  #$$  #!"
	"x#  #   *@#!"
	"x# ##.#$###!"
	"##  ... ###!"
	"#  .#*#   #!"
	"#   $ $ # #!"
	"#### .  $ #!"
	"xxx###  ###!"
	"xxxxx####!",
	"LLDDllDDLLuurrrrDDLddrUluLuurrdrrddLLdlUrrruullullllddRdRUlluurrrrdrrD"
	"DllLrrruullDLdRuuulluuRlddllluurururrDRDrruLLdDDlluuRRddllllluurururrD"
	"RdddDDlLUdrruulLddrddrUUlluuLLddRdRUrrdLulllulldRRuurruuRuulldldldDrrR"
	"RrDDllUdrruulLddrddrUluluurrdrrddLLdlUrrruullullLLddRdRUlluurrrrdrrddL"
	"LLrrruullDuullllddrrUdlluurRddlllluRdrUdrruuuururDDDDrrddlLULLuuuurrdD"
	"DrrddlldlUrrruulluuuululldldldDRddRdRUUUddlllluRuuurururrddrdddrrddllU"
	"LrddlUlUUdllluuuurururrddrddDDLdlUrrurrddlLL",

	// 11 Rugby15
	"#####!"
	"#   ####!"
	"#    $ #!"
	"##  $# ##!"
	"x# #..* ##!"
	"x#.*. # @#!"
	"x##$# *$##!"
	"xx#   $. ##!"
	"xx##   $. #!"
	"xxx####   #!"
	"xxxxxx#####!",
	"LuLuuLLDllddRRlluuuurDrdDuurrddLDLUUdrruulLdddrDDRdRdrruLuLULrdrddlUlU"
	"LldRRluUUluuuLulldRdddRRuuurrddLDDDllUdrrrdRdrruLuLLdRulLuulLddRdRUrrD"
	"LullluurrurrDDuulldllddrrUUddrdrdrruLuLuuuluulldDRdddRdRdrruLuLuLrdrdD"
	"LUlUlldRRRlluUULuuuLulldRdRluurDrDDuulldRurD",

	// 12 Trident4
	"xxx#####!"
	"####   ##!"
	"#  #$   #!"
	"# . .$. #!"
	"# .$* * #!"
	"## .*.$##!"
	"x# $#$ #!"
	"x## @  #!"
	"xx######!",
	"RUULLrrddllUlUUluurDrrRDDuuurrddLUdDllLddrrrUUUruuLDlllDDrUlulldRRdrrR"
	"DdlllUlUdrdrrUruLrUruulDlLLrrDuruullDRurD",

	// 13 Triplet2
	"xxx####!"
	"xx##  #!"
	"xx# . #!"
	"xx#   ##!"
	"#### . #####!"
	"#  # #   $@#!"
	"# $  * #$$ #!"
	"#  . #$.. ##!"
	"##*# . $ ##!"
	"x#   #####!"
	"x#####!",
	"LLDurrdLdLdLLUULLdllluurDRdrUllldRurrdddllUUluRdddrruuLrddlluUrrurrddL"
	"RuulldllluurDldRddrrUrruullLrrrddllUdrruulLUUrrDDllddrrrruruulLrrddldL"
	"LlluurrDulluurrDDuuluulldRurDlddddddlluuRlddrruUUUUUdddrrurrrddldlLLrR"
	"RuruullldlldllluurDldRddrrUrrrruruullldllLrrrurrrddldllllUddlluuluurDD"
	"UrRddrrrruruullldDuurrrddldlLuuurrD",
};

// DH 5, (c) David Holland
const char* HollandCol8[] = {

	// 1
	"#####xxxxxx#####!"
	"#   ########   #!"
	"#         @  $ #!"
	"## #$#####$##$##!"
	"x# # .   #  # #!"
	"x#  #$.*. # # #!"
	"x#$ #  * $ .  #!"
	"x#  ##   ### $###!"
	"x#$   #*#  .  * #!"
	"x#  # .  . # $# #!"
	"x## #### ###  # ##!"
	"x#  # $ * $ #$#  #!"
	"x#  *...  ..*  # #!"
	"x#  #####.##   # #!"
	"x####xxx#   #### #!"
	"xxxxxxxx###      #!"
	"xxxxxxxxxx########!",
	"LllllllldddrdddrrdrrrdDldllLrrrurrdLLrrrrRdrruLLLLLuluurrurrddrDuluurD"
	"DluuuurDDlllldllllulluuuluuurrrrrrrrrrurrdLDDDDlddllldllllulluuuluuurR"
	"RrrrrrrRurDllllllllllldddrdddrrdrrrrrurruullLulullllUdrrrrdrdrrrddlllD"
	"LlllulluuuluuurRddrrdddrDuluuRDDuuullluulldddrddddddlddrUUUUUUlUUUUddD"
	"DrdrrdrRRddldLLLrrrurrdddrrdrrrrruuuuluuuLLLuurDullllLdlDuluuulluuRRRR"
	"RRRRurrdLDDDDlllluLulllluurrrrrrrRurDllllllllllulldRRRlldddddrddddlddR"
	"UUUUlUUUUUUddddddrdddrrrrurrdLLLLLrrrrrrrrdrruLLLLLLLruuuLuururrrrdddD"
	"RDuluuuulllldlddrdddrddrrdrrrrruuuuluuulLrrdddrddddlllllulluuuluuluurU"
	"RrrrrDullllldlddrdddrrruLLdlUdrrrrdrruLuuluUUdddrddLLLLddrrdrrrrruuuuL"
	"UuulLDDDuuurrdddrddddlllllulluurrrdrruLLLrruuuuuuLLLLululllluuRRRRRRRR"
	"UrrdLDDDDDDDDDuuurrdddrddddlllllulluuurrdrdrruLuuuurrdddrddddlllllullU"
	"URullldRRddrrdrrrrruuuuluuulluullllululldddrddrDDuuluuluuurrdrdrrrrddD"
	"LUUdrrrdddrddddlllllulluuuluuluuluuulluurrrrrrrRurDDDDDDuuuuullllllllL"
	"DdrrdddrddrddrdddrrdrrrrruuuuluuulLuuLLuulUdrddrrdddlUUdrrrdddrddddllL"
	"LlulluuuluuluuluuulluurrrrrRRRurDDDDDDuuuuulllllllllddrrdddrddrddrdddR"
	"RdrrrrruuuuluuulLrrdddrddddlllllulluuulldRuuuluuluuulluululldRRRlldddD"
	"DddrddlddrUrrRRurrDLuuuluuluuurrdLDDrUluullluulldddddddrdDldRRRuRRlldL"
	"LuuuluurDDDDldRRluuuuuluurDDDDDDldRuuuuuuuluuurrRRRRRRddrddLLLdlUllUdR"
	"RrrrruuluuRRurDDDDDDuLLLLLrrrrdDRddlUUUruL",

	// 2
	"xxxxxxxxxx####!"
	"xx#########  #!"
	"xx# $@$ $    #!"
	"xx# .*..  #  #!"
	"xx#$..**$ # ##!"
	"xx# ... ### ###!"
	"x##$#.#.$ $ $ #!"
	"##  #..# $    #!"
	"# $ ****  # ###!"
	"#   # .# $#  #!"
	"#  ### #  $  #!"
	"####x#   #####!"
	"xxxxx#####!",
	"DrrrrurrdddddlLuRdrUUUUruulDlldlllllddrrrUdllluurrRdddRRddldddlluulUUU"
	"DddrddrruuuruulluuulllddRddrDluuuluurrrdddrrddlLLuluuUdddrdrrdddlluUlU"
	"UddrddrruuururrdddLLrruuuuuuUruulDDDDDDllulluuuuRRRlllddddrrddllLdddrR"
	"UUddlluuuulUUluuRuRRddddrrdrrDDrdLLLrruuullulluuuuRRddLruulllldlddrUlU"
	"LuRRRRdDLLdlUrrruullDurrddlLdddrddlUUUUllDDlDlddrUrURRuuulldDlDRuuurrU"
	"RruulllldDDrrddddrddrrUrrruuullullUUlldddrDluuuurrddrrddLLLDlUUdrrrruU"
	"LDrrrdddllUUddrruuuuuuuruulDDDDDDlLulluurruuRlddlllldlluRRRRddrrddLLLU"
	"LUUlluuurDDuurrrDDlLrruulDLurrRRdLLulldddddrdrrruullUUddrrdrruLLdrrrrU"
	"LLdlldddrruUddlluuurRuuuuruulDDDDDDlldllluluuuuurrrrRllllldddddrddlUUU"
	"UUddddrrrruuLDrdLLLdlUUUUdddrrrrurrurrdLLLLulDrdLLLdlUUUddrrrrurruuuuR"
	"UulDDDDDrdLLLrruuuuulllllllldddDDldlddrUrURRdrUrrrurruuuuullddLuullllL"
	"DdddDlDRRluuuuuurrrrrrrrdddddlldllldlUUdrrrruuRllDrdLLLdlUllllddrUluRR"
	"UuuuuurrrrrrrrdddDrdLLLulDrdLLLrrrddrruUddlllUruLLrruurrrdLLLulDrdLddD"
	"LlU",

	// 3
	"#############!"
	"#   ##  ##  #!"
	"# $    @$ $ #!"
	"## #### ##  #!"
	"x# #  $ ## ##!"
	"x# #$... # #!"
	"x# # ..# # #!"
	"x# #$*.* # #!"
	"x# # .*. # #!"
	"x# #$  $ # #!"
	"## # #$### #!"
	"#  #  .* # ##!"
	"# $  $... $ #!"
	"#  ######   #!"
	"####xxxx#####!",
	"DddlldDDRuuuruuullllulldRdddddddddlddrUrrurrUUUUluurrrddddLruuuuluuulL"
	"LLulldRRRRRurDDDuulllllddddddddDlddrUUUUUUUUUUdddddddddrrurrdLLLrrruuU"
	"UllDDDuuuruulDDruuuulDDrddrdrruuuuLLruuullllulldRRRRRurDDDuulllllddddD"
	"DdddlddrUUUUUUUUUUdddddddddrRurrdLLLrrruuuullDDDuuuruuluurDDlDDrrdrruU"
	"UuLLruuullllulldRRRRRurDDDuullllldddddddddlddrUUUUUUUUUUdddddddddrRurR"
	"UuullDRurDlluuurDldRluuuurDDDlddrrrruuuuLLrrddddlllluuuuurDrruuulllluL"
	"LdRRRRRurDDDLdlDldddrrrruuuuLLrrddddlllluuuuuRDrruuulllllddddddddddrrU"
	"UUrrrruuuullluRdrrddddlllldddlluuuuuuuuuurrrrrdDuulllllddddddddddrruuU"
	"RrrruuuuLLrrddddllllddrrdrrrdrruLuuuuuuuuuruulDlLLdddrddddlllldddlluuU"
	"UuuuuuurrrRurDDDuulllllddddddddddrruuurrrruuuuLrddddllllddrrdrrRdrruLL"
	"RuuuuuuuuUruLLLLdddrddddllDulldddRRlllluuuuuuuuuurrrRurDDDllldddDDDDuU"
	"UuuuurrruulllllddddddddddrRR",

	// 4
	"x#####xx####!"
	"x#@  ####  #!"
	"x#  $ $ $  #!"
	"### #.*. # ###!"
	"# . #..$ #   #!"
	"# $  #. # $  #!"
	"##$ *$.#  $$ #!"
	"x#.$ #.*  $  #!"
	"x#  *#.**#  ##!"
	"x##   ..  #  #######!"
	"xx####    ##       #!"
	"xxxxx####  ####### #!"
	"xxxxxxxx## #     # #!"
	"xxxxxxxxx# # $.$.# #!"
	"xxxxxxxxx# ## ## # #!"
	"xxxxxxxxx#    ##   #!"
	"xxxxxxxxx###########!",
	"RdddddDrDulldRdRRRuuuuuluuLulDrrdRRuLLrddddddddrruLdlUUURRDLulUUUluurR"
	"DLulLulldRDDDDDrDulldRdRRRUUUUrULuulLulDDDDDDrDulldRdRRlluurDluuuuuurR"
	"RdddddrruruRuuulLLLLLulDDDDrDDuRlululldRDRRuLdlUruuurrrrrrrdddldldllUU"
	"UrrUdlldddrrururuuulLrrddrrdLrddlULUdrddlULLrrrruuulDllDldLdlUUUruruuR"
	"RdDrdDLdLLLdlUUdrrrrurrdLLLLLrrrrddrdrrrrrrdddddlluuulldRullldRddllluU"
	"UulullUdlUdrrruLuurrruuulDDrdLLLrruulDrdLulDrruuuuullLLLLulDDDDrdRlulL"
	"DRdddRR",

	// 5
	"xxxxxx######!"
	"x######  . #!"
	"##  # $ $* ##!"
	"# *.  @ #   #!"
	"#  .#####.$ #!"
	"# ** $ ##.$ #!"
	"## #    # ###!"
	"x# $*.*.#  #!"
	"x# #.  $ $ #!"
	"x#   ####  #!"
	"x#####xx####!",
	"RuurrrddlddddrddlUlLuullddldlluuuUluuRurDrrrruurrrddldddDrdLuuuuuruulD"
	"DuulldRldllllllddrUdddddrruruuluLrdrddlUrurrddLUruLdllddlluuRRRRdLullL"
	"UUluuRRRRuRRurrrddlUdDDDDrddlULLLulllluuUdddrrrruuLLLrrrddllUdrruulLdD"
	"LlddrrUdlluurRuurrdddLruuulldRurDlldllddrrUrrrrrUUUUUruuLDDDDDDrdLLLLL"
	"RrrruuuuurrdLrdLuuulLLdLLLruRRRluR",

	// 6
	"xxxxxxxx########!"
	"xxxxxx###      #!"
	"xxxxxx#   ### $#!"
	"xx##### ##..#..#####!"
	"x##      ..*#**$   #!"
	"x#   $ #$ *+#... # #!"
	"x# $#### #.*#*.# # #!"
	"x#  # *..$  #..#$# #!"
	"x##$ .*..##$ .#  $ ##!"
	"xx#   # #   $.#  #  #!"
	"###$## $  $ $ ## ## #!"
	"#   $    #    #   # #!"
	"#   # $$### ### $   #!"
	"#######     # $ $####!"
	"xxxxxx#####   #  #!"
	"xxxxxxxxxx########!",
	"LullluurrurrrrddrDDDuuuluurDDDDrruLrrrdddddrdddlluluuuUUUddddddrdrruuU"
	"LuLrdrdddllulldRRllddrUluuruuUrruuuulLdllUUluulllldllddrrrdddrDDDulldR"
	"DRdddrruRRlldlluuululldlllLLdlluRRRRRuRuuLLdllDurrurrddRRurruuluuulllL"
	"LlldlddrDDrrurrruuUdddlddrrurruulLrrddlldlluurUrrrddDLruuulllldlldlluU"
	"LuurrurrruurrurrrrddrddrrurrddddlldddlddlldlluuUluuruulllldddldllLUUdD"
	"RrrurrdLuuuurrrrddlddrddllllUUUdddrrrruuluuruulllldlldllddrrdRlulluurR"
	"UrrrurrrddlddrddllllUUruRurruuluurDDluuuurDDlddllldlldllddrrdrrdrrrrdR"
	"RurruuruuurruuuulldlluuluulllldllddRRlllllldlddrDDrrurrrurruuruulDDulL"
	"LlllldlddrddrrurrruUUdddllldlluuluurrurrrRRlddddllluRRdrUrrrUUUdlUlllU"
	"UrrurrrrddrddrruLrrrddddlldddlddlldllulllluurururrUUUUddddlldldldlluRU"
	"RUUluRRUURldddlddldllldlluRRRRdrrUUUUlldllDuuuluurrurrrRRlddddlluRdrUU"
	"UdddlddddlluRdrUUUddlllLuurruurrrdLdddlllldlluRRRRRdrUUUUdddlllluuuulU"
	"UrDDDDDurruurRddddddrrrruuUUUUUddrrdddLruuulldlldLdlUUUdddlllLdlluRRRR"
	"RllluuuuuuurrrdLLulDDDDDDuuuuuurrrrRddDLdddlddrUUUUdddlllLdlluRRRRRdrU"
	"UUddddrrrrdrrurruurrdLuuuuUUUlllUUrDldRlDDDlldlldlldddrrrrdrrurrdrUUUU"
	"UUrruuuulLLrrrddddlldddddllldlluuUUUUUlLrrdrruuuuurDrrrrddddlldddlDruU"
	"UurruuuulllllddddllddddddrrurRuuruuuUUUdddrruuuulLLLulDrrrddddddddlddR"
	"UUUUUUUUUdddrruuuulLLLrrrrdddddrdddLLullddrUUUUUUUUdddrruuuulLLrdddddD"
	"DddllldlluuurruUUUdllddRdrUUUlldlldRRRdrUUdlluRdlllllldllluuuRluuuurrR"
	"RuurrurrrrDurD",

	// 7
	"xxxxxxxx####x####!"
	"xxxxxx###  ###  #!"
	"xxxxxx#   $$    #!"
	"#######$#    ## #!"
	"#    $...#$ # $ ##!"
	"#  # $...#  # $  #!"
	"## # $...$ ##  $ #!"
	"#  ###.*.#$  #$  #!"
	"# $# @ ##...$   ##!"
	"#    $ $ .#. $###!"
	"#  ##### .*.  #!"
	"####xxx#    ###!"
	"xxxxxxx######!",
	"LdllluuruuurrRRRldddddRRddrrruLLrruullDurrurDrrruruuluuullldlddldDrddD"
	"RrUdlluurDuulluuruullullDDlddddlldllUUUUluRRRRRddrruLdldddLLLrrrrrruRU"
	"UuruullulldDlDRuuurrdrrrurrrdddrddldlLdllddlllUdrruLuLLLuuUrrdLuuulllL"
	"LddddlddrUUUUUluRRRRRlllldddddrrurrdLLLrrrrrruruuuruullulldDDDlDRuuulL"
	"LllddddlddrUUUUUluRRRRRlllldddddrrrrrrrddlUruLLLLLLrrrrrruruuuruullulL"
	"DDDDuulllllddddlddrUUUUUluRRRRRlllldddddrrrrrrrdrrurrdLLLLdlUruLLLLLLR"
	"RrrrrururDDrdLLLuuruuuruulDDDDuuuululldDDulllllddddlddrUUUUUluRRRRRllL"
	"LdddddrrrrrrrddlUruLLLLLLrrrUdrrruRuuuuuluurDDDDDDrDDrdLLdlUrruuurDDrD"
	"LLLrrruurruruulDlDurrdLdLLLulDDrdLuurrrruulDrdLLLulDDurrruuluuRDDDrdLL"
	"LulDLuuuuurruLrrrrdDDrdLulDDrdLLLulluuuuluurDDDDDDuLruuuullldDlllddRUL"
	"URRllllddddlddrUUUUUluRRRR",

	// 8
	"xxxx#####!"
	"xxx##  .####!"
	"xxx#@. $*  #!"
	"xxx# #$ #  #!"
	"xx##....* ##!"
	"xx#  #### ##!"
	"### # * $  #!"
	"#  $  #  $ #!"
	"# $ $ #$#  #!"
	"#  $ #  # ##!"
	"###  # ## ##!"
	"xx# # .#   #!"
	"x## # .#$  #!"
	"x#. #$.*.$ #!"
	"x#  $  $. ##!"
	"x#  ## ..##!"
	"x#########!",
	"RrurDllldddldDllddrRdddddRRUrRDrrUruuluuuruuluuLLLLrrrruuLLDurrddddrdD"
	"LdddrddldllulldlluuuuulluurruurUrrRuuulldlDurRDrdLuuurDrrddddrddlUUUUU"
	"RuLLLulDDurrrdddddlluRdrUUUUruLLLDlUluRdrrrdddddddddrddlUUdddlluRdrUlL"
	"LldRRldRulllluuuuulluurrrruRRlldllDDDDDDldRRRuruulDDrrddlUUrrrruulUUUU"
	"UUUUruLLLLrrrdddddlluRllldlldddddddrRuuuruurUUddlddlddrUdrddlUUdllluuU"
	"UuuurrdLulDDDDDDldRRRurrddlUllluuuuulluRurDDDDDDldRRRRllluuuurUluurrdL"
	"UlDDDDDDuuuuuurrurRdrrUUUUruLddddLLrrdddddrddlllDlllLdlUrrrrrurrruulDR"
	"DLLruulD",

	// 9
	"xxxxxx#####xx#####!"
	"#######   ####   #!"
	"#     # $@ $ $$# #!"
	"# # #  #$#  .. # #!"
	"# .$$ *# # $.... #!"
	"##. *..  ##$##  ##!"
	"x##**.$#     ####!"
	"xx# #  # #   #!"
	"x## ####  ####!"
	"x#     $  #!"
	"x#   ###  #!"
	"x#####x####!",
	"RddRDuurrdLrrrruuullDDuurrdddlLLuluRdlllululldRDDDDrrdrruLuUluuRRdrdLR"
	"RrruuullDDuurrdddlLLululldRDuurRddLrrrruuullDDuurrdddlLuullllLulldRRRR"
	"RRdrdrruuullDllldRdRRllulldRRuurrDullllllddddrRdrruLUUluRulllddddrRdrU"
	"UdllluuuurrddRddlllDDrddlUUUUUUUddlllLLURllluurrDullddrRdrrrrrddddLLLL"
	"DlluRRRRRlllluuUUrrrrrdddrddlUllllluuuurrddrUlullUlluurrrrdDDlluRllluU"
	"RrDullddrRdddddrrrrrUUUrrruuuullulldRddDlLLrrrDDDrdLLLLLdlUUUUUUlluurR"
	"RrdDurDluullllddrrRRuullDurrddlLdddddrrrrruuurrruuuulLulDDDDDDDrdLLLLL"
	"DlUUU",

	// 10
	"xxx####!"
	"x###  ######xx####!"
	"x#  . .# @ ####  #!"
	"##$* * # $ .$.$. #!"
	"# . * . #$# .$. .#!"
	"#   $*$ # #  * * #!"
	"##  # # # ## $.$ ##!"
	"x# #  ###   ## #  #!"
	"x# #      #     # #!"
	"## #  ### ###   # #!"
	"#  ###  # #  ###  #!"
	"# $  $* # #$ *   $##!"
	"#  # .  # # . .$.$ #!"
	"### *$*#  #$ * * * #!"
	"xx#  . #  $ .$.$ . #!"
	"xx# .$*#  ###  #.###!"
	"xx## .  ##   ##  $ ##!"
	"xxx# $.    $ # *$*  #!"
	"xxx##  #### # * .$* #!"
	"xxxx#### #  #$ * * .#!"
	"xxxxxxxxx#    . . . #!"
	"xxxxxxxxx######   ###!"
	"xxxxxxxxxxxxxx#####!",
	"RdrdrRuRRdrdddrdddlddddddDDDRluuuuuuuuuruuuluuululldlluRRdRddddlllullD"
	"LllluuULUlldRurURuulDllDDldRdddddlddrUrrdDlddrdrrddlUrrrrrurrdLdddrrrR"
	"DrruuluuuuuuuuuruuuluuuLLLrddddlllulldlllluuuUrrdLuUdlllluurrrDulllddR"
	"RRlUdlldddddDlddrUrrdrrruulDLLddDrrDDLUruLUluurDDuurrdLullddlddRRdrrdR"
	"RRurrdLdddrrrrdrruuluuulDlDlDururrdLrdrddlluUUruuuuuuullddLrddlUrRluuU"
	"RruruuuluuullddddlllulldddddddRRRRRuulllDuruulDDrrrurrdLLrrdDDDDDldddR"
	"RurruuuluLrdrdddlluRlddlluuRuuUrrdDDuuullddRluuUUrruuLDuLDDDDDuuuuuulL"
	"DddRluuurruruuuluuuluurDldlddddlllulldddddddrRRRRuuurruruuuluLrdrdddlD"
	"LldddllllluuuuuuurrdrrruUULuullddRdRUrDullluurrDuRllllulldRRRRlddrdrrR"
	"RdrdddDDullldddllllluuuuuuuuuUddddddddddrrrUUlDrdrruuurrddDLruuulldRuR"
	"RuuuululllluluululldRRlddddrrdrrrUdlllulldddddddrRuurRlluurDldddlluuuU"
	"UulllluuUUlllddrUluRdRllddddDlddrUUUUUUUddddddRRRlddlddrUdrddlUrddrUrU"
	"LdrrrRurrdLLLLLrrrrdddrRuR",

	// 11
	"###############!"
	"#   ##   ##   #!"
	"# # # .*....  #!"
	"#   $ $ $.## ##!"
	"## ##$#  *#  #!"
	"x# ##  # .$$ #!"
	"x#$    # .#  #!"
	"## ##  # #  $#!"
	"#  #####$##  #!"
	"#    ..*..@# #!"
	"#  ##  $ $ $ #!"
	"###########  #!"
	"xxxxxxxxxx####!",
	"LlUUUruUULuulldRurDRddllUdrrddlUruuuRRurrdLddddlddrUUUUlDDuLLdldddrrdR"
	"DrUUUUUlulluuululldRdRluurDrDDDuuulldRurrRurrdLLLLLdldRDrrrurUdlddrUUD"
	"DddddllullLrdRRRdrUUUUUlulllDDDuuuuuuulDlldLLuullddRddDDDlddrUrrrdrRuR"
	"LdlluRdrRuuuuuuuullldDDrddlUllldDldRRRRdrrruuuuuuuulllddDrdLLLrruuuurR"
	"RrrrurrdLLLLLdddrrrurUdldllluuurrrurrdLLLLrrrddlddrUUUddlllldddddRRRdR"
	"UUUUUddddlllllllullluuUrrruuuururrDDDDDDDuuuuuurrrurrdLLLLrrrddlddrUUU"
	"DddddddlllllllullluuurrruuuururrDrrrurrdLddddddddlllllllullluuurrruuuU"
	"RRRRllllddddllldddrrrdrrrrrrruuuuulllluUddrrrrdddlUUruLLrrdddddllllllL"
	"UllluuurrruuuurrRddlUruulldldRuurrdLrddlUlllLuullddRRRRRRdrUlllllldDDD"
	"DldRRR",

	// 12
	"xxxxxx#####!"
	"xx#####   #x#####!"
	"xx#   # # ###   #!"
	"xx# # $     # # #!"
	"xx#   ## #$ $   #!"
	"#####..*.* $# $##!"
	"#   #*####     #!"
	"# #  .....#### ##!"
	"#  @#.###   #   #!"
	"## $.... #$  $  #!"
	"x## $ $ $   $ $##!"
	"xx###########  #!"
	"xxxxxxxxxxxx####!",
	"UrrrrrrdrrdrRllullullllddrrdRullldRluuulldldRdRluuurrUUUlluurrDDDDuuuR"
	"RuurrddLLrddLLrruurrrdRRuurrddLLddrUdddldllullulllLuUddrrrrdrrdrrurrdL"
	"LddrUUUUUlllluUruLLuullddRddlllddrrrrdrrddRRuuruulllluLLrrdrrruuLLulDR"
	"RrddllUdrruulLrruurrddLLddrUddddlddrUUdllluullullllddrrrdRRRlllullluuU"
	"UUlluurrDDDDDrrrrdrrddRRurUUUllluuulLuullddLruurrddrrdddrrrdddldlllllU"
	"LllLdlUluluurrdRRRRRllluuulluurrDDDDuuurruurrddLLLrrrrrdddrrrdddldlllL"
	"LulllllluluurrdrRRRlluuulluurrDDDDuuurrrddLLrruurrrddLLLuurrDrddrruuLL"
	"RruurrddLLddrUddddlddrUUdllllllulllllluluurrdrRRlDullullddrdrrRRdRRRRR"
	"RRurUUUllluuulllllldDDDuuuurrrddLLrruullldDDuuurrrrrrddLLLLLrruurrDrdL"
	"LLrrrdrruuLLulDrrruurrddLLLLddrrrUluuurrddLLrdddddlddrUUUUUUdddddllllL"
	"LllulllluluurrdrRDullullddrdrrRldRRRRRRRuulDrdRRdrUUUUUllluuulllllldDD"
	"DDuuuuurrrddLLrruullldDDDllDldRdrrrrrrRRuRRuruullluLLLLLrruullldDDuuuR"
	"RrrrDrdLLLLLrruullldDrrrrrrdrruuLLulDrrruurrddLLLLdLLLLLrruurrDrdLLLLR"
	"RrrdrrrUluuurrddLLLLulDrdLLLrrrdrrrddlddrUUUUUluuurrddLLLLulDrdLLrrdrR"
	"RdddllldRRdrUUUUUUluuurrddLLLLulDrdL",

	// 13
	"x#####xx#####!"
	"##   ####   ##!"
	"#   $#   $ $ ###!"
	"#    ..###  $  ##!"
	"#  #.#.$@##     #!"
	"###  #*.* #$$$# #!"
	"xx#$. ...$#     #!"
	"xx#  #  . #$# $###!"
	"xx#$.## $$#      #!"
	"x##  ####  ### #$#!"
	"x# $.....  #   # ##!"
	"x#   $ $ ###**.$ .#!"
	"x####### # *.* #..#!"
	"xxxxxx#  $ .   $  #!"
	"xxxxxx#   ######  #!"
	"xxxxxx#####xxxx####!",
	"DldllluuurrdDuullddddddddlluRdrUUUUUUUddrRdrrrDDrdLLLLLrrrruuullluuuuU"
	"RrRurrDrDrrdrddllddrdddddllllLdlUUUddrrrrrrRRdrUllluuuuuluurruullululU"
	"LldllldlLLuurDlllddrUluRdrRdddrruuuLLLrddddddlddrUrrdRullldRluUUUlDDrU"
	"UUUUddrruuulLddlDDDuurrrdrrrdddLLLLdlUUUUluRRluuurrddrrrDDlllUdrrruulU"
	"LdDurrddlUrdDDrdLLLLLdlUUUUluRRRdRdRluUrrdDDrdLLLLLdlUUUUluRuuurrurrrU"
	"RrdrdrrdrddllddrdddddlllllluUlullluuuuRRRddrrddLLrdddrrrrrruuullDDuurR"
	"DdLdLLLLdlUUUluLLdlUUUUluRRRdrdrrddLLLLdRRlllUUUluuuruurrurrrurrdrdrdD"
	"DrDDDDDDldllllluUlllluuuluurrrdrdrrddLLLrrdddrrrrruruRRddlLLLLLLdlUUUL"
	"LlluuuluurrrdrdrrddLdlluLdrrruLLrrdddrrrrrruuulDDrdLLLLLdlUUUddrrrrrrU"
	"UuuuuuluuulululldllldlldddrrdrdrrddLLrdddrrrrruulDrdLLLLdlUUUddrrrrrrU"
	"UuuuuuluuulululldllldlldddrrdrdrrddLruullululllddrUluRRluuurrurrrurrdL"
	"DRdRluurDrDrrddllllUUddrrrddlllUUrrDullddrRurDDDldddrrruulLuuuuuruullD"
	"DDullddrRurDDDDDurrddlLLLLLLdlUUUllllUUUUluuruurrurrRRdRdRluluurDrDrDD"
	"DDullddrRuuuuululldRdRluurDrDDDDrDDDlDlddlllluulllllluRdrUUddrrrrddrrR"
	"RrrrruulLLruuuuulllddrRurDDDDDurrddlLLLrruLruuuuuulllUURuulldRurDrDDDD"
	"UllddrRurDDDuurrDDDlLulDruuuuullluuRurDDDDullddrRurDDDuurrdddlLuuuuulL"
	"LuRurDDDullddrRurDDDuuuullluuuullllldlluulldlddrURRRlddldddDrddlluRuuU"
	"UuruuuullDldRRRlluRurDD",

	// 14
	"x#####!"
	"x#   #x########!"
	"x# # ###  #   ###!"
	"x# $  $     # $ ##!"
	"### $  ##*###    #!"
	"#   $ # ...##$#$ #!"
	"# # # ** ..#     #!"
	"# $ $ #..*.$ # $ #!"
	"##  # # ######  ##!"
	"#  #  *         #!"
	"#@$*.*.* $.*..* #!"
	"#  ##############!"
	"####!",
	"UruruuuuRurRRRRDDlddlddrrrrrrrrdLullllllluuruulDurruullldLdddddRdLurRR"
	"RRRRRRuuurruullluulldLrurrddrrrdddLdlddrUUdllldRullldRullldLulluuuRRDD"
	"UuurrrddLLURlllluuurrrurDrrurrddrrrddllDDuurrdLuUdllldLLUllllluuurrrrR"
	"RurrddDuuulldlllllldddrrrrrdrruRRDrruuuLuLrddrddllulldllullllluuurrrrR"
	"RurrDDDuuulldlllllldddrrrrrdrruRldllulldRRullllluuurrrrDDDrdLuuuullllL"
	"UullddRddddRluuuuRRRRRurDDDuulllldddrrrRllllDDDrRuUddlluulluuRUluRRRRR"
	"UrDDDDlLddddrRuLdlUUUddlluuuUUdllllddRddlddrUUUrUUUllddRRRluuUruRRRRuR"
	"DDDuullllluullddRRRRRRurDDurrurrdrrddrddlddLLLLLLLdlUrrrrdLLLullluUUUU"
	"LuRRRRurDrrurrdrrddrddllDrdLLdLLrrurrdLLLrrruuuruulDrdLuuuulldddRDDDrD"
	"LLrruuuruulDrdLulDDDrdLuuuulldLruruuRurDDDrdLulDDDlLLLLLLU",

	// 15
	"xxxxxxxxxxxxxxxx#########!"
	"xxxxxxxxxxxxxxxx#       #!"
	"#####x#####xxxxx# ##### #!"
	"#   ###   ####### #   # ####!"
	"# $    $#   $ $  $  $ # #  #!"
	"## #### #   $      #$##  $ #!"
	"x# ##    ###.####@ # # ##. #!"
	"x# ##  $ .# . ###### ####$ #!"
	"## #### $.# *.##  ##  #  . #!"
	"#  #   #$.#.*.##        ####!"
	"# $  $ #... *. # ###  ###!"
	"#  ## ###.*.*  # ######!"
	"####  ##########  #!"
	"xxx# $            #!"
	"xxx#  #############!"
	"xxx#####!",
	"UlllluRdlLddldRldRldlluuulLdRurDDDlUruullulldRRdRddrrrdRUUluuruuLulluL"
	"LDDDrDrDDldRRluuululldRdRluuuuurrdrrdrddlddrUUUdddddlUllluuluurDrDDldR"
	"RRdrUUdrrdLLullluuulldRurDDldRRRUrDlllluuuuluuurrdrrdRddDuuululldRRllU"
	"UlldllllulldRRRRRlllldddddlddrUUUUUUdddddrrurrdLLLrrddlddrUUUddrrrrrrR"
	"RrrruuuurrrrrrrurrruulDruuulDlluuuullllllddDldllulLDDDlDuruuurrdLrrruR"
	"RrurrdLDDDDrdLLLLulDDDDrdLLLLLLLLLLLrrrrrrrrrruuuurrrruuuuuLLdLLLLullD"
	"DullluullDDDldRurDldRurDDldRRRRlllluuuuluullllulldRRRRRlllldddddlddrUU"
	"UUUUdddddrrurrdLLLrrddlddrUUUddrrrrrrrrrrruuuurrrruuuuulldlluRRRurDDDD"
	"DrdLLLLulDDDDrdLLLLLLLLLLLrrrrrrrrrruuuurrrruuuuulllldllLulDllluullDDD"
	"LdRurDldRurDDldRRRllluuuuluullllulldRRRRRlllldddddlddrUUUUUUdddddrrurR"
	"DLLLrrddlddrUUUddrrrrrrrrrrruuuurrrruuuuulllldlluRRRRRurDDDDDrdLLLLulD"
	"DDDrdLLLLLLLLLLLrrrrrrrrrruuuurrrruuuuulllllllldllluullDDDldRurDldRurD"
	"DldRuuulluuullllulldRRRRRlllldddddlddrUUUUUUdddddrrurrdLLLrrddlddrUUUD"
	"DrrrrrrrrrrruuuurrrruuuuulllllllldlluRRRRRRRRRurDDDDDrdLLLLulDDDDrdLLL"
	"LLLLLLLLrrrrrrrrrruuuurrrruuuuulllllllllllullDDDldRurDldRurDDuulluuulL"
	"LlulldRRRRRlllldddddlddrUUUUUUdddddrrurrdLLLrrddlddrUUUddrrrrrrrrrrruU"
	"UurrrruuuuulllllllllllullDDDldRurDldRurDlluuuullllulldRRRRRlllldddddlD"
	"DrUUUUUUdddddrrurrdLLLrrdddrrrrrrrrrrruuuurrrruuuuulllllllllllullDDDlD"
	"RRluuullllulldRRRRRlllldddddlddrUUUUUUdddddrrrdddrrrrrrrrrrruuuurrrruU"
	"UuulllllllllllullDDDldRurDldRluuuullllulldRRRRRllllddddddrrrdddrrrrrrR"
	"RrrruuuurrrruuuuulllllllllllullDDDldRurDDD",

	// 16
	"######x####!"
	"#    ###  #!"
	"#  * # ** #!"
	"# * * $   #!"
	"## * *.* ###!"
	"# * * * *  #!"
	"#  * *$. @ #!"
	"# # * *#   #!"
	"#      #####!"
	"########!",
	"LluRuulLdLdDlLuURRlllUluurrrdDuulllddrdrdRdrRRRuuullLdDldRRlllddrrUdlL"
	"LluuuRurRddlUlldRuuuluurDDDuuurrdDDuLrrrrrruulDrdLLLLrrrddddrruLdlUUUU"
	"DddrruL",

	// 17
	"xxxxxxxxxx####!"
	"xxxxxx#####  ##!"
	"xxxxxx#   #$  #!"
	"xxxxxx#   $  $######!"
	"xx######$$$#  #    ##!"
	"xx#   ##     $$  #$ #!"
	"xx# $..**## $  $ $  #!"
	"xx## # ..... #$   $ #!"
	"xx#   $ #$$#    #$ ##!"
	"xx# $ ###... $$#  ##!"
	"xx#  # *.**$#    ##!"
	"####.. *.#.. ##  #!"
	"#   ##*....*.. # #!"
	"# $   . ##.*.* # #!"
	"#  # $.#  . #*# @#!"
	"## ##$** *.#  # ##!"
	"#      #.*.# #  #!"
	"# $ $## .#.  #  ##!"
	"## $....**.$##$$ #!"
	"x####$ $ ##      #!"
	"xxxx#   #  $ $ $ #!"
	"xxxx#####   #   ##!"
	"xxxxxxxx#########!",
	"LdddDrddLdllURuUrrddLdlUllLdlluRRRRdrruruuluuuuruuuulllUluullllllululL"
	"DRddlddrdrrRddlUruLddlllullddrddrrrrUUUrurrrddlldLrurruullldllllullddR"
	"DdrrrrUrrurrdddrDDrdrdrruruuluuuuruuuulllulllDDrrddLULLLrrrrrrdLullddL"
	"UdlldddldlddrUrUUddlluRdrURRurruurUULulLuuurrrdrrrddddlddddrddldlluluL"
	"UluuuulldlldlllluuluurrdrrrrUdlDulldRullullddrddldRdRRRRdrrurruuuuuuLL"
	"RrrrdrddlddLdllldlluRRRRUUUUUddddrruuruululLLruuurrrdrrrddddlddddrddlD"
	"LlululUllllllllluurDldRRRRRRllllluurrURdlllluuluurrdrrrDulllulldRRRRlD"
	"RddlDldRRRdrruLLLrddlUrrruRRuuuurUrrddlddLruuruullldddDuuuuuuuurrrdrrR"
	"DdddlddddrddldllulLuULLLLrrruuuuurrrddlddLddddlluRdrUUUlUUUUUrrrddlddL"
	"DddrrdrruLrruullDLLdlUUlUUUUrurrddlddLruuruulldlddDrddrrrurrdLLLLdlUUL"
	"LLrruuuururrddlddLruuruulldlddDrddrrrrddlUruLLLdlUULLruuuururrddlddLrU"
	"UruulldlddDrddrrrruuulDDrdLLLdlUULuuuururrddlddLruuruulldlddDuuururuuL"
	"DLDDDuuurrdrddlddlddrrrddlUruLLdlUUdrrrruuuuuruuuulllullldDDDDuurrdrrU"
	"LdddlddLddrrrruuuuuruuuullluluuluurDrrRdrUluurrrDrddLLrruulDLLLLLLuurD"
	"LuuurDDullLLulldRRRRRddllllUdrrrrdDDullllUUddlluRlLulldRddDDuuuuRRdrdL"
	"LdlUUdrruululldRddrrrurrrDDDDDDRRluurDrDullluuLruuurruRRRddlLdLLDDldRR"
	"LdRluuuurrurruullldlldDldRuuurrDrdLLDDDldRuuuuruulldDldRurDDuuruuurrDR"
	"DLLruullullllDurrrrurDlddDrdLLruulldDDDDRuuurruruuLulDDDrdLLruulldDldR"
	"UrDDDuuurrurruuuurrrddldLLrruLLLLulDDDrdLLruulldDldRurDDuuruuurrDrdLLR"
	"UulldDrdLLruulldDldRurDuruuurrrrrrrdLLLLuuurDlLLulDDDDrdLLruulllLLdlUR"
	"RrDDurDDDuuuurruuuullDululldRDDDurRRluurrdDDDDuurrDrdLLdLLLuulLuurruuL"
	"UlDDDDurrrDrdDrdLLrrdrUdrrurUruLLLdLLrrurruLLLLLdLLdDDuuurrDrdLLruullD"
	"DrruuuulDruuuuulDrrDDDrdDrdLLruuLLdDrdLLruuLruulDuluLulDDuurrRurDDDDDD"
	"RdL",

	// 18
	"x#####!"
	"x#   ####!"
	"x# # #  #xx####!"
	"x# $   $####  ###!"
	"x## #    ## $   ###!"
	"xx#$ # $  $$ # $$ #!"
	"xx#  ####         #!"
	"xx#$ $  ##.#$###  #!"
	"xx#  #$..*.. #.* ##!"
	"xx## # *.#.# $.. ####!"
	"###   #. #.## **#   ##!"
	"#   $$#*.#. ##..  $  #!"
	"# #$  #.. .. #.## $  #!"
	"#   $ # . **.# $ #  ##!"
	"## ## ### .*. $  # ##!"
	"#   #    ####   #   #!"
	"# $# $$#$ $@$ $ #$$ #!"
	"# .*....*.. ..##    #!"
	"##   ##   ###  $ $$ #!"
	"x##########x######  #!"
	"xxxxxxxxxxxxxxxxx####!",
	"DrruuulLUdrrdrruLLLulLuuuuuuurrrruululDlDurrrddllUdrrrrdddllDDDDDllulL"
	"UuuuuuuluRRlddddddddrrdrruuuuurruuullllLulDullulldRRlluuurDDullluulldD"
	"RRRdrrrdRdrrrrrrrdddlldddddldddlllldllullldlluluuruuluurruruuuulUUddrD"
	"DlUUrddddldllddrddlddrdrrurrrdrrurrrruuulullulluulDruuululLLrrrdDrdddR"
	"RdrrdrruuuuurruuulluurDldRlllluuRDldlluRdDDLLddddrrdrrdrruuuuurruuruuL"
	"LdllLLruulDlDurrdrrrurrddlddlluRlddddddllullulluuuurrrrdRlullllddddrrU"
	"UUdddlluuuurRlldllURuLdrRdddlUUrddddlUUdrrrdrruLLLLdRurrrddrruuuululuU"
	"ULulldRDDDDDrddrdrruuuululuuuLulDullulldRRluuulDlluullddRRRRurDDrdRdrR"
	"RdddrdrddddldddlllldllullldlluluuruuluurruruuuulUUddrddlUUrddddldllddR"
	"DdlddrdrrurrrdrrurrrruuuluulLLdlUUUUlluuLLrrddrrdddrrrrddrruuuululuuuL"
	"UurDDllDDDDDrdLLdlUUUdlUrddrruuuuuuluRdrruulDrdLulDDDDDDrdLLdlUdlUUdrR"
	"RuuuuuurrrrrurrdLLLLLLulllululldRdRRRRDDDDDDrdLLLdlUrrruuuuuurruulDrdL"
	"UlDDDDDDrdLLLrrrrddrruuuululuUddrdrdrUUrUUruulldllLLullllluurDullluulL"
	"DdRRRdrdRRRRDDDDDDrddrdrdddlllldllullldlluluuruuluurruruuuulUUddrddddL"
	"DllddrddlddrdrrurrrdrrurrrruuuluulLLruuuuuuullluuulDlluullddRRRRurDDrD"
	"RrdrrrrrurrdLLLLLLrdddrRuRlddrUrUUruLLrdddlldddddldddlluRdrUUddlllldlL"
	"UllldlluluuruuluurruruuuuuluurrrrdrdrrDrrdddrrdddddrddLUUUUUUluRuRldlL"
	"UuullDDDDDrddLLuRdrrdRdrUUUUrrrurrdLLLLuUrUUruulldLLLLruulDlDDDDDDDldR"
	"RluuuuuuuurrdLulllululldRdRRRRDDDDDDDldRuuuuuuurruulDrdLulDDDDDDDuuuuU"
	"UrrrrrurrdLLLLLLullllluurDldRRRRDDDDDDuuuuurrdddrdRuuRdrUUruLLLLLLruuL"
	"DlDDDDDuuuuulllluullldddrddddldllddrddlddrdrrurrrRRuRRdrrUUruuuUUdrrrR"
	"RddlUruLLrddddrddlUUrddddlUUlldRurruulUUUluLLUlUlluuuLrrrruulLulDDllDD"
	"DDuuuulllluullldddrddlUUUUddddrddldllddrrUrrdddDldRRRdrruRurRdrUruuuuU"
	"UddddddlddrRRurrUUUUruuLLLLrrrrddlUdddddlldllluullldRRllldlluRRRRurrrU"
	"UuuUruUruuulllLLullllluulluullddRdddddrddrDDDDDDldRRRRRlllluuuuulldRuR"
	"UullDDrrDDDDldRRRllldlluluurDuuuRRurDDDDuuuuuuluuuuuluuRRRurDDldRRRRDD"
	"DuurruurrDrrddddlddldddddlllllddllulLrrdrruLLrrurrrrruuuuurrrurrdLLLLU"
	"UruuulLLLLrdddrRldRulluuuuulDlDDuulllluullldddddrddDldRdrddrrrDrddlluR"
	"UulllddRluurDurrdrrrrrruuuuUrrrrddddddlldlllUdrrrurrrddlUUUUUUUlullldD"
	"DddLLLLLrrrrruuuuuUluluuuLulDulllluullldddddrdddrDDDDDurrrDrrrrrddrrrR"
	"UrrddlUUUUUUruuLLLLrrrrddlUddddddllllluuruuuuUrrrurrdLLLLrrrddddlDrddL"
	"LuRdrUUUUUUruLLLrrdddddddllllluurruuruLdlUdLDD",

	// 19
	"xxxxxxxxxxxxx####!"
	"xxxx########x#  ##!"
	"xxxx#  ##  ###   ##!"
	"xx###$ # $     $  ##!"
	"### $   $ $ ### $  #!"
	"#     ##   #   # $ #!"
	"#  $ #  ####$#  # ##!"
	"# $ ##.* .*.* # #  ##!"
	"###. .  $ # ..  #$  #!"
	"x## $$#   #.**.## $ #!"
	"x# .$.#######.## $  #!"
	"x#  $. $ #. $.$    ##!"
	"x##*##.$. .## @ #  #!"
	"x#   . $ #. ## #####!"
	"x# .$#  # .* #  #!"
	"x##  ####$.*..$ #!"
	"xx## ##. *.# #  #!"
	"xx#..  $ * ## $ #!"
	"xx#   ###   #  ##!"
	"xx#####x###    #!"
	"xxxxxxxxx#######!",
	"DdrddlDlddlluluuuRRlluurDlddLLdRdrUUURuulDlDRddllLLLdlluRRRRRRdrrdrruU"
	"RruuuluuluuULuluLLddllulllldddDDrDDDuuuluuuuurrrrdrruurrdrdrdddrddrddD"
	"LlddllulUUUluRdddlUdlllldlluRRRRRlllluuuulldRurDDDuuuluuuuurrDLulDDDDU"
	"UuurrrrdrruLLLuurDldRdrruuLLrrrrdrdrruLuLLrrdddddrddrdddllddlluluuuuuU"
	"UrRlldddddlldlllLuuuurruulLrrdRRRlllddrUllldlluRRRRllddddrrrrurrddrdrR"
	"UurruuuluulUlllDDDDuuuurrrUUlUluLLddllulLdlldDDurrrdRRRllldlldlluRuuuU"
	"RrDuurrdrruurrdrdrddlllDDDlDuruullllddrUluRRRllluLLruuurrdrruurrdrdrdD"
	"DrruLrrrruruulDlDurrdLdLLuRdrUruululDDDuuuuUlUlUluurDrDrDDuululldRdRdR"
	"DDDrrddllldLdllUlllDDulluLLLuulluuUrururrRuRRRRRRlllllldllldldldddrruL"
	"DldDDDldRuRRRdrUrurrurrrdrrururrruulluuululUllllllldllldldldDDDDDuuuuR"
	"RrruulDrdLLLrrrdrruuLLulDrrrrrdrdrruLuLLLLLLdLLdddrddllDDDuulluRRRRuuR"
	"RdrrurrrUUlUdrdddrrururrruulluuululullllllldllldldldDDDDDuuurrddrdRRRL"
	"LlddrUllldlluRRRRuuluuuLrrrurrrrdrdrddlllDurrrdrruLLLLrrrrrurrdLLLrrrU"
	"RuullDDuuuuululullllllldllldldldDDDDDuuurrddrdRRRlllddrUllldlluRRRlluU"
	"UuurrrruulDrdLLLrrrurrrrdrdrruLuLLLLLLulDrdLLrrurrrrrrddlUruLLLLLLulDR"
	"RrrrrrdddddrruLdlUUUruLdlUruLLrrddddrrrurrdLLLLdlUUUruLdddrrrruuuuuulU"
	"LuluurDrDrDDDDDDDrdLLruuuuuuuululldRdRluurDrDDuulllllllllddrUlllldlLuR"
	"LdddDDDDDuuurruLrdddrdRddlUlldlluRRluuuuUUUruuRRRRuRRRRRRRdRdrDDDDDldL"
	"LdlUUUlUluLLLLdLLLrrrurrrrdrdrddrrruruuuuululullllllldllllddldDDDDDDuU"
	"RluRuurrruulDrdLLLrrrurrrrdrdrruLuLLLLLLulDrrrrrrrddlUrdddrrrurrdLLLLR"
	"RruuuuuululuurDrDDuullllllllldllllddldDDuuuruurruulDrdrrdrUluRRRRRRRdR"
	"DrDDDDDrdLLLdllUUUruLuLLLLLLdLLdlddlluRuuuuruuRRRRdrUluRRRRRRurrDrDDDD"
	"DDDldlLdlUUUlUdrruLuLLLLrrrrddlUrddddrddrddlUUUUruLdlUUdrrruruuuuuuulU"
	"LldRdRlullllllldllllddldddrruLrrruulDrdLLrrdrruuLLrrrrdrruLLLLLrrrrrdR"
	"RuulullDurrdrddlluLddRddrrrurrdLLLLdlUUUluuuurrdrddlLulDrdddrrrruuuuuU"
	"LuluurDrDDDDDDDrdLLLLdlUUUddrrrruuuuuuuullllllllldllllddldDDrrurrRurrR"
	"DrRuLuurrdrddLLdddrrrruuuuuuuulldRurDDDDDDDrdLLLLdlUUUddrrrruuuuuuuulL"
	"LlllllldllllddldddrrurrrurrRlllddrUluRRlldllldlluRRRRRdrUluRdlllllldDD"
	"RUUluRRRRRdrUlllllluuruulDDDDDrddlluRdrUUluRluulluRlddRurDDDuuuruulDDD"
	"UuurrrrrrdrUluRRRRRRurDldRurDDDDDDDrdLLLLdlUUdrrrrruruLulDDrdLLLLdlUrD"
	"DddddlddrUUUUUUUruL",

	// 20
	"xxxxxx####!"
	"#######  #!"
	"#  ## $$ #!"
	"#        #!"
	"#  #   # #!"
	"## $$##  #######!"
	"x# #.##.#..    #!"
	"x# $....#@#$ $$#!"
	"x#  #.# $ # $# #!"
	"x# ##*#$###$ # #!"
	"x#  #.# #.  $  #!"
	"x# $#.# #.#  # ##!"
	"x# .*.#.#.####  #!"
	"x# #. ..#.#     #!"
	"## #* ###.# $$  #!"
	"#   .# $ .## # ##!"
	"#  $      #  $ #!"
	"##$####$## $  ##!"
	"x# $   $     ##!"
	"x#   #   #  ##!"
	"x############!",
	"UrrrrrDDDDDDrddlddLdldlllldllulldlluUUUUUUUUUUUUUUluRRRdrrurrddldddDDD"
	"DuuuuuuuruulldllullddddddddddddddddrrurrdrrurrrrururuuruuluuuuuulllllD"
	"DLruurrrrrddddddrddlddldldlllldllulldlluuuuuuuuuuuuuuuurrdrrurrddlddDD"
	"DDuuuuuuruulldllullddddRRRRllllddddddddddddrrurrdrrurrrrururuuruuluuuU"
	"UulllllddllUllllluuuurrdDDuuullddddrRRRlllluuRluurrdrruLLLrrrrruulDrdL"
	"LLuRddllDDullddrRRdDDDDuuuuullluuuluurDrRdrruulDrdLulDDDullddrRlluuUlU"
	"RRRdrruulDrdLulDDDuuurrrruulDrdLLulDrdLulDDlldddddddrRlldddrrdrrrrruuU"
	"UuurrRuUlUdrddlUdllddddddllllluUURUUUUdddddldllddddrruLrrrdrrurrrruruR"
	"UuruuluuuuuullLLrrrrddddLLulUUddrdrruuuullLdddrddlUrrrddrddlUUUUdddddD"
	"LdldlluRuRuUluRRldddlddlllLLLLdllUUUluRuuurRddddLruuurUUUddllldddRdrUU"
	"UddlluuurRdrUUdddlddrrrrruuuuuurrrrrddrddlddLdLruruuLulldRdDlDurrdLdLL"
	"LLdllulldlluuUluRRdrUUUddlluuurRdrUllldddddddrruLdlUUUluRRdrUUUdddrruR"
	"RdrUUUUddddlllllllddrrrrdrruLUUddLLLLdlUUUluRuuurRlluurDlddddRdrUUUddD"
	"RruRRdrUUUdddllddrrrrruulDrdLLLLdlUUUddrrrrruurruuLulDDDrdLulDrdLLLLLL"
	"LLLdlUUUluRRdrUUddrruRRdrUUddllddrrrrruuuurrruulDrdLLulDDDrdLulDrdLLLL"
	"DlUUUddrrrrruuuuurruuulluulDuuurrrddDDDDDrdLLulDDDrdLulDrdLLLLLLLLLdlU"
	"UUluRRdrUdrruRRdrUlldddrrrrruuuuurruuuuuuullDRurDDDDDDDrdLLulDDDrdLulD"
	"RdLLLLdlUUUluRRldddrrrrruuuuurruuullLLruuurDDldRRluuurrddDDDDrdLLulDDD"
	"RdLulDrdLLLLLLLLLdlUUUluRR",

};

const sCollect HollandCol[] = {
	{ "DH 1", HollandCol1, count_of(HollandCol1)/2 },
	{ "DH 2", HollandCol2, count_of(HollandCol2)/2 },
	{ "DH 5", HollandCol8, count_of(HollandCol8)/2 },
	{ "Bagatelle", HollandCol3, count_of(HollandCol3)/2 },
	{ "Bagatelle 2", HollandCol6, count_of(HollandCol6)/2 },
	{ "Cantrip", HollandCol5, count_of(HollandCol5)/2 },
	{ "Cantrip 2", HollandCol7, count_of(HollandCol7)/2 },
	{ "Maelstrom", HollandCol4, count_of(HollandCol4)/2 },
};
const int HollandColNum = count_of(HollandCol);


// ****************************************************************************
//
//                        Game levels - Many authors of Loma project
//
// ****************************************************************************
// Each author created 10 levels with same 10 patterns
// Authors: Aymeric du Peloux, Francois Marques, David Skinner, Sven Egevad, Victor Kindermans,
//          Michael Steins, Frantisek Pokorny, Arpad Fekete, Roger Delaporte

#include "include.h"

// Loma
const char* LomaCol1[] = {

	// 1
	"xx####xxx!"
	"xx#  ###x!"
	"xx#    #x!"
	"###$.# ##!"
	"#  $.#  #!"
	"# #$. # #!"
	"#@  #   #!"
	"#########!",
	"uurRllddrrUrULdrrdrruuluulllDurrrddrddlluluUluRdddlUddlluuRRUruulDDDll"
	"ddrrUrULuurDlddrrdrruuluuLrddrddllulluurDlddlluuRRuuurD",

	// 2
	"xx####xx!"
	"xx#  #xx!"
	"###$.###!"
	"#  $.  #!"
	"#@ $.# #!"
	"###    #!"
	"xxx#  #x!"
	"xxx####x!",
	"urRRdLruuulDDrddrruuLrddlluUluurDDrrddlllUUrDullldRRuruulDrdLddRUUrrdd"
	"LdlUlulluRR",

	// 3
	"xx#####x!"
	"x##   ##!"
	"### #  #!"
	"###$.# #!"
	"#  $.#@#!"
	"# #$.# #!"
	"# #    #!"
	"#  # ###!"
	"##   ##x!"
	"x#####xx!",
	"ddllddlluluuurRlldddrdrruurruuuululldDrDLuuurrdrddddlllUdrrruuuululldd"
	"rdDldRuuulDrddddlluluuuRRlldddrdrruulUrUddddlluluuurRuuurrdrddddLruuuu"
	"lulldddlldddrdrruU",

	// 4
	"xxx##########!"
	"#### $.     #!"
	"#    $. #@  #!"
	"#   #$.######!"
	"##### ##xxxxx!"
	"xx#    #xxxxx!"
	"xx#    #xxxxx!"
	"xx#  ###xxxxx!"
	"xx####xxxxxxx!",
	"ullldLLuRRldDDDrdLullddrUluRdrUUUruulldRurDllLdlluRRRRurRRRdrruLLLL",

	// 5
	"xx####xxx!"
	"x##  ##xx!"
	"x#    ###!"
	"##$.#   #!"
	"#@$.    #!"
	"##$.#  ##!"
	"#  ## ##x!"
	"#     #xx!"
	"####  #xx!"
	"xxx####xx!",
	"RDDldRRRdrUUUruululllDDDrUUdrRllldDldRRRdrUUUrULLrdddllluuuurDrruululD"
	"rrddrruLdlllluurrrDrdLL",

	// 6
	"x#####xxx!"
	"##   #xxx!"
	"#    #xxx!"
	"#    ####!"
	"### ##@ #!"
	"x## ##  #!"
	"x#  ##$.#!"
	"x#    $.#!"
	"x##  #$.#!"
	"xx####  #!"
	"xxxxx#  #!"
	"xxxxx####!",
	"rdddLLLdlUUUUUruLdddddrrrruulDrdLLLdlUUUUUruulDDDDDldRRRRDrddlUUrUUdLL"
	"LdlUUUUUruulDDDDDldRRRRurDlllluuuulluRurDDDDDldRRRRuuurD",

	// 7
	"xxxx####x!"
	"xxxx#  #x!"
	"#####@ ##!"
	"#   #$. #!"
	"#    .$ #!"
	"## # $.##!"
	"x#   ###x!"
	"x#####xxx!",
	"rdrdLdLruLLLulldRRRRlllddrrUruLLulDrrrUrrdLLLrruuulDDrddlluRlLulldRRRd"
	"dllUdrrurrUUluurDldDllulldRRRdR",

	// 8
	"x#########!"
	"##   ##  #!"
	"#  #$.   #!"
	"# #@.$#  #!"
	"#   $.  ##!"
	"#########x!",
	"dlluururrDrrrddllUdLLuRuRRllddrUluulldlddRRurrdrruruulDlLddrrUruLLrddl"
	"lulldRllluururrD",

	// 9
	"xxxx####x!"
	"xx###  #x!"
	"xx#    #x!"
	"xx#    #x!"
	"xx## ###x!"
	"#### $.##!"
	"#    .$@#!"
	"#   #$.##!"
	"##### ##x!"
	"xx#    #x!"
	"xx#    #x!"
	"xx#  ###x!"
	"xx####xxx!",
	"LLruLdLLdlluRRRRurDlDDDrdLullddrUluRdrUUUUlUUUluRdrruulDrdLulDDDRdLLdl"
	"luRRR",

	// 10
	"xx######x!"
	"xx#    ##!"
	"x##$.#  #!"
	"x# .$@  #!"
	"## $.# ##!"
	"#  ### #x!"
	"#      #x!"
	"#####  #x!"
	"xxxx####x!",
	"rdddlllluuurRdLulDrruuurrddLLdlluRdrUrruulllDDldDldRRRRdrUUUddlllluuRu"
	"uurrrdrdLLL",

	// 11
	"xxx#########!"
	"####@$.#   #!"
	"#   #.$    #!"
	"#    $.#####!"
	"########xxxx!",
	"RdRRRurrdLLLLdLLLulldRRRR",

	// 12
	"#####xxx!"
	"#   ####!"
	"# #$.  #!"
	"#  .$#@#!"
	"###$.  #!"
	"xx#  ###!"
	"xx#  #xx!"
	"xx####xx!",
	"dllUllluurrDullddrRDrddlUUUlluurrDRDDrruuLrddlllddrU",

	// 13
	"xx#####!"
	"###.  #!"
	"#  *  #!"
	"# #*###!"
	"#  $ #x!"
	"#  @ #x!"
	"#  ###x!"
	"####xxx!",
	"ruLdlluuurRDDrdLuuullddRluurrdDuuurrdLulDllddrrUUllddddrUluuurrddrdLuu"
	"ullddRlddrUrUUddlluRdrU",

	// 14
	"x#######!"
	"##  .  #!"
	"#  #*# #!"
	"#   *  #!"
	"#  #$ ##!"
	"##  @##x!"
	"x#####xx!",
	"lluuuurrrrddlLLrrruulllldlddrdrrUruLUdrruulLddddlluluurDRRuurrddLdlUdd"
	"llUluRRluuR",

	// 15
	"xxxxx######x!"
	"xxx###.#  #x!"
	"xxx#@ *   #x!"
	"######*## #x!"
	"#     $   ##!"
	"#   #  #   #!"
	"########   #!"
	"xxxxxxx#####!",
	"rRRRurDDDllLUUddLLLdlluRRRRdrUUdrrddrruLdlUruLLLLLLdlluRRRRdrU",

	// 16
	"xxx####x!"
	"x###  #x!"
	"## .  ##!"
	"#  *   #!"
	"# #*#@ #!"
	"#  $  ##!"
	"####  #x!"
	"xxx####x!",
	"uullldlddrRRdrUUUlLrrddllUUruurDldlddlluuRuRDllddrrrruruLLruL",

	// 17
	"#######x!"
	"#   #.##!"
	"#    *@#!"
	"#####* #!"
	"xx#  $ #!"
	"xx#   ##!"
	"xx#####x!",
	"LrddLUUdddlluRdrUruulLLulldRRR",

	// 18
	"xx####x!"
	"x##  #x!"
	"x# . #x!"
	"x# * #x!"
	"## *###!"
	"#  $ #x!"
	"#  @ #x!"
	"#  ###x!"
	"####xxx!",
	"luuuurrdLulDDDlddrUUdrruLUddlluRUrUruulDlDDrUldDlddrUrUUddlluRdrU",

	// 19
	"#####xxxx!"
	"#   ###xx!"
	"# #.  ##x!"
	"#  $   #x!"
	"###*## #x!"
	"#  $ # ##!"
	"#  .    #!"
	"## @#   #!"
	"x########!",
	"urrruuullulullddrRurrdrdddlluLUURllluurrDrdLdddlluRdrrrruuuLullddDldRR"
	"RdrUllluuuurrdLulDDDldRuuuuullddRluurrdDDDlddrUUdRRdrruLLLulUUrrrdDuul"
	"llddlddrUUdrrdrruLLL",

	// 20
	"######x#!"
	"#   ##x#!"
	"#  . #xx!"
	"#  $ ###!"
	"## * @ #!"
	"###$ # #!"
	"xx#.#  #!"
	"#x#   ##!"
	"#x######!",
	"luullddRUruLddDrUrrddldllUUUluluurrdrDLddddrruruulLulDDuuuullddRluurrdDlluR",

	// 21
	"x#####x!"
	"##   #x!"
	"#    #x!"
	"# #.###!"
	"#  $  #!"
	"###*# #!"
	"x# $@ #!"
	"x# .  #!"
	"x###  #!"
	"xxx####!",
	"dlluRdrruuulLDDldRuuurrddLruulluullddRRdDrruuLrddlluUUdddrrddlUruuulld"
	"dldRuuurrddLrddlUlUUUrrddLruulldDuulluururrdLDDlluuRurD",

	// 22
	"xx###xxxx!"
	"###.#####!"
	"#@ $    #!"
	"# #*#   #!"
	"#  $  ###!"
	"###.###xx!"
	"x#    #xx!"
	"x#    #xx!"
	"x#  ###xx!"
	"x####xxxx!",
	"rRRRddlLrruullDDDDldRuuurrurruLLLrddlluUllddRluurrdDDDlddrUUUUddrrdLullddrUU",

	// 23
	"x#######!"
	"x# .   #!"
	"x# $   #!"
	"###*#@##!"
	"#  $  #x!"
	"#  .###x!"
	"#####xxx!",
	"uullldRurrdddlLUUluRRlddddlluRdrUrruuLulldRDDrruuLulDrrruLL",

	// 24
	"x###xxxx!"
	"x#.#####!"
	"##$#   #!"
	"#@*    #!"
	"##$#####!"
	"x#.#xxxx!"
	"x###xxxx!",
	"RDuUdRRurrdLLL",

	// 25
	"x####xxx!"
	"x#  #xxx!"
	"x#  #xxx!"
	"x#  ####!"
	"###$$  #!"
	"#  $.  #!"
	"# #..###!"
	"# @# #xx!"
	"##   #xx!"
	"######xx!",
	"drruuuLUUluurDDDDrruLddddlluluuRRRlUUluurDDDrddddlluluurRurDurrdL",

	// 26
	"xxxx#####!"
	"#####   #!"
	"#  ## # #!"
	"#  @$$  #!"
	"#  #$.###!"
	"##  ..  #!"
	"xx###   #!"
	"xxxx#####!",
	"lddrrruULLrrddlUrurruullDDDldlluluurDrRdrUrruullDDlddllUluRRRddRdrruLL"
	"LuuRDuuurrddLruulldDlllddR",

	// 27
	"xx#####x!"
	"xx#   #x!"
	"xx# # #x!"
	"###   #x!"
	"#  $$ #x!"
	"# #$.###!"
	"# #..  #!"
	"#  #@  #!"
	"##  ## #!"
	"x##    #!"
	"xx######!",
	"uuUruLddddrrddlllululuuurRUrDllldddrdrdrrruuulllUdrrrdddlllululuuurRur"
	"rdLDldRdrruLrdddlllululuuurRurDruuullDDDD",

	// 28
	"xxxx####x!"
	"xx###  #x!"
	"xx#    #x!"
	"xx#    #x!"
	"x###@###x!"
	"## $$#xxx!"
	"#  $.#xxx!"
	"# #..#xxx!"
	"# ## #xxx!"
	"#    ####!"
	"##      #!"
	"x#  #   #!"
	"x########!",
	"DDDDDldRRdrruLLLullddrUluRdrUUdllluuuruRDrUUUluRdrruulDrdLulDDD",

	// 29
	"########x!"
	"#   #  #x!"
	"#   #  #x!"
	"##  $$ #x!"
	"x# #$.###!"
	"x# #.. @#!"
	"x# ###  #!"
	"x#      #!"
	"x########!",
	"lluULLrrddrddlllluuuUrrrruulDDDulluulldRurDldRRDrUruulDD",

	// 30
	"x####xxxxx!"
	"x#  #xxxxx!"
	"x#  #####x!"
	"x#  ##  ##!"
	"###$$    #!"
	"# @$.##  #!"
	"#  ..## ##!"
	"#######  #!"
	"x#       #!"
	"x#   #  ##!"
	"x########x!",
	"RUUluurDDDRRRurDDDDrdLLLLdlluRRRRdrUUUUruLLLLDLdlluRRUUluurDDDD",

	// 31
	"xxx###x!"
	"###  #x!"
	"#  $ ##!"
	"#@.*. #!"
	"## $  #!"
	"xx##  #!"
	"xxx#  #!"
	"xxx####!",
	"urRurDDDuullddRUruLdrrdLrddlUUUlldRurDluuurDldlluRddrrruLLruulDrddrddlUU",

	// 32
	"xxxx####x!"
	"xxxx#  #x!"
	"#####  ##!"
	"#   #$  #!"
	"#   .*. #!"
	"## ##$###!"
	"#   #@#xx!"
	"#     #xx!"
	"####  #xx!"
	"xxx####xx!",
	"dllluuurrRUrrdLLLLulDDDrdrruUddlluluurrRurrdLLLLulDrrrruuulDDrdLLLulld"
	"RRRRdddllulUdrdrruuullulldRRlddldRRRdrUUU",

	// 33
	"#####xxxx!"
	"#   #####!"
	"# #$#   #!"
	"# .*.   #!"
	"# #$#   #!"
	"#  @#   #!"
	"#########!",
	"lluurRRRurDrdLullllluurrDullddrRRRurDlllllddrrUdlluurRRRurrdLLLLrrrrdd"
	"lUruLLLrrddlUruL",

	// 34
	"xxx####!"
	"#### @#!"
	"#  $  #!"
	"# .*. #!"
	"#  $  #!"
	"## ####!"
	"#  #xxx!"
	"#  #xxx!"
	"#  #xxx!"
	"####xxx!",
	"dddlLruuLDlDDDlddrUUUUluuRRdrdLrruuulDllldRDDDlddrUUUU",

	// 35
	"xxx####x!"
	"xxx#  #x!"
	"xxx#  #x!"
	"xxx#  #x!"
	"####$###!"
	"#  .*.@#!"
	"#  #$###!"
	"#  #  #x!"
	"##    #x!"
	"x#  ###x!"
	"x####xxx!",
	"lLDDrdLLdlUUluurRRdddlluUluRdddrruuuUUruulDDD",

	// 36
	"xx#####!"
	"xx##  #!"
	"###   #!"
	"#  $  #!"
	"# .*.##!"
	"## $ #x!"
	"###@ #x!"
	"xx####x!",
	"ruuLrddlUlURdrUUruulDlDDlluRdrrddlUruLrUruulDDulD",

	// 37
	"xx#####x!"
	"###   #x!"
	"#   # ##!"
	"#   $  #!"
	"###$*. #!"
	"xx# .###!"
	"xx# @#xx!"
	"xx####xx!",
	"luUURDrruLLLdddrUUruuullDDRdrUllulldRRRddlUruLdrrruLdlluuurrDDrdLuuull"
	"ddRDluuurrdDrdLullulldRRRluurrdD",

	// 38
	"########x!"
	"#   #  #x!"
	"#      #x!"
	"## ### ##!"
	"x# $@#  #!"
	"x#$*.   #!"
	"x# .#####!"
	"x#  #xxxx!"
	"x#  #xxxx!"
	"x####xxxx!",
	"drruuullllddDDuuuurrrrdddllLdlUUUddrruLdlUdrrrruuulllulldRRRRurDDDrdLL"
	"LullUdddrddlUUUUrDrrruuulllulldRRRRurDDDrdLLLullUdrrdrruuulllulldRRRRu"
	"rDDDrdLL",

	// 39
	"####xxxx!"
	"#  ####x!"
	"#     #x!"
	"#     #x!"
	"### ####!"
	"x#@$#  #!"
	"x#$*.  #!"
	"## .#  #!"
	"#  ## ##!"
	"#     #x!"
	"####  #x!"
	"xxx####x!",
	"DDDldRRRdrUUUruulDlLUUUruLdddddlddrrruUruLLrdddllluurUUUUlluurDldRuRDD"
	"DDuuurruLLdlluurDldRurDDDlDDDldRRRdrUUUruL",

	// 40
	"#####xxxxxx!"
	"#   #######!"
	"# # ##    #!"
	"#     $   #!"
	"#####$*.###!"
	"xxxx#@. #xx!"
	"xxxx#####xx!",
	"rruuLLLLuullddRRRRRRddllUdrruulDuLLLuullddRRRRdrruurrdLulDulD",

	// 41
	"xx####x!"
	"xx#  #x!"
	"xx#  #x!"
	"xx#  #x!"
	"### $##!"
	"#  $*.#!"
	"#  @.#x!"
	"#####xx!",
	"URUUluurDDDulDDldR",

	// 42
	"#####xxx!"
	"#   ##xx!"
	"#  $ ##x!"
	"##$*. ##!"
	"x# .@  #!"
	"x#  #  #!"
	"#####  #!"
	"##xx####!",
	"uuLulldRDRluurDrDulldRdRldlUUruulldRurDrDrDLuulldRlddrUrrrddlUruLL",

	// 43
	"xxx####xx!"
	"xxx#  #xx!"
	"####  #xx!"
	"#   * #xx!"
	"#  . $###!"
	"####* @ #!"
	"xxx#    #!"
	"xxx######!",
	"dllUrUULuurDDDulLdRddrruLdlUUUrDldRuuuulDDDllluRRdrrddlUdrrruLLuL",

	// 44
	"xx####xx!"
	"xx#  #xx!"
	"xx#  #xx!"
	"x##* ###!"
	"##. $  #!"
	"#  * # #!"
	"# # @# #!"
	"#  ##  #!"
	"##    ##!"
	"x######x!",
	"uLuUruulDDrDLddrUUrrdddldllluluuRlddrdrrruruuullluurDldRddlUUUddllddrd"
	"rrruruuuLLulDruuulD",

	// 45
	"#########xxxxx!"
	"#   #   ####xx!"
	"#   @*  #  ###!"
	"####.#$#     #!"
	"xx#  *     # #!"
	"xx#  #####   #!"
	"xx#  #xxx#####!"
	"xx####xxxxxxxx!",
	"ddRRRRRllllluuRurrdLDuLLddrRRRurrrrddllULLLLLrrrrrdrruulLulDrdLLLLuull"
	"LulldRRRdDlddrUU",

	// 46
	"xxxx####xxxx!"
	"x####  #xxxx!"
	"x#     #xxxx!"
	"x#  ## ##xxx!"
	"x## # * #xxx!"
	"xx# #.@$#xxx!"
	"### ##* ####!"
	"#          #!"
	"#   ####   #!"
	"#####xx#####!",
	"DrdLLLLuuuuurrrdDrDDuLddRlllldlluRdrUUUUUluRRRurDDDDrddRdrruLLLLLLLdll"
	"uRdrUUUUUluRRRurDD",

	// 47
	"x####xxxx!"
	"x#  #####!"
	"x#  #   #!"
	"x#  *   #!"
	"###.#$###!"
	"#   *@ #x!"
	"#   #  #x!"
	"#####  #x!"
	"xxxx####x!",
	"LLuuRRurrdLLDDlldlluRdrUrrrddlUruL",

	// 48
	"xx#####!"
	"x##   #!"
	"###   #!"
	"#  * ##!"
	"# .@$##!"
	"#  * ##!"
	"##  ##x!"
	"#####xx!",
	"lddrUrUUdLdlluurRuurrdLulDDDrUluurrdLulD",

	// 49
	"xx#####!"
	"xx#   #!"
	"x#    #!"
	"##$*@##!"
	"# *.#xx!"
	"#    #x!"
	"###  #x!"
	"xx#  #x!"
	"xx####x!",
	"ulDDDlluRdrUUruulDlDDrUddrddlUUUlldRurDrddlUUluuuRurrdLdLruulDlD",

	// 50
	"x#####xxxx!"
	"x#   ####x!"
	"## # #@ #x!"
	"#    #$*#x!"
	"# #   *.##!"
	"#   ##   #!"
	"#####  # #!"
	"xxxx# #  #!"
	"xxxx#   ##!"
	"xxxx#####x!",
	"rDDLLLulllddrrUrrrruulDrdLLLuuullddRluurrdDlllddrrURRRddlddrruruuLrddl"
	"dlluurUrULLLuuullddRluurrdDlllddrrURRRlluuullddRluurrdDldRR",

	// 51
	"xxx####!"
	"xx##  #!"
	"xx#   #!"
	"x##$* #!"
	"x# *.##!"
	"## #  #!"
	"#     #!"
	"#    ##!"
	"#  @##x!"
	"#####xx!",
	"uuruuUruulDDDDrdLdlluuuRldddrruLruUlldDrruuUruulDlDurDDDrdLdldlluurRdr"
	"UUUdddldlUluRRdrUU",

	// 52
	"####xxx!"
	"#  ####!"
	"#     #!"
	"# @#  #!"
	"#    ##!"
	"###$*##!"
	"x# *. #!"
	"x#    #!"
	"x###  #!"
	"xxx####!",
	"drrDDrddlUUUUUruLLrddllluuurDrrdddddlluRUddrruLuuuulllddrRlluurrrdDDuu"
	"ullDldRRluurrdD",

	// 53
	"xxxxx####!"
	"######  #!"
	"#   ##  #!"
	"#       #!"
	"#####$*##!"
	"#    *.#x!"
	"#   #@ #x!"
	"########x!",
	"ruLUdrUUruulDDDuLLLulldRRRRdrUruulDDlddLLdlluRRR",

	// 54
	"xx####xx!"
	"xx#  #xx!"
	"###  ###!"
	"## $*  #!"
	"#  *. @#!"
	"#   ####!"
	"#  ##xxx!"
	"#####xxx!",
	"llLURuulDDrdrruLdlUluurDldlDRllddrUluR",

	// 55
	"####x###!"
	"#@ ### #!"
	"# $$ ###!"
	"# $ .  #!"
	"## ..  #!"
	"x#######!",
	"ddRRRllluurDldRdrruuLrddrruLdllluluurDrrDulDulldRR",

	// 56
	"######x!"
	"# @  #x!"
	"#  $$##!"
	"###$ .#!"
	"xx# ..#!"
	"xx##  #!"
	"xxx#  #!"
	"xxx####!",
	"rrDLrDrddlUlURuulDulldRRurDDDlUruLddrrddlUUluurDldRuuullldRRurDD",

	// 57
	"x########x!"
	"##  #   ##!"
	"#   $$#  #!"
	"#  #$@.# #!"
	"## # ..  #!"
	"#    #  ##!"
	"#   ##  #x!"
	"#########x!",
	"drrruulullDLLulDDDuurrrurrdrddllllUdrrrruululldDlddldlluRuuurRddRurDrr"
	"uulullDldddLdlUUUluRRRdRdrrddlUruruulullDD",

	// 58
	"xx####!"
	"xx#  #!"
	"xx#  #!"
	"###  #!"
	"# $$##!"
	"# $ .#!"
	"# #..#!"
	"# @  #!"
	"#### #!"
	"xx#  #!"
	"xx#  #!"
	"xx#  #!"
	"xx####!",
	"luuRRUUruulDDDDDulluRldddrRurDDDlddrUUUUluuUUruulDDDD",

	// 59
	"xx######!"
	"xx#    #!"
	"xx#    #!"
	"xx#  ###!"
	"####$$@#!"
	"#   $ .#!"
	"#   #..#!"
	"########!",
	"dlLUUluRdddrruLdlLdlluRRRUUluurDDDrDLLdlluRRRRluuuurrdLulDDDrrDlLLdlluRRRR",

	// 60
	"xxxx######x!"
	"xxxx#    ##!"
	"##### ##  #!"
	"#   #$$ # #!"
	"#    $@.  #!"
	"######.. ##!"
	"xxxxx#####x!",
	"LLLulldRRRRRdrruruulullldDuurrrdrddlLuLDLLLulldRRRRRurDrruulullldDrdLLLulldRRRRR",
};

const sCollect LomaCol[] = {
	{ "Loma", LomaCol1, count_of(LomaCol1)/2 },
};
const int LomaColNum = count_of(LomaCol);

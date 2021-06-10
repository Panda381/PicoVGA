
// ****************************************************************************
//
//                        Game levels - Yoshio Murase
//
// ****************************************************************************
// Copyright (c) by Yoshio Murase.
// Original level website: http://www.ne.jp/asahi/ai/yoshio/sokoban/

#include "include.h"

// Hand-Made, (c) Yoshio Murase
const char* MuraseCol1[] = {

	// 1
	"###################!"
	"#   ...  @  ...   #!"
	"# $$$  #####  $$$ #!"
	"##   ###xxx###   ##!"
	"x##  #xxxxxxx##  #x!"
	"xx####xxxxxxxx####x!",
	"6rDLdRuurrdLLu9l3lDRddlUlUlu5RdLu3lddrUluRRlddrUrru3R"
	"6RddlUru8L5rdRurrdrru4Lrr3drUUru3LrddlU",

	// 2
	"xx####x!"
	"###  ##!"
	"#   $ #!"
	"# #.#@#!"
	"# #$ .#!"
	"#  .$ #!"
	"##   ##!"
	"x#####x!",
	"ddLdlluRll3urrdDrruuLulDll3drdrrUdlluRll3urrDDRluull3drdrrUrULddll"
	"uRUrrdLdllul3u4rD",

	// 3
	"xx#####x!"
	"###   #x!"
	"# $ # ##!"
	"# $.$. #!"
	"# ##.  #!"
	"#  @ ###!"
	"######xx!",
	"rur3ullddRdd3luuRRuurrdDrdL3ullddRluurrdD4luRd3ruullDurrddlLulld"
	"dd3rUd3l3urrurrddrdL3ullddRlulldR",

	// 4
	"xx#####xx!"
	"###   ###!"
	"# . $ . #!"
	"# #.$.# #!"
	"# $ # $ #!"
	"### @ ###!"
	"xx#####xx!",
	"r3urrddLruullull4drrUdll3ullddRluurrurrdLL4rddllUddllUURuulDrR",

	// 5
	"xx#####xx!"
	"xx#   ###!"
	"###.#   #!"
	"# $.$ # #!"
	"# #* $  #!"
	"#@ . ####!"
	"######xxx!",
	"3ruR3ullddRdd3luuRRD3urrdrrdd3LdLUUllddRluurrd4ruullDLrurrddlLL",

	// 6
	"xx#####xx!"
	"xx#   ##x!"
	"###$   ##!"
	"#  .$.$ #!"
	"# #.#.# #!"
	"#  *$*  #!"
	"###   ###!"
	"xx# @ #xx!"
	"xx#####xx!",
	"ru3ULLdDRluurrdDuuluurDDlldd4ruuLullulDDu3rdrdd6luuRldd3rddrUdllU",

	// 7
	"xx#####xx!"
	"xx#   #xx!"
	"### #$#xx!"
	"#  .$.###!"
	"# #$+$  #!"
	"#  .$ # #!"
	"### #.  #!"
	"xx#   ###!"
	"xx#####xx!",
	"R3dlluulluurruurr3D3ullddR3lddrrU3drrurruuLLDL",

	// 8
	"###########xx!"
	"#@$   ....##x!"
	"# $$$$#....#x!"
	"# $  $..***##!"
	"##   # ##.. #!"
	"# $$$#  ##  #!"
	"#    ## #  ##!"
	"#  $$ #    #x!"
	"#     ###  #x!"
	"#######x####x!",
	"6Rd3rDDlUruLrddDDldlluuluurRRlluu6lddRdrru3Rlddrddrruruul3u"
	"LLddR4ldlluluu4rDu4lddrdrru3RuurrdLrrDDlUruLullLLddrrR3luu4r"
	"drddlU5ldllu7R3lddrddrrurUruLU3dlddr3Udd3luuluu4ldDlddrU"
	"rUUlu7R8luurr5R3ldd3lUlu6Rllddll3drUUlu5R5l"
	"3dlUU4drr4Ulu4R4lUlu4R5ldd5Rll5dl4Ulu3RlUluRR",

	// 9
	"x######xx!"
	"##    ##x!"
	"#  ##  #x!"
	"# #  # #x!"
	"#.  .#$##!"
	"# # * $ #!"
	"# # * $@#!"
	"#  .. $ #!"
	"#########!",
	"dLLuuLrddrruLruLddlLLuUruulDlluuru3rdrdDDrdd4luUruL3drUUdd3ruuluu"
	"ulu3ldl5dRl5uru3rdr3dLDlluuLrddrrurrdLLrdL",

	// 10
	"####xxxxx!"
	"#  ####xx!"
	"#     ###!"
	"#  #$ . #!"
	"## #.#$ #!"
	"#  # @* #!"
	"#   *  ##!"
	"####  ##x!"
	"xxx####xx!",
	"luUruLLrrdrrddLUddldlUURd3l3uluur4DldRR",

	// 11
	"xx#####x!"
	"###   ##!"
	"#  . * #!"
	"# .$.#@#!"
	"## # $ #!"
	"x# $ # #!"
	"x###   #!"
	"xxx#####!",
	"uLulldl3dRl3ururrdLL3r4dll3U3drr4ululldR3dlluuluR3drruuLrdd"
	"drruuLrddlluU",

	// 12
	"xxx#####x!"
	"xxx#   #x!"
	"xxx#. $#x!"
	"xxx# $ #x!"
	"####.. ##!"
	"# $ **  #!"
	"# .  @$ #!"
	"#########!",
	"UruLUluurrDDuL4dlluRd3luRRdrrUrrd4LrruUUrDlddrruL4ulDD",

	// 13
	"xxxxx#########!"
	"xxxxx#...  . #!"
	"xx#### #.#.  #!"
	"###    ......#!"
	"#   $ $ $#..##!"
	"# $####..####x!"
	"#  $   ###  ##!"
	"# $$$ $ $ $@ #!"
	"#  $ $ $ $ $ #!"
	"##          ##!"
	"x############x!",
	"ulDlLdd6lul4urru4rddr3Ud3ldRRdrUlu3RdrUUlulLdd5ld4RdrU"
	"7lddrUlu5Rur3RdrU3lddlU6l4dr3Ulu5Ru3RluurrdDrruuL"
	"LddllddlU5l5drruLdl4Ulu5Ru4RuurrdLD3luuRRll4dlU5ldd"
	"3d4ruLuulLrrddLLUlUUlu6Rdr3UdLd5l3drddl4Ulu6RdrU4l"
	"ll4d3ruLLdl3Ulu5RUr4R3lddlU5l5d6ru5Ldl4Ulu3R"
	"RRu4RllddlU5l3drruLdlUUlu6RdrUU3Ld3ldd4rDlddrru4Ldl3U"
	"Ulu6RdrU6l4d6ru5Ldl3Ulu5RurRRlddlUruLd5l5dr"
	"8rUru9Ldl3Ulu6RdrU6l5d8rUru8LdlUU"
	"Ulu6RuRD6l3d8rd7Ldl4Ulu5RluRRD4lu3RU",

	// 14
	"xxxx######xxx!"
	"#####    ###x!"
	"#    .##.  ##!"
	"# .$##   #  #!"
	"##$$ #  $   #!"
	"# .  ##$#$ ##!"
	"#  @ .  . ##x!"
	"###########xx!",
	"luUUddrruLdd4rUURRl3u3ldllDDrdd3ruuluR3drrUrULLUlDDurrddl4Luul"
	"uurru3rDrrDrd3LUlDrrdd5luuluurru3rDrrdd3lDu3ruullu3ldlldlluRR"
	"RlddrddrrRuurUl3d3lLUlUdld3RuuLuulldRurDDrddlluUrrdL",

	// 15
	"x#####x!"
	"x#   #x!"
	"x#. $#x!"
	"x# $ #x!"
	"##.. ##!"
	"# **$ #!"
	"#  @  #!"
	"#######!",
	"lUdrrULuUrDulluurrDDuL4drruLdl3UrDlddrruL4ulDD",

	// 16
	"######xx!"
	"#    #xx!"
	"# .* ###!"
	"# .$.$ #!"
	"## $  @#!"
	"x####  #!"
	"xxxx####!",
	"lluuLrddrruLdlULuullddRdRRlUlluu3rDDrrddlUru3LdRurrddlUruL",

	// 17
	"xxxx#####x!"
	"x####   #x!"
	"x#.##. $#x!"
	"##$#  $ #x!"
	"# *  .. ##!"
	"#   #**$ #!"
	"##### @  #!"
	"xxxx######!",
	"lUUddrrULuUrD4ldlluRUdRRuRuurrDDLd3LrrUr3dlUd3ruLLuurDlddrruL4ulDD",

	// 18
	"x####xxxxxxx!"
	"x#  ######xx!"
	"x# $## @ ###!"
	"##. ##  .  #!"
	"# .    $.$ #!"
	"# *$ #$#.###!"
	"###  #   #xx!"
	"xx########xx!",
	"r4dllUUR5l3urDDldRRddlUUlldRurrddlUruLUluur3DrddlUlUUrDldRurRRd"
	"drruU5LulD5ruulDrdLuurrDDurrdLLull3drrUUddlluuRuRDrruLd3l3Luu"
	"ulDr4drUlu4R",

	// 19
	"x####xxx!"
	"##@ ####!"
	"# $* * #!"
	"#  * # #!"
	"#  *   #!"
	"# #*.  #!"
	"#   #  #!"
	"########!",
	"DlddrRR3luurDRluurDrDLull4drrUUd3r3uLLdDldR3urrddLruulldDlddlluu"
	"uurRRddlU3dlluuRlddrruUruuLDDlluRluRdd4rddlUruLL",

	// 20
	"xx#####xx!"
	"x##   ##x!"
	"x#  $..##!"
	"##$ #.$.#!"
	"#   #...#!"
	"# $###$ #!"
	"#  $ $ ##!"
	"##@    #x!"
	"x#######x!",
	"4ruUruuLrddlddlluRd3luRR3luurDur3urrdLrrdrddlUlUdrruLuLullDlDDldd"
	"Rd4r4UdlUr4dlluRdrUUruulldR3d4lu3Rdr3Udd5luuruururrDDRlu"
	"ulldRurD3lddrUluRRllddDld4RdrUU",

	// 21
	"xxxx####x!"
	"#####  #x!"
	"# $ .  #x!"
	"#   *$ #x!"
	"###..$ #x!"
	"x###@###x!"
	"x# $. ###!"
	"x# $*.  #!"
	"x#  . $ #!"
	"x#  #####!"
	"x####xxxx!",
	"uluu3rddLLUdrruulDlluR4drddlUUddlluuRDrruL3UrrdLr3ulDDlluRd4Dll"
	"uRdrUll3drUluRurrddLrurrdLLuulldRllddrUluRur3UrrdLr3ulDDlluRdDDuull"
	"luRRd3ruulDrdLrdL",

	// 22
	"xx#####xxx!"
	"xx#   ####!"
	"###$   $ #!"
	"#  $ #   #!"
	"# # .## ##!"
	"#.**.##$#x!"
	"# @ .   #x!"
	"#########x!",
	"rr3uLrurrdrru3LullDR4d3r3UluLul3DlUrurrdr3d6l3uRRdrU3ldd"
	"d6r3ululullDurrdrdr3d6l3urRll3drrULd5r3ululullddDrDLuu"
	"uurrdLDDuurrdrru3LulDDuul3D",

	// 23
	"#########!"
	"#  @ .  #!"
	"#  .#*$ #!"
	"# $. .$ #!"
	"##$.##$ #!"
	"x#  ##  #!"
	"x########!",
	"4rddLLUdrruul3LddRRllulldRRddlUUruurrddLruurrddLLuulldDlluRlu4Rdd"
	"L3rddlUruLruLruL",

	// 24
	"xx#####xx!"
	"xx# @ #xx!"
	"### # ###!"
	"# $$#$$ #!"
	"# .. .  #!"
	"##  #.$##!"
	"x#   . #x!"
	"x#######x!",
	"rdDD3ulldDDlluRd3r3ulldDl3d3rUUlLulD3rddllUdrruulL3urrdDDrruLdl"
	"lldd3rUd3luurrDullulldRRddlUr4urrdDDLrurrdL",

	// 25
	"#####xxxx!"
	"#   ##xxx!"
	"# *$ ##xx!"
	"#@ *  ##x!"
	"# .#$  #x!"
	"## ...$##!"
	"x### $* #!"
	"xxx#    #!"
	"xxx######!",
	"uurDlddrd3ruulDuuLulldRlddrURlluurrDrDLuulldRD3rddLUruL4drUdrruLLU"
	"luurDrDulldRddrruLdllUUrurDllddrUdrruLuululuLrdDrr3dlluR",

	// 26
	"xx####xxx!"
	"###  ##xx!"
	"# ..  ###!"
	"# *.*   #!"
	"#@$$.$$ #!"
	"#  ##   #!"
	"#########!",
	"uu4rdrrddllUlURllulldRlddrUURRdLrrdrru3LuluurDrDulldlluRl3drUUrRdL"
	"rRdrru3LuurDldRu4lddrURurrddrruu3LrddrUruLL",

	// 27
	"########!"
	"#      #!"
	"# $$#$ #!"
	"# $.*  #!"
	"## ...##!"
	" ##.$##x!"
	"##... ##!"
	"#  *.$ #!"
	"# $#$$ #!"
	"#  @   #!"
	"########!",
	"rUUddrruuLuLLrDL3urruruu3lDDuullddRdRRlURdDlddrruLdlUUdd3rddllUUruL"
	"3d3luuRRUdllddrUluRddrruUddrUruLuL3ulldRurDDuu3luurrDDldRulluRurDD"
	"uu3rddLLrruulDrdL",

	// 28
	"xx#####x!"
	"###   #x!"
	"# $$.$#x!"
	"# . . #x!"
	"# # # #x!"
	"# ..* ##!"
	"###@$$ #!"
	"xx#    #!"
	"xx######!",
	"3uruulDrdL4drrULdlUUll3uRRdrrdDuulluurD3l3drrdd3ruLdlluuUUddllu"
	"uurRurr4DLLddrUdrruLLdlU",

	// 29
	"xx######x!"
	"xx#    #x!"
	"###$$  #x!"
	"# $ #$ #x!"
	"# $ #  #x!"
	"# $ @# ##!"
	"# $#.*. #!"
	"#  $* #.#!"
	"##  . #.#!"
	"x###... #!"
	"xxx#    #!"
	"xxx######!",
	"dDDlluRR3luuRDldRdrr3uLr3drdrr3ul5u3l3D3u3r5dr3dllu3lu"
	"uluuRDlddrdrr3uLUdr3drdrr3ulLDD3lul3urrdrD3r4d3lURRdrUUdll3u"
	"lulull3drdrRllul3urrdrdDrDLdRRdrU3l4ulull3drRRurDDldRuu4luuRDl"
	"d3RuuLulDDldRRluurrdDDuurr5u3ldDDl3drruuLulDDldRRl3ur3urrdLulD"
	"DDuu3r4dlluLulluRdDDurrdrruulUruu3ldDDuurRddrddlluLrdrDDlUrur3ulu"
	"ur4D3u3lddlDldd3RdrU4luurDldRRldR",

	// 30
	"xx#####xx!"
	"x## @ ##x!"
	"x# .$. #x!"
	"x# * * #x!"
	"x#$ #.*#x!"
	"##  #  ##!"
	"# $.$.$ #!"
	"#   #   #!"
	"#########!",
	"rdrdL4drruLdlUruUluurDluulldRlldDrURl4dlluRdrURRUddrru4Ldllu3Rl"
	"UUlDrddlluR",

	// 31
	"xx####xxx!"
	"xx#  #xxx!"
	"xx#. #xxx!"
	"xx# $#xxx!"
	"xx#. #xxx!"
	"### $###x!"
	"#  .$  ##!"
	"# # $$  #!"
	"# .##. @#!"
	"## *  $##!"
	"x#  .  #x!"
	"x#######x!",
	"lldd3luuluurruurUl3dRUd3lddrdd3ruuruuLrddlddrUluUrrdLulDDldlluuluu"
	"rrdRluurD3lddrddrrurr3uLDrddlldlluuluurrdRRDrruLdlUr3dLUlLdlU4ruu"
	"3luurDldRRDrdLurruLuLDlluurDl3urDDl4urDDl4dRRuLdl4UrDDlddrruLd"
	"lUUddrrDrruLdlUruLLrr4dlUL",

	// 32
	"xx#####xx!"
	"###   ###!"
	"#  $..$ #!"
	"# # ##  #!"
	"# # ##@##!"
	"#  $..$#x!"
	"### #$ #x!"
	"xx# . .#x!"
	"xx#$# .#x!"
	"xx#  $ #x!"
	"xx###  #x!"
	"xxxx####x!",
	"DD3uruLLullDll3dr3R4l3urrDDuull3drRddrrdrddlUllUUrrUrDDu3lddrr"
	"UruL3drU3luuUUll3urrurrdrddDD4ululldR3l3drrUUddll3urR",

	// 33
	"xxxx####xxxx!"
	"x####  ###xx!"
	"x#  $  $ #xx!"
	"x#$..$ . ###!"
	"## #.##..  #!"
	"#  ..$@$ $ #!"
	"# $ . #. ###!"
	"####$  $ #xx!"
	"xxx#  ####xx!"
	"xxx####xxxxx!",
	"RuuruL4drUUrrdLLuluurDldRlDlLdlluRuuRRluurDrDulldlluRdrRuulDrdLLu3r"
	"r3dllLdlUUddrddl3U3ldRRurrddlUru3r3u6lDDuu6r3drruLdlddLL"
	"Lu4luRd3rddlU",

	// 34
	"xxx######xx!"
	"x###    ##x!"
	"x# $$$$  #x!"
	"x#  *..* #x!"
	"x#  $. $.#x!"
	"## $#.$#.##!"
	"#  $. $.  #!"
	"# $$*$#.# #!"
	"#  .... # #!"
	"#######  @#!"
	"xxxxxx#####!",
	"llu6luur3urRR3dlDurRR3drr3uL4ulullDD3l3dlddrr3R5luuruu"
	"u3ruurrdr4dr3dllU3luurDldR4luurRDul3u3rDrRllDDrUl4ulDu3rdr"
	"dDuulLul3DRRlddlDllulldRRldRl6uRRurDllddRl3D",

	// 35
	"xx#####xxx!"
	"xx# @ ##xx!"
	"###$$$ ###!"
	"#  .# .  #!"
	"# #.# .# #!"
	"#  . #.# #!"
	"# *$$$   #!"
	"###  # ###!"
	"xx##   #xx!"
	"xxx#####xx!",
	"rDullDDlldd3rDRRddllUlURuLr3drr5urr3dLr3ullulullddDDr3drru3Ul"
	"UR5dlluuRlul4urrDr3dDlldlU3r4ulullddll3d3R3l3urrdDrdL4u"
	"urrdLrrddlUruLull4Dr3drr4U4dlluuRlul4urr3drdDlldlU3ruul3ul"
	"lddll3d3R3l3urrdDrdL3ullddRluurrdD4urrdrDulLulDDllddrrUdrddlUUr"
	"3drrUULLdlU5r3uL",

	// 36
	"xx#####xx!"
	"x## .@##x!"
	"x#  *  #x!"
	"x# $*$ #x!"
	"x#..#..#x!"
	"##$ . $##!"
	"# $ # $ #!"
	"#   #   #!"
	"#########!",
	"drddlUddlluluurDRRddllUdrruulLrr4drruLdlUUlluurrDrDLuulluurrDullddrU"
	"rrDDuL4drruLdl3UrD3u3l5dlluRdr3UlDrRRuruu4lDurDu3rddlUruLd"
	"4drruLUddlUUllddlluRdrUluR",

	// 37
	"xx####xxx!"
	"xx#  ###x!"
	"### $  ##!"
	"# $...$ #!"
	"# ##. # #!"
	"#  .$.# #!"
	"# $#. $ #!"
	"## #$##@#!"
	"x#      #!"
	"x########!",
	"d5luUl3u3RdrddlUruU4ldd3Rll3drrUUrUL3dll3uluu4rDulluurDld"
	"ll3drdd5ruuLLrr3uLuLLulD",

	// 38
	"xx######xx!"
	"###  . ###!"
	"# $.$$$  #!"
	"# # #. # #!"
	"# @. . # #!"
	"#### $   #!"
	"xxx#$.####!"
	"xxx#  #xxx!"
	"xxx####xxx!",
	"r3u3rDDlUddlluuRlddrdRddlUUruururr3dlLUlD3r3ulluLDlluRl3dlluuRld"
	"drrRd4r3u4lulDDu5r3dlluUddrr3ul3L",

	// 39
	"x#####xx!"
	"##  @###!"
	"#  **  #!"
	"# #  # #!"
	"# #*$  #!"
	"# #  #.#!"
	"#  *$. #!"
	"###   ##!"
	"xx#####x!",
	"Drr4dldlUrr4ullulldl4drRuURRllddll4ururrdrrdD3l3drruLLuurDld"
	"RuurruullulldRDDrddlUrurruulLulldl4dRl4ururrdrrddllU",

	// 40
	"xx#####x!"
	"xx#   ##!"
	"###$.@ #!"
	"#  $.  #!"
	"# # * ##!"
	"#   ###x!"
	"#####xxx!",
	"dlLddlluu3RurrdLdLU3lddrrUdlluurRdrr3ullDRDrruLdlLddlluuRR",

	// 41
	"x##########!"
	"x#        #!"
	"x# ##$# # #!"
	"x# .....# #!"
	"###$$$$$  #!"
	"#  * .@*###!"
	"#  $$$$$  #!"
	"# # ...## #!"
	"#  .#. .# #!"
	"### #$#   #!"
	"xx#   #####!"
	"xx#####xxxx!",
	"llDurrDLddrrdrr3ulLLDldR3ulDulLDRRurUR3u5ldd3rDuR4luu3rDu3r"
	"r3d3LdDlluURldlUddllddrrddrrUdlluull3uRdrDu3ruU",

	// 42
	"xx#######!"
	"xx#     #!"
	"### ### #!"
	"#  *$  .#!"
	"#  * $#.#!"
	"## *@$ .#!"
	"x#$$* . #!"
	"x# # .###!"
	"x# ## #xx!"
	"x#    #xx!"
	"x######xx!",
	"R4d3luu3URl5d3r4ulLrrddlU3r5u4ldD3R3luu4rdD4lDll"
	"uRRldDD3R3d3lu4Uru3Rl3D3luuluR3d3ruuLDrR",

	// 43
	"x#####xxx!"
	"##   ###x!"
	"# .... #x!"
	"# #. # #x!"
	"# $$$$ #x!"
	"# $.@$###!"
	"# $$$$  #!"
	"##$..$# #!"
	"x# .. # #!"
	"x#.##.  #!"
	"x#    ###!"
	"x######xx!",
	"lDDrdrdd3luuR3urDlddldd3rurr3ulLLulDDuuUUruulldl4dRl4ururrddld"
	"drUldDll4ururrdrrddLLddrDDuuUd4l4ururrdrrddLruullulldRR3l4drr"
	"uUU3dll4ururrdL4dlluuRlddrruUUddrruLUddlUlldRdDD",

	// 44
	"xxx####x!"
	"####  #x!"
	"# .$* ##!"
	"#   $  #!"
	"# .# . #!"
	"# *#$@##!"
	"##    #x!"
	"x######x!",
	"uuLLrruulDr4d3lUl3urRRur3DuulldRu3l3drdrr3UlulldRDuurRdLulDrrd"
	"rruLLuurDlddrruLdlULulld3RdrruLuLLrrddlU3drU",

	// 45
	"xx###xxx!"
	"xx#.#xxx!"
	"x##$###x!"
	"## *  #x!"
	"# *  *##!"
	"# *  * #!"
	"#  **  #!"
	"# *   ##!"
	"## @ ##x!"
	"x#####xx!",
	"lUluuRRDullddrdrruruLddlluluurrurD3lddrdrrururuLddldlluluurrururDlldl"
	"lddrUddrruLdlUl3uRRdDuull3drdrruruLddllul3urrRDu3l3drdrrururuLddl"
	"dllul3u3rurD3luRUddrruLd3l3drdrruruUddldllul3urrdRu3ldRlddrUUdd"
	"drruLdlUluurRDullddrdrruruLddlluluurrurD3lddrUddrruL",

	// 46
	"x#####xxxx!"
	"##  ######!"
	"#  $ $   #!"
	"#    #.  #!"
	"##@#### ##!"
	"x#   #. ##!"
	"## # #$$ #!"
	"# ** # ..#!"
	"#  *## $$#!"
	"##    .. #!"
	"x#####   #!"
	"xxxxx#####!",
	"3urDrRRdrddDrdDLd5luUdd5ruruul3ulu4l3drrddLDld4RdrrUUlUlU"
	"drdrddlluUd3luuruull3u4rdrddDrDDlld4luluRdd4rurruul3ulu4ldd"
	"dDDldRd4rurUUddlddrUUd5l4urrddLDlluR5u4rdrru5Lul6Dl"
	"dRd4RurruulUUddrddllddrrUUlld4l7urrdLul4D4u6rdL3dlDD",

	// 47
	"xxx#####!"
	"xxx#   #!"
	"####.. #!"
	"#      #!"
	"#******#!"
	"#      #!"
	"# $$####!"
	"# @ #xxx!"
	"#####xxx!",
	"luu5rUUdd5lddrrUdlluurRRUUllDR3dlluuRlddrruUluu4rddLLULrdrruL"
	"3urDDlddlLuuRlddrruUlldRu3lDRR3dlluUdRUddrUU",

	// 48
	"xx#####xx!"
	"xx#   #xx!"
	"###$# ###!"
	"#   #.@ #!"
	"#   *.# #!"
	"#   # # #!"
	"###$#   #!"
	"xx#   ###!"
	"xx#####xx!",
	"ldLLrr3dllUUlluurDRRl3drrurr3ulluullDDldR3drruuUU4dll3uRl3drru"
	"rr3ullD4ldRu3rurr3dllUddlluUluR3urrD",

	// 49
	"########!"
	"#   *  #!"
	"# * .  #!"
	"# *** ##!"
	"# $ * #x!"
	"## @  #x!"
	"x######x!",
	"rr3ulluRdr3dlluURurDluu3l3dRdrrUUruru3LDR3dlluluuRRurDDuurrdLull"
	"dllddrUdd3rUUlLuurDurrdL3dllUll3uRR",

	// 50
	"#########!"
	"#   .   #!"
	"# ##$## #!"
	"# # *   #!"
	"# # *@# #!"
	"# # $ # #!"
	"# # ### #!"
	"#   .   #!"
	"#########!",
	"urr4d4l4uRUdl4dll6urrRddRddLruulldR3u3l6d6r4uL"
	"Lrr4d6l6u3rdDldDD3uruu3l6drR4u4ruulLLddlddrrUdllu"
	"uruu3rddlLddllddll6urR",

	// 51
	"###########!"
	"#    *    #!"
	"#@# * . # #!"
	"# #*****# #!"
	"# # $ * # #!"
	"#    *    #!"
	"######  ###!"
	"xxxxx####xx!",
	"3d3rR4l4u3rRdDDuurrurr4dlluLUdrddlUruUlluu4l4d3rRUUrrdLr"
	"ddlU3luURRDullddrUd3l4u4rDuRR3DLdLrur3u4lDull4drrurRdrdrUU"
	"drr4u3L3r4d4lulldR",

	// 52
	"######x!"
	"#    #x!"
	"#    #x!"
	"##$ ###!"
	"# $   #!"
	"#.***.#!"
	"#  @  #!"
	"#######!",
	"lluuRRllddrrULuUrDldd3ruuLL3ulldRdD3rddllURlUl3urrdLDDrddllUR4ul"
	"ldRur3DulD",

	// 53
	"x#####xx!"
	"##   #xx!"
	"#  # ###!"
	"# * $  #!"
	"#. * #@#!"
	"# * *  #!"
	"## *  ##!"
	"x######x!",
	"ulLuulldl3dRl3ururr3dLLddRUR4ulldDD3urrddL3rddLdL",

	// 54
	"xx#####xx!"
	"xx# @ #xx!"
	"### * ###!"
	"#  ...  #!"
	"# ##$## #!"
	"# $   $ #!"
	"###   ###!"
	"xx#   #xx!"
	"xx#####xx!",
	"ldRd3lddRRdrruLUU3rddLLrruu4luurrDLddDrddl4U3lddrRlluu3rRuullD"
	"urrddldDrddl3Ud3ruuL",
};

// Autogenerated, (c) Yoshio Murase
const char* MuraseCol2[] = {

	// 1
	"########!"
	"###  . #!"
	"## * # #!"
	"## .$  #!"
	"##  #$##!"
	"### @ ##!"
	"########!"
	"########!",
	"luuluRurrrddlLrruullldlddrdrrUdlluluururrrddLddlluUddrruuLUdrddlluluuR"
	"uRDllddrUddrruuL",

	// 2
	"########!"
	"##  .@ #!"
	"## #.# #!"
	"##   $ #!"
	"##.$$ ##!"
	"##  ####!"
	"########!"
	"########!",
	"lllddddrUluuurrrrddLdLUrruulllldddRluuurrrrddllLrrruulllldDrrUdlluurRd"
	"dlddlUUrrrdLullddrUruuullDDRdrUrruuL",

	// 3
	"########!"
	"#### @##!"
	"#  *$ ##!"
	"#     ##!"
	"## .####!"
	"##$ ####!"
	"## .####!"
	"########!",
	"lDLddddlUruuurrdLulDlluRRdDDlUruulldRurDrruL",

	// 4
	"########!"
	"##.###.#!"
	"## #  .#!"
	"## $$ @#!"
	"##  $  #!"
	"##  #  #!"
	"##  ####!"
	"########!",
	"dlLruulDLDlddrUURRdrUUUddllllUUdRRRdrU",

	// 5
	"########!"
	"#### @##!"
	"####   #!"
	"#. #$$ #!"
	"#     ##!"
	"#.  $###!"
	"##.  ###!"
	"########!",
	"ldDurrdLdLLdlluurDDurrruulDrdLLddrUUdllluurDldRurrruulDrdLLLdlUrrrdLL",

	// 6
	"########!"
	"# ..####!"
	"# $    #!"
	"#  #$# #!"
	"# @ .$ #!"
	"########!"
	"########!"
	"########!",
	"luuurDrrrrddLLUdrruulLLulldRlddrUUluRdddRRuuLrddlluUrrrrddL",

	// 7
	"########!"
	"###  .##!"
	"# $ # ##!"
	"# *$  ##!"
	"# .#@ ##!"
	"#    ###!"
	"#   ####!"
	"########!",
	"dllluuuRDDlddrruruuLrruullDlDRllddRUluurrdRdrUUddldLdlU",

	// 8
	"########!"
	"########!"
	"#.  @.##!"
	"#  $# ##!"
	"# # $. #!"
	"#   $# #!"
	"####   #!"
	"########!",
	"lDDuurrddLrrddllULUUddrdrruulLruulLLdlddRRUrrrddllUluRlUluRR",

	// 9
	"########!"
	"#. .####!"
	"#.#$$ ##!"
	"#   @ ##!"
	"# $#  ##!"
	"##   ###!"
	"########!"
	"########!",
	"ddllUluRRlluurrDulldddrdrruruuLDLLdlUUddrdrrUruLLUdLdlU",

	// 10
	"########!"
	"#.  ####!"
	"# #   ##!"
	"# . # ##!"
	"# $*$ ##!"
	"##@ ####!"
	"##  ####!"
	"########!",
	"UdrUlluuurrdrrddLLrruullDLDRddlUUlUUddrruurrddL",

	// 11
	"########!"
	"########!"
	"#.   . #!"
	"# # #  #!"
	"#@$  $.#!"
	"##### $#!"
	"#####  #!"
	"########!",
	"uurrrrrddLddrUUluullddRluurrdDrddlUUlluullddRRuurrrDDlUruLddddrUUluuLL"
	"LrddRluurrdDrddlUUlluurrrDulllddrrU",

	// 12
	"########!"
	"#  #####!"
	"#  #####!"
	"# .*   #!"
	"##$    #!"
	"## #$###!"
	"##. @###!"
	"########!",
	"UdlluUrRurrdLLddlluuURldddrruuLulDDurrruLdlluluurD",

	// 13
	"########!"
	"## @ ###!"
	"## .   #!"
	"#. $.$ #!"
	"##$# ###!"
	"##   ###!"
	"########!"
	"########!",
	"rddddllUURuulDrdLurrDurrdLLulldddrrUUruLullddR",

	// 14
	"########!"
	"##   ###!"
	"# $# ###!"
	"# . @###!"
	"# *   ##!"
	"## #$ ##!"
	"##.  ###!"
	"########!",
	"uullDldRldRddrrUULrddlluUluururrdDuulldlddrddrruruLuuulldDDDuuuurrddLrdL",

	// 15
	"########!"
	"########!"
	"##  ####!"
	"#..$  .#!"
	"# #$ $ #!"
	"#@  #  #!"
	"#####  #!"
	"########!",
	"uurRllddrrUrRurDllldlluururDRlllddrrUruLLrrdrruLLLrrdddrUU",

	// 16
	"########!"
	"##  .@##!"
	"##   $.#!"
	"####*# #!"
	"##     #!"
	"#  $  ##!"
	"#   ####!"
	"########!",
	"ldDDrruuLLddllddrUluRRuurrddLLuuulldRRRlddrdLLdlluRuRlddrUrUUUdddlluRdrU",

	// 17
	"########!"
	"##@ ####!"
	"##  ####!"
	"##. ####!"
	"# $$. .#!"
	"#  $ ###!"
	"###  ###!"
	"########!",
	"ddDRRRlddlUUlldRurrddlUruLUluurDDDrddlUlUR",

	// 18
	"########!"
	"########!"
	"##.  ###!"
	"## # ###!"
	"## *$  #!"
	"##  $. #!"
	"##  @###!"
	"########!",
	"luRlluuurrdDLruulldDrddrUUrrdLLulluurrDullddrRdrruLLddllUUUddRR",

	// 19
	"########!"
	"########!"
	"###   ##!"
	"### #.##!"
	"###  .##!"
	"#@ $$ ##!"
	"#  .$ ##!"
	"########!",
	"drrUUrrddLUlldRurruuullDDRdrUdlLdlluRRurrddLUluR",

	// 20
	"########!"
	"#   @###!"
	"# $# ###!"
	"# * $  #!"
	"#   ## #!"
	"##.  . #!"
	"###   ##!"
	"########!",
	"llldddrruRldlluRluurDDldRuuurrddLDldRulluurDDrddrruruuLLLddR",

	// 21
	"########!"
	"##   @##!"
	"##  #  #!"
	"##.  $ #!"
	"## $$#.#!"
	"####  .#!"
	"########!"
	"########!",
	"drdLLrrddllUdrruuulullldddRUluurrrddLLrrrddllUluRRuullDurrdrDDulldllUR"
	"uulDrdRRurD",

	// 22
	"########!"
	"########!"
	"###. ###!"
	"# .  ###!"
	"#   $$ #!"
	"## . $@#!"
	"########!"
	"########!",
	"LLUdrruLLLulldRdRRuLdlUrrrrdLLuluurDldlluRdrUdRdrruLLullddRUrrdLuuL",

	// 23
	"########!"
	"##@.  ##!"
	"# $$* ##!"
	"#  #  ##!"
	"#  #  .#!"
	"#### # #!"
	"####   #!"
	"########!",
	"rrDullDRRurDlDDrrddllUUUUrDldRuuuLdlllddrUluRR",

	// 24
	"########!"
	"#####  #!"
	"#####$.#!"
	"###  . #!"
	"###  #.#!"
	"# $  $ #!"
	"#   #@ #!"
	"########!",
	"ruuullldddlluRdrUruurruulDrdddLLLdlluRRRRdrUUUddlluulDrdLdlluRRRRdrU",

	// 25
	"########!"
	"#  .####!"
	"# $.. ##!"
	"#  ##$##!"
	"##  #  #!"
	"##$   @#!"
	"##  ####!"
	"########!",
	"llluluUddrddlUUUluuRDrrrDDrdLLLulUluRRlddrddlUUUluR",

	// 26
	"########!"
	"###  ###!"
	"###  ###!"
	"### .. #!"
	"#  $#  #!"
	"#  .$$ #!"
	"#### @ #!"
	"########!",
	"UUdLLUlldRRRdrUlluUruulDDDldRRdrruuuLrddLLrU",

	// 27
	"########!"
	"#   ####!"
	"# # *@##!"
	"#  *   #!"
	"###$   #!"
	"###   .#!"
	"########!"
	"########!",
	"dlLuullddRRRdrruLuLDllluurrDullddrRurrdddllURRlUrrD",

	// 28
	"########!"
	"### .  #!"
	"# $@#. #!"
	"#  $# ##!"
	"#  *  ##!"
	"##  # ##!"
	"###   ##!"
	"########!",
	"urrdddlLrruuulldDuurrdddddllulUluuRlddrdrdrruuuuullDllddrRRlddrruUUUru"
	"LdddlllluurDldRRRlddrruUUdllluurD",

	// 29
	"########!"
	"########!"
	"########!"
	"##  ####!"
	"#     ##!"
	"#  #$$@#!"
	"#  . *.#!"
	"########!",
	"dLLUdrruLuLLulDlddrRRRuulDulllddrrRuullDldR",

	// 30
	"########!"
	"##@    #!"
	"#. #   #!"
	"# $$$.##!"
	"# .#  ##!"
	"#  #####!"
	"########!"
	"########!",
	"rrrdddlUruullldDRRdrUllluurrDullddrRlllddrUluururrddlLdlUrrruurrdLulll"
	"ddrrdrUllluurrDurrdLdLLrruulDulldDrR",

	// 31
	"########!"
	"#      #!"
	"# # ##*#!"
	"# #@ $ #!"
	"#.$ .  #!"
	"#####  #!"
	"#####  #!"
	"########!",
	"uulldddRRRluuurrrDDLLrruullldDrdLLrrurrDLddrUUU",

	// 32
	"########!"
	"##@   ##!"
	"###$   #!"
	"### .  #!"
	"# $ #$##!"
	"# .  .##!"
	"####  ##!"
	"########!",
	"rrddlddlluRdrrrUUllDuruurDrdLddlLulldRRRdrUUUruLullDDDuuurrddddlLuuuRurDDD",

	// 33
	"########!"
	"#   ####!"
	"#  $  ##!"
	"##$$ .##!"
	"##@ . ##!"
	"### # ##!"
	"###  .##!"
	"########!",
	"rruuLDDuuulldRurDrddllURRdrddllUdrruuluurDDDuullldRuuulldRurDldRR",

	// 34
	"########!"
	"#   ####!"
	"# $$   #!"
	"# .#.  #!"
	"#  ## ##!"
	"#  ##$##!"
	"# @  .##!"
	"########!",
	"luuuuurDDDuuRRdrruLLLulDlddddrrrrUUddlllluurDldRRRllluuuurrrrrdL",

	// 35
	"########!"
	"########!"
	"########!"
	"# .  ###!"
	"# .# ###!"
	"# @$$  #!"
	"# $.   #!"
	"########!",
	"ldRRRULdlUrrrrdLLLulluurrrDulllddrrdrruLuulllddrUlddRRRuLdlUrrrrdLL",

	// 36
	"########!"
	"# @.#  #!"
	"# .$ . #!"
	"#  #$  #!"
	"#  $  ##!"
	"###  ###!"
	"###  ###!"
	"########!",
	"dRRDDLddrUUUrruulDLLullddrUluRldddRRdrUUdrUruulDLLrddrU",

	// 37
	"########!"
	"#    . #!"
	"# $  $@#!"
	"#.$.####!"
	"#  #####!"
	"#  #####!"
	"#  #####!"
	"########!",
	"LullddLUrurrdLulDlluRRR",

	// 38
	"########!"
	"# .  ###!"
	"#  #@###!"
	"#  $ ###!"
	"##$#  ##!"
	"#   # ##!"
	"#. *  ##!"
	"########!",
	"ddrddlLulUUUdddrdrruuluLrdrddllulldRRluuUluuRDDDDrdLuuurruuLrdddrddL",

	// 39
	"########!"
	"########!"
	"#### . #!"
	"# *@ . #!"
	"# $ #  #!"
	"# #  $ #!"
	"#   ####!"
	"########!",
	"dddlluuuRRRurDrddLLrruullllldddrrUUddlluuRuRRllldddrruUdrrruuulldLrurr"
	"dLrddlUUddlluuR",

	// 40
	"########!"
	"########!"
	"########!"
	"###  ###!"
	"# .. $.#!"
	"#  $$ @#!"
	"####   #!"
	"########!",
	"dllULuurDRddlUlulldRRRdrruLuLLrrddlUruL",

	// 41
	"########!"
	"########!"
	"#####@ #!"
	"##### .#!"
	"# $ $ $#!"
	"#   .  #!"
	"### .  #!"
	"########!",
	"rdDldlluRdrUruulDDlddrrULuurDllldlluRRRlddrruUruulDDllddrrrUUlDrdL",

	// 42
	"########!"
	"#   #  #!"
	"# #.$ $#!"
	"#   $  #!"
	"#####. #!"
	"###   @#!"
	"###   .#!"
	"########!",
	"luuuurDDlLLuRdrruulDDDuullullddRRRurrdDDLuUruLLrddddlluRdrU",

	// 43
	"########!"
	"####@ ##!"
	"###  ..#!"
	"## $#$##!"
	"#   $. #!"
	"#  #   #!"
	"#    ###!"
	"########!",
	"rdDDrdLuLLrruullDlDRRlllddrrrUrUUddldllluurruurRllddRdrUUddldllUluRRR",

	// 44
	"########!"
	"#   @###!"
	"# $$####!"
	"# $ .  #!"
	"## #.# #!"
	"#.   # #!"
	"#      #!"
	"########!",
	"lDulldRDDuRRdddrruuuLLLrdddllluRRluUluurDDDurrrrdddllUlLuuuurDldR",

	// 45
	"########!"
	"####  ##!"
	"#### $##!"
	"# @$.  #!"
	"# ##   #!"
	"#   ## #!"
	"#   * .#!"
	"########!",
	"RRdrruLLuurDDrdddlLLulldRRlluuurRRdRUrDDuulluurDlddrruL",

	// 46
	"########!"
	"#### @ #!"
	"####   #!"
	"## $ $##!"
	"## $  ##!"
	"#.  # ##!"
	"#..   ##!"
	"########!",
	"ldddrUluurrdLulDDrdddllluuuRDlddrrruuLLulDrDurrddlLLruLurrruulDrdLLulDD",

	// 47
	"########!"
	"########!"
	"####. @#!"
	"#  .$  #!"
	"# #  ###!"
	"# $ $ .#!"
	"####   #!"
	"########!",
	"llDlddRUddrruLdlUluullddRRuuRurrdLLLddRRlUUddllluuR",

	// 48
	"########!"
	"########!"
	"#  .# @#!"
	"# # $  #!"
	"# $.#$ #!"
	"## .   #!"
	"##  ####!"
	"########!",
	"ldDrdLLLuuRlddrrruuulDllullddRluurrdrrrddllldlUrrrruulllDuullddRdRUUrr"
	"rddlLrruullldlddrUrrruulDrdLL",

	// 49
	"########!"
	"########!"
	"##     #!"
	"##.## .#!"
	"##*  $@#!"
	"##  #$ #!"
	"##  #  #!"
	"########!",
	"LrddlUUruulllldDrRRdrUlllluurrrDDllddlUUrrrrddlUruLLL",

	// 50
	"########!"
	"#. #####!"
	"# $#####!"
	"#  #####!"
	"# .$ @ #!"
	"# .$ # #!"
	"###    #!"
	"########!",
	"lLrddlUlluurDluuurDldddRuRRddrruuLLLLdlUrrrdLullUUrD",

	// 51
	"########!"
	"#      #!"
	"# #$   #!"
	"# $ @#.#!"
	"##$#.  #!"
	"##    .#!"
	"########!"
	"########!",
	"uulllddRRlluurrrrrddddllllUdrrrruuullDDuuulllddRRlddrRRluUllluurrDulld"
	"drRuRDuRurD",

	// 52
	"########!"
	"#  . ###!"
	"#    ###!"
	"# #$$. #!"
	"#.  ## #!"
	"#@$ ## #!"
	"###    #!"
	"########!",
	"urrUdddrrruuulLuulldRlldddRurUrrrdddlllUUlluuurrrDLulldddrrURlULulDD",
};

const sCollect MuraseCol[] = {
	{ "Hand-Made", MuraseCol1, count_of(MuraseCol1)/2 },
	{ "Autogenerated", MuraseCol2, count_of(MuraseCol2)/2 },
};

const int MuraseColNum = count_of(MuraseCol);

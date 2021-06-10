
// ****************************************************************************
//
//                        Game levels - Aymeric du Peloux
//
// ****************************************************************************
// Author: Aymeric du Peloux
// Email: aymeric.du-peloux@gadz.org
// Original level website: http://membres.lycos.fr/nabokos
// These levels are copyright (c) by Aymeric du Peloux and may be freely
// distributed for non-commercial use provided they remain unchanged, credited
// with the author's name and original web site, and provided the author is notified.

#include "include.h"

// MiniCosmos, (c) Aymeric du Peloux
const char* PelouxCol1[] = {

	// 1
	"xx#####x!"
	"###   #x!"
	"# $ # ##!"
	"# #  . #!"
	"#    # #!"
	"## #   #!"
	"x#@  ###!"
	"x#####xx",
	"uuluuRldd3ruruullDDullddrRlddrruUluR",

	// 2
	"xx#####x!"
	"###   #x!"
	"# $ # ##!"
	"# #  . #!"
	"#    # #!"
	"##$#.  #!"
	"x#@  ###!"
	"x#####xx",
	"rruu3luurlddrrurru2(ulldd)rru3rddlldlludrruuluullddrrurd",

	// 3
	"xx#####x!"
	"###   #x!"
	"# $ # ##!"
	"# #  . #!"
	"# .  # #!"
	"##$#.$ #!"
	"x#@  ###!"
	"x#####xx",
	"rruu3luurldd3rddlludrr3urrddlruuluulldllddrddrruudd2(lluur)rdrdl",

	// 4
	"xxxx####!"
	"#####  #!"
	"#   $  #!"
	"#  .#  #!"
	"## ## ##!"
	"#      #!"
	"# @#   #!"
	"#  #####!"
	"####xxxx",
	"4urRll3d3ruuruul3Duu3l3drrdrru3Lrr3u3lddDlddr3Ud3r3u4ldR",

	// 5
	"xxxx####!"
	"#####  #!"
	"#   $  #!"
	"# *.#  #!"
	"## ## ##!"
	"#      #!"
	"# @#   #!"
	"#  #####!"
	"####xxxx",
	"3ururldldd3ruuruul3duulldllu3rll3drrdrru3lrruuruul3duu3l3dlddr3udrrdrru3lrr3u4ldrddlddr3u",

	// 6
	"xxxx####!"
	"#####  #!"
	"#   *  #!"
	"# *.#  #!"
	"## ## ##!"
	"# $    #!"
	"# @#   #!"
	"#  #####!"
	"####xxxx",
	"luruururldlddrrdrru3lrruuruul3duulldllu3rll3dlddr3udrrdrru3lrruuruuld4ldrddlddr3ud3ruurul",

	// 7
	"x#####xx!"
	"x#   ##x!"
	"## #$ ##!"
	"# $    #!"
	"#. .#  #!"
	"### @ ##!"
	"xx# # #x!"
	"xx#   #x!"
	"xx#####x",
	"lullu3rlluurrdrdllruullddldrurddrruru3lruullddrdlrdrrddlluu",

	// 8
	"x#####xx!"
	"x#   ##x!"
	"##.#$ ##!"
	"# $    #!"
	"#. .#$ #!"
	"### @ ##!"
	"xx# # #x!"
	"xx#   #x!"
	"xx#####x",
	"luurrddllullu3rlluurrdrdllddrrurulluullddldr3urrddlruulldd3rddllddrr3uru3ldlu3r4dlluu",

	// 9
	"x#####xx!"
	"x#   #xx!"
	"##$# ###!"
	"#   $@ #!"
	"# #  # #!"
	"# #. . #!"
	"#   ####!"
	"#####xxx",
	"rdd3luuruulldurr4drruulrdd3ldll3uruurr3durrddll4ullddrluurr3du3l3drruruuld",

	// 10
	"x#####xx!"
	"x#   #xx!"
	"##$# ###!"
	"#  .$@ #!"
	"# #  # #!"
	"# #..$ #!"
	"#   ####!"
	"#####xxx",
	"rddllulur3l3drrur4ulldurr4drruulrdd3ldll3uruurr3d3ullddrll3drruuddll3uruu2(rrdd)llrruulld",

	// 11
	"x#####xxx!"
	"##   ###x!"
	"# . .  #x!"
	"# # ## ##!"
	"#    $$@#!"
	"### #   #!"
	"xx#   ###!"
	"xx#####xx",
	"dlullrddll3udlluururrdrrdullulldrrlddrrdrru3lrddll3udlluururrdldd3ruul",

	// 12
	"x#####xxx!"
	"##   ###x!"
	"# . . .#x!"
	"# # ## ##!"
	"#    $$@#!"
	"### # $ #!"
	"xx#   ###!"
	"xx#####xx",
	"dlu3lddrrudll4ullddrluu5rddlddll3udlluu3rl4drruulrddll3udlluururrdldd4rdl3ulrdd3lddrrudlluurrdruu",

	// 13
	"xxxx####x!"
	"x####  #x!"
	"## $   #x!"
	"#  # #$#x!"
	"#.@.   ##!"
	"## # #  #!"
	"x#      #!"
	"x#  #####!"
	"x####xxxx",
	"rruurr3drd3luulluurr4dldl3urruulldld3ruurur4drd4ldluudrruulluu4rddll",

	// 14
	"xxxx####x!"
	"x####  #x!"
	"## $   #x!"
	"#  # #$#x!"
	"#.@..  ##!"
	"## # #  #!"
	"x#   $  #!"
	"x#  #####!"
	"x####xxxx",
	"4rddll4urrdd4luurr4dldl3u4rdrd3l4ulldld3rddldl3urruulldldrrluu3rur4drd4ldluudrruulluu4rddllrruulld",

	// 15
	"xxx####x!"
	"####  #x!"
	"# $   #x!"
	"#  .# ##!"
	"## #.  #!"
	"# @  $ #!"
	"#   ####!"
	"#####xxx",
	"uulurrl3drrurrd3ldl3urururddulldldd4ruluulldllu3rur3drd3ldluud3r3u4ldr",

	// 16
	"xxx####x!"
	"####  #x!"
	"# $ $ #x!"
	"#  .# ##!"
	"## #.  #!"
	"# @  $ #!"
	"#.  ####!"
	"#####xxx",
	"rrurrd3ldlluru3(ur)3dldlrurrdllr3ulldldduulu3rur3dldldluudrruruu4ldrddrrurrd3ldl3ulu3rurddu3l3d4rul",

	// 17
	"xxxx#####x!"
	"xxx##   ##!"
	"xx## .#  #!"
	"x##   @  #!"
	"##    #  #!"
	"#  $ #####!"
	"# * ##xxxx!"
	"#  ##xxxxx!"
	"####xxxxxx",
	"ld3ldlddrurudllururlddrurudllururrdluldrr3urrddlldldluldruurdru",

	// 18
	"xxxx#####x!"
	"xxx##   ##!"
	"xx## .#  #!"
	"x##   @  #!"
	"##  * #  #!"
	"#  $ #####!"
	"# * ##xxxx!"
	"#  ##xxxxx!"
	"####xxxxxx",
	"3ldldldd3(ru)dldllururu3r3ldlddrurudllurur2(rdluld)u3r3urrdrddlulluldrdlr3urrdrdllruulldlddrulddllur",

	// 19
	"####xxxx!"
	"#  ####x!"
	"#     #x!"
	"#     #x!"
	"### ###x!"
	"# $$  ##!"
	"# . .@ #!"
	"####   #!"
	"xxx#####",
	"ll3urul4dllurdr3ulluurdldrur3dldrrl3urrulldlluurdldrur3drdlrdrrul",

	// 20
	"####xxxx!"
	"#  ####x!"
	"#     #x!"
	"#     #x!"
	"### ###x!"
	"# $$$ ##!"
	"# ...@ #!"
	"####   #!"
	"xxx#####",
	"ll3urul4dllurdr3ulluurdldrurdrrull3dldrrdrrululldllurdrrl3ulluurdldrurdrrull3drdl3ulluurdldrur3drddrrul",

	// 21
	"#####xx!"
	"#   ###!"
	"#     #!"
	"##    #!"
	"####$##!"
	"#  $ ##!"
	"# @   #!"
	"###. .#!"
	"xx#####",
	"rr3uruldlluurdldrur3dldllurrddrrul3uruldlluurdldrur4dldruu3ldrurd",

	// 22
	"#####xx!"
	"#   ###!"
	"# .   #!"
	"## $  #!"
	"####$##!"
	"#  $ ##!"
	"# @   #!"
	"###. .#!"
	"xx#####",
	"rr3urullulldrdrluurdr3dldllurrddrrul3urullulldrdrluurdr4dlr4ulldrur3dlddruu3ldrurdr3urull",

	// 23
	"xxxxxx####x!"
	"#######  #x!"
	"#        #x!"
	"#  $ #.# #x!"
	"#  $## # ##!"
	"###   @   #!"
	"xx###  #  #!"
	"xxxx##.  ##!"
	"xxxxx#####x",
	"3ulldlullddrulu6rur4dllddrrurulddlluu3luulu5rur4dllddrrurullr3ull4d4u3l3drrdruu",

	// 24
	"xxxxxx####x!"
	"#######  #x!"
	"#        #x!"
	"#  $ #.# #x!"
	"# $$## # ##!"
	"### . @   #!"
	"xx###  #  #!"
	"xxxx##.  ##!"
	"xxxxx#####x",
	"3ulldlu3r3d3lud3r3u5lddrulu3rdlru3rur4dllddrrurullrddlluu3lululu6rur4dllddrruruldd"
	"lluu3luulu5rur4dllddrrurul3ull4d4u3l3drrdru3l3u5r3d3lru",

	// 25
	"xxxxx####!"
	"xxx###  #!"
	"x### .. #!"
	"x# $$#  #!"
	"## # #@##!"
	"#       #!"
	"#   #   #!"
	"######  #!"
	"xxxxx####",
	"uulldduurr3d3ldlluruurldd3rdr3uruuldlldlldd4ruurul3d4luurrdulldd3rdr3u",

	// 26
	"xxxxx####!"
	"xxx###  #!"
	"x### .. #!"
	"x# $$#  #!"
	"## # #@##!"
	"#  *    #!"
	"#   #   #!"
	"######  #!"
	"xxxxx####",
	"d3ldllu4rdr3uruuldlldduurr3drddluu3ldlluruurldd3rdrruluuruuldlldlldd3rdrr"
	"uluurul3d3ldllu4rdru4luurrdulldd3rdrru3lrruu",

	// 27
	"x####xxx!"
	"x#  ####!"
	"x#     #!"
	"x# #.  #!"
	"##*##$##!"
	"#      #!"
	"# # @  #!"
	"#    ###!"
	"######xx",
	"uruululldduurrdrddldd3luurrdrr3uru3lul3duu3r4dllurdruudldd3luurrl3u4rdl3dllurdr3uru3luldd",

	// 28
	"x####xxx!"
	"x#  ####!"
	"x#     #!"
	"x# #.  #!"
	"##*##$##!"
	"#    * #!"
	"# # @  #!"
	"#    ###!"
	"######xx",
	"rruluululldduurrdr3dllurdd3luur3urrdrddrdlld3luu3rll3urrdrru3lul3duu3r3dldd3luurldd3r"
	"uurrdl4u3l3drr3ldd3ruruuddld3luur3u4rdlu3l3drrdr3uru3lulddu3r3dlddludlluu3r",

	// 29
	"########!"
	"#   #  #!"
	"#      #!"
	"## #.  #!"
	"#    ###!"
	"# # . #x!"
	"# $$# #x!"
	"###  @#x!"
	"xx#####x",
	"lluur3ullddlddrluurrdruuddrd2(dlluu)rrluurrddurruuldrdl",

	// 30
	"########!"
	"#   #  #!"
	"#      #!"
	"## #. .#!"
	"#    ###!"
	"# # * #x!"
	"# $$# #x!"
	"###  @#x!"
	"xx#####x",
	"lluuddrruul3ullddrdrrddlluuruurullulldrddlddrluuruurrdrru3luldrr3drddllulluurrll"
	"ddrruruurullulld3r3dldlluurrdruurruuldrdlullulld3rddlludrrurruuldrdlullulld4rurd",

	// 31
	"#####xx!"
	"#   ##x!"
	"# #  ##!"
	"#. #$ #!"
	"#  @  #!"
	"#.##$##!"
	"#    #x!"
	"######x",
	"ll3ur3(rd)luulull5d3ruulluluur3(rd)ldd3l3u3d3ruulluld3ruululld",

	// 32
	"####xxx!"
	"#  ###x!"
	"#    ##!"
	"# .#$ #!"
	"## @  #!"
	"x#.#$##!"
	"x#   #x!"
	"x#####x",
	"luurrdrdluull4drruulrddll3uluurdrrdrdlddll3ulur4drruulrddll3uluur3drruulrddlluluurd",

	// 33
	"x#######x!"
	"x#  #  ##!"
	"## **$. #!"
	"#   #   #!"
	"#   @ ###!"
	"#  ####xx!"
	"####xxxxx",
	"ll3urdldd3ruruuldllulddlddrurudrruruuldllddrrudlluurrdd4lurd3ruulluld3rd2(dllu)rurlddru",

	// 34
	"x#######x!"
	"##  #  #x!"
	"#  **$.##!"
	"#   #   #!"
	"### @   #!"
	"xx####  #!"
	"xxxxx####",
	"rr3uldrdd3luluurdrrurddrddluludlluluurdrrddlludrruulldd4ruld3luurrurddu3ldllurdrdrruruldrrddluu",

	// 35
	"xx####xx!"
	"###  ###!"
	"#   *$ #!"
	"# #  #@#!"
	"# # *. #!"
	"#   ####!"
	"#####xxx",
	"dlluluurd3l3drru3ruu3l3rdd3lud3ruulldldr3uldrddldll3urrurddu3l3drruuddll3urr",

	// 36
	"#####xxx!"
	"#   ##xx!"
	"# #  ###!"
	"#   *$ #!"
	"###  #@#!"
	"xx# *. #!"
	"xx#  ###!"
	"xx####xx",
	"dlldl3ulluurrdrdldd3ruulldldr3ulduullddrrdrddl3ulluurrdrdduulullddrr",

	// 37
	"xx####x!"
	"x##  #x!"
	"##   ##!"
	"#  *$ #!"
	"# # #@#!"
	"#  *. #!"
	"###  ##!"
	"xx#  #x!"
	"xx####x",
	"dlluullddrluurrddrruullddlluururddurrddll4urdl3drruulrddlluuddrddluurruu4lddrrlluurrduruuld",

	// 38
	"xx####xx!"
	"xx#  ###!"
	"x## .  #!"
	"##@$$$ #!"
	"# . . ##!"
	"#   ###x!"
	"#  ##xxx!"
	"####xxxx",
	"d3rurulldrdlldllururrdlr3ulddu3rdldlulldrllddru",

	// 39
	"xx#####x!"
	"###   #x!"
	"#     #x!"
	"#  #.###!"
	"##@$$$ #!"
	"x#.#.# #!"
	"x#     #!"
	"x#  ####!"
	"x####xxx",
	"ddrr3u3dl2(luur)urrdlddlluururdll4d4ruu3l3rdd4lu2(urrd)d3ldlurruullulurrurrdlddlluururd",

	// 40
	"xx####x!"
	"x##  #x!"
	"## . ##!"
	"#@$$$ #!"
	"#. .# #!"
	"# #   #!"
	"#   ###!"
	"#####xx",
	"drrudllururdll3drrurruulluld3rddllulrdrruulluurdlldrddrruulrddlluulldru3rddlldllu",
};

// MicroCosmos, (c) Aymeric du Peloux
const char* PelouxCol2[] = {

	// 1
	"####x####!"
	"#  ###  #!"
	"# $ * $ #!"
	"#   +   #!"
	"### .$###!"
	"xx# . #!"
	"xx#####!",
	"3ruulDrdLLuLDlddrrUdlluurDuurrdLulD3luurDRlldRR",

	// 2
	"#################!"
	"#  #  #  #  #   #!"
	"#.$   #  #.$    #!"
	"#  #.$ .$   #   #!"
	"# @#  #  #  #   #!"
	"#################!",
	"l3urDrrddrUrr3Ru3RdrruLulD3lddrUlu3RurD3ld7luurDld6RdrU"
	"lu3Rurrd4LulDrd3LdlU3lu3lddrUlu3RurDld6RdrUlu3Rurrd4LulD"
	"rd6LdlUru3L3rd6ru4rddlUru4LulD4rddlUru3Ld6L3ruulD",

	// 3
	"xxx####!"
	"####  #!"
	"#  $  ##!"
	"# #$#  #!"
	"#  $   #!"
	"#.###  #!"
	"#.#### #!"
	"#. @   #!"
	"########!",
	"ll3urRR3l3d5r4ululLDurrdrddlUlLuurrDrdLr3d5l5uRRddLruul"
	"ld3DuurruuRurDDrddlU3LruulldDDurruurrDrd4LruulldD",

	// 4
	"xxxxxx####!"
	"####### .#!"
	"# $ $ $$ #!"
	"#   @ ...#!"
	"###   ####!"
	"xx#####!",
	"4ruulDrd3LuRdldlluuRRlldlluRRddrruLL5ruulDrd3LuRdrruulDrdLulldd"
	"lluu4RdrU3ldRRlldllu3R3lulld4R",

	// 5
	"xxxxx####!"
	"x#####  #!"
	"x# $ $  #!"
	"x#.# #. #!"
	"x# $@$ ##!"
	"##.# #.##!"
	"#  * *  #!"
	"#   #   #!"
	"#########!",
	"RlddRdrruLuUUruul3DlluuRl4dLdlluR4uRRddLrddLdlluRuUrrddLdlUrrRdrr"
	"u3LuurrDullddrdrruL3uruul3DlluuRlddrruruulD",

	// 6
	"x#####!"
	"x#   #!"
	"x# # ##!"
	"## *  ##!"
	"# $*$  #!"
	"#  * # #!"
	"## .  +#!"
	"x#######!",
	"4luRd3ruululLDDlluRUrDurrdLull3d3RlUULDlluRdrruruLuull3DldR",

	// 7
	"x#####!"
	"x#   #!"
	"x# #$##!"
	"## @  #!"
	"# .#$ #!"
	"# .  ##!"
	"# .#$#!"
	"##   #!"
	"x#####!",
	"lddrrUruLddll4urrDDLruulldDDlddrUrrUruLuullddDldR4urrddLruulldDDld"
	"drdrr3UruLuull3dD4urrddLruulldDrrddL",

	// 8
	"xx####!"
	"###  ###!"
	"#   .  #!"
	"#  $ $ #!"
	"##.#+#.#!"
	"x# $ $ #!"
	"x###  ##!"
	"xxx####!",
	"uurr3dLdl3ULuR3drruuLrddlluUlulldRddRRuuLulD4rddLdlUUdrruulLLuurD"
	"DrruLdllulld4RurD",

	// 9
	"xxxx####!"
	"#####  #!"
	"# $   $#!"
	"#  .#. #!"
	"## ### ##!"
	"x# .#.  #!"
	"x#$ @ $ #!"
	"x#  #####!"
	"x####!",
	"ldlUUrdrrurrdLLr3uluurDDlulldllu4RdrDDldLLulUdrdrrurrdLLr3uluurDDl"
	"u4ldRddrddl4Ulu4RdrDDldLruruuluurDDlu3l5drUrrurrd4Ldl4Ul"
	"u4RdrDulu3l4d5ruLuuluur4Drd4Ldl4Ulu3Rll4d4r5ulD",

	// 10
	"x#####!"
	"##   #!"
	"#  #.##!"
	"# $$. #!"
	"## @  #!"
	"x# #. #!"
	"x# $ ##!"
	"x# ###!"
	"x#  #!"
	"x#  #!"
	"x#  #!"
	"x####!",
	"rddLruulldDrr5ulldDRluurrdDrdLddlluUddrr5ulldldRRluurrdDll3dDDr"
	"ddl6UddrruruuluulldldR3drruUU3dlluuRlddrruruulDlluR",

	// 11
	"xx#####!"
	"xx#+  ###!"
	"x##*# $ #!"
	"x# *    #!"
	"## * # ##!"
	"#  *   #!"
	"#   ####!"
	"#####!",
	"rrddlddLdlluRuuRRddLruulldRddlU4ruuLuull3D3urrddLruulldD4ruLd3l"
	"uurrDr3dllL3U3d3ruuLLrrdd3luU3dlluRdrU3ruu4lDu4rddllUdrruul"
	"LddldlluR",

	// 12
	"######!"
	"#    ##!"
	"#  *  #!"
	"# $*$ #!"
	"## * ##!"
	"x# * #!"
	"x# . #!"
	"x##+##!"
	"xx###!",
	"uluuRDDluuUluurDurrdL3D3urrdLulDuullddRddrrUULDruruLulDDuulldRldR",

	// 13
	"x#####!"
	"##   ###!"
	"# ...* #!"
	"# #@$# #!"
	"# $    #!"
	"### #$##!"
	"xx#   #!"
	"xx#####!",
	"d3ruuLLulD3rddllUdrruulLddlddrrUdlluur3ulldRurDrrddLddlluuU3drruur"
	"uullulldlddRluururrdrrddlddlluUlluurRR3lddrrUdlluururrdL4drruuLUdrd"
	"dlluUU",

	// 14
	"x#####!"
	"x#   #!"
	"x#.#$##!"
	"x#    #!"
	"x#.#$ #!"
	"x#   ##!"
	"x#.#$#!"
	"##   #!"
	"# .#$#!"
	"# @  #!"
	"#  ###!"
	"####!",
	"4urrUruLddll4urrDDLruulld3DrrUruLLrddllDDrrUUddllDlddrUrrUUllDldR"
	"4urrUruLuulld5DrrUUll4urrddLruulld3DrrUruLLrddlluUrr4dllUUdd"
	"Dlddr3UrrddLruulldlddrU",

	// 15
	"xx####!"
	"###  #!"
	"#    ##!"
	"#  #  ###!"
	"## . . .#!"
	"##$##.#$##!"
	"# $  @ $ #!"
	"#   ##   #!"
	"##########!",
	"lldlluR3UluRRurDDr3dlLdlU4rdrru3LuurrDullddLLdlluRUUrRR3lUluRRur"
	"DDr3dlLdl3UrRllUluRRurDDrDLuull4d4rdrruLuuLrdd4Ldllu5RdrUU",

	// 16
	"x####!"
	"x#  #####!"
	"x#   $  #!"
	"x#$# #  #!"
	"##  +  ##!"
	"#  #.#$#!"
	"#  $.  #!"
	"### . ##!"
	"xx#####!",
	"llddRdrUlluurruull3DldRRdrruLUUllddRdrUlluu4ruuLLDuLul3DrRllDldRRd"
	"rruLUUllddRluurrdDrr3Uru3LDDuurrddLruullLul4DldRR",

	// 17
	"####x####!"
	"#  ###  #!"
	"#  $ $  #!"
	"# $#.## #!"
	"##  .   ##!"
	"x# .@.#$ #!"
	"x## #    #!"
	"xx#   ####!"
	"xx#####!",
	"rurrDrdLLruulldllddrrUUl3uRRur4DrdLLruulLLdlddrrUU3luUluurD4RurD"
	"3DrdLLruulLdllddrrUU3luUlu3RdDuuRRur4DrdLLruulLrruu5l3drddrrU"
	"ULrdrr4u3ldDuullddRDRUlluu5rddlLrrddlldllU",

	// 18
	"xx#######!"
	"x##  #  #!"
	"x# * *  #!"
	"##   #  #!"
	"#  *#+ ##!"
	"#     $#!"
	"#####  #!"
	"xxxx####!",
	"d3luurruulDl3d3ruruuLLdLDldRuuruulDlDDuu4rddlddr3Uru3LdLddRluur"
	"urr4dlUllulld4Rdr3UruL3d3luuruulDDulDDld4Rdr3UruulDLLdllddrr"
	"rruUruL",

	// 19
	"x#######!"
	"x#  #  #!"
	"x#$ + $#!"
	"x# .#. #!"
	"##$.#.$##!"
	"# $ . $ #!"
	"#   #   #!"
	"#########!",
	"l4dlluRdrUrr3ulldlDuruulDDrurr3dllUUluR4dlluRdr3UluurDldDrddllu"
	"RdrUrrdrruLLuurDl3urDDl3drruLdl3UruulDrdDlddrruLdlU",

	// 20
	"xxxx#####!"
	"#####   ##!"
	"#   #$#  #!"
	"#   $.@# #!"
	"## ##..  #!"
	"#  #.  ###!"
	"#  $ $ #!"
	"#  #####!"
	"####!",
	"ddlldLrurrurruulull3DrddLLuRdrUluuLLulld3Rllddlddr3UddRRurrd3Lrruu"
	"UrDrruulull3Dullulld3Rllddlddr3Udd4rULuUrDrruulullDDllulld3Rlldd"
	"d4rU",

	// 21
	"xx#####!"
	"xx#   ###!"
	"###*# $ #!"
	"# $ @ # #!"
	"# # ..  #!"
	"# . #$###!"
	"##$.  #!"
	"x#  ###!"
	"x####!",
	"dldlluuRRdrr3ullDDllddrrdrrUUddllulluurrDrrddlldlU3ruullDurrddlL4u"
	"urrdDDrruuLrdd4lddrrUdll5urrDrrddlLLrddlluUUllddRluurrd4ruullDu"
	"rrddlLddllUlluurrR3lddrrddlU3ruurruullDllDD",

	// 22
	"xxxxx####!"
	"x#####  #!"
	"x# $    #!"
	"## #.##$#!"
	"#  # @. #!"
	"#  .$ # ##!"
	"## ##.#  #!"
	"x#    $  #!"
	"x#  ######!"
	"x####!",
	"3d3luurRu3r3dLLuUl3u3rDDlLd3l3uRRdDr3dLLdl3UrR3ulldDldR3ur"
	"rdd3rDDrd3LuUddLLdl3URR3ulldDldRdd5r3ulLrr3dlluUdd3luuRRURDl"
	"ll3urrRRur5Drd5LdlUUd5r5u5lddldR",

	// 23
	"#####!"
	"#   ###!"
	"#.#$  #!"
	"# @$* #!"
	"#  $  #!"
	"##.#.##!"
	"x#   #!"
	"x#####!",
	"3drruuULr3dlluuRll3urrDDuull3drddrruUruuLrddlddlluul3urrDrrddlLrr"
	"uullDLDRuurrdLD3lUrR",

	// 24
	"xxxxx#####!"
	"x#####   #!"
	"x# $ . # #!"
	"x# # $$  #!"
	"## ## # ##!"
	"#  $.$. #!"
	"# ##   ##!"
	"#  .@.##!"
	"#######!",
	"rururuuruulldlDururrddlddldlluRdd4luur3uRRdrDDuuRuurrddLddLdLUdd3l"
	"luur3RlDrdLuull3urrdr3D3uRuurrddLLuLDrrddLdllull3urRd3rddlLL3ru"
	"ullDurrddldlluRuulull3dR",

	// 25
	"xxxxx####!"
	"xx####  #!"
	"xx#..   #!"
	"### $@# ##!"
	"#  $ #.. #!"
	"# $   $  #!"
	"####  ####!"
	"xxx####!",
	"urr3dLLdlUlUlld5Ruruu4lDurrdLrurrddldllULrdrruruu4lDu4rddldl"
	"luUluRRdlddrrurrd3Ldl3UruRurDDulldlluRRdldd4ruLd4lUUddlluRRdrUUr"
	"uRurDD",

	// 26
	"xx########!"
	"xx#   #  #!"
	"xx#   $. #!"
	"x###$##  #!"
	"x# $.## ##!"
	"##  .*   #!"
	"#  #$#   #!"
	"# .@ #####!"
	"##   #!"
	"x#####!",
	"luurrRRdrU5lddrrUdlluur3RdrruLUUruulDLLulldR3DlluRdrrRdrru5Lul"
	"DDldRdrruUddll3ur3Rdrru4L3ruUruul3DuulLulldRdDDrrdrruLLr3ulLull"
	"d3Rllddll4drruUU3dll3uRl3drruL",

	// 27
	"x#####!"
	"x#   ###!"
	"## #$ @#!"
	"# . $  #!"
	"#...#$##!"
	"# #  $ #!"
	"#  #   #!"
	"##   ###!"
	"x#####!",
	"dlLLddrdrruLdldlluluurrurrDDrdL3ullddRluurrdDllullu3RlluurrDrDLLddrr"
	"UdllullddrdrrUdlluluurrururrdLddrdL4ululldDrddRluuluurrdrdLuullddldd"
	"drdrrUrUUddldllul3uruurrddLdLrururrdLululldDrddRdr3ULuullddlDR3urrd"
	"dLruulldD4ruLd3luurrDrdLLrr3dldllulU",

	// 28
	"xxxxx####!"
	"xxxx##  #!"
	"xxx## . #!"
	"#### $  #!"
	"# $ $.@##!"
	"#  .  ##!"
	"#######!",
	"ldlluRuRldd3luRRdrrUrUruulDlDlDururrdLdLLuRdrUdllLdllu3RurrdLdLLuR3ldR",

	// 29
	"xxx####!"
	"x###  #!"
	"## @$ #!"
	"# .$  #!"
	"# .* ##!"
	"# .$ #!"
	"##  ##!"
	"x####!",
	"lddRUrruulDrdLLdlddrUrULrUruulDDlddlluuRuRDrruulDrdLulldldd3rUULDrdLr"
	"uuruulDrdLulD",

	// 30
	"######!"
	"#   .#!"
	"# . @#!"
	"# # ###!"
	"# # $ ##!"
	"# *.   ##!"
	"#### $$ ##!"
	"xxx##    #!"
	"xxxx##   #!"
	"xxxxx#####!",
	"l3d3rDu3l3ull3d3RdRdRdrruLuLuLuLrdrdrddlUlUlUlUUddll3ururrdL3d"
	"rdrdrruLuLLdRurDlluL4ull4d3RdrruLuLrddlUl3U3drruLd3l4urRddDr"
	"dL3rdrddlUruLdlUruLL",

	// 31
	"xx#####!"
	"###   #!"
	"#  *# ##!"
	"# #  * #!"
	"# *  # #!"
	"## #+  #!"
	"x#   $##!"
	"x###  #!"
	"xxx####!",
	"rruuLuullDllddRRlddrrdrU3luuluurrDuurrddLDDuurrddLdLUrruuluulldllddrd"
	"dRluuluurrurrddrddllULURddrddlU",

	// 32
	"xx#####!"
	"xx#   #!"
	"###*# ##!"
	"#    * #!"
	"# #  # #!"
	"# * +  #!"
	"##  #$##!"
	"x##   #!"
	"xx#####!",
	"luullddRdrU3ruuLLddlddrrUdlluuruuLDDruuruullDDrdd3luuRRDrdL4urrddr"
	"ddLddll4UR",

	// 33
	"xx####!"
	"###.@###!"
	"#      #!"
	"# *..# #!"
	"## #$$ #!"
	"x#    ##!"
	"x##$# #!"
	"xx#   #!"
	"xx#####!",
	"d3ldRddrrUULrddlluUrrddrddllUdrruuluullddRRuuluur3DuurrddLDLUUdrruul"
	"LdllddRddrrUUddlluuluurruulD3rddL3dlluuluuluR3drddrr3uruulldLruulD"
	"lDu4rddl3dlluuRUUdrruulL3dlddrruUluuLUlldRu4rddLdlUdllU",

	// 34
	"x#########!"
	"x#  ##   #!"
	"##  *  # #!"
	"# .$#*@  #!"
	"#   *   ##!"
	"#########!",
	"dlLLUluurDRR3ldld4RU3ruullDurrddld4LUluurDrRddllUdrruulLdlldRRuu"
	"ulD3rddrruLdlU3ruullDLddrruL",

	// 35
	"########!"
	"#   *  #!"
	"# +*** #!"
	"##  $  #!"
	"x##   ##!"
	"xx##  #!"
	"xxx####!",
	"drdrruruulDuLLDRDulldRdRUluu3rddLLdlUlulu3RDLddrUrruuLDrdLLdlUrddrUU",

	// 36
	"x####!"
	"x#  #!"
	"##.@#!"
	"# .$#####!"
	"# $$ $  #!"
	"# ..    #!"
	"####  ###!"
	"xxx####!",
	"ldldd3ruRd4luurDRdrruLLUluurDDllddRRlUUrDrrddlUruLLullddrRuulD3rdr"
	"ru4LdRluullddRUrrdLrurrdLL",

	// 37
	"xxxxx####!"
	"######  #!"
	"# $  $  #!"
	"# #  .# ##!"
	"#  . #.@ #!"
	"##$# *   #!"
	"x#   #####!"
	"x#####!",
	"uulLdlluRRdld3luuRRdr3dllUdrr3uruRur3DldLrurrdLLr3ulldllullddRddr"
	"rUUddlluuluurrdRlu3Rur3DldLruruu6lddrddrrUULrdrrurrd3Lrr3u4l"
	"ddrUlu3RurDDu6lddRddrrU4ruLd3lUUlu3Rur3DrdLL",

	// 38
	"xx#####!"
	"x##   ###!"
	"x#      #!"
	"x#*#*#* #!"
	"x# #@$ ##!"
	"## # #.#!"
	"#      #!"
	"#   #  #!"
	"########!",
	"ddrruuUruLLulldl3D3ururrdr4dlluuRlddrruUdd3ldlluR4ururrdLDDrrUr"
	"uLLulDrr4dllLdlluR4uRurrdr4dllLdl3Udd4ruullDurruululldRDDrruu"
	"LulDrr4dlLLdllu4Rdr3UllDurrddlLLdllu4RdrU",

	// 39
	"xx#####!"
	"###   ##!"
	"# $$.. #!"
	"#  .@# #!"
	"## #   #!"
	"x# $* ##!"
	"x###  #!"
	"xxx####!",
	"drddlUruruulldllddRRdrU3luurrDullddrR4ulDr3dlluuRlddrruUluurrdrddL"
	"ruulullddlddrrdrU3luurrDuluurrdrddLdLruruululldRd3luRdrruulDrdDrddlU"
	"UULulldRddR",

	// 40
	"xx#####!"
	"###   ##!"
	"#  $#  #!"
	"#  .@.$##!"
	"##.# #  #!"
	"x# $    #!"
	"x##  ####!"
	"xx####!",
	"llddRdrUlluu3ruullDurrddlLrrurDDrd3LUdrruuluullddRlulldRddRRuuLrddll"
	"uUruurrdr3dLr3ulullddlluR3drdrUrruu3LrruullDlDururrddlL3rddllUdrr"
	"uuluullddRlulldR",
};

// NaboCosmos, (c) Aymeric du Peloux
const char* PelouxCol3[] = {

	// 1
	"x#####!"
	"x#   ##!"
	"## * .##!"
	"# $$*  #!"
	"#  * . #!"
	"## @ ###!"
	"x#####!",
	"ruruulLrrddldlluRURlddrUrUdlluRuulDDrdrruLLddlluRUdlluRdrR3ullDDldRuR",

	// 2
	"xx####!"
	"###  ###!"
	"#   *$ #!"
	"# #  # #!"
	"#   ** #!"
	"###  #@#!"
	"xx# ** #!"
	"xx#  # #!"
	"xx# *. #!"
	"xx#  ###!"
	"xx####!",
	"3dlLdl4UrDldd3ruuLLDldR3ulUlluurrDrDLrDDrruuLrddlluluurDrrddllDlU"
	"Ud3ruullDldR3uluur3DrruuLrddlluluurDrrddllDlU3ruu5ldd3RUd3luu"
	"rrDullddrR",

	// 3
	"######!"
	"#    #!"
	"# ##$###!"
	"# . *  #!"
	"##  * +#!"
	"x#  $  #!"
	"x# #*###!"
	"x#   #!"
	"x#####!",
	"lLLuR3luu3rDDlddlUruruu3lddRdrdRUrrdLLulluluu3rdDuu3lddrdrRdrruuL"
	"rddlluUdR3l3drrUUruL3dlluuRlddrruUruulDDlluuluu3rDDLrrddlUdlluR",

	// 4
	"#########!"
	"# .@.$. #!"
	"# # $   #!"
	"# ##$####!"
	"#   $  ##!"
	"### .   ##!"
	"xx###    #!"
	"xxxx##   #!"
	"xxxxx#####!",
	"ll3drrR3l3u3rRdrru4LdRDD3l3uRRdrddldRRdrruLuLLdRurDldRlul3ulu"
	"ll3drRll3urrdrdDldR3uRurrdLLuL3D3l3ur3RdlddrrddlUruLLuulull3dr"
	"RdR3UruLLr3drrddlUruLdl3Uddrr3drruLdlUruLL",

	// 5
	"xxxx####!"
	"xx###  #!"
	"xx#    #!"
	"###  # #!"
	"# *$ **##!"
	"# # +#  #!"
	"#  #    #!"
	"##    ###!"
	"x######!",
	"lUruurrdDDrdLLd3luluuRRdrU3lddrd3ruruu3L3ruu3lDu3rddllUluR3dlU"
	"3rddldlUdlluluu3RuuRurDDu3lDrdL",

	// 6
	"xx######!"
	"###    #!"
	"#  *##.#!"
	"# #.  .#!"
	"# $ $  #!"
	"##$#$#@#!"
	"x#    .#!"
	"x#######!",
	"ululldRurr3dllUURuruu3lDlldd3RddrruUU3dlluuR4luurrDullddrRRddllU"
	"drruuluullddRdd4ruULuLrdrddlluUddlluuRUdldd4ruuluLDDullddrRR",

	// 7
	"x####!"
	"x#  ###!"
	"x# *$ #!"
	"x#  # #!"
	"## ** #!"
	"#   #@#!"
	"#  ** #!"
	"#   # #!"
	"## *. #!"
	"x#  ###!"
	"x####!",
	"3dlLdlUUluurrDuluurDl3urDl3dlddrUdd3ruuLLDurruuLLDurr4dlLulluuRD"
	"Rddrr6uLLDlDDuRuurr6dlluuUllddRluuruururr6dlldlU3r6ul"
	"ldlddrdDuullddRdRluluurrdDlluR3uruul4DrUUddllddrrUUlldR",

	// 8
	"xx####!"
	"###  #!"
	"# .* ##!"
	"# #   #!"
	"#@**  #!"
	"# #   #!"
	"# $* ##!"
	"###  #!"
	"xx####!",
	"uurRurDDrddllUdrddlUruruulDuu3lddRRUdllddRRUdll4urRdrrddLULuull4d"
	"rrdrUUd3l4urrddD3ull4drRurruuLrddlldll4urrurD3l4drruuUddrru"
	"uLuLrdrddllddrUluuUrrddLruulldDrruL",

	// 9
	"xx####!"
	"###  ####!"
	"# $     #!"
	"# . *#  #!"
	"###.@#$##!"
	"# . *#  #!"
	"# $     #!"
	"######  #!"
	"xxxxx####!",
	"DldRl4u3rdDDrddl4Uru3Lul3DrddRllUlld3RuuUlDrdL4urDrr3drddlU"
	"3Uru3LDDlddrRlluur3ulDDlluRRurDrr3drddlU3luUrULuurDl4d3r3UruL"
	"LLulDD",

	// 10
	"x####!"
	"x#  ######!"
	"x#       #!"
	"## # #.$ #!"
	"#  * ## ##!"
	"# ** # @#!"
	"###   * #!"
	"xx####  #!"
	"xxxxx####!",
	"uUlull4drRll4ullddRluu4rdrddldlluUUdlluurR4dlUr3ullddRdrdrrur"
	"uuluLLdDldd3rdrUUd4luurDlulldRRuruuLulDDu4rdrru4Lddldd3RurUdld"
	"3luurD3luRdrdR4uLul3DldR3u6rdLddlddr4Uru5Lul3Duurr4dR",

	// 11
	"xxx#####!"
	"####   #!"
	"#      #!"
	"#  ##.##!"
	"## #@  #!"
	"x#..$  #!"
	"## #$###!"
	"#   $ #!"
	"# #   #!"
	"#   ###!"
	"#####!",
	"ruu3l5drdrruLdldlluur5u3r3dLLrDDLddlluuRu3Ulu3RurD3l3drrd"
	"drdL3ullddRllddrrUrUUddldlluuruurRurrd3Lr3dldlluurRdrUUdlluUrRurrdL"
	"LddlluuUUlu3RurrdLDDl3dll5urRurD3l5drruuLrurrdLL",
	
	// 12
	"xx#####!"
	"###   #!"
	"#   # ##!"
	"#  **+ #!"
	"## * $*##!"
	"x# # #  #!"
	"x#      #!"
	"x###  ###!"
	"xxx####!",
	"uulldlddRluurDuurrddLL3rDDrd3LuUddrruuL3ullddRlulldR3dRRuUrUr3dLd"
	"lUlluuRRlluurDl3d4r3ulLrr3dllUURlddll4ururrD",

	// 13
	"####xx####!"
	"#  ####  #!"
	"#        #!"
	"#  ####  #!"
	"##@##. $##!"
	"#  #.$* #!"
	"#      ##!"
	"#  #  ##!"
	"#######!",
	"dd4rUrUUru5L4r3dldlluRuRlddrUd4l3uluur4Dld3Ru3rUUru4L"
	"L4r3dlluRdrUd3lddrU3l3uluur4Dld3RuRurrUru5L4rddlldldlluu"
	"uluurD5r3dLdLLuRurruu5l3DlddrURl3UluurD5rddll3dlUruurruul"
	"4l3Dld3RdrUU",

	// 14
	"x#######!"
	"##  #  ##!"
	"# .$*$. #!"
	"#   #   #!"
	"##  *  ##!"
	"x#@ *  #!"
	"x#######!",
	"4urDlddrRRdLruuruulDLLDldRRdrrUUruLLr3dllulldR4ulDDrdrRUruulDLLdd"
	"rrdrUUd3luurrDrdLuulldlluRR3dlUU",

	// 15
	"x#######!"
	"##  #  ##!"
	"#  **$. #!"
	"#   #   #!"
	"##  *  ##!"
	"x#  * @#!"
	"x#######!",
	"4ulDrddlLLdRluuluurDRRDuurDrdLdLLdllUUlu4RDrddLLuRuu3lddRluu3rdr"
	"ruLL3drUUluLLDlluRRdlddRUU",

	// 16
	"x####!"
	"x#  #!"
	"x#. ##!"
	"x#$@ #!"
	"## * #!"
	"#  * #!"
	"#  * #!"
	"## * #!"
	"x#  ##!"
	"x####!",
	"ulDrrddLUUr4dLUUdlluRdrr3ullDDuurrdLDuuluurDDrddllUUrrdLr3dlUUlldR"
	"urrddldlUUdrruulDlluRdrr3ullDDldR",

	// 17
	"x######!"
	"x#  @ ##!"
	"## #   #!"
	"# .*.*.#!"
	"#  $ $ #!"
	"#####$ #!"
	"xxxx#  #!"
	"xxxx####!",
	"3dLruurrddLUr3dlUUruuLu3lddRdRRdrU3lulldRRl3u3rdDLLdlU3ruulDrdD"
	"rddl3ULuurDrDDlUruL4drUUlulLdlluRdrRuruu3lDurrDrdDrddlUU",

	// 18
	"x#######!"
	"##  @  ##!"
	"#  ###  #!"
	"# # . # #!"
	"# #$. $ #!"
	"# $   ###!"
	"###$. #!"
	"xx# . #!"
	"xx#####!",
	"lldl3d3R3l3uru4rdrddLLDlddlUruruulDDrurruulu4ldl3drRddrrUUddl"
	"luuR3l3uru4rdrddlLullDurrdDlLddrrUdlluurDuU3ruulu4ldl3dRRdrrUd"
	"lluurD3l3uru4rdrddlL",

	// 19
	"xx#####!"
	"xx#+ .###!"
	"xx#     #!"
	"xx## $  #!"
	"x###$####!"
	"## $   #!"
	"#  . * #!"
	"#   #  #!"
	"########!",
	"rddDDrrddlUruLdLLdllu3R3URurrdLLuulldRRl3DrrddlUruLdL4U4dLdlluR"
	"uRRdrruLdlLr3UruuLDD3ruLdlUdlDDldRldlluR",

	// 20
	"x#####!"
	"x#   #!"
	"##*# #####!"
	"# * $ *  #!"
	"#   . @  #!"
	"###  #*###!"
	"xx##   #!"
	"xxx#####!",
	"luRd3luRd3luRdrr3ullDDldR3urrddLruulldDrrdrruLrdrruLLdllddrrUdlluu"
	"Ulluurr3DrRddllUlUR3ullddldRRl3urrddLdlUrddrdrr3urrdLul3LddrUluRR"
	"RDL3ruL",

	// 21
	"xx#####!"
	"x##   #!"
	"##  #.##!"
	"# @ $  #!"
	"# * *  ###!"
	"##*#*#   #!"
	"x#       #!"
	"x##  #####!"
	"xx####!",
	"rdRl3urrddLrr3dllUURurDDullddrRuul3ulldldldRRluurDRDrU3ldRRurr3dl"
	"3lUd4rurrd4LUUlulldRddRdrUrr3ulLLulDDurrdLrurrdL",

	// 22
	"#####!"
	"#   #####!"
	"# #   $ ##!"
	"#.$.$..@ #!"
	"#### #$  #!"
	"xxx#   ###!"
	"xxx#####!",
	"llulldRddrrUruuLLrrddlUddlluuRR3luulldd3RddrruuLuLDrrdrruLuLLdR5l"
	"uurrDullddr3RuL3rDLddllUURurD5luurrDullddr3RuLd3luurrDrdLL3rur"
	"rd3LddrrUdlluururrdrdLuLull3drrU",

	// 23
	"xxx####!"
	"x### @##!"
	"##   * ##!"
	"#  ##*  #!"
	"#    *  #!"
	"##  #$# #!"
	"x#   .  #!"
	"x#  #####!"
	"x####!",
	"ldllddrdd4ruulLDuruuLDDrrddl3LuuRRDu3luurRurDrdr3dlLuull3dlUUrur"
	"rddL3r3ulu4ldldR3drUrruuUrrdLrddlluUdd3luuRRlDldRR",

	// 24
	"#####!"
	"#   ####!"
	"#    $ #!"
	"## ##* ##!"
	"#  #..  #!"
	"#    $$ #!"
	"#  #@.###!"
	"#######!",
	"uurruu3LulD4rddlUdlddrUUrrdL3uLDuLLulldRDDlddrUrruRlddrUrULuulLull"
	"dRdDld4R3ulLul3Dld3RdrUUrrdLulD3l3u4rDu4l3d5ruL",

	// 25
	"#####x####!"
	"#   #x#  #!"
	"#  $###@ #!"
	"## $  $  #!"
	"x# ....$ #!"
	"x##  #  ##!"
	"xx#######!",
	"dLddrUUd3luRRd4luRRlluurDlddrruLdlUrrdrruLrdrruLruulDDrd3LuRdrUllL"
	"LdRl3ulldRurDDrddlUlURuulldRurDDldRu3RdrruLruulDDrdLu4LdlUruulldRu"
	"rDD",

	// 26
	"xxxx#####!"
	"#####   #!"
	"#       #!"
	"#  ..# ##!"
	"##$# *  #!"
	"x# +#*  #!"
	"x#$ $  ##!"
	"x#  ####!"
	"x####!",
	"lUUluRRdlddrddl4UruRRurrdL4dlLLuluurrdRDuluuRurrdLdDlluuRurDlld3l"
	"uRRdlddrddl4Urrd3rdLdLLrruulluluRRurrdLDDlluuRurDlldll4drUl3uluR"
	"RdrdrDurrdLd3Ldl3Udd4ruulDulululldRRuRRurrdLDDrdLdLUr3u3Ldllu3R"
	"Rur3DrdLdlLLdl3Udd4r4u5ldR",

	// 27
	"x#######!"
	"x#  #  ###!"
	"x#$   $  #!"
	"x# .#**  #!"
	"## #@ # ##!"
	"#  ..#. #!"
	"# $   $ #!"
	"######  #!"
	"xxxxx####!",
	"ddrRur3uLLrr3dlddrUUd4lulld3Rll3uruul4DrrurURuulDLLdlddrrurUru"
	"rrdLulLddlddRRurUUruL3dlddrUUd4lulld3Rll3uruul4DrruruuLrddlddRR"
	"urUULrddld3lul4urDrrurD4l3drrurUdlddrruruuLuLrdrddld3lulld3Ruu"
	"rUruulDLLul4DrrurUruLrdrruL3dlddr4UlldlddRluururr4dlUr3ulluurD"
	"lddldd3r3uruL4d4lulld3RuuruuLLul3Duu3rddlddRRdr4ULr3d5l"
	"luR3u3rurD4l3dRd4r3uru5Lul3Duu5r4d6luR",

	// 28
	"x####!"
	"x#  #####!"
	"x#      #!"
	"x# * *  #!"
	"##$# # ##!"
	"# . *#* #!"
	"#       #!"
	"####@ ###!"
	"xxx####!",
	"u3URurrdLdDrd3L3uRlddllUURuulDDrR3drruuULuLLdR3drr3uruLLr4dllu"
	"lldRuruullDurrRurrdL3dldlU3luRuurrRurD4l3drrUUddlluRluuruul3DurR"
	"RuLdlluurD4rdLD",

	// 29
	"x####!"
	"x# @##!"
	"## . ###!"
	"# $$$. #!"
	"#..$.# #!"
	"# $ $  #!"
	"## .  ##!"
	"x######!",
	"dlDlddRURUdlddrUdrruLrruulLDLruuLD3rddldlUdlluRlluuRRDLdd3ruruulLulu"
	"l3DrU3rddldllUUluRRl3drruLUddllURurDluuluurDrDulldDrU3dlU3rdL",

	// 30
	"x#######!"
	"x#     #!"
	"x# .$. #!"
	"##$. $##!"
	"#  *  #!"
	"# $.$##!"
	"##@. #!"
	"x#####!",
	"UrUrrUdlldlluRURuul3DldRdrrULUURDll3urrDurrdLu3lddrdrrULdll3urrDDL"
	"dlU3rdLulldldRdrrUULDlluRdrruruLuull3DldR",

	// 31
	"x#####!"
	"x#   ##!"
	"##* ..##!"
	"#   #  #!"
	"# *    #!"
	"# * # ##!"
	"##  $$#!"
	"x### @#!"
	"xxx####!",
	"3UlluurrDrdLuulldllddRUddrRdr3ULLuurrDrdLdd3luluuRlddrUrUdlluR3drr"
	"r4ulullDRRllDlddrUdd3ruuLLUdrrdd3luluuRuRDllddrUU3d3ruulLulD3rd"
	"dllUdrruulL",

	// 32
	"xx#######!"
	"x##  #  #!"
	"##   $$ #!"
	"#  #.#  #!"
	"#  .+. ##!"
	"#  #.#$##!"
	"## $  $ #!"
	"x####   #!"
	"xxxx#####!",
	"rruruulDLLddrrUruLdd4luuRurDDullddrRddrdrruLUULLddRdrUll4ull4dRR"
	"uurrUruulDLL4dll4uRurDll4drruuL3rUru3LDurrddlLddRdrruL3UruLdd"
	"llddRdr3Udd4luluuruRur3DrrUruulDLLddrrdd4luluuruRurDlldlddrURRll"
	"dd4ruuUruulDllDullDldRdd4ruuUruLLr4d4l4ururD",

	// 33
	"#####!"
	"#   ###!"
	"#     #!"
	"## #. ###!"
	"#@***$* #!"
	"#       #!"
	"#  #  ###!"
	"#######!",
	"d3rUUrDuuLLulldRdDRdrU3ldRu3ruulLul3DrrddrUU3luurrDDrdrru3LuurDl"
	"dRddlUUruu3lddRllddrUluRuu3r3dlLrr3u3lddlddrU",
	
	// 34
	"xx####!"
	"x##  ###!"
	"## ..  #!"
	"#  *   #!"
	"# $$ ###!"
	"## *.#!"
	"x# $ #!"
	"x# * #!"
	"x# @##!"
	"x####!",
	"luuRlddrUr3U3dlluuURl3drruuLulDDuruURuulDlDDrUrurrd3LdlluRuRRllddr"
	"drddlUlUUrDrddldlUUdrruuluUruulDDulD4ruLLdDDlDlddrUrUUlDruUUlDulldRu"
	"rr3dllUURurD3luR",

	// 35
	"xxx#####!"
	"x###   #!"
	"##   #@##!"
	"# . *$. #!"
	"# # $   #!"
	"# #$#$###!"
	"#  .. #!"
	"#######!",
	"ulldlddRRlluurD3l3drr3UruurrddLdLU3rdLLu4l3d4rUUdd4l3urrDD"
	"uurRdL3ruLuullDDlluRdrRdrruLuullDldll3drRuUddll3ururrurr3dlLrr3ul"
	"ldDRdrUllulldRR3l3drruUddll3ururrdRdLuLDDu4ruLLdlluururrD",

	// 36
	"xxx####!"
	"####  #!"
	"# . * #!"
	"#@# * #!"
	"#   * ##!"
	"##$**  #!"
	"x#     #!"
	"x###  ##!"
	"xxx####!",
	"drrRDrddlUlUUlluurrRDrDDLdllUdrruruuluurDDlu3lddRddrruUU3dlluuRUrDur"
	"uulDLddrUdllddrrUrrdLdlUlluurDuurrDDLU3drUruLu3lddRRUrrdLdlU",

	// 37
	"x####!"
	"x#  ####!"
	"x#   * ##!"
	"## #  $.##!"
	"#  #$.#  #!"
	"#  $  $@ #!"
	"#  #..#  #!"
	"##########!",
	"uuLuLLdDrddlUrRluUluLul3DlddrU3RuulDuulldDlddrUrR3ulldDldR3urrdrru"
	"LL4drUUluuLul3DlddrURRdrUl3urrdrdrddlU3L3urrdLrrDrd3LUlD3ruulu"
	"4ldDlddrURRurDrruululDu3ldDld5RlluUddll3urRd3rdrddlUU",

	// 38
	"xx#####!"
	"xx#   #!"
	"### . ##!"
	"#  *$* ##!"
	"# # * * #!"
	"#    * @#!"
	"###  ####!"
	"xx####!",
	"l3LuUddrruLU3lddRRdrU3ruLuLDuLLDRddlUlluuRRDrR3ullDDR3lddrRdrUlU",

	// 39
	"xx####!"
	"xx#  #!"
	"xx#* #!"
	"###  ###!"
	"# .*   #!"
	"# #$ # #!"
	"#  @** #!"
	"##   ###!"
	"x#  ##!"
	"x####!",
	"lluurRDD3uruul3DllddrrUrUUdLddlddrUrUUlD3urDrrddLLUdrruulLuluur3Dr"
	"rddllUlUR3dLUlluuRRDrddldlUrruuluUrDldD3ruuLLDldR3ulDllddRRUruLddld"
	"dr3U",

	// 40
	"xxx#####!"
	"x###   #!"
	"##     #!"
	"# *** ##!"
	"#  *@ #!"
	"# .*$##!"
	"##   #!"
	"x##  #!"
	"xx####!",
	"ruu3lDlddrURUdlluRuRRurrdLddLDLdlUluururRurD3ldldd3ruUddlddrUU3luu"
	"rurRdLDDlluuRurDruurrdLLd3ldd3rUrULuurrdLulDrddld3luuruRRDulldRDull"
	"ddrUruururrdLdLruulDrddLdLrddlU",
};

// PicoCosmos, (c) Aymeric du Peloux
const char* PelouxCol4[] = {

	// 1
	"x#####!"
	"x#   ####!"
	"x#      #!"
	"### **# #!"
	"#  #* *@#!"
	"#   * ###!"
	"#  ##  #!"
	"##     #!"
	"x#.$#  #!"
	"x#  ####!"
	"x####!",
	"uull3DLLrr3ulldRDuu3rddLLdDrddl3Udd3lddrUluuluurDrRUUluurD3rddlL"
	"UdDDrddl3U3lDDRRlluu3rUrruulLDuLulldRdRDRdLLruuluur3Duu3rddLLUdrr"
	"uulL4drddl3Udd3luluurDrRURuuLDuulldRurDrddDDrddl4U3d3lUluRR",

	// 2
	"xxxxxxx#####!"
	"xxxxx###   #!"
	"xxxx## . # #!"
	"xxx##  $$  #!"
	"xx## *$. ###!"
	"x## $  ###!"
	"## .$. #!"
	"#  @ ###!"
	"#  . #!"
	"######!",
	"uuRDrruLrUrrUrruullDllDlDDrdLLrruUllDlDRllddrrUUlDuuRurrddLLuurDrurrUr"
	"ruullDlDururrddlLdLLrruullDurrddlUllDRddLUllDRddLUlldR",

	// 3
	"xxx####!"
	"xxx#  #!"
	"####  ###!"
	"#  *$*  #!"
	"#  *@*# #!"
	"## .**  #!"
	"## #   ##!"
	"#    ###!"
	"#   ##!"
	"#####!",
	"ULDl3drruULulDDurrdrru3LuurRDLr3ulDDlDRddrruruuLLulDD3luRRdrUruulD"
	"rdrrddldllUdrruLrruullDLLulldRurRdrUrrddldlUdlUddldlluRuURRdrruruu4l"
	"DulldRu5rddldlldLdl4UluR4drrurruruu3lD3urD",

	// 4
	"xxx####!"
	"x###  ##!"
	"## * * #!"
	"#  * * ##!"
	"#  * *  #!"
	"#  $ * @#!"
	"###. ####!"
	"xx#  #!"
	"xx####!",
	"luLruuLDlDDLddrUURUruulDlLDlluRRdDrrULL3ruulDrdLdlluuRRuulDr3dlluulu"
	"R3drddl4UllddRluurrdDrrurrdLL3urDlddLLuuRRuulDr3dlluuluR3drruuLr"
	"dLrdrruLdlluururDllddrUdrruLuululDlldldd3RuULuR3dlUUddlluRluR",

	// 5
	"xxx#####!"
	"x###   ##!"
	"##   #  ##!"
	"#  * * * #!"
	"#+  $ *  #!"
	"#### * ###!"
	"xxx#  ##!"
	"xxx####!",
	"rrUruurrddLdLddrUrUUlDlLulldRRuRuurrDrDrdLLULLuurrDullddrRddLUr3ulldd"
	"LdR3urr4dldl3UddrruuLDlluRd3luRd4r3ullDDuurr3dl3LuuRldd4ru"
	"uullDDullddrRR",

	// 6
	"xx####!"
	"x##  ###!"
	"##  .  #!"
	"# $.$.$##!"
	"# .$.$. #!"
	"##$ #.$ #!"
	"x#  @  ##!"
	"x#######!",
	"ruUlUlDlluRurDrd3rdLd4lUUluRururDrrDDlUdlLURuulDldldRdd4rUruLuuLL"
	"dLruulDlDDuurrddLruulldRu3r4d3l3UluRRl4d3ruuLLUluurDldD3ruuLL"
	"ulDldld3RULuurDrr4d3lUUrRUrD3lURd3luRuRurDlldd4ruuLLDLdlluRuRl"
	"ddrddlUrd3rU",

	// 7
	"xxx#####!"
	"####   ##!"
	"#  * *  #!"
	"#  . *  #!"
	"##$.$*$##!"
	"x# . *@#!"
	"x#   ###!"
	"x#####!",
	"UULLrrddLUdLdlluRuRRdL4urrDLulDLDllu3RurrdLDL3dlluUURuRurrdrdLuull"
	"dldl3drrurrULdldlluRRlluurDuururrdLDLDlluRuRurrdrdLdLLrr3ulldRDrruLu"
	"lldldRR3l3drrUULuururrdLdLruulDlDllu3RurrdLdLLulldRurRurrdrdLuulldd"
	"3dlluUUluR",

	// 8
	"xxxx####!"
	"xxx##  #!"
	"x###   ####!"
	"## * * *  #!"
	"#  * * $  #!"
	"#  * # * ##!"
	"## . ##@ #!"
	"x#  ######!"
	"x####!",
	"ruuLrddlUlUURDldRluuLulDDLDlddrUrUUlDrdLruuRuulDDldlluRuRRdLulDrruurDr"
	"rddlUru3LdRllddrUlulldRurRddldlUrruulDulldRurru3rdrru3LrddlULLuurDl"
	"d3RurrdLulLddrdrUUdllulluururDDrDL3ruL",

	// 9
	"x####!"
	"x#  ###!"
	"##    ####!"
	"#  * *   #!"
	"# $#*#*  #!"
	"## * *   #!"
	"x#  + * ##!"
	"x###  ###!"
	"xxx####!",
	"uUURRDrddLruulDuull3dlluUURuulDDrRddRRuuLuLDlluRd3rddllddrU3luUUrrD"
	"DuurrddLdLUrrurrdLdLLuRuu4ldd3RdrrUruuLLdD4luurrDullddrRuuluulDDr"
	"rddRRuuLuLDlluRd3rdd4lUUrrDullddrRuuluulDrdrruL3dlluluRRlddrruUrrd"
	"dLLrddlUUrruurrddLLuu4l3dRl5urDld3RuLdlluurDrrdRddrruLruLL",

	// 10
	"x####!"
	"##  ####!"
	"#      ##!"
	"# **@** #!"
	"##  #   #!"
	"x# **$ ##!"
	"x#  *  #!"
	"x## . ##!"
	"xx##  #!"
	"xxx####!",
	"ullDurrdLrurrDLdDrUluullddDRDulldRdRUl4ulldRu3rddrddLLdlUluUUluRRld"
	"drUdlddrUd3ruulD3urDrdLdlLdll3urRRDrddLLuLUluRluurDlddrdrRdldlUlURd"
	"rruurruLulLL3DldRdrdrUUrUUlULulDlluRurDrdrdDruruLuLDrddlLDlluRlUURRlD"
	"luluRurDRdRDrruLu3LulDrrdRdrddLUU",

	// 11
	"xxxx####!"
	"xxxx#  ###!"
	"xx###    #!"
	"### ** * #!"
	"#  . *$@##!"
	"#  ***  #!"
	"##    ###!"
	"x###  #!"
	"xxx####!",
	"UlD3LDllu4RDLLrruUruulDD3ruLdlluurDr3dLLUlldRRuURurrdLdLLrruulDld"
	"dlddrUUllulldRdRluurDuu3RurrdLdd4LuurrR3lddrrUdlluurR4dlUr3ulld"
	"lldRdRRdrUUrruULLDLrR3ulDD3ruLLulDr3drU",

	// 12
	"x#####!"
	"x# + #!"
	"x#$.$#!"
	"x# * #!"
	"x# * #!"
	"x# * ##!"
	"## *  #!"
	"#  *  #!"
	"#    ##!"
	"##  ##!"
	"x####!",
	"r3DLUrdDDLUdDlddrUrUruLullDDRUdlldRdrUrUruL3ullDDRUdlDDRUrrdLdlUl3u"
	"rrDDLUddlldRdrUrUruLullDDRUdlldRdrUrUruL5ullDDRUdlDDRUdlDDRUrrdLdlU"
	"l3urrDDLUddlldRdrUrUruLullDDRUrrdLdlUl5urrDDLUrdDDLUddlldRdrUrUruL"
	"ullDDRUdlldRdrUrUruL3ullDDRUdlDDRUrrdLdlUl3urrDDLUddlldRdrUrUruLullD"
	"DRUdlldRdrUrUruL",

	// 13
	"xxxxxxxx#####!"
	"#####x###   #!"
	"#   ###     #!"
	"# * * # * +##!"
	"##     $* ##!"
	"x#  *## * #!"
	"x##  ##  ##!"
	"xx########!",
	"lLrddLU5LddrUl3ulldRurDD5RddlUruLrdrUUruulDllDDrrUdllLLuLLulldR"
	"Rd5RdrU5lddlUlURuulDrd5RddlUru3LuLD3ruurDuRurrdLdLLulDrDLdd"
	"rUrUdlluurDuuRurrdLdLdllLLulLulldRRddlUr4RuurRurD",

	// 14
	"xx#######!"
	"x##  #  #!"
	"x#      #!"
	"## # #  #!"
	"#  *** ##!"
	"#@#*  $#!"
	"#  *** #!"
	"### .  #!"
	"xx###  #!"
	"xxxx####!",
	"uruu4rddDllURdrUUruulD4lddRRUdlluurR3dDLUr3ullddRdrUdrruLrdDLddr"
	"UUlulldRluullddRRurruLdldlluuruurrDDrdL3ullddRluurrdDrrUruulDLLddrrUr"
	"uLddldDrddlUUrUU5lddrrdRlulluu5rddlLrruu4luuRurDDullddrRDDrruu"
	"UruulDLLddlluuRurDllddrrddrruuUru3L3DulluuRurDrrddLLrrddlUr3dlUr3u"
	"uullD",

	// 15
	"xx####!"
	"x##  ##!"
	"x#@ $ #!"
	"## .* ###!"
	"# $$*.* #!"
	"# #.. # #!"
	"#   $   #!"
	"###  ####!"
	"xx####!",
	"rdRDrddLUlUdrruLuLuurDrDDldd3ruuLLDllUURDldRddlUlluuRRDuuruul3Dllddr"
	"RUrUUlulDrrddlddrUluU4rddlLL3ruullDulldRddlUlluuRRDrdLuuluurDrD3rd"
	"dlLUdLUlUluurDrDRddlUlUluururDrDDL3dlUruuruu3lddRllddRRdrUrU",

	// 16
	"x######!"
	"x#    #!"
	"## * .##!"
	"# *$*  ##!"
	"#@ * *  #!"
	"##* *   #!"
	"x#   ####!"
	"x#####!",
	"rUdRdRRULULD3ruLuullDRDrddlUlURd3luRdrr3ullDDRluurrdLddrU3ldRurrdr"
	"ruLddldllUURlddrruL4urrDDLruulldRdrrdrd3LUlURd3luRdrr3ullDDldR3u"
	"rrdLr4dllUURlddrruLuUrD3luRdrr3ullDDldR3urrddLrdRdrruLuL",

	// 17
	"x#####!"
	"x# + #!"
	"x#$.$#!"
	"x# * #!"
	"x# * #!"
	"## * #!"
	"#  * ##!"
	"#  *  #!"
	"#  *  #!"
	"###  ##!"
	"xx####!",
	"l3DRUdlDDRUdllddrRUrrdLdlUlluurDuurrDDLU3drUruLu3lddRRUrrdLdlUlluur"
	"D4urrDDLUrdDDLU3drUruLu3lddRRUdlluurDrddrUruL3ullDDRUdllddRRUrrdL"
	"dlUlluurDuurrDDLU3drUruLu3lddRRUrrdLdlUlluurD6urrDDLUrdDDLUrdDDL"
	"U3drUruLu3lddRRUdlluurDrddrUruL3ullDDRUdllddRRUrrdLdlUlluurDuurrDDL"
	"U3drUruLu3lddRRUdlluurDrddrUruL5ullDDRUdlDDRUdllddRRUrrdLdlUlluur"
	"DuurrDDLU3drUruLu3lddRRUrrdLdlUlluurD4urrDDLUrdDDLU3drUruLu3lddR"
	"RUdlluurDrddrUruL3ullDDRUdllddRRUrrdLdlUlluurDuurrDDLU3drUruLu3lddRUluR",

	// 18
	"x########!"
	"x#   #  #!"
	"##.     #!"
	"# ***** #!"
	"#   * * #!"
	"## #$  ##!"
	"x#  @###!"
	"x#####!",
	"lluurUdlluRuurrdLrrDDLLURu3rddLUdLUlldRlulldRddrrUULrRurrd3LddlluURu"
	"RRdrdLuulldlluRdrR3ullDDuurrdLrddlUlldRddrrUULulDrrdrruLuLuullDDRluur"
	"rdLddRdrruruLruulDLLD3ldRurruulD4rddldllURdldllUUR",

	// 19
	"xx####!"
	"xx#  ####!"
	"xx#    @##!"
	"x##** ** #!"
	"##  **.  #!"
	"# $  # ###!"
	"#      #!"
	"########!",
	"4lDDuurrdLDlUrrurrDLdLUlldRuuRdr3dllUUddlUdlluRuRlddrruLuuRDldd3ru"
	"uuLulul3DrUrr3dllUURurDllddlUdlluRuRlddrruLuuRDl3urDldd3ruru3LDld"
	"dd3rUUlLuu3rdrd3LUllDRuuRdR3dllUUddlUdlluRuRlddrruLuuRDldd3r3uLu"
	"lul3DrUrrdrruLuLrddlddllUURuRD3luRluurDldd3ruuLLDldRuRluulDr4drrU"
	"d3lUdlluRRdrUUdlluR",

	// 20
	"xx####!"
	"x##  #!"
	"##   ###!"
	"#  *** #!"
	"#  *@# #!"
	"## **. #!"
	"x#     #!"
	"x# #$###!"
	"x#   #!"
	"x#####!",
	"DLdRuuULDlluRurDr3dllUURD3ulDldRd4ruu3LDu3rddllUluulDldR4drrUU"
	"UL3ruulLLDu3rddllU3luRurDR5dlluuUUluRurur3DLUlldR4drruuUrruuL"
	"LLruulDl3DRR3dlluURurUULDlluRurDrddDllUURu3r3dLLuUluRluurDllDldRdd"
	"ddrrUULrddllu3UluR",
};

// Cosmopoly, (c) Aymeric du Peloux
const char* PelouxCol5[] = {

	// 1
	"x####!"
	"x#  ####!"
	"x#     #!"
	"## #.  #!"
	"# * #*##!"
	"# $  * #!"
	"# # @  #!"
	"#   ####!"
	"#####!",
	"ldlluuRlddrru3ruLUUlulldDrDRlulldRRl3urrdrru3Lul3Dl3drrUrrUUddlld"
	"ll3uruu4rdLu3lddrDRdrUllulld3R3lddrrUruLrdrruLUUru3LulDDu3r3d"
	"dlluRdrUdlldlluu3R",

	// 2
	"xx#####!"
	"###@  #!"
	"# $*#$##!"
	"# #  . #!"
	"# . $# #!"
	"## #.  #!"
	"x#    ##!"
	"x###  #!"
	"xxx####!",
	"rrDullDDrDDrruuLLddrddl3UddlluuRURDDullddrRurruuLuullDDuurrddrddlldll"
	"uuRlluuRlddrddrrurruuluullDDullddrddrrdrU3luuluurrurrddLDDuurrddLdLUr"
	"ruuluulldllddrddRluuluurrurrddrddllULURddrddlU",

	// 3
	"xx####!"
	"xx#  #!"
	"xx#  #!"
	"### *###!"
	"#      #!"
	"# .*** #!"
	"## $  ##!"
	"x##* ##!"
	"xx#@  #!"
	"xx# # #!"
	"xx#   #!"
	"xx#####!",
	"ruurUruLLDDuuUluur3DrddlULUUdR3ldRdRUruLddDDrrddll5UrrdLulDr3ulD"
	"r3ulDDrddrruLdd3luRRUUlDrddlluluRddrruLruuluurDldDrddlDDrrddllUUrUU",

	// 4
	"#####!"
	"#   ####!"
	"#  $$  #!"
	"##.@ . #!"
	"x#. #.##!"
	"x# $$ #!"
	"x#  ###!"
	"x####!",
	"dlddrUluu3rddLLUluRluurDlddrdrr3uLLulD3r3dlluURurDluLulldRRddlUruu"
	"lldRurDRdrru3LulldRdRRuLulDr4dlU",

	// 5
	"#####!"
	"#. .#####!"
	"#  .    #!"
	"##$$@$  #!"
	"## ######!"
	"#  $ ##!"
	"#   . #!"
	"###   #!"
	"xx#####!",
	"Rlull3DldRRdrruLuLrddlUl3URurrdLLuulldRRl3DldRRdrruLuLrddlUl3U3ru"
	"rrd4LuRRllulldRRl3DldRRdrruLuLrddlUl4U4drruLdl3UruuLDD3ruLdlU"
	"rrdrru3LdllDDldRR",

	// 6
	"xx####!"
	"x##  #!"
	"x#   ####!"
	"##$ ..*.#!"
	"# $  #$ #!"
	"#    #@ #!"
	"#########!",
	"ruu3Ldd3luRRUruulDlDurrdLddrUUdd3luRRuulD5rddlUru4LddrUlu3Rll"
	"dd3luRRdrUluRRlluurDllDrRdd3luRRdrU",

	// 7
	"x#####!"
	"##   #!"
	"#  # ###!"
	"# # *  #!"
	"# #  #@#!"
	"#   *  #!"
	"### *$##!"
	"xx# . #!"
	"xx#####!",
	"dlLLddrUUluuRuulldl3dRl3ururrddldDrddlUUll3ururrddDDrruuLrdd3lddrr"
	"UdlluurDuuUrrddLruulldD3l3ururrDDlDuruulldl3drRRUUrrddLruulldldlluu"
	"ururrD",

	// 8
	"xx########!"
	"xx#   #  #!"
	"xx# . $. #!"
	"x###$##  #!"
	"x#.. ##$##!"
	"## $*$   #!"
	"#  * #   #!"
	"#  @.#####!"
	"##   #!"
	"x#####!",
	"l3urrDLDurRRdrru4LDllddrrUUlU3Rdrru4L3rUUruul3DuuLLulld3RllDD"
	"DDllURdr3U3dllddrUluu4rdrru3L",

	// 9
	"xxxxxxx####!"
	"######## @#!"
	"#  $ $ $ $#!"
	"# #*.  .# ##!"
	"#    . #.  #!"
	"##$### .   #!"
	"x#     #####!"
	"x#######!",
	"3Dldll3uRd3luRdd4luurRDullddrRRurr3d4lUd4r3ulldRlluullddRRu"
	"rruLLrrdrruLLdlldldd4ruUdrrurrdLLr3uLLdLLuRRdl3d4luuruuRRdrruRur"
	"3DldLrurrdLLr3ulldllullddldd4rUUluu3Rur3DldLrurrdLLr3u6lddl"
	"luu4RdLruRRdLLu4lddrdd4rUUluRurRur3DldLruruu8lddrdd4rUU"
	"drrurrd3Lrr3u4lddrUlu3RurDDu8lddrrRlldd4rU4ruLd3lUUluR"
	"RRur3DrdLL",

	// 10
	"x#######!"
	"x#  #  #!"
	"x#$.@.$#!"
	"x# .#. #!"
	"##$.#.$##!"
	"# $   $ #!"
	"#   #   #!"
	"#########!",
	"r4drruLdlUll3urrdrDuluurDDlull3drrUUruL4drruLdl3UruulDrdDlddrru"
	"LdlUlldlluRRuulDruuRlulDDr3dlluRdr3UlDrddlluRdrUUdRRdrru4LdlluRdrU",

	// 11
	"#####!"
	"#   ####!"
	"#  $.$ ##!"
	"##$#@#  #!"
	"x# ...  #!"
	"##$#.# ##!"
	"#   $   #!"
	"#   #   #!"
	"#########!",
	"drrddlLLdllu3RuullDurruuLulldRDDrruuLulDrrddrruuLL4dRdrUUdll4urrd"
	"rdLLrdd3ldllu4RdrUlluUllDurrddldllu3RuurruullLulldR3Du4ruullLul"
	"3DrrddRdrruLUUllddRdrU3ldllu3RuullD3u4rDrd3LddRdrruLUUllddRdrUl"
	"lldlluR4urrDDuurrDrdLLruu4l4d3RdrruLUd3LdlluR4u4rdrdLddllL"
	"dl4U3d4r4u3lulldRR",

	// 12
	"x#####!"
	"##  .#!"
	"# $#.##!"
	"#     #!"
	"##$   #!"
	"#  #*##!"
	"# @  #!"
	"#  ###!"
	"####!",
	"rrUUlulDDldRuu3ruLuullDDRluurrdDllDDlddr3UrurrdLddLr5ulldldRRluur"
	"rdDllddlddr4UrruullDldR3drru3U4dll3uRl3drruuUlldRurD",

	// 13
	"xx#####!"
	"###   ##!"
	"# .. . #!"
	"# $$ # #!"
	"## #$$ #!"
	"x#.@  ##!"
	"x###  #!"
	"xxx####!",
	"rUUddlluURuurrdLDDuurrddLruulldllddrRUrruullulD3rddlldlluuluR3drruUL"
	"rdrruulullDlDRuurrdLL3rddllddrUluUluurrdrddLruululldRd3luRdrrDrddlUl"
	"lUUrrDrdLL",

	// 14
	"xx#####!"
	"###   #!"
	"#   #.##!"
	"#  *$@ #!"
	"## * **##!"
	"x# # #  #!"
	"x#      #!"
	"x###  ###!"
	"xxx####!",
	"uulldlddRluurDuurrddLL3rDDrd3LuUddrruuL3ullddRlulldR3dRRuUrUr3dLd"
	"lUlluuRRlluurDl3d4r3ulLLulD4r3dllUURuLLulldRDRRlluurDr3dllUUdd"
	"rr3ululldR",

	// 15
	"########!"
	"#   #  #!"
	"#      #!"
	"## #.$.#!"
	"#  $@###!"
	"# #$*.#!"
	"# # # #!"
	"#     #!"
	"##   ##!"
	"x#####!",
	"uullddRDDuull3drdrruruuLrddldlluRuUrrddLdllul3uruurrdDuurrdLu3lddld"
	"ddrdrruruuLuUruLLulDrr3drddldllul3urRll3drRuUrUUruLLulld3R3drddLd"
	"lUll3urRdrUUrruulDrdLuLLulld3RDD3l3drrUUddll3urRdRUUrruulDrdLuLLu"
	"lld3RDDllUdrrurruulDrdLullulld4RurD",

	// 16
	"xxxxx#####!"
	"xxx###   #!"
	"xx## * # #!"
	"x##      #!"
	"## * * ###!"
	"#   $###!"
	"#  + #!"
	"######!",
	"rUUdlluRuRDuRRdLLulDlddrrULulDruu3ruurrddLLdlLuuRD3ruullDurrddlLdLUl"
	"lDRddlUlldR",

	// 17
	"####x####!"
	"######  #!"
	"#@ $. $ #!"
	"# $ .$  #!"
	"### . ###!"
	"xx# . #!"
	"xx#####!",
	"dRRdrrULuLD4ruulDrdLuLDlluRRdrruulDrdLLulldllu4RdLddrUUlulldRurDrd"
	"dllUdrruulDuulldRurD3ruulDLrrdLL",

	// 18
	"xxx####!"
	"x###  ##!"
	"## *   #!"
	"#  ##  ##!"
	"#@$*    #!"
	"## .# # #!"
	"x# *    #!"
	"x#  #####!"
	"x####!",
	"uruRRur3Drrdd3lLulU3Ruu3lDldRRddrr3U3drruuLulDrrdd4lul3urrurD"
	"rddlDurrddlLuuruu4lddrRRU3drruuLulD3luurrurDrdd3l3dlUUru4rddll"
	"L3ruuluu4ldldR3drU4ruullDurrddlLLruuUruLL",

	// 19
	"xxxxxx####!"
	"xxxxx## .#!"
	"xxxx##   #!"
	"xxx## ...#!"
	"#### $$ ##!"
	"# @$   ##!"
	"#  $  ##!"
	"#   ###!"
	"#####!",
	"RlddrUrrurUruulDlDlDLrururrdLdLdLLuRuRlddldlluuRRdrrUrUruulDlDlDururrd"
	"LdLLuRdrUdllLddlluuRRddlUruRuruRdrUluRdrUdldldLdLLuRdrUluRdrUluRRdldld"
	"lldlluu3RdrUluRdrUluRddldlldlUlu3RdrUluRdrU",

	// 20
	"xx#####!"
	"xx#   ###!"
	"### # $ #!"
	"# $* .# #!"
	"# # +   #!"
	"#  *#.###!"
	"## $  #!"
	"x#  ###!"
	"x####!",
	"lUrr3dlLUlluuRRDrrddlldlU3ruullDurr3ull3D4ruuLrdd4l3urrDrrddl"
	"lddlL3UllddRluurrd4ruullDurrddlLddllUlluurrR3lddrrdrruurruullullDu"
	"rrdrrddllddllulluurRllddrrddlU3ruurruullullddDDuullddRdRUlluurruurrdr"
	"rddllddLruurruullDD3ullddR3lddrrUdlddrU",

	// 21
	"xxxxx####!"
	"xx####@ #!"
	"xx#.* $ #!"
	"###   # ##!"
	"#    #.. #!"
	"#    $ $ #!"
	"####  ####!"
	"xxx####!",
	"r3dldLdlUrrurrd5LuurruRur3DrdLLr3ulldllddrUluuRRdLurRur3DldLdlU"
	"Udrrurrd3LdlUlulld5Ruruu4lDurrdLu3rddldllULd3ruruu4lDu4rdd"
	"ldlluUluRRl3drrurrd3Ldl3UruRurDDulldlluRRl3d4ruLd4lUUddlluRRdr"
	"UUruRurDD",

	// 22
	"xx####!"
	"x##  #!"
	"## $ ###!"
	"# $@*  #!"
	"#  * #.#!"
	"##* *  #!"
	"x# . . #!"
	"x# #$###!"
	"x#   #!"
	"x#####!",
	"RdDldR3ulDlluRuRDr3dllUURD3ulDldRd4ruu3LDu3rddllUluulDldR4drr"
	"3UL3ruulLLDu3rddllU3luRurDR5dlluuUUluRurur3DLUlldR4drruuUrru"
	"u3LruulDl3DRR3dlluURurUULDlluRurDrddDllUUluRururDDrr3dLLuULUlldRdd"
	"ddrrUUrr3ulLLruulDl4DRR3Urr3dLr3ullddRdrUllLdR3uLDlluRurDr3dll"
	"UURDr3dllUUddrr3uluurDl3urDllDldR",
};

// CosmoNotes, (c) Aymeric du Peloux
const char* PelouxCol6[] = {

	// 1
	"########!"
	"#@  #  #!"
	"# ..   ##!"
	"##.##   #!"
	"x#  $$# #!"
	"x###$   #!"
	"xxx#  ###!"
	"xxx####!",
	"rrd3rdrddllUUru3LulldRddrRlluu3RdrrddllU3luu3rurD4ldd3rU3dlUr"
	"rruuLuLDDuuLLulldRddrRdRUUruulDlLulD3rDDlddr3UrrddLruulu3LrrddlddrU"
	"UUruLL",

	// 2
	"x####!"
	"x#  ######!"
	"x#       #!"
	"## ####  #!"
	"#@* ### ##!"
	"#  * ## #!"
	"##  * # ##!"
	"x## .$#  #!"
	"xx##     #!"
	"xxx####  #!"
	"xxxxxx####!",
	"drdrdrd3r6u5ldDrDrDrDulululldRdRdRdRRllululuurDrDrDululldRl3u"
	"u5r5drddl6Uru5Lul3Dr3dRdRRlluluurDrDulldRl3ulldR3u3r"
	"rr5drddl6Uru5Lul3DrDr3dRRlluurDldRl3ululldRdRl4u5rdd"
	"3drddl6Uru5Lul3DrDrDrddRluulululldRdRl4u5r5drddl5U"
	"Uru5LulDD",

	// 3
	"x#########!"
	"x#       #!"
	"x# ##### #!"
	"x# #   # #!"
	"x# $.#@# #!"
	"###$.  # #!"
	"#  $.### #!"
	"# #$.    #!"
	"#    #####!"
	"######!",
	"dll3d3luurRlldd3ru4r6u6l3dRD3ruullDldRlul3u6r5d"
	"d4lULrddlUUrd4r6u6l3drrDDldR4urrddLruulldlDDrU3d3luuR"
	"RllddrrUrUdd3luurRuul3u6r6dllL",

	// 4
	"x#####!"
	"x#   ####!"
	"x# #$$  #!"
	"## #@ # #!"
	"#  #$. .#!"
	"#  .$. ##!"
	"###  # ##!"
	"xx##    #!"
	"xxx##   #!"
	"xxxx#####!",
	"rdr3dlluluRddrr3ululDDll4urrDDrdrd3L3rddllUluRRurDDuluuluull3dl"
	"d4RuulD3ull4drRu3ruulLddldll4urrDrddl3drdrruLuUL3urrddLruull"
	"lull4drdrdRdr3UlURllDll4urrdDDrdLL3rddllUluR3urDluull3dldR",

	// 5
	"xxxxxx####!"
	"#######  ##!"
	"#@$       #!"
	"# *###  # #!"
	"##..    # #!"
	"##*#      #!"
	"# $  ######!"
	"#   ##!"
	"#####!",
	"5Rdrddrr3ulul3Duurr3dlLLu4lUlu5Rdrddrr3ululDlddllddldlluRU"
	"UUlu5RddllddLdl3U4rdLu3lddrrUrr3u4lDDrRRd4r3ulLDDuurr3dl"
	"LLU4luu3rR4lddrrddllUU4rdLu3lddrrUdlluurRRd4r3ulul3Duurrdd"
	"dl3Lu3lddrrU3r3u5l3D3u5r3dlluLLrddldlluRuU3rdrru4L4r"
	"uulDrd3LddLdlU",

	// 6
	"x########!"
	"x#  ##  #!"
	"x#.$   .###!"
	"x# .## $  #!"
	"##$### #  #!"
	"# $    # ##!"
	"# @ #.    #!"
	"#######   #!"
	"xxxxxx#####!",
	"ru3rdrr3uLr3dlluuUdd3ldllu4Rd3r3ulldDldRRdrUll3uruulDllLdlDur"
	"u3r3D3ldllu4RdR3Udd4luuruul3DururrR3d3ldllu4RdrRdrru3LUl"
	"3luuru3rdrrdDuulluurD4ldldd4rUURu3Lrr3d4l4urD3r4drdrruL"
	"uuruLLu5l3d4ruUru4Lul3Duu4r4dRdr3UruLLr3dlluuUdd3ldllu"
	"R3u3rR3dllLdl3U",

	// 7
	"xx#####!"
	"xx#   ###!"
	"xx# #*  #!"
	"x##+*   #!"
	"x#   # ##!"
	"##$#*#  #!"
	"#    *  #!"
	"#   ##  #!"
	"#########!",
	"RRlluurrDrDLLrrDDrddlU3Ldllu3RUUllDurURRuullDDrrurrdLdDrddl4ULL3d"
	"RlldlluRuuRUrruullDD4ruLd3luurrDrdLLrrddrddlUllLdllu3RuUddlluuRURD"
	"uRuullDurrdrrdLLrdDrddl4UruL",

	// 8
	"######!"
	"#    ####!"
	"# ## .  #!"
	"# ###*# #!"
	"# # $@# #!"
	"# # * # #!"
	"#   *   #!"
	"## # ####!"
	"x#   #!"
	"x#####!",
	"ddrr4ull3D3ulu3l5drruRD3l5u3rd3r4dl3L4r4ullddD3u"
	"rr4dlLulluRdrdrr4ulldDldldRuuruulu3l5dRddrrUUddlluul5u3rdr"
	"rr4dlLULrdrr4u3lu3l5drddrruUruUU3dlddlluuRll5u3rdRddllDR"
	"uruulu3l5drddrruUrUUddlddlluuRuurrddrr4uL",

	// 9
	"xx#######!"
	"xx#     #!"
	"### ### #!"
	"# $ $ # #!"
	"#...@.# #!"
	"# $ $ # #!"
	"### ### #!"
	"x#      #!"
	"x#   ####!"
	"x#####!",
	"ruLdl3d4r6u4ld4DuulldRur3u4r6d3ldlluRuUluRurrdLL3u"
	"4r6dllLdl3UlluuRDR3d4r6u4ld4D3urrddLruulldRl3u4r"
	"6d3ldlluRuUruulldldRuurrdLLr3u4r6dllLdlluRuUruL3u4r4d"
	"ddllLdl3U",

	// 10
	"####x#####!"
	"#  ###   #!"
	"#  $     #!"
	"#  #$##$##!"
	"## #@    #!"
	"x# #$# # ##!"
	"x# # . .  #!"
	"x#    #   #!"
	"x#  #. .###!"
	"x########!",
	"DDrdLLdl5UluurD4RurrdLDu3LDDrrddld3l3uUluurD4RurD3lddrrddrr"
	"uuLLddld3l3uUlu3RddDD4ull5drR5uRRurrdLDu3L4drruuLrddrruu"
	"LLddlldll5u4RurDDu3ld3DrruuLrddrddllUdrrur3uLuu5l5drRuRR"
	"RdrUdldllU3l5urrd3D4ull5drRu3RdrruLdldllUl5u3rddrDDrdLu"
	"uulLLrddRDrUlluuruu3ld3D4ull5drRuRDuRRdrru3LuurrDullddrdrruL",

	// 11
	"xxx#####!"
	"####. .###!"
	"# $  #   #!"
	"#@# .$.$ #!"
	"# $ # # ##!"
	"###     #!"
	"xx#######!",
	"dRluuRRdrRddllUUrrddrruU3LrruullDLDRRddrruuruL3dlluuRlluurrDrDululld"
	"drddllUlluuRRllddrrdrruuRurrdLulullD3lddrrd4rUUruL3dlluuRUrDllddll"
	"uUdlluurRdRUdRRurrd3LddrrUdlluururrdL",

	// 12
	"xx########!"
	"x##  #   #!"
	"##       #!"
	"#  # .# ##!"
	"# $* **$#!"
	"## ##.# #!"
	"x# #@   #!"
	"x#    ###!"
	"x######!",
	"3ruUU3dlluURlluulldDRRuurrurrd4LddRddrruUU3dlluuRlddrruU5luuRu"
	"rDrDDrrddlld3luUU3rDu3l3drruR4ulDr4d3l3urRll3d3ruuUrrddLru"
	"u5l3d3rUrruu3luullDDrruurrurrd4Ldd3rUd5luuRurDDullddrRRluu"
	"rrurrd4LddlluuRurDDullddrRuu3r4dlld3luUdd3rurr4u5ldldR",

	// 13
	"x#######!"
	"x#  #  #!"
	"x#     #!"
	"## ##  #!"
	"#   #.##!"
	"#   *  #!"
	"### *  #!"
	"xx#$* ##!"
	"xx#@ ##!"
	"xx####!",
	"UURlddrUr4Uru3Lul3DrDDRdr4UruL4dlluRdrUllulld3R3dlUUruLrdrru"
	"LUUruul4DrdLdlluuRDr3Uruul4DrdLulluluurRllddrdrruuruulDDu3lddldRR",

	// 14
	"xxx####!"
	"####  ##!"
	"# $    ##!"
	"#.+***  #!"
	"# $     #!"
	"#####  ##!"
	"xxxx####!",
	"lu3RDLrRdrruLuLulDlddRRULrddrUruLuLulD3lddRRULrdRRULuurDrdLd3luuRRD"
	"LrrddrUruLuLulDlddRRULrddrUruLuLulD",

	// 15
	"x#####!"
	"x#@. #!"
	"##$.$##!"
	"#  *  ##!"
	"#  .$  #!"
	"####   #!"
	"xxx#####!",
	"rdDrrddlULulld3RdrruLuLLuurDlddlluRdrUdRdrruLuLuullDDRUddRdrruLuLrddl"
	"UlUlld3RdrruLLruL",

	// 16
	"xx######!"
	"x##    #!"
	"## @## #!"
	"#  #  $###!"
	"#  ....$ #!"
	"#  # $   #!"
	"######$ ##!"
	"xxxxx#  #!"
	"xxxxx####!",
	"ldd4rdrruLLUllddRUrrdLu4luuru3rDDuu3ldldd3rRdrru5L4r3dlUU"
	"ruL3u3ldldlddrUrrRR3u3ldlDld3RuRldlluuru3rdDD3L3rDrru4L3rdd"
	"dlUUruLulldRR3u3ldldlddrURRdRluurruu3ldlDldRuuru3r3dLrDrruLLr3dlUU",

	// 17
	"#########!"
	"#   #   #!"
	"# $   $ #!"
	"##$#@#$##!"
	"x#. ..  #!"
	"x## .#  #!"
	"xx##   ##!"
	"xxx#####!",
	"ururrdLDDlluuRurD3lulld3RddllUdrrddrrUru3LuuRurrdLDDlluuRurD3lulld"
	"RddRdrdrrUruLddlluUlluu3RurrdLDDLLddrrUruLuuLLDDuuLulldRddRluu3Rurrd"
	"4LulDD",

	// 18
	"xx#######!"
	"###     #!"
	"#   ### #!"
	"# #$* # #!"
	"#  $. # #!"
	"###$.   #!"
	"xx#@. ###!"
	"xx#####!",
	"rrurr4u4ldllddrRlluurrDuu4r4dlluuLDrdrr4u4ldllddrRR3luurr"
	"DrdL3u4r4dlldlU3r4u4lddrrDulluu4r4dlLdllURRuullDurrddlUl"
	"3u4r4dLLdllUUrD3r4u4ldllddRRlluurrDuu4r4dlluuLDrdrr4ul"
	"3ldllddrRdRU3luurrDullddrR3u4r4dlL",

	// 19
	"x####!"
	"x#  ###!"
	"## * @#!"
	"#  *#$##!"
	"#  .   #!"
	"## * # #!"
	"x# * # #!"
	"x## #  #!"
	"x#    ##!"
	"x#   ##!"
	"x#####!",
	"lLDlddRDDul3urD3ul3D4r3dldldlluRuuUU3r3dldLdl3UrUdlddrrur3ul"
	"LL3D3uUluur5D3ulldRurDrddll3UrdrdLdlUU4r3dldldlluRUUruLrurrd"
	"ddldLdl3UruuluurrDullddrddlddrrur3uLuullddDD4urrddLruulldDlluRd3r"
	"uullulD3rddllUdlluRuRlddrrddllUdrruulUluurDldldRddrruuruuLrddr3dldllU",

	// 20
	"xxx####!"
	"####@ ###!"
	"#  $ $  ##!"
	"# #$#$#  #!"
	"# # . .  #!"
	"# # . . ##!"
	"# ## ####!"
	"#    #!"
	"######!",
	"dRDDl3d3l5urRRurD4l5d3ruuRurruuLLDurrddlLdlluRRdldd3l5u"
	"rrRurDrr3dLLrr3ullDDuu4l5d3ruUluUddrdd3l5urRRurDrr3dlLrru"
	"uullDDuullddRDl3u4r3dlLUR3luurrDullddrRdrrULLuurrDrdLuu4l3dRRl"
	"l3ull5d3rU",
};


// MyrioCosmos, (c) Aymeric du Peloux
const char* PelouxCol7[] = {

	// 1
	"xx####!"
	"###  #!"
	"# *  ###!"
	"# .#   #!"
	"## $   #!"
	"#  #* ##!"
	"# @  ##!"
	"#  ###!"
	"####!",
	"uuRRllddrrUrULddll3uluRRur3DLruulldDDlddrUrrUruLuullddDldR4urrddLr"
	"uulldD4ruLd3luurrDullddDlddr4UdrRddLr3urrdLulDlldlddr3U",

	// 2
	"xx####!"
	"x##  #!"
	"x# . #!"
	"## * #####!"
	"# @*$    #!"
	"#  * #   #!"
	"###  #####!"
	"xx####!",
	"uRlddRU3Rdrru5LddrUlu3Rdrru4LULuurDDlDRddl3UddlluRdrruulDr3ul"
	"DlDDrUr3dlUUlldRurrRRdrru4L",

	// 3
	"#####!"
	"#   #!"
	"# #*####!"
	"#    $ #!"
	"# # * @#!"
	"#.*  ###!"
	"## # #!"
	"x#   #!"
	"x#####!",
	"lLu3lddRRlluurrDulluurrDDrdrru3Luull4drddrruUddlluuRURD3l4urrdD"
	"Lrrdd3luUrrDu3rdLLu3lddrddrrUULURuLuull3DuRluurrdDrddlUU3rdL",

	// 4
	"x#########!"
	"x#   ##  #!"
	"x#       #!"
	"### ###  #!"
	"# $ @ # ##!"
	"#..* .#$#!"
	"# $.$ # ##!"
	"### ###  #!"
	"x#       #!"
	"x#   #  ##!"
	"x########!",
	"luu4rdd3Drd4LdlluRuu3UddlluRdr3d3Rdr6UruulD3lulldRdDldRdd"
	"d4r4uUruulDllLul3DrrddLUL3u4r5Drd4LdlluRuUdd3Rdr6Uru"
	"ulD4lddllddRUR3u4r5Drd4LdlluRu4U3drruuLrddlluRl3d3RdrUU"
	"4UruulD3lulldRdDrdd3luuRddrruLLr3d4r4uUruulDllLulldRdDrdL3dr"
	"3r4uUruulDllLul3Duu4r5Drd4LdlUU",

	// 5
	"xxxxxx#####!"
	"xxxxx##   #!"
	"xxxxx#    #!"
	"xxxx##.#@##!"
	"xxx## .#  #!"
	"xx##. .   #!"
	"x##  $ #  #!"
	"##  $ #####!"
	"#  $ ##!"
	"# $ ##!"
	"#  ##!"
	"####!",
	"dd4ldldldlddrUrUrUrUdldldlluRuRuRu3Rl3urrddrddl3Udd4ldldlddrUrU"
	"rUdldlluRuRu3R3ldlddrUrUdlluRuRRdLulDrdLulDrdLuu3r4ururrdLddrddlU"
	"LLulDrdLr4uRurrdLdDrd3L3uRur3DrdLLr3ullddlDlDlddrUrUrUUddldlluRu"
	"RlddrUrUdlluRddllddlluRdrUluRdrUU",

	// 6
	"xxx####!"
	"x###  ##!"
	"##     ##!"
	"# ****+ #!"
	"#    $  #!"
	"##### # #!"
	"xxxx#   #!"
	"xxxx#####!",
	"ullDRDrrddll3UlullDRdRRuLulldldRRluurrdr3drruuLruLuLLdLdlluRuRRdLrRD"
	"rruLuLulDlddRRUruLdL3r3dllUUluRuulDr4drruuLrddlluU",

	// 7
	"x####!"
	"x#  ###!"
	"x#    #!"
	"x# ** #!"
	"x# * ##!"
	"##$@ #!"
	"#  .*#!"
	"#  # #!"
	"##   #!"
	"x#####!",
	"ruULDlUrrddDllUdrruulDl3drr3UluulDDr4ulDD3ruLdlddrUluluurDDurrdLd"
	"dllUURDuurrdLulDr5dlluURlddrru4UlldDuuruulDD3ruL6dlluluRRldd"
	"rru4UllDDRdrddlluluR3urrdDll4urDl3drruuruL3dlluuRluurD",

	// 8
	"x#######!"
	"## .   #!"
	"# $+$  #!"
	"# #*# ##!"
	"#  $  #!"
	"## . ##!"
	"x#   #!"
	"x#####!",
	"urr3dldlluRUURurrdLddLdlluluuRuRDllddrdrrur3uLr3dldlluRlluurrDDuuRu"
	"rrdLddLdLUlluurrRurD4lddrrUdlluurR4dlUr3ullddRluurrRurrd3LdDlluu"
	"RuRDrruLd3ldd4rUd4luu3rurrdLL",

	// 9
	"#####x####!"
	"#   ###  #!"
	"# $ #....##!"
	"##$@$   $ #!"
	"x#   ##   #!"
	"x##  ######!"
	"xx####!",
	"uulldRurDDRRurrddrUlulldRR3lddlUlURuulldRurDDldRuRRurrd4LdlU5rdr"
	"ru3LruurDlddrruLdlUruLLd3LddrUl3ulldRurDD3RurrddlUruLd3lddlUlU3R"
	"RRdrruLdlU4luulldRurDld5RdrU",

	// 10
	"xx####!"
	"xx#@ #!"
	"###  ##!"
	"# $$* #!"
	"# #  *###!"
	"# . *   #!"
	"###  .  #!"
	"xx#######!",
	"rdDrDDLdR3ulDlUrr3dlUdlU4rdLLu4luuRRDullddr3RuuLLdR3ulDDrdd3l"
	"uuRRlldd4rdrru3LuU3lddrRdRU3luurrDullddrRdrRurrdLulLLuurDl3urD",

	// 11
	"xxxx#####!"
	"xxx## @ ##!"
	"x###  #  ###!"
	"x#   ###   #!"
	"x#$   #    #!"
	"x# ####### #!"
	"## . ###   #!"
	"#.$ * #  ###!"
	"#  .  #  ##!"
	"###  ###  #!"
	"x#  ##### ##!"
	"x#      $  #!"
	"x##  ###   #!"
	"xx##########!",
	"rdrddrrddll3drdd5Ldl3UruruLullDRDDurruLdlUlldRurrddlDld6Rdrru"
	"Luul3urr3ullululldldll4Drrddldd4rRdrU6luuruulDDuulldRurrddlU"
	"dDld6Rdrru6Ldl3UruuLL4urrururrdrddrrddll3drDul3urr3ullul"
	"ulldlddll4dR3d5rdrru6Ldl3UrU",

	// 12
	"xx#####!"
	"xx#   #!"
	"x## #.###!"
	"## * $  #!"
	"#  $ *# #!"
	"# #.# # #!"
	"# #   # #!"
	"#  ###  #!"
	"##  @  ##!"
	"x#######!",
	"llul3urRUdll3drd4rur4ulLL3r4dld4lul3urrddrruUddlluuRuRD3l"
	"uRdrr3ullDDRdrU3ldl3drd4rur4u3LdLddrrUdlluuru3r4dld4luluu"
	"uRuRDll3drd4rur4ullL",

	// 13
	"xx####!"
	"###  #!"
	"#@*  ##!"
	"# **$ #!"
	"## .  #!"
	"#  # ##!"
	"#     #!"
	"###   #!"
	"xx#####!",
	"RRDul3DldRRdrruLuuruLLuur3Duu3ldRdRUrrdLuuLdl3dRdrruL3UlldRlddRdr"
	"ruLuUruLLuurDlddrruLdllddRdrUUdlluurUrrdL3ulD",
};


const sCollect PelouxCol[] = {
	{ "MiniCosmos", PelouxCol1, count_of(PelouxCol1)/2 },
	{ "MicroCosmos", PelouxCol2, count_of(PelouxCol2)/2 },
	{ "NaboCosmos", PelouxCol3, count_of(PelouxCol3)/2 },
	{ "PicoCosmos", PelouxCol4, count_of(PelouxCol4)/2 },
	{ "Cosmopoly", PelouxCol5, count_of(PelouxCol5)/2 },
	{ "CosmoNotes", PelouxCol6, count_of(PelouxCol6)/2 },
	{ "MyrioCosmos", PelouxCol7, count_of(PelouxCol7)/2 },
};
const int PelouxColNum = count_of(PelouxCol);

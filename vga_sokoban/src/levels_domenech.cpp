
// ****************************************************************************
//
//                        Game levels - Jordi Domenech
//
// ****************************************************************************
// Author: Jordi Domenech
// Email: jd_sokoban@abelmartin.com
// Website: http://www.abelmartin.com/rj/sokoban.html
// http://sokoban-jd.blogspot.com/
// Copyright: (c) Jordi Domenech
//
// These levels are copyright (c) by Jordi Domenech and may be freely 
// distributed for non-commercial use provided they remain unchanged, 
// credited with the author's name, and provided the author is notified. 
// 
// License: Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported
// http://creativecommons.org/licenses/by-nc-nd/3.0/

#include "include.h"

// Original remixed, (c) Jordi Domenech
const char* DomenechCol1[] = {

	// 1 (Jordi Domenech: Original remixed)
	"xxxxx#####!"
	"xxxxx#   #!"
	"xxxxx#$  #!"
	"xxx###  $##!"
	"xxx#  $ $ #!"
	"####$# ## #xxx######!"
	"#    # ## #####. ..#!"
	"# $   $      $ .*..#!"
	"#   ## ###$#@#...  #!"
	"######     #########!"
	"xxxxx#######!",
	"urrd3ruulldurrddlluurdrdlu7l3ululldurrdr3d5l5r3ululldlldd3lddrru12rurd1"
	"3ldllu15rurrddlurulld10ldd4rud4luu10rurrddlu8l3ulull3duull3d13rdru9l3ul"
	"uluul5duull3d13r8l3ullul3duull3d12r14lurd3r3ullddld12r6l3ull3urddll4d3r"
	"3ullul3duull3d10r",

	// 2 (Jordi Domenech: Original remixed)
	"############!"
	"#....#     ######!"
	"#....# $ $  $ $ #!"
	"#... #$#### $   #!"
	"#...   @ ##   $ #!"
	"#..  # #  $ $   #!"
	"###### ##$ $ #$ #!"
	"xx# $  $ $ $ #  #!"
	"xx#    #     ####!"
	"xx############!",
	"rdrr3drr3u3dll3ur3ulu4ldduu4rdr3d3lu6ldl3udd5r3urrdluldduu4rdr3d3lu6ldluud5"
	"r3u4rd3lulddu5r3d3lu4ldl3udd3r4d3lurrdr4urrd5r3u5lulldduurrd3r3d3lu4ldluud5"
	"rdrr3dllulldllurdr3uddrrdrru4ldllurdru4ruullu5l3r3urrdlulddu5r3d3lu4ldll3ud"
	"rd5rdrdrd4luudd3ruulu5l3r4dllurdr3udd3ruulu4ldlluudrdru4rd5ruluru6lulddu6r5"
	"d6l3ruulu4ldlu3r4dllurdr3udd3ruulu4luudlldrdru4rd3ruuru5lulddu5rd4rdd3ldllu"
	"llu4ldlu5rdrrdr3uru5lulddu5r3d3lu4luld5rd7r3u8lulddu5r3d3lu6l6rdrdrd4ldllur"
	"dr3udd3ruulu4ldlu5rd6ruuru8lulddu5r3d3lu5l5rd7rddl4uru8lulddu5r3d3lu4l",

	// 3 (Jordi Domenech: Original remixed)
	"xxxxxx##########!"
	"xxxxxx#       @#!"
	"xxxxxx# $$$#$ ##!"
	"xxxxxx#    $ $#!"
	"xxxxxx####$   #!"
	"#########  $#$###!"
	"#....  .#$   $  #!"
	"##.*.*.  $  $   #!"
	"#... ..##########!"
	"########!",
	"7ldd4rddldd3lu3lddrru4ruuldrd3lu5lrdrdll4ru3l6ruurruulddlddrrurrd9l5ruurdrd6l5"
	"r3urddrd5lu4lrdrdru9ru4luurrddrd8ld3lururd4ruurdrd6l5r4u3luu3r5drd5ldllururd4r"
	"6u3r5drd10l6r4urrlluurrddurddlrddrd8luld5r6ulldrur5drd6l5r5u3ldrrur4drd5l4r4ur"
	"3drd5l",

	// 4 (Jordi Domenech: Original remixed)
	"xxxxxxxxxxx#########!"
	"xxxxxxxxxxx#.......#!"
	"############  #.$..#!"
	"#    #  $ $  ....*.#!"
	"# $$$#$  $ #.* .#. #!"
	"#  $     $ #. .....#!"
	"# $$ #$ $ $#########!"
	"#  $ #     #!"
	"## #########!"
	"#    #    #!"
	"# $  $ $$ ##!"
	"#  $$#$$  @#!"
	"#    #    ##!"
	"###########!",
	"luu3ldllulluuluu6rurru3rdruudrdld4ruruuld8ldllu5rdru6l4drr3ulu9rdru9lddrulu7r"
	"9l3drdr3ulu4ruu5rdd4luld3l4dr3ulu5r4l3dllu7luurdld7rulu5ruu4rl3dldrulluud3l3d"
	"luulu6r4ldd8luurdld6r5luurdld4rddlurruulu5ruu3r3dlluud3l3dluulu9r7ldd6lulld4r"
	"dru6lddrulu8rdruulu7r10ldrd3lulld6rulu5ruurdd3l3dluulu4rdruud3ldd8l4dlddr5ulu"
	"7r6l7drruldl6ulu6r3lddlulu4rdruulu8rdruurd6l3dluulu6rdru5l3dllu4ldll3dlddr5ul"
	"u7rulu5rurd3l3dluulu4rdrruldlulldd8l4drrdldl5ulu7r6l5d4rurrd5ldl5ulu6r5l5d7rd"
	"dluru6ldl5ulu5rdruulu6rurd3l3dluulu7rldlu3l3dlluulu7r4ldd8l5d6rddluru5ldl5ulu"
	"7r6l5d5rddluru4lddrull5ulu6r5l5d4rurrd5ldl5ulu5rdruulu6rurd3l3dluulu5r3l3dllu"
	"ulu5r",

	// 5 (Jordi Domenech: Original remixed)
	"xxxxxxxx#####!"
	"xxxxxxxx#   #######!"
	"xxxxxxxx# #$##    #!"
	"xxxxxxxx#     $ $ #!"
	"######### ###  $  #!"
	"#.... .## $  $##$ #!"
	"#....$   $ $$ ##  #!"
	"#.#*..  #$  $@#####!"
	"#... ..##  $  ##!"
	"######### $ $  #!"
	"xxxxxxxx###$## #!"
	"xxxxxxxxxx#    #!"
	"xxxxxxxxxx######!",
	"uulld4ld3luurdurd5rurrd7ldlu5rddluru6ldrd3lrruulluldrrdrdluu10rddluru9l8rddl"
	"uru6lu4lrddrru8r3drdd3l4uru10l11r3dlrrdd3l4uru7l4r3druuru5lu3lrdurd7r3drrdd3"
	"l4uru7ldlu5r3u4rdd3l3ruu4luurrdull4drd7l6ru4ruu3lruull4drd5luld5ru4rurruurrd"
	"d3lru5lruull4drd4ldlu4ru4ruru4lruull4drd4luld4rd4r3uru4lruull4drd6l9ruu4ru7l"
	"ruull4drd3ldlu7ruu4rddluuru7lruull4drd5l",

	// 6 (Jordi Domenech: Original remixed)
	"######xx###!"
	"#....####@##!"
	"#.# $.##   #!"
	"#..$.   $$ #!"
	"#.*. # # $ #!"
	"#..### # $ #!"
	"#### $ #$  #!"
	"xx# $ $# $ #!"
	"xx#  $  $  #!"
	"xx#   ##   #!"
	"xx##########!",
	"dr4d2(ldr3u)ld4lulu3lddrdrrulldlurrurd6rddluru6luullrdd6rddluru5ldlluldrruud7"
	"r4dll3uru5luuldd7r6dll5uru5ldllurdru4r5dll4u4drrur3ulu4luld5rurrd6ldluud3r5dl"
	"dlluurrdr4u4drrdr5ulu6l6rurrd6luld3r4dllurdr3u3d3ld5rdr5ulu5l5rurrd5l",

	// 7 (Jordi Domenech: Original remixed)
	"xxxxxxxx#####!"
	"x########   ##!"
	"##  # @## $$ #!"
	"#     $      #!"
	"# $ $$ ## $  #!"
	"#### #####$###!"
	"# $  $  # ..#!"
	"#  $   $ ...#!"
	"#   $$###.*.#!"
	"# $$  #x#...#!"
	"#   ###x#...#!"
	"#####xxx#...#!"
	"xxxxxxxx#####!",
	"ld4rdrddrdlul4d3ullulld5rur4d3ul3d3u7lurlddllu9rur3dl5ul3urrdl3duu6l3dld6rur3d8"
	"uld3rdlul6du9l3drruulu6r4l4u5rur5dul3drlur5u4ldlul3dldllurrd5r4l3ululldrru6rur6"
	"duulddu6lddrulu5r4l3ulu6rur5duldllulldlddrulu6r4urrdluldduu6l3dld6r6l3dluulu7r",

	// 8 (Jordi Domenech: Original remixed)
	"xx####!"
	"xx#  ###########!"
	"xx#$   $   $ $ #!"
	"xx# $#   #  $  #!"
	"xx#  $$$  #    #!"
	"### $# #  #### #!"
	"#@#$ $ $   #   #!"
	"# $ $  #$#   # #!"
	"# $      $ $ $ #!"
	"#####  #########!"
	"xx# $ #..#!"
	"xx#. ....#!"
	"xx#... *.#!"
	"xx#..*.#.#!"
	"xx#......#!"
	"xx########!",
	"dd4rururr4urrdrd3rd3(dll)4u4drruululdlldldllurur5drdrurddu4lr4u4lu3rur5dllurddr"
	"3ururruulldl4d4ururrddllul3dld3rdrullddllur3ur3u4rdd4lul4duur3u3ruul3durrdd4lul"
	"3dldrrdl4u5rurrurruu3lulull5durrdd4lul4d3u5rurrd6lul3dl3drdrlluu3rurdllduul3u3r"
	"5ulldllddulddr3urrddl7d6u3ldrrur3dld3r2(ll3u)rdldrur5d5ur4ull4d3ul4drur4dl3du3r"
	"ull5urdurrddllul4dldr5u3ldrrur5d4u7ruurrdd8lul4d3ul7ul6dldrrur3dldrrdl4u3r4u3l3"
	"ruu4l4d5ul6drur5d4u3ldrrur3dlddrruluur7u4rdrru8lul6dldrrur3dldr3u9r6u10lul6dldr"
	"rur4d3u9r4uluru10lul6dldrrur3d",

	// 9 (Jordi Domenech: Original remixed)
	"xxxxxxxxxx#######!"
	"xxxxxxxxxx# ....#!"
	"xxxxxx#####. ...#!"
	"xxxxxx#      . .#!"
	"xxxxxx#  ##.  ..#!"
	"xxxxxx## ##.....#!"
	"xxxxx### ########!"
	"xxxxx# $$$ ##  #!"
	"x#####  $ $ #  ####!"
	"##   #$ $   #$    #!"
	"#@ $  $    $   $  #!"
	"###### $$ $ #  ####!"
	"xxxxx#$ $  $####!"
	"xxxxx#      #!"
	"xxxxx########!",
	"rurrd3ruuld3rul4ulu7r6l6dllurdr5ulu4rdruud4l5dllurdr4ulu4rdru4l5drddrruull5dll4u"
	"r5ulu5r4l5dr3dl7ulu4ruu3rdrddllululd3l5dr5dl9ulu6r5l9dluudlullulld5rdr7ulu5r4"
	"l7d5rdrururrd8ldl7ulu4ru3rddluuld4l7d5ruruulddrd5ldl7ulu6r5l7d8rulluldrd5ldl"
	"7ulu5r4l5drruldl4ulu4rd3ruulddlu4l4dllddrdr6ulu4rurd4l4dlldrdr5ulu5r4l10d3ru"
	"ulldl8ulu4rurrdldlu3l7d5rurrd6ldl7ulu7rdllu4l5d3rdlldl6ulu5rurd5l7d4lulld5r3"
	"dluurr7ulu5rdru5l7d4lulld5rdr7ulu5r",

	// 10 (Jordi Domenech: Original remixed)
	"x####x#############!"
	"##@ ###       #   #!"
	"# $$   $$ $$ $ ...#!"
	"#  $$$#    $  #...#!"
	"# $   # $$ $$ ##..#!"
	"###   #  $    #.*.#!"
	"#.  ### $ $ $ #...#!"
	"#. . ###### ## .#.#!"
	"##.#  #  $ $ # ...#!"
	"#.$ # # $$ $  ## .#!"
	"# ..# #  $      #.#!"
	"# ..# # $$$ $$$ #.#!"
	"##### #       # #.#!"
	"xxxx# ######### #.#!"
	"xxxx#           #.#!"
	"xxxx###############!",
	"drrddl3drdr6d10r4u5lur3d4luurrlluurdl3d4r3ululrdrdrrulul3urruulu4rur12d9uld3u3lu3l"
	"d6rur11d6ululddldruur4u3l3dluuddlluuru4rur4d3u3lddlulu5rur10d5ululddur4u3ld6ld"
	"druruu6rur4d3u3l3dlluulu6rur9d4ululdr4u5l6drddl7ulu5rur4d3u5l7dllurdr6ulu6rur8"
	"d7u6l10d4l4u3rdr6ulu5rur3duu5l10dlluruddr9ulu6rur7d3ul3u5l6dlldrdr5ulldr3ulu7ru"
	"r6d5u4lu6ld9rur5dl4u3l3dll3drdd3r4d10l6ulul3urrdlulddur3u11rur4d3u3l3dlluu5drdd"
	"3r4d10l6ulullddrdl3uruur3ul4d4u12rur3duu5l6dlddr7u7d4r4d10l6ululul3drddl4ur5ull"
	"drur4d4u13rur4d3u6l6d4ld3rdr7u7d4r4d10l6ulul4ulldrur3dl3drddllur4ur4u6rddluru5l1"
	"1rurddu5l6d4l3d3rdr9u7d4r4d10l6ululul4dldr4ur3ul3ur5d4u5rddluru4l12rur3duu6l9d3l"
	"urrdr5u4d4r4d10l6ululul4d3ur3ul3ur5duurrulu12rurddu4l3dll3d4ld3rdr4u4d4r4d10l6ul"
	"ul5u4r4dr3u3drrur3dlddr7ulu5rurd3l4dl3ulu5r3l3dll3dlddr7ulu5rurrdluld4l10drruldl9"
	"ulu6r12ldl3dl3duurrdr6d10r3ululldl8udldluuru5ld3luur5durr3ul11r4l8d3rdlldl9ulu4r"
	"3l8d4r4d10l6ulul3ul3ur5dld",

	// 11 (Jordi Domenech: Original remixed)
	"xxxxxxxxxx####!"
	"xxxxx####x#  #!"
	"xxx### @###$ #!"
	"xx##      $  #####!"
	"x##  $ $$## ##   ##!"
	"x#  #$##       #  #!"
	"x# # $ $$ # #$  $ #!"
	"x#   $ #  # $ #$ ##!"
	"####    #  $$ # $ #!"
	"# .#$## $         #!"
	"#.  .$.##  ########!"
	"#.* ...#####!"
	"#..*#...#!"
	"#.......#!"
	"#########!",
	"d3ldldlddrr3dldrldululddrd4r3ulluu3rdrrdrul4urr3d5uruu2(l4dl)lu3lulluururu6r6ldldldd"
	"rrd3rdrr4uludrddlur3dlluluurrllddlluurdrdlul3drdllr4ullu3(ur)rdl3drdlul3dlld3rl4"
	"ullu3(ur)4drdlul3drrdll3u3rdrruulullrru3ru2(u3ldd)rdlul4dldrrdrdluul4ullu3(ur)3"
	"drdl3uruurdrdllul3dl4drrddu3ldluurruu3rdrr3ul3u4ruuldrdlddlld3ldlul4drdllr4ulluu"
	"rurrdduu3rd6rurrdrdlddld5ldl4u3ldldrrd4r4ullrru2(u3ldd)l4drdl3urrul3uruurdrdllul3"
	"dl4dllddrurrl3u3rd6r3uruurrddllu5ld3ldlul4drrd4lurr3ulluururrdduu3rdrd3ldldrrd6ruu"
	"lruru5lrruuruuldrd4lddu3lddl4dldr3urrulul4drddullr3u3rd8ruurullrddrrd7ldl4u3lrr3ulu"
	"ldl3drdldrrd4rulr3ullrruuruuldrd4lddullul3dl4dldrrl3u3rd6rulruuru5ld3ldlul4dlldrr4u"
	"lluururrddrdl3uruurdrddullul3dl4drdllr3u3rdrr3u3ldldrrd4r4ullrruuruuldrd5luldl3dl4d"
	"rdl3urrul4urrdlul3dl4dldr3urrul3u3rdrd3lrruu3lddl4duurrulul3d",

	// 12 (Jordi Domenech: Original remixed)
	"################!"
	"#              #!"
	"# # ######  $  #!"
	"# #  $ $ $ $ $ #!"
	"# # $ $@$ $ ##.###!"
	"# #  $ $ $ ##....#!"
	"# # $ $ $  ##....#!"
	"# ###$$$ $ #.....#!"
	"#     # ## # .#..#!"
	"#####   ## # ....#!"
	"xxxx#####   $ ####!"
	"xxxxxxxx#     #!"
	"xxxxxxxx#######!",
	"ldrddrrur3d5ururrur3dl6dlud3lu3rdruluud3r3ul5u3ldld3rur3dldr3u4l6duu3l3urrlu5"
	"rur4dldrrurd3ldldrrldd4lurrl4uluulu5rur3dldrrl3u5ld3lu7rur3dldr3u4l6duu3lurrluu"
	"lu6rur4d5u11ldd10rur3drddluluruu11ldd3rldrruulu7rur3dl3dldrddlud3lu3rdr5ur3u4l6"
	"duull3ulu6rur4dldrrll4d4lurrl5u7ld6rur4d4u6lulu10rur4dl5dllurd3lurrdrr4ur5ullu11"
	"l7d4ru4rur3duu5lddrr4ullulu8rurr5dl4dllurdr3uldrddllurdruudd4lu3rdru3l3u5l3ulu6r"
	"u3rur5d4ulldrur3d3u4ld3rurddu4ldd3lulu7rurd",

	// 13 (Jordi Domenech: Original remixed)
	"xxx##############!"
	"xx##   ##       #!"
	"###       $# $$$###!"
	"#  $ #$ #  #..... #!"
	"# # $#@$## #.#.#. #!"
	"#  # #$  # $.$.$. #!"
	"# $    $ # #.#.#* #!"
	"#   ##  ##$ * .$. #!"
	"# $ #   #  #*#.#. #!"
	"## $  $   $ .*... #!"
	"x#$ ######    ##  #!"
	"x#  #xxxx##########!"
	"x####!",
	"ddll3ulur4drrurrdl3d3rdrru3rlld3l3u3rl4urr4dlluurluu5r4dl3uru3lddrluu3r3dluur6dl5"
	"u4ldd3r5ldd5r3lud5lulld6rluurruu5r3dlur3dlu3ldl3u3r5luu5r3l4urrdduurdu6lddr5dld6r"
	"8l3ulddld6rdru2(udlluu3rl)3ururdu4l7dldrrdr6udll3u3l6dld5rdr5ull3u4lull5drlldlldr"
	"d12r7l4ul3dld6rdr4udll5u4l6dld6rdr3udd10lul5urrur3d3urur7dld6rdruud10luurdld11r10l"
	"3u3rur3dld5rdru9lddl3ulurlu4rllddld10r5l4ul3dld6r",

	// 14 (Jordi Domenech: Original remixed)
	"xxxxxxxxx#######!"
	"xxx#######     #!"
	"xxx#     # $@$ #!"
	"xxx#$$ #  $#########!"
	"xxx# ###.......#   #!"
	"xxx# . $.#.....#$# #!"
	"xxx# ###...... ..  #!"
	"####   ####.### #$##!"
	"#  $ #$   #  $  # #!"
	"# $  $ $$$  # $## #!"
	"#     $ $ ###$$ # #!"
	"#######     $   # #!"
	"xxxxxx### ###  $# #!"
	"xxxxxxxx#         #!"
	"xxxxxxxx########  #!"
	"xxxxxxxxxxxxxxx####!",
	"u2(lldd)llrrd7rdd3l2(3ruu)lldurrdd7luullulduu4l5drrd3rdrrurr3drdd3r6u6d3luur3(ul"
	")luullru3rdrudrddlruuruurrdd7l3dlldd4ruruullrrddludd4luurr3ulu3rdrrdd3lrddrrddl3"
	"u4drrdr7u6d2(4luu)rr3ulurd5ruurr2(dd3l)rr3d5luurrudllulldrrddllururdld5rdr3ulull"
	"dlr4ulurrdrdrrdd3lrr3d6l3urdrr4u4dlldld5ruurullrddrrdldludd4luuluurdurr3ulurru3lu"
	"lu4l6dldd4rd6ruurullrddrrdldlu4luurr4u4d3l2(duull)ddrdrrd6ruurullrddrrdldlu4luurr"
	"3u3rlluullrdldr3d3lduulldldrrd6ruurullrddrrdldlu4luurr4u4d3ldllu3ld4rd6ruurullrdd"
	"rrdldlu4luurr3uruuldldr3d3ld7luurrldld6rd6ruurullrddrrdldlu4luurr4u4d3ldll3ullddl"
	"d4rd6ruurullrddrrdldlu4luurr3u3d3ld4l8u4rdrrddrl4urrdlul3drl3u4rd3lulddllulldlul7d"
	"ld4rd6ruurullrddrrdldlu4luurr4u4d3ldllurdd6ruurullrddrrdldlu4luurr3u3dllulddld6ruu"
	"rullr3d4luurruu2(drrd)ldl3urullr3d4luurru",

	// 15 (Jordi Domenech: Original remixed)
	"xxx########!"
	"xxx#   #  #!"
	"xxx#  $   #!"
	"x### #$$  ####!"
	"x#  $  ##$   #!"
	"x#  # @ $ # $#!"
	"x#  # $   $$ ####!"
	"x## ####$##     #!"
	"x#  #.....#  $  #!"
	"x# $#...*.. # $ #!"
	"x#  $..*..#$# ###!"
	"##  #.....#   #!"
	"#  $###.#######!"
	"# $$  #  #!"
	"#  #   $ #!"
	"######   #!"
	"xxxxx#####!",
	"rdrduruurrddrddld5l3ru3lrruululldrrur3drdldlu4ruruu3lrruulldl3drdl3r3ullul4d3rurr"
	"3dll4u4rddlr2(u3lu)l3dldrdrurruuru3lul4d3rddrr3urulldluru3lul3dldrrdd3lu3ldldlddr"
	"uruuddlluruur4ul2(uurr)3dldrrur3dldrdrdlluu4drdd2(llulu)u4r3l4uluu3rluurr3dldrrur"
	"4dlddrruldlu5lddrulu6r4uruurrdurdd3lul5dldr5ur3ululrur4durrddllul5d5lddllddrulurdr"
	"uulu4r3l4uluurr3urr4dldrrur4d3ur3ullul3dldrrur3duu3rddrruldluru3lulddulluu3l5dul3d"
	"u3rll3dllurdruulurrl3drdrrdrruuludrddluu",

	// 16 (Jordi Domenech: Original remixed)
	"#####xxxxxx#######!"
	"#   ##xxxxx#     #!"
	"#    #xx####$ $  #!"
	"# $  ####    $ $ #!"
	"#  $$ $   $ $  $##!"
	"###@ #$ $  ###  #!"
	"x#  ##  $ $ #####!"
	"x# $  ## ## .#!"
	"x#  #$##$ ##.#!"
	"x###.  $..##.#!"
	"xx# ...#.*...#!"
	"xx# $*.#.....#!"
	"xx#  #########!"
	"xx# .#!"
	"xx####!",
	"uludrdru3rddlu3rdlulu4lddlddrurrddl3d3u4rdrl4uruul4drd3ldluldu4rdd4r4ulull3urrd"
	"luldl4drddrrdr3udd3lu3ldllu4r3urruluurrdluldl4drd3ldllu4rd3rdruud4l5ulldrluurr4"
	"drd3ldllu4rd3rdru4ld3r3l5urrulruuld6lulld7r4drd3ldllu4rd3r3l4urrulruuld8l3urrddl"
	"d6r4drd3ldllu4rdrrll4urrulruuld6luurdld5r4drddldrrluu3ldllu4r3urrulruuld6l3ulddld"
	"7r4drddldruu3ldllu4rurddl4urrulruuldl4d4u4ldldlddrurrddldrllddruruu3r3urrulul4drd"
	"4luulluuruulld6rdrruuldrdluu4rd3luldl4drd3lrr3urrulu4r3ulddrd3luldl6drl4urrulu3r3"
	"u3rdllulddrd3luldl4d4u5l3drr3du3r3urrulu5ruluu3rddlullulddrd3luldl4drd3lrr3urrulu5"
	"rdruurulldrd5luldl4d4u5l3drrdd3r3urrulu3r3urddrd4luldl5d3urrulul4d",

	// 17 (Jordi Domenech: Original remixed)
	"xxxxxxxxxxx#####!"
	"xxx#########   #!"
	"xxx# .$ #   $  #!"
	"xxx# *$. ..* $ #!"
	"xxx#.. .# $#####!"
	"x########$ #  ##!"
	"x# $ .  .      #!"
	"x#   $. *$  #  #!"
	"####.##  ####.##!"
	"#  $  #######. #!"
	"# # *  $. #  $ #!"
	"# @$  $  .# $ ##!"
	"#### ## ###   #!"
	"xxx#    #x#####!"
	"xxx######!",
	"rurdrrurldllurl4urrdlul3drdl3u3rdrururrd6l5r3uluur3duu3ld3luurdldrrlu4rurdurr"
	"d6ldlluurd7ruurrdd9luld3ruld6ruurdrd8l3rddrulur3d3r4dllddrr5uru3ldll3urullr4dl"
	"lurdr3urdd3r4dlldrdr5uru3ldllr3udd6ldllu10rur3duu8ldlddrddl4ulu9rurddu9l5d4rldd"
	"3l6ulu4r3l5d3luurrllddrrur3ulur5d3luurrdrudd3rull",

	// 18 (Jordi Domenech: Original remixed)
	"xxxxx###########!"
	"xxxxx#  .  #   #!"
	"xxxxx# #.  $$@ #!"
	"x##### ##..# ####!"
	"##  # *.###..   ###!"
	"# $ #..*   *.#  $ #!"
	"#    .. ##  ## ## #!"
	"####$##$# $ #   # #!"
	"x### #    #$ $*.# #!"
	"x# $ $$# #  #.*## ##!"
	"x#  $            $ #!"
	"x#   #########     #!"
	"x#####xxxxxxx#######!",
	"uldlldlulull3dlddrru3rdrururr3dldurrdl4ulludd5ldlluur3urrd4rurrd4luld3r3dl4dld4"
	"r5urullr6d6luururuurruudd5ldlluur3urrd4rurrd4lulldrurdrrddrr7drruldl6urullr6d3l3"
	"uluurruudd5ldlluur3urrdrruld3rurrd5l3r3dllddldlluu4luuldld5ru4rddldldd4l3u4dllu1"
	"2ruullrr3drruldluud6luuluu4lulld4rurr3dldldl3uddrrur3ulldllulld3r4dllu3rd3ruurur"
	"uu4l4rddrdrrurrdl4ulldllddrulu3l3drdd3r3u3d3ruullrr3drruldluudd4rul5ullu3ld4lrrd"
	"drulurddlld3ldld8rll4udd3r3urullrd3r5dldlluuddrruldlu",

	// 19 (Jordi Domenech: Original remixed)
	"xxxxx####!"
	"xx####  #######!"
	"xx#        $  ##!"
	"xx# $ @####  $ #!"
	"##### $   # $  #!"
	"#...## $  #$## #!"
	"#.$.#  ##    # #!"
	"#.*.#  ###$# # #!"
	"## $  $    # $ #!"
	"x# $ $ #$# # # ##!"
	"x# #  $  # # #  #!"
	"x# ###$#   $    #!"
	"## ###   # # ######!"
	"#  $  #### #$#....#!"
	"#    $    $  $.*#.#!"
	"#$##$  $# $   .*..#!"
	"#..*.   #  ## ....#!"
	"#.$#.#### #########!"
	"#....   $ #!"
	"###########!",
	"d3rdd3r8drd3rdrulludllulldrrurduurrlld5l4d5l5r3u4rd3rluuldldrru3l9ull7duurl5urr8d"
	"ldrr4lu5rduurdd3l4u4luudlluu3r4luur3(dl)3ulrddluu7dl4durdl4urrdlrr3durruulullr3dl"
	"ruu10rll3u4l3u5ldluuludr6dl3duurrurddrdl3rulu7rl8ull8dld7rllull8u3luu3l3dld4rl4dll3"
	"udrruu5luul7drdl5urrdrur5u3rddr7duu4r3ulr5ulu6lul6dld4rl4dll3udrruu5ldlu4r4urrdlul"
	"3duu3rd3r8dld4ru3l8uluurruuldrr7drdllr3ull6dld3rll4u4l3u4lrrd3luul6dlddurrurddu10r"
	"ll8uluurrur7drdllr3ull5d7ul3uru5lul6duu3rdrdd7ldlu4r6u3ldrrur5dl3d3ruu4ldlu7r6dld4"
	"rllurr",

	// 20 (Jordi Domenech: Original remixed)
	"xxxx##########!"
	"#####... ....####!"
	"#     # $  $ #@ #!"
	"# #######$####  ###!"
	"# #    ## #  #$ . #!"
	"# # $$ ...#* #  #.#!"
	"# # $  #   . #$ . #!"
	"# #  ### ##. $  #.#!"
	"# ###  #  #  #$ . #!"
	"# #   $# $####  #.#!"
	"# #$   $  $  #$ . #!"
	"#    $ # $ $ #  #.#!"
	"#### $###    #$ . #!"
	"x# $  $ $$ ###....#!"
	"x#        ##x######!"
	"x#   ######!"
	"x#####!",
	"r3dlur3d3lu4l5drl5u4ruuldrd3l4ururrdlull4d3luldulld5r3drddl4u4rddluru3lul3drdd4lul"
	"dd3l9u4ru4r4d3lulld4r3drddl4u3rurdld3rurd3lu4l4d4ld3l9u4ru4r4dld3rurdld3ru3r4dllul"
	"urrlddrr4ulld3ldluru3l5ulldrur4dld3rurdld3rdrrl3dluud3ruullu3lu3l5urrdlul4d3lulld4"
	"r3drddl4u3rurdld3rur3dldrrl3dluur4u3lu3l3udd3lulld4r5d4l3drd4rururruullrrddlluddld5"
	"l3u3l9u4rurrdrr3dl6drudd3ruu3ldl5u3rurdld3rur6drruull3u3lu3l5urrdlul4d3lulld4r5drdd"
	"rruldluruldl5u3rurdld3rur5dldrrdru3ldrrl6u3lu3l3udd3lulld4r5d4ld3l9u4rurrdrr3dl3drd"
	"lddrruldl5u3rurdld3rur6dldr4uluru3ldluru3l5urrdlul4d3lulld4r3drddl4u3rurdld3rur6d5u"
	"3lu3l3udd3lulld4r5d3luurdldrr3ld3l9u4rurrdrr3dl3dr3dl5u3rurdld3rur5d4u3lu3l5urrdlul"
	"4d3lulld4r6d4ru3ldl5u3rurdld3rur3dl3drluur3u3lu3l3udd3lulld4r5dlldldlu3l9u4rurrdrr3d"
	"l5dllu3ldr4d5r3uruldl5u3rurdld3ruruuldrdd3lu3l5urrdlul4d3lulld4rd3rurdld3rdr3uldrd3l"
	"dluud3r3uruul4drd3lu3l4ulu3ld4l9drru4rllddlddr3u3drrurdr3ul5uru3lulld4r6drruldl5u4dl"
	"lulld3r4ldll9u4ru5rl4d3lulld4r3dr3dl5urrl4uru4l3r4d3lulld4r5d3lddlulu4rll3d3rdr3ul5"
	"ur4uru3lrr4d3lulld4r6drruldl5ur4urullr4d3lulld4r5d4l5dllurdr4ulu4rll4d3lu6rdr3ul5ur4"
	"ulur4d3lulld4r6drruldl5ur4u3d3lulld4r5lddrulu4rldlullddrulu3r",

	// 21 (Jordi Domenech: Original remixed)
	"xxxxxx####!"
	"x######  #!"
	"x#      $#!"
	"x#..*.*  ####!"
	"x## #### #  #!"
	"### #@##    #!"
	"#  $$$ $  $$#!"
	"# $ # ## $  #!"
	"#   #.##  $ ####!"
	"#####  $$$ $#  #!"
	"xx#  .##       #!"
	"xx# $.  # #.. .#!"
	"xx#   # # ##.#.#!"
	"xx##### *..$...#!"
	"xxxxxx##   #####!"
	"xxxxxxx#####!",
	"drrll4dllddrudrurrddrdrrurr3ulluuruul3dullurruulldrl3ulu4l4dllddrruu5r3uluur4drd6"
	"l3ulu4r3l6dllurdr5ulu3rdll3drr4d4u3r3u3l3ruuldrdllrrddrr3dllur3drr3lull3ruuldrrdur"
	"ddrdrruuldl3dlldllurr3luulluu4r3d3u4lddrrddrdrrul3u3r3dlr3urur3dululluuldld3rddurr"
	"uuldrdlu4l4urr3dldrrdrruuldll4uluur5dld3rurddlull4ul3duullu5l4u3rdrruuldr3duulu4l5d"
	"llurdr3udd5rur7duu4rurd3lu6l3dllurlur",

	// 22 (Jordi Domenech: Original remixed)
	"x######xxxxx####!"
	"x#    #######  #####!"
	"x# $ $#  # .*. #   #!"
	"x#  $  $  $ # $ $. #!"
	"x##$ $   # @# $ ...#!"
	"x#  $.###########.##!"
	"x# #...#... . .# *#!"
	"x# ##* #.. #.  #  #!"
	"x# #   $  ###$ .$ #!"
	"x#$# $ #. .. ..#  #!"
	"##  $ $####$#### $#!"
	"#  $  .### *   $..##!"
	"#   $ .  $.*. $    #!"
	"###$###### * ##### #!"
	"x#  $ $    # $   $ #!"
	"x#     $# ##    ####!"
	"x####     #######!"
	"xxxx#######!",
	"uurrdd4rddlddlld5lu3lddlluu4rdruud3lddlulu4rdruluurrdld4l4dr3ulu3rdruuruldd3luulu"
	"u3rurrlld3l3drddllu4rdruudd4ruululrdrruldd4rddluru3lrr4dllurdr3urullruuruu4luu3ld"
	"lld4ldll5drrdruulu4rd6ruuldrd5lu3ldd4ldr3dld3rd4ruur3urudrrl4drruldl3ururrdr3uru3"
	"lrruuruullururdd4lu3r3luurddld3rlluu4lddrulu3rurddldrrluu3ld3ldllu4rdrulurrld3ld4"
	"lu6rdrulurd8lduluurrdur5drdd3rd4rudllddlddr3uddrru3r3u3ldlldd4rdr3uru3luld3r4drrdd"
	"3ldlluluulu4rdr3uruudl4drrdd5ldl3ullddldd4luuldl4ulu3rdd5rdr3ud4rd3ldluldd6ldl3u7r"
	"urdrruld9lulld10rlddlddlluldlurulldl3uluurdld3rlluurdrd5rdd6ldl3u6r3l5uddlddldr3lu"
	"3r3l6urrurdlluulurrur3dllu7rdru",

	// 23 (Jordi Domenech: Original remixed)
	"xxxx#######!"
	"xxxx#  #  ####!"
	"##### $#$ #  ##!"
	"#  @#  #  #   #!"
	"# $ # *#* #  $####!"
	"#  *#.. . #$ .#. #!"
	"# $. .*#. # $.$. #!"
	"#  *#. #$.#* .#. #!"
	"# $ # $# . . $#  #!"
	"#  $#  #$*#*  #$ ##!"
	"# $ # $#  #  $#   #!"
	"#  $#  #  #   #   #!"
	"##  ####  #####...#!"
	"x####xx####xxx#####!",
	"ll4dru3ru4r3d3ruu3rur5dldr5u4l3druulu3rur5drdluluuruu4l5dr4ulu3rur4dlddrrul4u3ldd5"
	"lddrulu4rdruulu3rur3dluuddr3dl3uruu3ldd4luuldr4uldd3lddrul3druuluu3rur3dld4rdruud4l"
	"3u4luurdld3rur3dluddrddl3ud4rdruluurr3ld3ururdld3ul4drdd3l3u3lul3drulu3rur3dluru3ld5"
	"l3urrdduullddrd3rdruluruuldd3rurddlddrrlddl4urddlddrddl5uruu3ld3lulld4rdrulu3rur3duu"
	"3ld5l3druulu4rdrulu3rur3ulddr3du3luuluur3dulddrrlddlu3lddrulu3rdruu4dlu3dr5u5l3urrd"
	"ulddld4r4l5dr4ulu3rll4dr3ul5dr4u",

	// 24 (Jordi Domenech: Original remixed)
	"###############!"
	"# .. . ...    ####!"
	"#. ..$..  .$$ # .##!"
	"######## ##$.#    #!"
	"x# .   $  $ * $ * #!"
	"## ####   #    #. #!"
	"#      #  ###  # ##!"
	"#  $#  ###   ### #!"
	"# $ #$### .. # #.#!"
	"###  $ #  # .### #!"
	"x##    $ ## #  #.##!"
	"## $ $#  $  $ $ . #!"
	"#   $  $#$$$  #.. #!"
	"# $ #  $      #####!"
	"#  @##  #  #  #!"
	"###############!",
	"uuruurruluuru3ldlluruu5rdr3uru6l3rd4l6rdd6l3drddr3drd7rururrdrrul8ulldldllulldluud"
	"3rdrruluuru9l5rd5lu8rd7l3rdd6l3drddr3drd6rurrurrdr7uru4ldlulud5r7d3ldllu4rdr7uru5l"
	"uurullrd5lrdd6l3drddrd3rddu8rdr7uru4ldludluudlldluud6l3drddr3dllurd3rd3rurul3druulu"
	"6rdr7uru5ldluruulu5l3rdldd6l3drddrd3rddu8rdr7uru8ldl3urul3d6l3dr4dld3rudrd3rdruulu6"
	"rdr7uru4ldlu4r7d5luuruulldrl3(ld)duulul3ulldlldrur4dld4rd3rdruulu6rdr7uru8ldlu6lddld"
	"rur3drd3rddu8rdr7uru8ldllu5ldd3r3dllddld4rd3rdruulu6rdr7uru4l3r7d4l3druulu3rdr7urul7"
	"d5l3ulldldllulld3rd8rdr7u6d5l3ul3(ld)8r8ld3lulu4r4luul4u5rdrrurrdrruru3rddl6drdlu5l3u"
	"l3(ld)8r8ld4lddlulu5rd5r4udd3lu3(ur)rdl3d4ldld3rdruulurllu5luul4u5rdrrurrdrruru3rddl"
	"6d3l3dluul3udd4r7lu5luul4u5rdrrurrdrrururr6d6ulldrur4d3u3lddrulurrurdlld3lu4r11l4ruu"
	"rurrdduulldldd3ruurru3l",

	// 25 (Jordi Domenech: Original remixed)
	"#####!"
	"#   ##############!"
	"# $ #    .#......#!"
	"#   # # ##### ...#!"
	"###$#       $....#!"
	"#    ##$######  #######!"
	"#  $ #.....######@    #!"
	"###$ #.*...#  ###$ $$ #!"
	"x# $ # *$$##       $  #!"
	"x#   . .#    #$#$## ###!"
	"x# ####.#$$$$$    # #!"
	"x# #   .$     #$  #$##!"
	"x# #   ## $      ##  #!"
	"x# ######$###### $ $ #!"
	"x#        #xxxx#     #!"
	"x##########xxxx#######!",
	"rdd6ld3luull3u7rdruuru4lrdd8luurrdulldd8rurrddlu7l3d3rulldl3ulluurrdulldd9rdruuld7"
	"lddrr3d3rdrddllull4urulldl3ulluurrdulldd8rurulrr3dluud7l4dluddll3ulr3dll5d7r7urull"
	"dl3ulluurrdulldd8rurrddlu7lddrr5drruldl4urulldl3ulluurrdulldd9rdruuld7lddrr4drrddl"
	"6ruu6ldl4urulldl3ulluurrdulldd9rdru8lddrr6d6ruru6ldl4urulldl3ulluurrdulldd8rurrddl"
	"u7lddrr4d4rd3ldl5urulldl3ulluurrdulldd9rdru8lddrr4d3ruu4rdurruu3rdd8lulddlldl3urull"
	"dl3ulluurrdulldd10r8lddrr5d4ru3ldl4urulldl3ulluurrdulldd9r7lddrr4d6rdrru7ldl4urulld"
	"l4u3drr4d7r4drruldl3uru7ldl4urulldl3ulluu3rldulldd8r6lddrr3d3r2(urrd)d6ldl4urullr3d3"
	"ru6ruuldrd5lul3drd3ldl4ululldr4ulluurrdulldd7r5ldd3rdldd3ru5ruu3rdrd8lul3drd3ldl5ur"
	"ullr3d3ru5ruurrdrd7lul3drd3ldl5ulur5dlluuluurlddru3drrd7rdd4ru3ldl3uru7ldl3ulurdd3"
	"ru7r4drd3ldl3uru7ld3luuluurlddrddrr4udlld5lururdld3ru3r3dll3ud3l4ul3dld4ru3r3d3ldll"
	"u3ruu3l4u3ldrur3dld4rurd3l4uluulluurr7dld4r3l6ullurur7dldrrll5d7r3ulr3ul",

	// 26 (Jordi Domenech: Original remixed)
	"xxxx####!"
	"x####  #!"
	"x#  #  #####!"
	"##  # $#...###!"
	"#  $#  #...$ #!"
	"# * #$$ ...  #!"
	"#  $#  #... .#!"
	"# ..# $##########!"
	"##$       $ $   ##!"
	"x#..#  $$ #   $  #!"
	"x######  ##$$$@$ #!"
	"xxxxxx#      #####!"
	"xxxxxx########!",
	"u3lu3ldulluluu3rdruud4lddrulu3rdru3l4dru4rdrru6ldl3ulu4r3l3d5rd4ru8ldl3ulu3rdrru"
	"uld3l3dr3d4ruuru5ldl3ulu3rurrddlu3l3d3rdlu3r3d3luurullrddlul3ulu4rdrrululd3l4drru"
	"ldl3ulu4rurdrrulld4l3dr3d5ruuru6ldl3ulu5rurrddluruld5l3d8rddlldluuru5ldl3ulu6rurd"
	"6l4dlullull3urdrull3drudrddluruulluurr3d3uluurddllddruul3drd3rdr3ulu4r3ldldrd3ldl3"
	"urdd8rd5rd4ldluuru5ldl3ulu3rlluuluur3dulddrrllddrd3luldul3urdduuruulddrdd",

	// 27 (Jordi Domenech: Original remixed)
	"######################!"
	"#      #             #!"
	"# #### $ ##$######## ##!"
	"# #.......#   ##   #  #!"
	"# #.......# $  # $ ## #!"
	"# ##...... $## # #$ # #!"
	"# #...#..#  $  #    # #!"
	"# #......#  #  # #  # #!"
	"# ###$##### $  $ $  # #!"
	"#  ## $   #$##$ ##$## #!"
	"## ##   $    # $    # #!"
	"## #  ## ### #  ##$ # #!"
	"#  # $ $$     $  $  # #!"
	"# ## $    $##$ # ## # #!"
	"# # $ ####  @ ##$   # #!"
	"# #   $  #$####   ### #!"
	"# ## # $         ##   #!"
	"#  #   ###########  ###!"
	"## #####           ##!"
	"x#       ###########!"
	"x#########!",
	"rurulluu3lulldll5u5drruldluud4rdl4rdd3r3(uul)ldlu4ruululldduurrdrdd3lullulddld3"
	"lr4dlddr7u7d3r3uru3ldluud3rd3r3ulurulluld3ruurrdrdd3ldluru3lulddullu2(ldrd)d3r3dlld"
	"l8urullu4ruu3r4duurrdrdd3ldluru3l3r5drdd6ldl8u10dllurdr9uluurrdl4d3rdllrrdd5rdd3lu"
	"4lul8urull3dr5dl3dr10ulu3rldrrd3r5drdd6ldl8ulu3(3rd)drdd5rdd13ldl8u5rd3rddrdd4rdrd1"
	"3ldl7uluurrdl5rd3rddrdd5r4dlldluu3d8lu3lrddlluulurdr11ulduurrdd4rd3rddlrr3drd9ldl8u"
	"lur6d6r3udrruulldluru6l6r3d3rdd4rdd12ldl8uruld5rd4r5drd9ldl9ud6r4u9rddr13dlldld10ld6"
	"luul5ur3ul8u5rddldd6ruurrdlulddu3rdd3ldluru4l3rd4r4d4ruuruu3ldd4l3r3du3rdd12ldl9u6d6"
	"r3udrruulldluru3l3r3d5ruurrdd6l6r3drd13ldl8u5d6r3udrruulldlurullrr3d5r5urrdlul4d3urr"
	"4d6l6r3drd13ldl7u9d3rdl3r3ud3ruu7ldl6u4dl6drrurullrddlluulurdr7udd6r3udrruulldlurulr"
	"4u3ldlru12rddr13dlldld10ld6luul5ur3ul8u5rd",

	// 28 (Jordi Domenech: Original remixed)
	"xxxxxxxxx#####!"
	"xxxxx#####   #!"
	"x##### $  $  ####!"
	"##  # $  $ $ ##.#!"
	"#       $$  ##..#!"
	"#  ###### ###.* #!"
	"##.#  #.$ .#... #!"
	"#.*.  #.  .#.**$#!"
	"#@.#$ ## ####...#!"
	"####  $ $$  ##*.#!"
	"x####  $ $  $...#!"
	"x#   $$$  $ #  .#!"
	"x# $    $ $  ####!"
	"x#  $#####   #!"
	"x##  #xxx#####!"
	"xx####!",
	"r3ulu4rururrdr3dl4drrurd3rurululrdr4uddllr4d5lddrulu4rdr4urulu5d4l3drrululu3rdr5u4"
	"d6l4ur3ulld4lul4d3rddrd7rdr3u3dr4ul3d3l3dluulu5rdruud4ldd4ludlluru8rdru9ld4lddru6r"
	"llulu7rdr4uruul5d3l3dluulu4rdr5u4d8lulddldllu3rld5rlulu6rdr4u3d6l4uruu6lul3duu9rul"
	"rruulldduurdrdldllddrdlul3dld6rdr3udd3lulld4l3u3l3u5ruurr4dr2(dlld)7rdruud3l3dluud"
	"4lu3l3druulu6ru4rdru6l3ur3urrulruuldl4duurrulul3duulld5l3d3rddlurulddrd9r3lddlud6l"
	"u5ru4rllddlulu3r4l3urluruu6lul3duu5ruuldrd4luldd",

	// 29 (Jordi Domenech: Original remixed)
	"#####!"
	"#   ##!"
	"# $  ########!"
	"## # #      #######!"
	"## #   $#$#@  #   #!"
	"#  # $    $ #   $ #!"
	"#  ###.######### ##!"
	"#  ##.*.*.*.*. # #!"
	"#  ## ..*.#... # #!"
	"## ##.*.*..*.*.# ##!"
	"# $########## ##$ #!"
	"#  $   $  $    $  #!"
	"#  #   #   #   #  #!"
	"##$############# ##!"
	"x# $ $ #   $ $ $ #!"
	"x#         #     #!"
	"x#################!",
	"u5l4drddrruuldll5u5rdd4l4ruu4ldl3dld3ruldl3uruul4dldr5u5rdrrdrrurrdl5drddlulldl"
	"luru3(ul)ldulldl3uruul4dld3ru3rdrdrrullr3d3ldllu4rdr3urulu6ldl3uruul4dldrrl4ull"
	"uulul5dlddrddlddrurrdrru6rdr4u3d7ldllu8rdr3uruulldru6ldl3uruul4dldr4ulluull3dl3dr"
	"ddld11rdr3udd11l3uluur4urrddrru5rdd4lul3d8rdlu7luu5rurrdrrurrdl5drddlulldl4uru8lu"
	"u5rurrdrrurrdl5drd3ldl4uru6l5r4d3r4dllurdr3uru3ldl4uru5l4r4d3r4d4lu3rdr3uru3ldl4uru"
	"4l3r4d3r3d6ldllu7rdr3uru3ldl4uru3lrr4d11l3uluur4dld11rdr4urullr4d11l9urr3drurdd3u3r"
	"durrdd4luld5rurrdrrur6drd3ldl4urul4d3r3d6ld8l3ulu11rdr4u3d11l4drruldl3ulu11rdr3udd3"
	"r3d6ld4lu3ldl3ulu11rdruu",

	// 30 (Jordi Domenech: Original remixed)
	"xxxxxxxxxxxxx###########!"
	"xxxxxxxxxxxxx#   #     #!"
	"xx#########xx#     $ $ #!"
	"xx#   #   ##### $## # ##!"
	"###$  $ $ ##   # ## * .#!"
	"#     # $  @$$ # ##$*$ #!"
	"# $#$### ###.  # ## .  #!"
	"#  #  ## #   ### #####$#!"
	"## #$ ## # * . *. #....#!"
	"x# #  #  ###.## $ #. ..##!"
	"x# # ## $   $ #   #.. . #!"
	"x#  $    ## $ #  ##...  #!"
	"x# $$######   ######...##!"
	"x#   #xxxx#####xxxx#####!"
	"x#####!",
	"lluullddr4dlddru3rddrrulrul3ulldrurd3rddrrulrul5uluurdrrurrdlu3rdlddr5dlddrrul4u3l"
	"uurdldrrluurdr6dlur5ulldrur4dlddrru3lurulrruul5ul2(ldrur4d)lddrrul4ul4u5lulld6rur4"
	"dldrur5drdllur4ul4u5l6drddl7ulu5rur4dldrur4dlddrrul4ul4u5l6d4lulld5rdr6ulu5rur4dld"
	"rur4dllddrudrrullurulruul4u5l6d4luurruull3dld4rdr6ulu5rur4dldrur5drdl5ul4u5l6d4luur"
	"rulul3dld4rdr6ulu5rur4dldrur4dlddrrul4ul4u5l6d4lddrddl6uruuld3luulldd5rddld4rdr6ulu"
	"5rur4dldrur5drd3lruur3ul4u5l6d4luurrululd3luuldldr4dlddru3r3l5u4rddld4rdr6ulu5rur4d"
	"ldrur4dlddrrul4ul4u5l6d4luurrululd3luuldld5rddld4rdr6ulu5rur4dldrur5drdllur4ul4u5l6"
	"d4luurrulul3dld4rdr6ulu5rur4dldrur5drdl5ul4u5l6d4lddrddl3ud4ld4luuruuluu3lddr4drru"
	"uruuluururrurd3lulld4rd5rddld4rdr6ulu5rur4dldrur4d3ul4u5l6d4luurrululd3luuld4l3drd"
	"dl4u6dllddrruull4uluurru4rd5rddld4rdr6ulu5rur4dldrur3duul4u5l6d4luurrululd3luuld4l"
	"3drddl4ulu4rd5rddld4rdr6ulu5rur4dldrurddul4u5l6d4luurrululd3luuldld5rddld4rdr6ulu5"
	"rur3dlddrrul3u5l6d4luurrulul3dld4rdr6ulu5rur3dllu3drudrrul4u3ldrrur4drdl4u5l6d4ldd"
	"4ld4l6u3lddrulurru4rurdld5rurrdlul3dld4rdr6ulu5r4l6d4ldd4ld4l6ulu4rurdld5rurrdlul3"
	"dld4rdr6ulur6d4ldd4ld4lddllurdr8ulu4rurdld5rurrdlul3dld4rdru4ldd4ld4ldllurdr7ulu4r"
	"urdld5rurrdlul3dld4rdrru5l4dlur6u4l5d3rdr4ulldrurd4r3dluur6uluur7d4l3rddrurul6urrur"
	"rd4lulldrur7dllrddrurul6urru4rd6lulldrur6d",

	// 31 (Jordi Domenech: Original remixed)
	"xxxx####!"
	"xxxx#  #########!"
	"xxx##  ##  #   #!"
	"xxx#  $# $@$   ####!"
	"xxx#$  $  # $ $#  ###!"
	"xx##  $## #$ $      #!"
	"xx#  #  # #   $$$ $ #!"
	"xx# $    $  $## #$  #!"
	"xx# $ $ #$#  #  #  ##!"
	"####  ###. ###$ ####!"
	"#  $  #.. .     #!"
	"# $## #......####!"
	"#    $..#.######!"
	"##  #  ..##....#!"
	"x#####.  . ... #!"
	"xxxxx#####  . ##!"
	"xxxxxxxxx######!",
	"rdrddldll3drdllul3dld5rdru5l3urr4urruru3(ul)8drdllul3dld5rurd5l3urr8u3rurrd4lul8drd"
	"llul3dld5rurrddlu5l3urr4urr3urullul8drdllul3dld6rdru6l4u8r4u3l3urrddluru4lul8drdllu"
	"l3dld4rdru4l3urr4urr3urullul8drdllul3dld6r5l3urr4urruruuru3lul8drdllr4urrdr4uru3lul8"
	"dll3dld5r4l3u4ru4r4uru3l6rddluru5lrd3luuru3lul8drdllul3dld4r3l3urr7u3lddrdrluluu3r6d"
	"rdllr4ullululldlddru4r4lddrulurr3u3r6dll3duu3rl4urr3urullul8drdllulddlddrrululdlu4luu"
	"rdld5rl3uluu4rlluulldurru3r7dlldldru5luurrurddu3ldd4rluuluulu5rll3u3r5drdl6u3lull3du"
	"u4rur7dldldlluuluulurr4du3ldd4rl5u3rll3u3r5drddllur3u3luul4urddld3rur7drdl4urrurru5r"
	"d3l4d4l4r4u3rddluuru5luru4lul7drdl6ruuldrd4l4r4u3luuru3lul8d3urr3urullul6dulldlul4du3"
	"ldd3r",

	// 32 (Jordi Domenech: Original remixed)
	"xxxxxx####!"
	"xx#####  #!"
	"x##   . $#!"
	"## $  ## ###!"
	"#+* $ # $  #!"
	"#### ##   $#!"
	"x#....#$ $ #!"
	"x#....#   $#!"
	"x#....  $$ ##!"
	"x#... # $   #!"
	"x## ###$ $  #!"
	"xx# $     ###!"
	"xx#   $$ ##!"
	"xx## $#  #!"
	"xxx#  ####!"
	"xxx####!",
	"rururrdldllrruuldr3drddrrurrd6l4drruldl5ud7rddluru4l3(rd)5l3druull3urru3r3urddurdd5"
	"lulldrdru4r4urd3lurl3drd4l4rddrudrrulu5ldl3ulr3ururrur6duurrulr4d5ldl5uruu3r5drd4ldlu"
	"ud4rddrudrrulu5ldlluurd4r5dlululldl4u5r3d4ldl3uddrddrurulldluud4ruuru3lrrddrruru4lrr6u"
	"3lddldduuluurrl3d",

	// 33 (Jordi Domenech: Original remixed)
	"x###########!"
	"x# .  .##  #!"
	"x# *.*...* #!"
	"####.##.$$ #!"
	"#   $ #    ####!"
	"# $$$ #.####  #!"
	"#   # # $ ##$ #!"
	"#  #  #  $    #!"
	"# $# $#$   $ ##!"
	"#   ..# ########!"
	"####.. $ #@#   #!"
	"#...$.# $ $ $$ #!"
	"##. ..#  $ $$  #!"
	"x##..##       ##!"
	"xx#############!",
	"dllu3ld3l3ruulddrdluu4rddluru3luldrdlldruu3r3d6ruruuld5ldluru3lulddrdllr5ur3ul3ulldru3r"
	"dr8drddluru3luld3ur3uluulurrl3dr7dlu3r3d6ruru6ldluru3lrr3d3rulldluurullruu3rurrd4lul5u"
	"3lddr5d4l5urrllddrrur3urul3dr3dl5d3urdrr6u3ruu5l5rddludllurullr6d3rulldl5uruldd3ruldlul"
	"4d6ruuldrd5ldl5u4drruldl3u9d5ru4ldl7u6d4ru3ldluru3lulddu3rdd6ru5ldluru3luluurdd4luurd"
	"ldrrll4ururldrrur4d",

	// 34 (Jordi Domenech: Original remixed)
	"xx#######!"
	"xx#     ##!"
	"xx# $ $  #!"
	"x####$## #!"
	"##.. *   ##!"
	"#  .*#  $ ##!"
	"# *$..# # @##!"
	"# .#. #  #  ##!"
	"#     #$ ##$ #!"
	"## ###. *    #!"
	"x#$  $ $ *#  #!"
	"x# #  *.*.## #!"
	"x#  ###  ##  #!"
	"x#. . ## ## ##!"
	"x# .$.#  $  #!"
	"x###$ $   ###!"
	"xxx#  #####!"
	"xxx####!",
	"lulu5lrddu3lddrulurrl7drddl8urrll7d3rddrruruululu3l3rdrdrddldllulull6ulurruu5ruulul"
	"ldduurrdr3d4(rd)dlu4lrd5l3rdrr3dldlldluurullul4uluurruu4rdr3(rd)r4dlddlld3lrr3uluur"
	"3ul3d5l3u5drdr3drurru4ruur4u3(lu)llull3urrdlulddu3rdd4lr3ulldrurddu3rddl5drd5l5r4dl"
	"d3luululuu4rdrdrddrd4ldluud3ru4ruur3u3lrru4(ul)6d3ldru3luul3ur",

	// 35 (Jordi Domenech: Original remixed)
	"##########xxx######!"
	"#   #    #####....#!"
	"#   $$#   @  ...*.#!"
	"#   # ### $ # ....#!"
	"## ## ###$ # .....#!"
	"x# $ $     # #$####!"
	"x#  $ $##  #      #!"
	"#### #  #### # ## #!"
	"#  # #$ $ ## #  $ #!"
	"# $  $  # ##  ...##!"
	"# # $ $    # #...#!"
	"#  $ ## ## # #####!"
	"# $$     $$  #!"
	"## ## ### $$ #!"
	"x#    #x#    #!"
	"x######x######!",
	"lddrddluruulu5rurd7lu3ldlldl3drru5rdr3ulu4rd3rulurlld6lu3ldlldldd7rdr3ulu5rurddl"
	"5duull3drrurdldru3l5dlulu3l5ululu4rdr3ulu5r6lu3l3duullulld3rll3d7rdr3ulu4rdrdrr3ul"
	"dul7duull3d3r3l4dllu3l3ul2(3ulu4rdr)ruul7duull3drrll4dllu3luurruulldl3ulu4rdr3ulu5"
	"rurd5l3d7ldr3drdr4u3d3ldrddrdd3luul3urrdrddlur5uru4rdr3ulu7rdldl4drd3l4dllu3l3udrr"
	"uul3(lu)4rdr3ulu5rdru5l3d4ld3lu6rdr3ulu6r5l3d6l4d3lddrrdruuddrdd3luulurrur4ulu6rdr3"
	"ulu5rurddl6dll4dllu7lr6ulu6rdr3ulu4rdrruul7duull6d7ldd3luulurrdr6ulu6rdr3ulu4rdrruu"
	"l5dll6d9lrrdd3luulurrlluurrdr4ulu6rdr3ulu5rurdl4dll8d3luru7lr6ulu6rdr3ulu4rdrruulddu"
	"4l3d4lddrddl2(3ulu4rdr)ruuldrdlu6lu3l3duu3l3d7rdr3ulu5rdru5l3d4l5dlullddr5ulu6rdr3u"
	"lu5r4l3d4l5d4rddrr6urruuddlluurl8d7ldd3luulurrdr6ulu6rdr3ulu4rdru4l3d4lddr5drrddrurr"
	"7urruuddll3drr4ud3rddllrruu3ldduull6d9lrrdd3luulurrdr6ulu6rdr3ulu4r3l3dluudd4l4urrd5r",

	// 36 (Jordi Domenech: Original remixed)
	"xxxxxxxxxxxx#####!"
	"#####xx######   #!"
	"#   ####  $ $ $ #!"
	"# $   ## ## ##  ##!"
	"#   $ $  .  $  $ #!"
	"### $  #  ##     ##!"
	"xx# ## .$*#####$$ #!"
	"x##$#####.@##     #!"
	"x# $  ###$### $  ##!"
	"x# $  #  .###  ###!"
	"x# $$ $.#.. *$ #!"
	"x#     #   ##  #!"
	"x#######.. .####!"
	"xxxx#. .. * ..#!"
	"xxxx#.. ... . #!"
	"xxxx###########!",
	"l5d6uluur6d6u3rd3rddrud3lddrddlu3lddld3rd6lrr3ur5uluur8duu5ruuldrd4l3r3urrurrdl"
	"dllulddu3ruuldrdllr3uluuruuldrddldllu3l7d7urruu3rddr3dl2(3d4l)d5ruull6ul4u3rdd"
	"ll8d3ulldld4l3ur3uru3rlddrrur6dlddrdllruur8urruu3l3du5luulldd6rlddrrur7drdllr9u"
	"rruu3l3du5luuldld6rlddrrur6drdl8urruu3l3du3lulluldld6rlddrrururruu3l3dr7d3ulldl"
	"dlluruulrddluddlluur4uruulld5rlddrrururruu3l3dr6dldd3rlul3ulldld3l6uruulld5rlddr"
	"rururruu3l3dr6dldr3ulld3lruuldl4uruulld5rldllrrdrrururruu3l3dr8d4ulldllull4uruul"
	"ld5rlddrrururruu3l3dr6drdl3ulldld3lu3r3l5uruulld5rlddrrururruu3l3dr6du5r3ulddrd4"
	"ldl5uluurdu3rdrrurrddrdldllulddrd4ldl3udd4ruu3ruuldrdllulddrd4ldlu4ruu3r4ul3drdll"
	"ulddrd4l3ruurr3ul4ur6drdllulddrd3lrruurr4u5lruu3rur6drdllulddrdl",

	// 37 (Jordi Domenech: Original remixed)
	"xxxx####!"
	"xxxx#. ####!"
	"#####*. ..#!"
	"#.*.. .   #########!"
	"#.   ###*##  ##   #!"
	"#..###      $   $ #!"
	"# ...$ $ #   ## $ #!"
	"#...#$#####    #  #!"
	"###$   #   #$   $ #!"
	"xx#  $$ $ *..$#   #!"
	"xx#  $   #*#$ #$$ #!"
	"xx### ## #... #   #!"
	"xxx#  $ $ ## ######!"
	"xxx# $  $  $  #!"
	"xxx##     #   #!"
	"xxxx#####@#####!"
	"xxxxxxxx###!",
	"uurrdrruluuruuluuluu5ld4l4rurrd5lddrrudlluluulur3dluud5rurrd6ldlurrddrddl3udrruull3r"
	"urruu6l3drdlr3drrurulldluudrruull5r3u6l3d3urrdluldu4ruuldrd3rulld4lrruurdrr3d3rdd3rd"
	"rdrr5ulld6lrrddr3drdl2(uulld)rurd6ldl3udrruull5r3urulld3lruurdldrurr3d7rurrd9ldllurdr"
	"3uru3luld3r3d9rddluru9ldllurdr3uru3ldlu3r3d3rddrudrrdrdr3ulu7ldllurdr3uru3lrr3d7rurrd"
	"9ldllurdr3urullr4d3l6dldrdrruldl7u6drruldl3u4d4ruuluulu3rll3drdrrdr8udrrdl4r3dlluuddr5"
	"ulu7ldllurdr3ulur3d7rurrd9ldllurdr3udd3rddrd3rdr3uru9ldllurdrud3lddrdlldl3udrr4drrd4rd"
	"ruud4l3ullu3rl3d3luurulldluu",

	// 38 (Jordi Domenech: Original remixed)
	"#####xx#########!"
	"#   ####       #!"
	"# $      ####$ #!"
	"# ######$# @#  #!"
	"# #      $  # ##!"
	"# #   $### $# #!"
	"# ##$#....# # #!"
	"#  $ #..*.. #$##!"
	"## # $....# .  #!"
	"x# # #.. .# ## #!"
	"x# #   ## #$ # #!"
	"## #$   $    # #!"
	"#  #  #$###### #!"
	"# $####      $ #!"
	"#       ####   #!"
	"#########xx#####!",
	"ddu5ldllurrddrddlddll4udd3ruuldrddldlddl4urr4u3ldrrur3drdrdru3d3lullddrulurluurrd"
	"rurrurr3drd6luudllddrulurl4udd4ru3rd3r6dllu5ld6luur5url5dldd6ruud5rdrru6l6r5u3l3d"
	"5luudlluu3rl4u3ldrrur3d3rddlu2(lldd)rulurluu4rdru5luudll5dldd6ruud7r5u3l3d5luudlld"
	"drulurluurrdruul3u4rdr5drd6luudllddrulurluurrdrurrdlull4u4rur7dr2(d3lu)udllddrulur"
	"l3u3l6urrd5ru6rddl4d4uruu6lddu5lulld6r6l5d3rd4rll4u4rur7drd5l3d5l6u6d5ru7r5ullr5ur"
	"uul6d6u5lddu7l5drrl7d5r3uluudllddrulurluu3rl4u3ldrrur3d3u4rdr5drd6lullddrul5uddrr4u"
	"3ldrrurdu4rur7drd6l3ul2(lddr)uruuddllurdrudrdd7r5ul",

	// 39 (Jordi Domenech: Original remixed)
	"xxxxxxxxxxxxx######!"
	"x#############. ..#!"
	"##    #     ##.. .#!"
	"#  $$ #  $ @## .* #!"
	"# $    $$ $#  ....#!"
	"#  $ #$ $$ # #. . #!"
	"#  $ #  $  # .....#!"
	"## ##### ### ##$###!"
	"## . $  $ ##   .#!"
	"# $## $ # ##*## #!"
	"# . $   #       #!"
	"#. *.#$ $ $###  #!"
	"# #$*# $   #x####!"
	"#... #  $$ #!"
	"######   ###!"
	"xxxxx#####!",
	"u3ldrddluruurrdluldld3luu3ldlddr3d3rdd3ldldd3ruuldrdl3ulul3durrl3u3rddrrdrdrrudllu"
	"r2(u3ru)ulur3d3lddrrdr8urddl5d6lddrulu5rdr5urul5d5ld3ldlddrrudluulu3rdrulu5rdr7uld"
	"ull4d3rdd5ld3l3ulldrurddulldrd3rdrulu5rdr5urul5d6luullddld3rdrulu5rdr5ulur5d6luul4"
	"u3luu3lddlddr4dldr5uluur6drdduurdurrurdld3rdrulu5rdr5urul5d6luul4u5lrruulldl6dlddrr"
	"llu5rurdld3rdrulu5rdr5urur3udlldldr5d6luul4u5lul6dld5rurdld3rdrulu5rdr7urdl5d6luul4"
	"u4ldlul6dldr6urrdlul4dld5rurdld3rdrulu5rdr6ulur6d6luuluuluru5lul6dld5rurdld3rdrulu5"
	"rdr6ul3urrddlulur8d6luuluulluru4lul6dld5rurdld3rdrulu5rdr8u7d6luul4u3lullul7dld5rur"
	"dld3rdrulu5rdr7uruuldldr6d6luul3urrdlruu7lul6dld5rurdld3rdrulu5rdr7ulur5d3l4url4d3r"
	"dd6luul3uru6lul6dld5rurdld3rdrulu5rdr8u7d5l3dlldluurrdruulu5rdr7u6d6luuluur4urrdlul"
	"dulldurdd5lul6dld4ruullrrddrd3rdrulu5rdr6u5d6luuluurruu7ldl4du3rdrrd5l4ul3ur6dld5rd"
	"3rdrulu5rdr4u3d6luul3uru6lul6du3rdrru3lrdrrdld3rdrulu5rdruu",

	// 40 (Jordi Domenech: Original remixed)
	"xxxxxxxx############!"
	"xxxxxxxx#          ##!"
	"x####xxx#  # #$$ $  #!"
	"x#  #####$ #$#  ## @#!"
	"x# $   ## ## # $ # ##!"
	"##  #  #   $ #$  # #!"
	"#  #   $   # $   # #!"
	"#   $ #$# $ $   ## #!"
	"#####  $  #  ##  $ #!"
	"xxxx#  #    ## $$# #!"
	"xxxx######$$   #   #!"
	"xxxx#....#  ##### ##!"
	"xxxx#.#....##..  .#!"
	"xxxx#..$.  .$.    #!"
	"xxxx#. .. ...#.$  #!"
	"xxxx###############!",
	"l5dllrrddlludrr9ulldru5l4dlldl3drruulrddl3dlddrruluuru3ruruu4ldduu4rddld3l3uruulld"
	"lddldrr4drdllur3u4ruruulu3(ld)uu4rddld3l3ululddldrr3dlldlldlu4rdrru5lrurullrd3r3ulu"
	"uruurrdrdlldduu4rddld3l3ululddldrr3dlddrru3lrd3lruuruld3r3ul3uluruuruurr5drdlldduu4"
	"rddld3l3ululddldrr3dlddrrul4uluurrdduu4rddld3luur3ullrr4ullddl5dldrr4drd3lrur4uluu"
	"rrdduu4rddld3lul3dlddrru3lurr3ul6uruul7dldrrluurrdduu4rddld3luur7urrdrddldduurrdd3"
	"lrrd5lulddldrr3dlddrrul3u4rur3urululddrd4ldduu4rddld3l3ululddldrr3dllddrudrrul3u4r"
	"ur7ul4drd4ldduu4rddld3l3ululddldrrl4u3rdrdlldduululddldrr3dlldlurddrudrrul4ru3ruuru"
	"ullrrddllulld3l3rur3urululddrd4ldduululddldrr3dllddrudrrull4ru3rddlurull3ruululld3l"
	"3rur8urrdllul5drd4ldduululddldrr3dld6rdrurullrruuruulldlld3l3rur3urululddrd4lddl3dl"
	"d7ruruululld3l3ululddldrr3dld6rurruur7uru4lul5drd4ldduu4rddld3l3ululddldrr3dldrrl4u"
	"luurrdduu4rddld3lul4d4ulu3ldl3u3rur3dldrrluurrdduu4rddld3lul3dlddrrul4ululludlluu3r"
	"ur3dldrrluurrdduu4rddld3lul4drdllur4ul3u3luuldulldlddrru4rur3dldrrluurrdduu4rddld3l"
	"ul4dldr5ulu4lu3luuruul3dld3ru4rur3dldrrluurrdduu4rddld3lul4d4ulu4lulu4rur3dldrrluur"
	"rdduu4rddld3lulddu4rurrdrddlld3l3rdrru3l",

	// 41 (Jordi Domenech: Original remixed)
	"xxxxxxxxxxx#########!"
	"xxxxxxxxxx##   ##  ##!"
	"xxxxxxxxx##  $  $   ##!"
	"xxxxxxxx##  $$ $ $ $ ##!"
	"xxxxxxx## $$  $  $$   ##!"
	"xxxxxxx# $    $     $$ #!"
	"######x#   $$ #####    #!"
	"#    ###### ##    ######!"
	"#.  $   #     $$$@#!"
	"#.#.........##   ##!"
	"#.#.#######. #$ $##!"
	"#........... #    #!"
	"###  #########  $ #!"
	"xx####xxxxxxx##  ##!"
	"xxxxxxxxxxxxxx####!",
	"ulld4luulururrdlul6drd10lr3urrd6r4urrdlul5drd8ldl3urullulddurrd6rurdr3uruul4d3ru3rd"
	"6lddrd8ldl3urulluldrrd6rurdr3uruul4d3rddruru5lddrd8ldl3urullrd6rurdr3uruul4d4r3druu"
	"ddrdldlul3uru4lddrd9luu6rurdr3uruul4d3ru3rd6lddrd8ldl3uruulldrurdrd4rurdr3uruul4d3r"
	"4dr3uru5ldllurdruddrd8ldl3urrluulldrurdrd4rurruuruul6drd8ldl3u5r4luulldrurdld4rulld"
	"lluurdl3d8r7u4rd3lul6drd8ldl3u3rlluulldrurdl3d8r6u3r4ullddul8drd8ldl3urrluulldrurdl"
	"3d8r5u3l3(ur)7drd8ldl3uruulldrurdl3d8r5ullurur6drd8ldluud8r5urruulul7drd8ldlu8r6u3ru"
	"ullul8drd8l7r5ur5urdrrdrru4lul3drrullul8drd7l6r5urrulul6drd6l5r9u8rd7lul8drd5l4r8u5r"
	"d4lul7drd4l3r8u7rdld5lul6drd3lrr8u9rdld7lul6drdllr6u8rdrudrru10lul6drdl6u6ru5lul7d5u"
	"8ru7lul6d4u10ru9lul5d",

	// 42 (Jordi Domenech: Original remixed)
	"xxxxx#########!"
	"xx####       ######!"
	"xx#   $ ## $ $   @#!"
	"xx# ### ##$#$ $ $##!"
	"### .......#  $$ ###!"
	"#   .#..*..#$ $  $ #!"
	"# # ...#...#  # $  #!"
	"# # .*...#.#$  $  ##!"
	"# #$....... $$# $ #!"
	"#   #### ###$  $ ##!"
	"###  $ $ $  $  $ #!"
	"xx#  $   $  $  $ #!"
	"xx#######   ######!"
	"xxxxxxxx#####!",
	"ldlddrdrddlddlld3lullrrddllul3urr3u3lulddllu3l4drr3u3dll4urrurddldd5ruurullr6drdrruulldl6"
	"u5d3rd3ruulu8lurdrrddrddrurulld3lulldl5udrlddll4urrurddl5d5r5u4d4ldl5u3dll4urrurdurrddur"
	"4u3r5du3lrru4lrdrr5drrddluruldl5urullr3d5rdrdrrd4lru4ldl6u5drddrruru3ldl5uruu3lrdr3d5rdr"
	"d5ldl6u3d5ruuldrd7l6rdrd4ldl5urruuldulldrurr3urrdlrrddl5drd4ldl6ul4u3r4dullrruurr5d3ur4"
	"d6l6rdrdrrulld5ldl6u3d5rd3ruruulu3lrr3u4lu4l3drl3u3r3duurr5drd5l4r3u4rdd3lrrdurrdldlld5"
	"ldl6u3d5rdrd5ldl5udd5rurrddrd7ldl4ud5r3urr4drd7ldl3u5ruuldrd4l3ru3r3ullrrur3drd4luldrd3"
	"lrru3ru3ru4luuru4lulddurr5d3ur4dllrrdrd10ldl5u3dll4urr3u3rurdd",

	// 43 (Jordi Domenech: Original remixed)
	"xxxxxxxx#############!"
	"xxxx#####  #   #    ####!"
	"xxxx#   #   $   $  $   #!"
	"x#### #$$ ## ##  # # $ #!"
	"## $    # #  ## ## ## ###!"
	"#  ### *#$  $  $ # $    #!"
	"# ... . # ##  #     ##  #!"
	"#...#. ..@ # ### ## ## ##!"
	"#...#..###  $  $   $  $ #!"
	"########x##   #  #  #   #!"
	"xxxxxxxxxx###############!",
	"rdrdru3r2(drurr)drrul3ulu3(ul)ld3lulld3l4d4u3rurrdrru3rdrdrddr3d9ldllulu4ldlu4r5u3rur"
	"rd4lul5du4rluudd3l3u3rurrdrru3rdrdrddr3d9ldllulu3luluurdulluurrdrlullddrdd3ldlluurd3r"
	"ddru3r4ullullddrdrd4lddllurluurdd3u3ruurr3duurr4d3ldluruurd3urr4dllu4ldlluurd3rddru4r"
	"drruurul3ullul5d4u3r3dllrr3dllu3lu5lulddru3rddruru5luldruu4rluurrddurr3du3r4urrdll4ru"
	"3rd5l6rdrddlld4lu5lrr3dllu4ldluru3l3ruu4ldduu5rurr3du6rd3r3udd4r3d9ldl3uru3lrr3dllu4ld"
	"luru3l3ruururr3du6rd4rduu3r3d9ldl3uru3lrr3dllu4ldlurullrruururr3du6rdrdu3rdd6ldl3uru3l"
	"rr3dllu4ldlur3ururr3du3r3dllu3lullddru3ruu3r3ullul5du3r3dllu4luld4ruu3r4urrd4lul5du3r"
	"3dllu3luld3ruu6ruuru6lul5du3r3dllu4l3ruu6ruuruu3rd9lul5du3r3dllullr5u11rdrru12lul5du3"
	"r3dllul4ulldld",

	// 44 (Jordi Domenech: Original remixed)
	"#####!"
	"#   #!"
	"# # ######!"
	"#      $@#####!"
	"# $  #$ ##   #!"
	"# ##$# $   $ #!"
	"#  $    # #*.####!"
	"#  #$## #*.$ * .#!"
	"# $#  $ # ##$## #!"
	"#       # #...# #!"
	"#########  ...$ #!"
	"xxxxxxxx# #...# #!"
	"xxxxxxxx#$### # #!"
	"xxxxxxxx#.     .#!"
	"xxxxxxxx#########!",
	"ldd3rurr5drdl6ulldrur5drddllur3l3urrur3d5uld4luu3ldlull6d6r3u3d6l3u5ruruuldd5rur3d3lu4drr"
	"drrulr3drr6u3l3dldr4u3r6d6l6urrur4drdduulldr7ulldrur6drdl4u3r3dlr3u6l6d5rlud4l6urruu4luu6"
	"l6d6r3ulu5rur6d5u5l4dllurdr3ulu5rurddld3rlluu5luu6l3d5r5l3d3ruud3ruulu4rurddu4luu6l3d5rll"
	"dd3ruulu4rl7duurl3u3r3ulddu4luu3ldduu3ldrrlldd5rlldd3ruulu5rur5duullruu4luu3lddu3l3urrddl"
	"drlldd5rlldd3ruulu4rurddu4lu2(u3ldd)5rlldd3ruulu5rur4duluu4luuldduull3drrlldd3ruulu4rurd4"
	"l4d5luulu5rlldd3ruulu5rurd",

	// 45 (Jordi Domenech: Original remixed)
	"#####x####!"
	"#...#x#  ####!"
	"#...###  $  #!"
	"#.. . # $  $###!"
	"##....##   $  #!"
	"x###$..##$$ $ #!"
	"##  *$. #  $  #!"
	"#   # # ### ###!"
	"# *.# #$  $   #!"
	"#  $ @ $    $ #!"
	"##..# $ $$ $ ##!"
	"x########  ###!"
	"xxxxxxxx####!",
	"3uluurulldluurulddrr3drrul4dlluulurruurulldlurr3dldllddrdruud4rurrd5lr3u2(ruldluu)ldrr3dll"
	"dlddrurd7rddluru3ldru5luld3rdru4rddluru4ldl4uruldluurulldluudrr3d3rddrdlldl4uruldluurulldl"
	"u3r6d6ru3l5rd7ldl4uruldluurul3d3rddrdlldl4uruldlurullur3d3rdd4ruulluurr4drd6ldl4uruldluuru"
	"3lrr3d3rdd5rddlldluru4ldl4uruldluurullr3dlldu5rdd4ruullurur4drd6ldl4uruldluruldd3rdd4ruul4"
	"ur6drd6ldl4uruldrrdd4ruurruuldrdlul3drd6ldl4uluurdrdlrrdd4ruul3ur5drd6ldl4uruldlud3rdd4r4u"
	"3lurrur6drd6ldl5udrrdd4r5u4luurdld3rur6drd6ldl3uddrr3ululldr4d4rdruru5ldl4ulur4d6r7ulldllu"
	"urdld3rur6drd6ldl4u3d4luururd",

	// 46 (Jordi Domenech: Original remixed)
	"##########!"
	"#        ####!"
	"# ###### #. ##!"
	"# # $ $ $  $ #!"
	"#       #*.  #!"
	"###$  $$# .###!"
	"xx#  ## # $##!"
	"xx##$#   $ @#!"
	"xxx#  * * ###!"
	"xxx# # . $  #!"
	"xxx# ##   # #!"
	"xx##. ##### #!"
	"xx#.$. $    #!"
	"xx#...* $ ###!"
	"xx#. . *..#!"
	"xx#########!",
	"3ldlddrrurr3d3ldllululdrdl8ururrdllrruuruu7l3d4rl8dld5rurdurr3u3luurd4lruruu3l7dl2(drrurr)3"
	"ulldluru4lrr3u3l6drddllur4u4rddluru3lrr3u3l7drdl9u3l3u7rddl4dldd5r3dlldllulrdrrurr3ull4uruu"
	"lddr3urdrdlldl3d4lrr3u3ldlur6drdl3rdrrurr3ulldlul6urrddurruuldrdldl3dll3ulluu5rurd3luu7l3d"
	"rru6r5l9d3rdrru3l5r3ulldluruulruuruurrdlu4ldllul7d5u3r3du3ru",

	// 47 (Jordi Domenech: Original remixed)
	"xxxxxxxxx####!"
	"x#########  #!"
	"##  $      $######!"
	"#   ## ## . ## ..#!"
	"# #$* $.*$#$##.* #!"
	"# # ..+ . # $ . .#!"
	"#  $# ###$$   $..#!"
	"# $  $$  $ ##.. .#!"
	"###$       #######!"
	"xx#  #######!"
	"xx####!",
	"lddrdrrurd3luluu4rd3rlu4rulur4dluuddlu4lu4lddrd4rudlluru5r5lddrulu4rdrr3udld5lu4luruu3rdr"
	"rdduuluurddll3d5r4lddllurdrulu4rdrruuld5lu6lurr3dllulld3rdruud4rdrulu3rurd4lu3lulld3rlu3l"
	"ddldrrdruud4l4ururdd3rdlullddldrrddlurr3uddllulld3rl5u3rddlruu3rdrrdd4uldl4d6r5ldd5luudl"
	"lddrulu6rdrulu5r",

	// 48 (Jordi Domenech: Original remixed)
	"#############!"
	"#           #!"
	"# ## #$# ## #!"
	"# #*.*.*.*# #!"
	"# #.*.*.*.  #!"
	"# #*.*#*.*###!"
	"# #.*.*.*.#!"
	"# #*.*.*.*#!"
	"# ###.. ###!"
	"#   #   #!"
	"###$##*######!"
	"#           #!"
	"# $ $ $ $ $ #!"
	"## $ $ $ $ ##!"
	"x#$ $ $ $ $#!"
	"x#   $@$   #!"
	"x#  #####  #!"
	"x####xxx####!",
	"ulluurr3ur3(ul)rdrruruu3r3u7l3d4rddluru4l3urrddldr3urr3dulldllurdrrddlludrruululldrddr"
	"6d3lurrdr5urul5d5ld3rddrr7ul3uddrr3uruu4ldd3r3luu3l8drrddrddrdr5ul5uddrr3ull5dr3dlldrd"
	"r4uruudl3d4ld3rdr4ul5u4dr3dll4dllurlu3rdr7ur3uddl5d5ld4rdr4ur4u3dl7dllullddr3urrdr7ulu"
	"udr5d4ld3rdr4ul3uddr6drruldl7urul7drruldl6u5d3rulldl3uruudl3d5rd4ldl4ulur3drr4drrulru3"
	"ldl5urul3d5rd4ldl5u7drrurrddl3ulldl5udd4rd3ldluu3luull8u5rd",

	// 49 (Jordi Domenech: Original remixed)
	"xxxxxxx#####!"
	"xxxxxxx#   ##!"
	"xxxxxxx#  $ ##!"
	"xxxxxxx# $ $ ##!"
	"xxxxx###$   $ ##!"
	"xxxxx#     $   #!"
	"xxxxx# ######  #!"
	"###### # .. .$ #!"
	"#    #$#..$..# #!"
	"# #   * . .* # #!"
	"#  $ ###.*...# #!"
	"###  #### #### #!"
	"xx#####@$  ###$##!"
	"xxxxxx## $      #!"
	"xxxxxxx#  ###   #!"
	"xxxxxxx####x#####!",
	"rdrud4rdrrul6ulld3ldl2(druurr)6d4luluulu3rururuur7d5ulldd3l3dlddruud4rdrru5lul3u5lu3"
	"lddrrdru3luurrd7ruu3ruullulld3r6l3d3u3ruuld3ur4(rd)dr6d5ulldllu3r3lddl3dlddruud4rdrr"
	"u5luluulull4u3rurrdrluurdrddr6d5ulldllulld3r3ldr3dlddruud4rdrru5lul3ulurru3r3ulldrur"
	"ddr6d5u4ldl4dlddruud4rdrru5lul3uluu5r3u4ld3rurddr6d5u4ldl4dlddr5u4d4rdrru5lullddr3ud"
	"d5r8u3l3ulddld3rurddrd3lrruu3l4ul3dld4rurddrdluu7l4dllu3lddrrdru3luurrd4r3lu3lddrrdr"
	"ulurr",

	// 50 (Jordi Domenech: Original remixed)
	"xxxxxx############!"
	"xxxxx##..    #   #!"
	"xxxx##..* *  ..* #!"
	"xxx##..*.# ### $##!"
	"xxx#..*.#   # $  #!"
	"####...#  #    # #!"
	"#@ ## ##     $   #!"
	"# $$ $ ###  # $ ##!"
	"# $   $   # # # #!"
	"###$$   # #     #!"
	"xx#   $   ### #####!"
	"xx# $# #####      #!"
	"xx#$   #xxx#    # #!"
	"xx#  ###xxx##  $  #!"
	"xx#  #xxxxxx#    ##!"
	"xx####xxxxxx######!",
	"ddrrdrr4u3(ru)rrurrdrr3dl6dldrrl3urruulrul5urrdlduul5d3luuluu4rurrdlul4dl6dldr3urru"
	"ulrulrruulul3dl3duur5u6l3(dl)lururu8rurrdlul5drdl5u8ldlddrurudlluru8rurrdlul5d4u8l"
	"ddrulu8rurrdlul4d3u6ld3l6dllurdr4u2(lurdru)lu8rurd7ld3l7drruldl5u2(lurdru)lu8rurrd"
	"luld6ld3l5d4luurdrrdr3u2(lurdru)lu3rurdlld3l6drruldl4u2(lurdru)lu3rld3l4d4ld3rdr4u"
	"2(lurdru)ll4dr5dlluudluurlulurrdr3ulur4d4rdd4l5urulurl4dll4dru3dl4urdr5uruuldrdldd"
	"3ldrrdr4uruuldruururrdldlruuldldduurrdluldrdluu8rurrd8luldrdluldu5rulld5rddrudlldl"
	"luluulurd4rurrd9lurdrrddr5drr3ur3uru7luldrdllru3rddrdrr6d4rddlldll8ur3uru7luldrdlu7r"
	"ddrrddldl4uru7lulddu3rddrdrrll4drr3ur3uru7luld3rddrdrrdr3uru6lrulldrrddrddrr8drruldl"
	"8u5drrdldl6ur4uru7lrrddrddrrdr4uru6lrddrdrrdr3uru3lu3lr3dldd4r5d4rdd3ldl7uddrruul4ud"
	"d3lul3urrdrrurdl3dlldrdr4udd3lul3urrdl3rurrdllddrudrddldl4u",
};

// Pufiban, (c) Jordi Domenech
const char* DomenechCol2[] = {

	// 1
	"x#####!"
	"##.@ #!"
	"# $$ #!"
	"#.  ##!"
	"#####!",
	"lDurrdLdLu",

	// 2
	"#####!"
	"#   ##!"
	"#$ *@#!"
	"#..$ #!"
	"######!",
	"dLruLullDr",

	// 3
	"#####!"
	"# . ##!"
	"#  $ ##!"
	"##  $+#!"
	"x######!",
	"luLulldRdRRuLdlu",

	// 4
	"xx###!"
	"###+####!"
	"#  $$  #!"
	"#   .  #!"
	"########!",
	"dRdrruLLdLUlldRr",

	// 5
	"xx#####!"
	"###   #!"
	"# $   #!"
	"#.@$.##!"
	"######!",
	"luRRurrdLdLLuRurd",

	// 6
	"x#####!"
	"x#   #!"
	"##   #!"
	"# $*##!"
	"# @ .#!"
	"######!",
	"rUdlluRuurrdLulDDldRr",

	// 7
	"#####!"
	"#  .##!"
	"#  $@#!"
	"##$  #!"
	"x# . #!"
	"x#####!",
	"lulldRurDrddllUUluRdrd",

	// 8
	"#####!"
	"#   ##!"
	"#   @#!"
	"##$$ #!"
	"#. .##!"
	"#####!",
	"llDurrdLdLUruulldRurDd",

	// 9
	"######!"
	"#.   ###!"
	"# $ $  #!"
	"# .#@  #!"
	"########!",
	"ruLulllddrURRdrruLLLuLd",

	// 10
	"#####!"
	"#.@ #!"
	"#  $##!"
	"# $ .#!"
	"##   #!"
	"x#####!",
	"lddRdrruLdlUluurrDLdRllu",

	// 11
	"######!"
	"# @#.#!"
	"#$$ .#!"
	"#.$  #!"
	"#   ##!"
	"#####!",
	"lDRRdrUlddllURdrUluRluld",

	// 12
	"#####!"
	"#  .####!"
	"#@$ $  #!"
	"## .   #!"
	"x#######!",
	"rurDRdrruLLLulldRdRUrrdl",

	// 13
	"######!"
	"# $ .##!"
	"#.  $ #!"
	"#  $@.#!"
	"#######!",
	"lulluRRddrruLLullddRRRull",

	// 14
	"######!"
	"# . .#!"
	"#@$$##!"
	"##   #!"
	"x#   #!"
	"x#####!",
	"urrDulldRddrruLUluRdddlUu",

	// 15
	"######!"
	"# .  ###!"
	"#. $$  #!"
	"#    *@#!"
	"########!",
	"lLLUlldRurRdrruLLLLdRRuul",

	// 16
	"x######!"
	"## .$ #!"
	"#  $$ #!"
	"#@.  .#!"
	"#######!",
	"rrrruuLDLdRllluRuRDrruLddl",

	// 17
	"######!"
	"#.@  #!"
	"##*$.#!"
	"#  $ #!"
	"#   ##!"
	"#####!",
	"rrddLUddlluRdrUruuLLDRddlu",

	// 18
	"x#####!"
	"## . #!"
	"# $  #!"
	"#@$$ #!"
	"#.# .#!"
	"######!",
	"uRurrdLrddlULrruullDlDRRUrd",

	// 19
	"#######!"
	"#. #@ #!"
	"#$$ $ #!"
	"#.   .#!"
	"#######!",
	"rddllllURdrrruulDrdLLLuRRurd",

	// 20
	"######!"
	"#.$  #!"
	"#+$  #!"
	"#. $ #!"
	"#  ###!"
	"####!",
	"uRDrruLLdlddrUluRurrdLLrrdLl",

	// 21
	"######!"
	"#  . #!"
	"# $ .#!"
	"##$$ #!"
	"#.@ ##!"
	"#####!",
	"rUruulDulldRDuurrddLdLUUluRdr",

	// 22
	"xxx#####!"
	"####   #!"
	"#  $@$ #!"
	"# .  .##!"
	"#######!",
	"urrdLulDLdlluRRRurrdLdLLuRurd",

	// 23
	"#####!"
	"#.  ##!"
	"#@.$ #!"
	"# $  #!"
	"###  #!"
	"xx####!",
	"urrDrddlUruLullddRUrrddlUruLul",

	// 24
	"#######!"
	"#  $..#!"
	"#   $@#!"
	"#  $.##!"
	"######!",
	"ulLdldRuurrdLLdlluuRRRlddlUluRr",

	// 25
	"######!"
	"#. $+#!"
	"##$ .#!"
	"#  $ #!"
	"#   ##!"
	"#####!",
	"ddLdlluRdrUruuLLDRddlluRdrUUlur",

	// 26
	"xx####!"
	"###  #!"
	"# $  #!"
	"# .$@#!"
	"# .$.#!"
	"######!",
	"dLUlldRRuruulDrdLdlluuRDrruulDrdl",

	// 27
	"x#####!"
	"##@ .#!"
	"#.$ .#!"
	"#$ $ #!"
	"#   ##!"
	"#####!",
	"rrddLdllURdrUruullDRddlluRdrUUlur",

	// 28
	"x#####!"
	"x#@ .#!"
	"##$$*#!"
	"#  . #!"
	"#    #!"
	"######!",
	"durrDLddrUUddllluRRdrUluulDrddllur",

	// 29
	"#####!"
	"# .@#!"
	"# .$##!"
	"# $  #!"
	"##   #!"
	"x#####!",
	"llddRdrruLdlUluurrDullddrUddrruLdlu",

	// 30
	"#####!"
	"#.  #!"
	"#@ $##!"
	"# *$ #!"
	"#.   #!"
	"######!",
	"ddrUdrruLdlluuurrDLrDrdLLUlUdrruuld",

	// 31
	"#######!"
	"#   *.#!"
	"# $$*@#!"
	"#   .##!"
	"#   ##!"
	"#####!",
	"uLLDurrdLdLdlluuuRRRlllddRRlURlluRr",

	// 32
	"x#####!"
	"##.@.#!"
	"# $$##!"
	"# .$ #!"
	"#    #!"
	"######!",
	"lDlddrUdrruLUddlluuRuRDllddrUUddrrul",

	// 33
	"xxx#####!"
	"####.* #!"
	"# $ $  #!"
	"# @  . #!"
	"########!",
	"ruRdllluRRdrrruuLDrdLLLuRdrUlllldRRr",

	// 34
	"########!"
	"#. .$. #!"
	"# $ $@ #!"
	"#   ####!"
	"#####!",
	"uLLLrddlluRdrURurrdLLLdlluRuRRllddru",

	// 35
	"xx#####!"
	"x##   #!"
	"##    #!"
	"#.*$$##!"
	"#.. $@#!"
	"#######!",
	"lLLrULuRurrdLulDlddrrULuurrdLulDDrdl",

	// 36
	"########!"
	"#   .  #!"
	"#@$ $  #!"
	"#####. #!"
	"xxxx####!",
	"urrdRullldRRurrrddlUruLLLdRurDlllluRr",

	// 37
	"#####!"
	"# $.####!"
	"#  $@$ #!"
	"# ..   #!"
	"########!",
	"ldrrruLLdllluuRDldRRRuLdlluurDrrrrdLl",

	// 38
	"x######!"
	"## .  #!"
	"# $$  #!"
	"#.$   #!"
	"#.@#  #!"
	"#######!",
	"luRRUdlluRuRDrrddlULLulDrrrruuLDrdLLl",

	// 39
	"#######!"
	"#.*   #!"
	"#+#$  #!"
	"# $   #!"
	"#  #  #!"
	"#######!",
	"dRRlluuRRDrruLLLrrrdddlUUruLLrddLLdlu",

	// 40
	"#######!"
	"#  #  #!"
	"#   .$#!"
	"#  $*.#!"
	"#   $+#!"
	"#######!",
	"lLUdrruLuurDlLrddlUlluurDRlldRRlldRRr",

	// 41
	"######!"
	"#.*  #!"
	"#.$  #!"
	"#@$  #!"
	"###  #!"
	"xx####!",
	"rluuRDrruLLrrdddlUUruLdlldRurrddlUruLl",

	// 42
	"######!"
	"#.$  #!"
	"#@$..#!"
	"#  $ #!"
	"#  ###!"
	"####!",
	"uRDrruLLdlddrUluRurrddLruulldRllddrUlur",

	// 43
	"xx#####!"
	"###   #!"
	"#@$  .#!"
	"#.$$  #!"
	"#. #  #!"
	"#######!",
	"rRRlllddrUluRRurrDLdLLulDrrrdrUluulDrdLl",

	// 44
	"#####!"
	"#.*@###!"
	"#. $$ #!"
	"#.$   #!"
	"###   #!"
	"xx#####!",
	"ldldRRdrruLLLuurDldRdrruuLLdlUrddrUruLLl",

	// 45
	"x#####!"
	"##. .#!"
	"# $ ###!"
	"# @$  #!"
	"# .$  #!"
	"#######!",
	"dRUUdrrdLLulluRuRDldRdrruLLullddRUUdrrdl",

	// 46
	"#######!"
	"# $ . #!"
	"#  $  #!"
	"# *$#.#!"
	"##@  .#!"
	"x######!",
	"uluuRDRRuLdDulldRdRRlUluRurrDLLdlluuRRld",

	// 47
	"#####!"
	"#.. ###!"
	"#$  $@#!"
	"# .$  #!"
	"#  #  #!"
	"#######!",
	"lLullDRdRldlUUrurDrrddlUruLLulDlddrUUrrdl",

	// 48
	"#####!"
	"# . ####!"
	"# $ $  #!"
	"#. .$ @#!"
	"########!",
	"lLLLruulldRurDRdrruLLLulldRdRRuLdlUrrrrdLl",

	// 49
	"########!"
	"#.$.   #!"
	"#@$$   #!"
	"#. #   #!"
	"########!",
	"uRRRlllddrUluRdRRdrruLLLLulDrrruLLdrrrruLl",

	// 50
	"#####!"
	"#.  #!"
	"# . ###!"
	"#@$$  #!"
	"# *   #!"
	"#######!",
	"dRRULdlUUdrrrrdLLuluurDldRdrruLLullddRUrrdl",

	// 51
	"x######!"
	"x#@ ..#!"
	"##$$ .#!"
	"#   $ #!"
	"#   ###!"
	"#####!",
	"dRddlluRdrUluurrrddLLUluRRldddlluRdrUUluRdr",

	// 52
	"xx#####!"
	"###   #!"
	"#     #!"
	"# *$$##!"
	"#..*@#!"
	"######!",
	"lULulDurRurrdLLddrUluurrdLulDDlluRdrruulDrdl",

	// 53
	"#######!"
	"#  # .#!"
	"#  $*.#!"
	"#@$   #!"
	"###   #!"
	"xx#####!",
	"rRdrruLruulDLrrddllURdrUUdlllluurDRlldRRRdru",

	// 54
	"#######!"
	"# ... #!"
	"# $$* #!"
	"#   $ #!"
	"#@ ####!"
	"####!",
	"uuurDurrrddLULulldRlddrUUdRUrrdLLullddrUluRr",

	// 55
	"xxx####!"
	"####  #!"
	"#@$   #!"
	"# **  #!"
	"#.*   #!"
	"#######!",
	"rRllddRRUrruulDrddLLuLulDurRddrruLLrruulDrdl",

	// 56
	"#######!"
	"#  .$ #!"
	"#  $$ #!"
	"###  .#!"
	"xx# @.#!"
	"xx#####!",
	"ruuuLLDRurDDulllluRRdrddlUruLulldRRdrruuLDldr",

	// 57
	"x######!"
	"##   @#!"
	"#.$$$ #!"
	"#..$ ##!"
	"# .  #!"
	"######!",
	"lDullDRllddrrULuurDurrdLLLddrrULuurrdLulDDrdl",

	// 58
	"#######!"
	"# .  .#!"
	"#*$$ @#!"
	"#   ###!"
	"#   #!"
	"#####!",
	"ullllDurDRddlUUrurrdLulDlluRRRlldddlUdrrUUrul",

	// 59
	"#######!"
	"#   $.#!"
	"#   $.#!"
	"#  #$.#!"
	"#  #@ #!"
	"#######!",
	"ruuLLulDrrrddlUruuLLdRurDllllddrUluRRRllluRRr",

	// 60
	"xxx####!"
	"x###  #!"
	"##    #!"
	"#@$$  #!"
	"#.* . #!"
	"#######!",
	"dRRUdlluRuRlddrUrruulDrdLrdLLLuuRDrdLrruuulDd",

	// 61
	"#####!"
	"#   ###!"
	"# @$  #!"
	"# $ *.#!"
	"## $..#!"
	"x######!",
	"ldRdRRULdlUluurDurDDrruLLullddRRRluulDldRRldr",

	// 62
	"#####!"
	"#.  ###!"
	"#   $ #!"
	"#.$$ @#!"
	"#. #  #!"
	"#######!",
	"uLLulldRlddrURlluurrDrrddlULLUlDrrrruLLuLDrdl",

	// 63
	"########!"
	"#   #  #!"
	"# .$$  #!"
	"#$.*   #!"
	"#.. $@ #!"
	"########!",
	"ulLdllURuulDDrdrRuLdlUluurDurDRdrruLLLrrrddLLl",

	// 64
	"#######!"
	"#   $+#!"
	"#  ** #!"
	"#    ##!"
	"#  ###!"
	"####!",
	"lLDurrdLdLruulDllddrUluuRRRddLuulldRRllddrUlur",

	// 65
	"#######!"
	"# ... #!"
	"# .$$ #!"
	"# $$  #!"
	"##@#  #!"
	"x######!",
	"uluurrrDulllddrURurrdLrddlUUdLUlldRRurrddlUruLl",

	// 66
	"#######!"
	"#   * #!"
	"#  $$ #!"
	"###  .#!"
	"xx# @.#!"
	"xx#####!",
	"ruuuLLDRurDDulllluRRdrddlUruLulldRRdrruuLDlluRddr",

	// 67
	"#####!"
	"# . #!"
	"#. @###!"
	"# $$  #!"
	"# $ . #!"
	"#######!",
	"llddRUdRUrrdLLulluurrDullddrUdRdrruLLullddRRuLdlu",

	// 68
	"#######!"
	"#  .$ #!"
	"#  ** #!"
	"# $ .@#!"
	"###   #!"
	"xx#####!",
	"uuLDuLDlluRRdrrddllUdrruulLddrUluulldRldRRdrruuul",

	// 69
	"xxx####!"
	"x###  #!"
	"## $$@#!"
	"# . * #!"
	"# .   #!"
	"#######!",
	"dLruulDDLdlluRuRlddrUrruulDrddLLuluRddrruLLrruuld",

	// 70
	"#######!"
	"#.  $ #!"
	"# #@$ #!"
	"#  $ .#!"
	"#.  ###!"
	"#####!",
	"ulldddrrUrruuLLDRurDldLdlluuuRRddLruulldDrrruruLLl",

	// 71
	"#######!"
	"#+$   #!"
	"#***  #!"
	"#     #!"
	"#  #  #!"
	"#######!",
	"rRDullDRddlUrRluurDrrddlUruuLLLddRuurrdLLrrddlUrul",

	// 72
	"xx#####!"
	"###   #!"
	"# $   #!"
	"# **  #!"
	"#.@#  #!"
	"#######!",
	"luuRRurDlllddrUluRRurrdLrddlULLrrruulDrdLLruulDlld",

	// 73
	"xxxx####!"
	"#####  #!"
	"# *    #!"
	"#.**$  #!"
	"#@*    #!"
	"########!",
	"uuRRRlllddRUdRRULLrrrruulDrdLLLuRdrruulDrdLLrrdLLl",

	// 74
	"######!"
	"#.#  ##!"
	"#.$   #!"
	"# $ $ #!"
	"#@#.  #!"
	"#######!",
	"uuRRddrruuLulDDulldRurrrddlUruLLLdlUdrRurrddlUruLLl",

	// 75
	"xx#####!"
	"###.  #!"
	"# $ $ #!"
	"# @$  #!"
	"#..#  #!"
	"#######!",
	"ruurrdLrddlUlUdlluRdrrruulDrdLLLuRdrruulDrdLLulDuld",

	// 76
	"xx#####!"
	"###   #!"
	"#  $  #!"
	"#.*.$@#!"
	"#. $ ##!"
	"######!",
	"ldLLURdrUruullDurrddldlluluRddrruLLrrruulDrdLLruuld",

	// 77
	"###x####!"
	"#.###  #!"
	"# ..$  #!"
	"#   $$ #!"
	"####@ ##!"
	"xxx####!",
	"rULrruulDLLLdlUrrrrrdLdlULulldRRRdrUruulDLLrddrUruLl",

	// 78
	"####!"
	"#  #####!"
	"#  # . #!"
	"#@$$$. #!"
	"# $  ..#!"
	"########!",
	"dRUdRRRuulDLdlluRRRurrdLdLLuRdrUlllluurDldRRRllldRRr",

	// 79
	"#####!"
	"# . #!"
	"# . ###!"
	"#@$$$ #!"
	"# .   #!"
	"#######!",
	"drUdrUdrruLLdlluuurrDDrdLuuullddRUdRdrruLLullddRUrrdl",

	// 80
	"#######!"
	"# .   #!"
	"#@$$$ #!"
	"### . #!"
	"xx# . #!"
	"xx#####!",
	"urrDurDullldRRurrdddllUUluRdddrruuLDuLulldRRdrruuLLrd",

	// 81
	"xx#####!"
	"###   ##!"
	"#@$$   #!"
	"# .$$  #!"
	"#.*..  #!"
	"########!",
	"ddRRRUrrdLLLLuRdrruuullDDlluRdrRdLrrruLLLrruulDDuulDd",

	// 82
	"#######!"
	"#.    ##!"
	"#.# $$ #!"
	"#..$$  #!"
	"# .  $@#!"
	"########!",
	"lLLUlldRurRdrruLLLLdlUrrrUdrruLuLDrdLLLrruuLLrDrdLrdl",

	// 83
	"xxx####!"
	"x###. #!"
	"## $$ #!"
	"#@ .$ #!"
	"#  .  #!"
	"#######!",
	"drrrruLruulDDLdlluRuRlddrUrruulDrddLLuluRddrruLUlldldr",

	// 84
	"#######!"
	"#@* . #!"
	"###$  #!"
	"# $ * #!"
	"# .   #!"
	"#######!",
	"rRDrrddlUdlUdlluRRdrruuuLLDDldRuuurrddLUdLdlluRRurrddLl",

	// 85
	"#######!"
	"# *   #!"
	"#@# ..#!"
	"# $$  #!"
	"# $ . #!"
	"#######!",
	"ddRRUdlluRRlluuRRDrrddLLrULuullddRRdrruuuLLddRdrUlllldRr",

	// 86
	"#######!"
	"#  .  #!"
	"# @.* #!"
	"## $$ #!"
	"x###  #!"
	"xxx####!",
	"urrrdLrddlUULulldRdRluurDrrddlUruuLLdldRuurrdLrddlUllulur",

	// 87
	"x#######!"
	"##  $. #!"
	"#  .*  #!"
	"# $  $ #!"
	"#####.@#!"
	"xxxx####!",
	"lUruulLDldRullldRRururrdLLrrddlUruulldLdRuurrdLDlllluRuRr",

	// 88
	"#######!"
	"# . $ #!"
	"# # *@#!"
	"#   $*#!"
	"#   . #!"
	"#######!",
	"uLLdddrrULLuurrDLddllluuuRRDDrdLuuullddRRurruLLdddrUllldRr",

	// 89
	"########!"
	"#.#    #!"
	"#.   $ #!"
	"#.*$$# #!"
	"##+$   #!"
	"x#######!",
	"udRRULuLrddlUlUdrruurDurrdLLulDLrrrrddLLLrULLruurrdLulDrdl",

	// 90
	"x#####!"
	"x#   ###!"
	"## # . #!"
	"#@$$$. #!"
	"# $  ..#!"
	"########!",
	"dRUdRRRuulDLdlluRRRurrdLdLLuRdrUlllldRRRuuullDurrdddllluRRr",

	// 91
	"x#######!"
	"##   #.#!"
	"#@$ $ .#!"
	"#  $ $.#!"
	"#   # .#!"
	"########!",
	"rurrDLrrrddlUruLLullDRRRdrUlllllddrrURRurDllldlluRRRRllluRRr",

	// 92
	"xx######!"
	"xx#.   #!"
	"#### * #!"
	"#    $*#!"
	"#    *@#!"
	"########!",
	"lrULLuurrDLddrUllUdLdlluRRdRUruuLDrdrdLLLuRdrUlllldRRRuuurrd",

	// 93
	"#######!"
	"#  .$@#!"
	"#. $$ #!"
	"# .# ##!"
	"#    #!"
	"######!",
	"lDLLulDrrruLdlddrrUdlluururrdLddlluuluRRldddlUdrrruuLulDrrrul",

	// 94
	"x#######!"
	"## .   #!"
	"#  $   #!"
	"#.$$$###!"
	"## .@.#!"
	"x######!",
	"udllURURDuurrdLulDldlluRuRDrruLdllddrRULuRurrdLLdlLuuRDDurrul",

	// 95
	"x#######!"
	"##@*   #!"
	"# * $  #!"
	"#. $ ###!"
	"#.#  #!"
	"######!",
	"drRddlULulDrrruurrdLulDLdlluRuRRdLulDrrrruLLdlddrUluRurrdLLLdl",

	// 96
	"#######!"
	"# . $ #!"
	"#     #!"
	"#.# $##!"
	"#  .$@#!"
	"#######!",
	"lLuurruLLdddrUluurrdLulDlluRRdrddlUruLulldddRluuurrdLulDrrrruLl",

	// 97
	"x#####!"
	"##.  #!"
	"#..$ ###!"
	"# $$$  #!"
	"#.   *@#!"
	"########!",
	"lLLLUURDRdrruLLLulldRdRRuLdlUrrrrdLLuluurDldRdrruLLulLddRRuLdlu",

	// 98
	"########!"
	"#  #   #!"
	"#@ # $ #!"
	"#.**   #!"
	"# *. $ #!"
	"########!",
	"ddRURRdLruuurrddLrdLLUllluurDldRRRdrruLLLLrrrruulDrdLLLrruulDrdl",

	// 99
	"########!"
	"#.  #  #!"
	"#   $$ #!"
	"#..# $ #!"
	"## . $@#!"
	"x#######!",
	"uLruulDLLLrrrrddLLUdrruulLLullDRddRRuuLrddlluUrrrrddLLrUruLLLuLd",

	// 100
	"########!"
	"# $  . #!"
	"#@$ # .#!"
	"# $$ . #!"
	"#  #  .#!"
	"########!",
	"rlddrURRRlllluuRRDullddrRRdrrULuuLLddRluurrdDlllluuRRRllDldRRRdr",

	// 101
	"########!"
	"#.     #!"
	"#. #$  #!"
	"#.*$@$ #!"
	"#.  $ ##!"
	"#######!",
	"urrdLdLUruuLLLdlddrURRdrUruulDrdLLLLdlUrrrruulDrdLLLrrdLLrruuulld",

	// 102
	"x####!"
	"##  ####!"
	"#@$    #!"
	"#  **. #!"
	"# $  . #!"
	"########!",
	"ddRRRULdlluuRurDRdrrdLLuulllddrURRdLuuulDldRRdrrruuLLLulDldRldRRr",

	// 103
	"#######!"
	"# .  @#!"
	"#$$$. #!"
	"#.  # #!"
	"#  $. #!"
	"#######!",
	"llDullDRddlUruRurrdddlLUUddrruuLrddllulldRuuulDurRDrruLLdlddRUlur",

	// 104
	"#####!"
	"#. .####!"
	"#@.$$  #!"
	"## $   #!"
	"x###   #!"
	"xxx#####!",
	"rdRRlluurDRddrruuLLddrUluLulldRdRRuLdlUruLddrrdrruuLLLrddrUruLLdlu",

	// 105
	"########!"
	"#.#. $ #!"
	"# . #  #!"
	"#  $$$@#!"
	"#..  $ #!"
	"########!",
	"dLUdLLLuurDRdrruLLLulldRdRRuLdlUruLdlUdrrrrruuLLrDrdLLLdlUrrrrdLLl",

	// 106
	"xxxx####!"
	"#####  #!"
	"# $ $  #!"
	"#.  $$ #!"
	"#... @##!"
	"#######!",
	"uLLrrruulDrdLdlluuRDldlluuRDrrrdLurruulDrdLLLLulDurRRdrruulDrdLLLl",

	// 107
	"########!"
	"#..#   #!"
	"#   $$ #!"
	"#. $#@ #!"
	"# .  $ #!"
	"########!",
	"ruulDLLrrrddLLLUlldRRlluuurDRRurrdLLLLrddlluUrrrrrddlLLrrUruLLLdLu",

	// 108
	"xx####!"
	"###  ###!"
	"# $. $ #!"
	"#..*$$ #!"
	"# @.   #!"
	"########!",
	"rrULuurDlddrrruuLLulDrrrddlUdlllluuRRDLrRdrruLLLuurDldRdrruLLrruLl",

	// 109
	"xx######!"
	"###+$  #!"
	"#.#$$  #!"
	"# . $  #!"
	"#..  $ #!"
	"########!",
	"dDRdLuuuRDrruLLdlddrUllldRuruRurrddLLLLdlUrrrdLLrruuurDrdLLLrrrdLLl",

	// 110
	"x#######!"
	"##  .. #!"
	"# $*.  #!"
	"#  $$  #!"
	"#  #@###!"
	"######!",
	"uruulllDlddrURUdlluRuRRllddrRUrrdLLuLulDlddrUluRRRdrruLdlLullddrUlur",

	// 111
	"x#######!"
	"## ....#!"
	"# $$   #!"
	"#  $ $@#!"
	"#  #####!"
	"####!",
	"uullllDRRlllddrUluRurrddLUrurrddLUllllddrUluRRRRdrUdlLLullddrUluRRdru",

	// 112
	"########!"
	"#. .   #!"
	"# .$ $ #!"
	"# $*@###!"
	"###  #!"
	"xx####!",
	"uLrddlUruulllddRRULrrurrdLLLdllURuRRdLulDrrrruLLdlddrUlulldRurRurrdLLl",

	// 113
	"xx####!"
	"###. #!"
	"#@.$ ###!"
	"# $ $  #!"
	"## .   #!"
	"x#######!",
	"dRuRDRdrruLLLulldRdRRuLdlUrrrrdLLuluurDldlluRdrUdRdrruLLullddRUrrdLuul",

	// 114
	"x#######!"
	"##.$.#@#!"
	"#.#  $ #!"
	"#$ $ $ #!"
	"# . . ##!"
	"#######!",
	"ddLruLLDLdllURRRurrdLdLLuRdrUlllldRRuruuLDrdrruLdlUdLdlluRRurrddLLuurd",

	// 115
	"#######!"
	"# $ . #!"
	"#.#   #!"
	"# $$  #!"
	"#@*.  #!"
	"#######!",
	"rRUdlluRRlluuRRDrrddLULuulldddrRurruuLDlddlluuurRddLdlUrrurrddLLrruLuld",

	// 116
	"#######!"
	"# . $ #!"
	"#. $$@#!"
	"# $# ##!"
	"# .  .#!"
	"#######!",
	"uLDLLDldRuuulDrrruLdlddRRUdlluururrdLddlluuluRRldddlUdrrruuLulDDurrruLl",

	// 117
	"x#######!"
	"##@$ . #!"
	"# $ $  #!"
	"#..$ ###!"
	"#.#  #!"
	"######!",
	"drRddlULulDrrruurrdLulDLdlluRuRRdLulDrrrruLLdlddrUluRurrdLLdlLuuRRdLuld",

	// 118
	"######!"
	"#    ###!"
	"#..#$$@#!"
	"#.   $ #!"
	"#..$ $ #!"
	"########!",
	"dLLLLdlUrrrdLLurrrrdLLulluurrDullddrRdrruuLrdLLLLdRluuurrDrdLLdlUrrrdLl",

	// 119
	"######!"
	"#  . #!"
	"#. # ##!"
	"#  $$@#!"
	"# . $ #!"
	"#######!",
	"dLULLdlUrrrdLuluurrDullddrdrruLuullddldRRluuulDurrrddLdlUUluRdddlUrrrrdLl",

	// 120
	"######!"
	"#.   #!"
	"#.# $###!"
	"#. $$  #!"
	"#.   $@#!"
	"########!",
	"lLLURllluurrrDulllddrrUruLLrdddrUllldRurrdrruLLLLdlUrrrdLLruuurDlddrruLLl",

	// 121
	"x#######!"
	"##@..  #!"
	"# $$   #!"
	"#  .$###!"
	"# *  #!"
	"######!",
	"dRRlddrUlullddRUrrdLuuurDldlluRdrUrurrdLLLdlluRuRRdLulDrrrruLLdlddrUUllldr",

	// 122
	"########!"
	"#@$   .#!"
	"##$$$ .#!"
	"#    #.#!"
	"#   ##.#!"
	"########!",
	"rRDRRurDDullluRddLdlluRdrUruullDurrdrruLdldldlluRuRRRurDllllddrUluRRRlluRr",

	// 123
	"########!"
	"#+  #  #!"
	"##$ #  #!"
	"#. $ $ #!"
	"# . $ .#!"
	"########!",
	"rDDRdRRULdlUlldRurrrruulDrdLLLLuurDldRRdrUllldRurrruulDrdLLLdlUUruLddr"
	"rrdLl",

	// 124
	"########!"
	"#  . $@#!"
	"#.* #$##!"
	"# *  $ #!"
	"#.     #!"
	"########!",
	"lLLdddrrruLdlluuurrDDLdlUdlluRdrrurrdLLLLuRRllluuRRDLddrruLdlUdrrrruLl"
	"lrruul",

	// 125
	"x#######!"
	"##   . #!"
	"#@$ $  #!"
	"#. *# ##!"
	"# *   #!"
	"#######!",
	"ddRRUURurrdLddLLuuRurDlldlluRuRRdLulDrrrruLLdlddrrUdlluururrdLLrddllul"
	"uuRRld",

	// 126
	"#######!"
	"#  .  #!"
	"#@..$ #!"
	"## $$ #!"
	"x###  #!"
	"xxx####!",
	"urrrrdLrddlUULulldRdRluurDrrddlUruuLLdldRuurrdLrddlUlluluRddrrruulDLrr"
	"ddlUrul",

	// 127
	"########!"
	"#   #  #!"
	"#.# $ @#!"
	"#..$ $ #!"
	"# . $ ##!"
	"#######!",
	"dLdLLURllluurrDullddrRdrrULLuulldddRRuLdlUrrrrruulDrdLLLLruRdrruulDrdl"
	"lLrrdLl",

	// 128
	"########!"
	"#..#   #!"
	"#@ $$  #!"
	"# *  # #!"
	"# $.   #!"
	"########!",
	"ddRUrrdrruuullDrrddllLulldRRlluuurDRRurrdLLLddlluRUrrrrddlLUdrruulLLLd"
	"lUrrrdl",

	// 129
	"########!"
	"# .$.$ #!"
	"#+$    #!"
	"#.##$  #!"
	"#.$    #!"
	"########!",
	"rRRuLdllddRRRUrruuLDLLuRdddllluuuRldddrrruulLulDrrruLdrrruLrdddLLLLrrr"
	"uruLLLl",

	// 130
	"########!"
	"#.. #  #!"
	"#.$$#@ #!"
	"# *  $ #!"
	"#.   $ #!"
	"########!",
	"rddLUlldlluRdrRurrdLLLLuRRllluurrDLddrruLdlUUruLdddrrrruLLLdlUUdrrrruu"
	"lDrdLLl",

	// 131
	"xxxx####!"
	"#####  #!"
	"#  *@$ #!"
	"#  .*$ #!"
	"##  .  #!"
	"x#######!",
	"lddrrruuLDLdlluRuRlddrUrruulDrddLLuluRdllluRRdrdrruLLLulldRdRRurruulDl"
	"rrdLrdl",

	// 132
	"########!"
	"#.$ .  #!"
	"#+#$$# #!"
	"#$ $ . #!"
	"# .   ##!"
	"#######!",
	"uRRRDDrruuLLddLdllURRRuurrddLdLUlldRurrruullLLrDurrrddllLdlluRRuurrrdd"
	"ldLLuRu",

	// 133
	"######!"
	"# .  ###!"
	"#  #$ @#!"
	"#$   $ #!"
	"#.. #  #!"
	"########!",
	"dLLLdllURRRlluulDDuurrrDrrddlUruLdLLdlUluurrrDulllddrUdrRurrdLLLdlUluu"
	"rDDrruul",

	// 134
	"########!"
	"#..$ $ #!"
	"#  $   #!"
	"#.@#$  #!"
	"#  . ###!"
	"######!",
	"uRRuLdlddrrUrruuLDLLuRdddllluuuRDrrrrdLullllddrrrUruLLLDldRuuulDrrruLl"
	"drrrruLLl",

	// 135
	"########!"
	"#..#   #!"
	"# .$ $ #!"
	"#@* $  #!"
	"####   #!"
	"xxx#####!",
	"urRdRdrruuullDllldRurrurrdLLLLdlUrrrrrddllULulldRRuRurrdLLLdlUrrrrddlu"
	"lLrrruLLl",

	// 136
	"########!"
	"#@  # .#!"
	"# # $$ #!"
	"#. $   #!"
	"#.  ####!"
	"#####!",
	"dddrrUrrruulDrdLLLdlluRRlluurrDRRdrUlllulldddrrURllluurrDrdLLruulldDrr"
	"rurrdLLLl",

	// 137
	"x#######!"
	"## $  .#!"
	"# $ $..#!"
	"# @$ #.#!"
	"#  #   #!"
	"########!",
	"luRuRRDLrrrddllUdrruulLullDRRddrruuuLLdRurDlllllddrUluRRRRldLullddrUlu"
	"rRRlluRRr",

	// 138
	"#######!"
	"#  #  #!"
	"#  $$ #!"
	"#*..$ #!"
	"#@ .  #!"
	"#######!",
	"rrrruLruulDDLdllURuRlddrUrruulDrddLLuluRddrruLruulDlldldRuuulDrrrrddlu"
	"lrruulDrdl",

	// 139
	"x#######!"
	"## ..  #!"
	"#  .*$ #!"
	"#  $@$ #!"
	"#####  #!"
	"xxxx####!",
	"luurrrddLULulldRdRluurDrruLLrrdddlUUlldRullldRRurrrddlUruLLLdlluRdrRur"
	"rddlUruLrul",

	// 140
	"########!"
	"#.#.   #!"
	"#.*  $ #!"
	"# $#$  #!"
	"#@ #   #!"
	"########!",
	"uuRRurrDulldRurrdddllUUddrruuLuLDlllddrUluRRRurrdLLLLdlUrrrrrddlUruLLl"
	"lrrrddlUruLl",

	// 141
	"########!"
	"#.. #@ #!"
	"#   $$ #!"
	"#. # $ #!"
	"## . $ #!"
	"x#######!",
	"rddLruulDLLLrrrrddLLUdrruulLddrUluLullDRddRRuuLrddlluUruLdrrdrruLLLrdd"
	"lluUrrrrddLl",

	// 142
	"########!"
	"# $.. .#!"
	"#@ ##$##!"
	"#  $   #!"
	"# $.   #!"
	"########!",
	"ddRRRuLdlUrrrrdLLullluuRRRRDullllddrrrdrruLLruullllddrUluRRldddRRuLdlu"
	"uluRddrrrrdLl",

	// 143
	"########!"
	"#   # @#!"
	"#.#  * #!"
	"#  $.$ #!"
	"#    ###!"
	"######!",
	"dLLdLdlluuurrDrrrdLullulldddrrrUdlUdlluRRlluurrDRlulldddrrrULLrrrruuld"
	"rdLLdlllUrRur",

	// 144
	"x#######!"
	"##  #  #!"
	"#  $@$ #!"
	"# .**$ #!"
	"# . .  #!"
	"########!",
	"lulDlddrrUdrUdrruLLdllluurDldRRRuLdlluururDllddrrrurruulDLddllluurDRlu"
	"urDrrrddLUruLLLuld",

	// 145
	"########!"
	"#.*    #!"
	"#. $$  #!"
	"#.$#   #!"
	"##@$.  #!"
	"x#######!",
	"uluuRRRDulllddrURRllddRRUrruuLDLLuRdddlluluuRlddrdrruulLulDrrrrrddLUru"
	"lLLLrruLLdrrrruLLl",

	// 146
	"xx####!"
	"### @###!"
	"#  $$  #!"
	"#.*.*  #!"
	"#.$    #!"
	"########!",
	"lDRlllddRRRUrrdLLLLURRluurDlddrrruuLLrrddlUdlluRuulDrddlluluRddrruLLrr"
	"uulDrdLdrrruLruLLuld",

	// 147
	"######!"
	"# .. #!"
	"#.* $###!"
	"# $ $ @#!"
	"#   $. #!"
	"########!",
	"dlLLuuulldRlddRUrRdLulluurrrDulllddrrUruLdddrUllldRurrdrruLLLLdlUrruur"
	"dldRdrruLLdLUUdlldRRr",

	// 148
	"########!"
	"#  $  .#!"
	"# . $$ #!"
	"# .# $@#!"
	"#  . ###!"
	"######!",
	"lruullLdlluRRRRDLLulDlddrrrUdllluuurrrrdrdLuLLulldddrrrUruulldRullldRd"
	"ldRuuurrdLulDrrdrruLLl",

	// 149
	"#######!"
	"#@$ . #!"
	"#* *# ##!"
	"# $ $  #!"
	"#.   . #!"
	"########!",
	"duRRDDRdrruLuuLLddRdrUllullDRdRRuLdlUrrrrdLLuluurrDullddlluuRRddrdrrul"
	"lLuullddRluurrdLddRRlu",

	// 150
	"########!"
	"#.$    #!"
	"#.$$$$ #!"
	"#. #   #!"
	"#+.  ###!"
	"######!",
	"uuuRDuRRDLulldddrrrUrruuLDuLLdRddllluuuRldddrrruulLulDrDurrddlLrruuurr"
	"ddLruLLLLddrrUruLLruLLDd",

	// 151
	"########!"
	"#   #@ #!"
	"#.#  $ #!"
	"#  $.* #!"
	"#    ###!"
	"######!",
	"rdLLdLdlluuurrDrrrdLullulldddrrrUdlUdlluRRlluurrDRlulldddrrrULLrrrruul"
	"drdLLLuRdrruulDllddllURr",

	// 152
	"######!"
	"#.  @###!"
	"#..#   #!"
	"#.$$$$ #!"
	"#.$    #!"
	"########!",
	"llldddRUdRRULdlluuurrrDrrddLUdLLuRuullldddRluuurrrddlLdlUrUdrruulLrrdd"
	"drruuLrdLLLLuurrDrdLLrdLLu",

	// 153
	"########!"
	"# *    #!"
	"#@.$$  #!"
	"#..# $ #!"
	"#    ###!"
	"######!",
	"uRRRDLulDrrrruLLLdllddrrrUdllluurrurrdLLrddllluuuRRdrrrdLullulldddrrru"
	"dllluuurrdLulDrrRdrruLLLrruLl",

	// 154
	"x#######!"
	"##  .  #!"
	"# $$ @ #!"
	"# ..$###!"
	"# $ .#!"
	"######!",
	"ulllDRRlddrUlullddRUrrdLuuurDldlluRdrUrurrdLLLdlluRuRRdLulDrrrruLLdldd"
	"rUlullddRRuuRurrdLLdldlluuruRd",

	// 155
	"########!"
	"#   .$ #!"
	"#  $*..#!"
	"# $ #  #!"
	"###   @#!"
	"xx######!",
	"uuuLLLDRurDlllluRRRdrrddlllUdrrruullulldRRlddrrruuuLLdllldRurrurrdddll"
	"lUdrrruuulldRlLdlluRRluRdddrru",

	// 156
	"x#######!"
	"##     #!"
	"# $@#$.#!"
	"#  $ $.#!"
	"#  # ..#!"
	"########!",
	"ulDlddrUluRurrrrdddlluLrdrruLLrruulDrddlluRdrUluullldlddrURRRuulllDldr"
	"rRlluurrrdDldRuuullDldRRluurrdd",

	// 157
	"#######!"
	"#   *@#!"
	"#.* $###!"
	"#   $  #!"
	"## .   #!"
	"x#######!",
	"lLddRluurDldlluuRDrruLdddrUlulldRurDrdrruLLLulldRdRRuLdlUrrrrdLLuluurd"
	"ldlluuRRddRdrruLLulLddRUrrdLuul",

	// 158
	"########!"
	"#.@  $ #!"
	"#.#$$  #!"
	"#.. $# #!"
	"# *    #!"
	"########!",
	"lddrrdrrruuuLLLLrDRurrdddllUdlUlldRurrdrruuullDulDurrrdLLrrddllULLdlUr"
	"rrdLrrruuulllDurrdLdLLrruulDrdl",

	// 159
	"#######!"
	"# $  .#!"
	"#..$# ##!"
	"#@$ $  #!"
	"##.    #!"
	"x#######!",
	"uuRRDDRdrruLuuLLddRdrUllulldRdRRuLdlUrrrrdLLuluurrDullddlluuRRRlddrdrr"
	"uLLLuullddRdRRuLuLrddlUrrrrdLLl",

	// 160
	"x#######!"
	"##  .  #!"
	"# *.$  #!"
	"# @$# ##!"
	"# $.  #!"
	"#######!",
	"ldRRUURurrdLddLLuuRurDlldlluRuRRdLulDrrrruLLdlddrrUdlluullddRRuururrdl"
	"lLddlluRluRuRRdLrrruLdddLLUlldr",

	// 161
	"xxxx####!"
	"#####  #!"
	"#@$ $  #!"
	"#.*.$  #!"
	"#.$.   #!"
	"########!",
	"ddRRuuRlddlluRdrRUrrdLLrruuulDDldLLuRuRlddrUrruulDrddLLuluRdllluRRdrdr"
	"ruLLLLrrrruulDrdLLLuRdrruulDrdLl",

	// 162
	"xx######!"
	"xx# .$ #!"
	"###$ ..#!"
	"# @ $$ #!"
	"# .   ##!"
	"#######!",
	"drrrULLruulDrdrruuLDlluRdddlUrurrdLulDldlluRRRurrdLdLLuRdrUlllldRRuruu"
	"lDrdrruuLrddllLdlluRRurRddLLuRdru",

	// 163
	"########!"
	"#      #!"
	"#.*#   #!"
	"#.* $$##!"
	"# .  $@#!"
	"########!",
	"lUdLLuRuullldddRluuurrrddlLdlUrrruullDurrddlLuurrrrdLulllddrrdrUllldRl"
	"uuurrDurrdLdLLdlUrrruulDrdLLrrdLl",

	// 164
	"x#######!"
	"##     #!"
	"#.$#$ @#!"
	"#. $ $##!"
	"#..   #!"
	"#######!",
	"ullllDlddrrrrUdlllluururrDDrdLuuulldlddrURRuullDurrddlLdlUrrrdLLuuurrr"
	"rdLulDulldddrrrULLLuurrrrdLulDDrdLl",

	// 165
	"######!"
	"#.  .###!"
	"#@$#$  #!"
	"#$. .$ #!"
	"#    $.#!"
	"########!",
	"urrrDrrddLULLdllUUdRdrRurrdLLuuullDlddrURRdLruuullDldRRdrUdrruLdllulld"
	"rRRRuLLdlluururrDulldlddrrrruruLddlluRUrrdl",

	// 166
	"#######!"
	"#@  . #!"
	"# * .$##!"
	"#.$#$  #!"
	"#.$    #!"
	"########!",
	"dRlddRRRUrrdLLLLUluurrrrDullllddrdrruUruLdddlluluurDRRddllUdrruulLddrr"
	"rruLdllluurrurDllluRllDrddrrUdrruLuLLrrddlu",

	// 167
	"########!"
	"# *    #!"
	"#  $$  #!"
	"# .# $ #!"
	"#. .@###!"
	"######!",
	"llluuuRRRDLulDrrrruLLLdllddrrrUdllluurrurrdLLrddllluuuRRdrrrdLullulldd"
	"drrrUdllluuurrdLDldRuuulDDurrRdrruLLLulDrrruLl",

	// 168
	"########!"
	"# .  $.#!"
	"#  $.* #!"
	"#  $ $@#!"
	"# .#####!"
	"####!",
	"uuLLddLruurrdLulLDlluRRlldddrUUruRRdLdLruulDllddrUluuRRdrdLurrrdLLulul"
	"ldRRllddrUluurrdRdLuulldRDrruLdrrruLuLLdRdllluRr",

	// 169
	"########!"
	"#.$    #!"
	"#.*#$  #!"
	"#.$  $##!"
	"#.  @ #!"
	"#######!",
	"llluRluuRRRDrruLLLLDlddrrrrUdlllluururrdDrdLuuulldlddrURRuullDurrddlLd"
	"lUrrrdLruuurrdLulDullddrdrrULLLuurrrrdLulDrdLLdLu",

	// 170
	"#######!"
	"# .   #!"
	"#.$$$$##!"
	"# .# * #!"
	"#.   @ #!"
	"########!",
	"lllluuurDurrDLulldddrrrUdrruLdlllluuurrrrDDuulldRullldRlddrrrUrrdLLLLu"
	"luurrrrDullllddrdrruUruLdddlluluurDRRddllUdrruulLddrrrruLdllluurrurDll"
	"luRldddrrUdrruLuLLulDrrrddlUruuLLdRurd",
};

// Three parallel, (c) Jordi Domenech
const char* DomenechCol3[] = {

	// 1
	"#######!"
	"#     #!"
	"# *.* #!"
	"#   $##!"
	"# *** #!"
	"##$   #!"
	"# *.* #!"
	"#  @  #!"
	"#  ####!"
	"####!",
	"uurDldlluRRuUUlldRDuurDDrruLLulluurrDurrdLDuulllddrRddrruLUddrddLUUlld"
	"rllddrUluRurrrddlLrruullldlddru",

	// 2
	"x####!"
	"##  #####!"
	"#       #!"
	"# ***** #!"
	"#       #!"
	"##**.**##!"
	"#   $   #!"
	"# ***** #!"
	"#   @   #!"
	"#########!",
	"rrruullLuullUdrrUdddLUdrrrrddllllUUddlluuRURDluUluuRDRDuluurDldDrrrrru"
	"ullLLuld",

	// 3
	"x####!"
	"##  #####!"
	"#       #!"
	"# **.*# #!"
	"##      #!"
	"# **#** #!"
	"#   @   #!"
	"# #*$** #!"
	"#   #   #!"
	"#########!",
	"lUdlluRuRRRUdlllddrrrUUddrrddllUUllllddrrURuLUlldRurDluuURDlddrrrrruul"
	"lLLuuulDldRDrrrrruulLLLuld",

	// 4
	"x####!"
	"##  #####!"
	"#       #!"
	"# **.** #!"
	"##      #!"
	"# ***** #!"
	"#       #!"
	"# **$** #!"
	"### @ ###!"
	"xx#####!",
	"rUdllURuUUUdllDRllddRRUUlDuuURDrrrrddlLLUdLddrUUlUluurDldlddRluurDrrrr"
	"ruullLLuuulDldRDrrrrruullLLuld",

	// 5
	"xx####!"
	"###  ####!"
	"#       #!"
	"# #***# #!"
	"# #   # #!"
	"#  *+*  #!"
	"# # $ # #!"
	"# #***# #!"
	"#       #!"
	"#########!",
	"ruUdllURuulDlldddrRuUddlldddrrUUUUrrddLruulldDulluuurRurDlDDuulldddddd"
	"rrrrrruuuLruuulLLuld",

	// 6
	"xx#######!"
	"###     #!"
	"# . # * #!"
	"# * * * #!"
	"# * * * #!"
	"# * * * #!"
	"# * * $ #!"
	"####@ ###!"
	"xxx####!",
	"ruuuuuulldddRluullddRUruurrddLLrdLddRUUluuurrrrddddLLUllddrdrUlURlluuu"
	"urrrrdddddLLdlUluuuuurrdDDDuuuurrdddddll",

	// 7
	"####!"
	"#  #####!"
	"#  #   #!"
	"# **** #!"
	"#  $   #!"
	"##.**.##!"
	"#  $   #!"
	"# **** #!"
	"#      #!"
	"### @###!"
	"xx####!",
	"ullluuruuUdddlddrrrrruullLrrDuuulDLdDRUruuruullDLDlluRluurDlddrrDRUddd"
	"lUrdddlUlluuRRDrUlllddrRdrUluurrrddLLdlu",

	// 8
	"x#####!"
	"x#   #########!"
	"## # * * .   #!"
	"# $ $* * * # #!"
	"#  # . * *   #!"
	"#  @ #########!"
	"######!",
	"lluuRuurrdDLruulldDlddrrrUUdrruuRRddLLrUruRRddLLuurDrdrruuLLdllllLLddl"
	"lluurRRRRRRllllddllUluRRRRRlllluurrDullddrr",

	// 9
	"xx#######!"
	"###     #!"
	"# ***** #!"
	"# $   $ #!"
	"# ..#.. #!"
	"# $ @ $ #!"
	"# ***** #!"
	"#     ###!"
	"####  #!"
	"xxx####!",
	"lulldddrrrrUUllDuullddRUrrDLuuurrDrruuullllDDDDlluuRRuurrDDLruulldDrru"
	"lurrrdLLrrddlUrdddLULUUllllddrrRdRddlUruUllllddrRRdru",

	// 10
	"xxx####!"
	"####  ####!"
	"#        #!"
	"# #****# #!"
	"# *      #!"
	"# .****# #!"
	"##     $ #!"
	"# *****# #!"
	"#    @   #!"
	"##########!",
	"rrruuuullUdllURuulDlllddRddrrrUUUdrrrddddlllUUrUdlllluuRRDLrRdddllUURl"
	"ddrruLuurDlddrrrruuLLLulullluurrrDrDLLrdDrrrruulLLuluurDldDrrrruulLLuld",

	// 11
	"##########!"
	"#        #!"
	"# ****** #!"
	"# #     $#!"
	"# .***** ##!"
	"#      #  #!"
	"# ******  #!"
	"#    @   ##!"
	"##########!",
	"lllluurrrULdrrrULuRddllluuRlddrruLdllluuuurrrDDuurrDLDDuuurrrdDDLLURdr"
	"ullluullllddddddrrrrrUULUUdRdddlUUddrrruLLuuurrdDrdLdllllllluurrRRllll"
	"ddrrrrruUddrruLdlllllluuuuuurrrrrrrDDDDrdl",

	// 12
	"#########!"
	"#       #!"
	"# ***** #!"
	"#      ##!"
	"# **+** #!"
	"##  $   #!"
	"# ***** #!"
	"#       #!"
	"###  ####!"
	"xx####!",
	"urrDLulllluurrDullddrRRRddLLUUrrdrrdddllllUdlluRdrrrrruuullulllldRDDuu"
	"urrrddlLDlUrrrDLruurrdLululllluurrrrDurrdLDuulllllddrrrRdDrruLUddrddlu"
	"ulldRullldRRddlUruulldldRRluurrdLddrUluurrrrddlLLdlu",

	// 13
	"xxx####!"
	"####  ###!"
	"#       #!"
	"# ***** #!"
	"# $    ##!"
	"# .*#** #!"
	"##      #!"
	"# ***** #!"
	"#   @   #!"
	"#########!",
	"rrruullllluluRRRRUdlllddrrrrrddllUdrruulLLLUlluuurDDuurrDLrrdDDlluUUru"
	"urDDurrdLLulLddddrruUddrruLUUdddllluuRRUrDllluRldddrrrrddllllUUddlluRd"
	"rrrrruullllUUlldRDuuluuRDDrruLdrrruLLuurDlddrruruLLrddlluRuulDrddllllu"
	"urRRurd",

	// 14
	"x####!"
	"x#  #####!"
	"##      #!"
	"# **#** #!"
	"#   #   #!"
	"# #*#*# #!"
	"#   #   #!"
	"# .* *$ #!"
	"#   # @ #!"
	"#########!",
	"ruuuullUdrrddllUUrrddddlUdlUlLulluurrDDllddrURRRdrruuuuuulLLLDDDDuuuur"
	"rrrddddddllulLuuulluRdrdddrrdrruuuuuullllulDDldddddrruuuuUlldddRluuurr"
	"ddDlluuRurDluuurDrrrrddllUdrrddddlluUUUrrddLrddlluUrrdLruuuuulLLLuld",

	// 15
	"xxx#######!"
	"xxx# .   #!"
	"x### # * ##!"
	"x# * * *  #!"
	"## * * *  #!"
	"#  * * * ##!"
	"#  * * * #!"
	"## *$# ###!"
	"x#   @ #!"
	"x#######!",
	"lULdrrruuuuuuullddddDuuuuurrdddddLruuuuurrdddLruuullddRUddrddLUUUluull"
	"ddddRRllLDlluRRRRdLLruuuuurrddrdrddlUdLLuRdrruuruLuuLLddDDldRullldRurr"
	"dddllUUlulldRurRdddllUUlur",

	// 16
	"xxxx#####!"
	"xxxx# @ #!"
	"##### # #!"
	"# * * * ##!"
	"# * . *  #!"
	"# * * *  #!"
	"# *$*#* ##!"
	"#       #!"
	"#########!",
	"lddRlddRUrrdLddlllllluuuRRRRuuurrdDDDuuuullddddRlulllldddrrUUddlluRluu"
	"rDrRuruuurrdddLdLUrrrdLulllLdllddrrrrrrUUruLLLdRuruuulldDRddlLLuuRRDrd"
	"lurrrdLddlllllluuuuRRdRRuuurrdDDDuuuullddddRlullullddddrrUURuruuurrddd"
	"lruuullddRlLddlddrrrUUULulLDDrUrrdddllUURurDllddllluuRRllddrUdrruLuuRd"
	"rrurrdLulLdllddrrrrUUruLdLLuuuurrdDDrdl",

	// 17
	"xx#####!"
	"xx#   ########!"
	"xx# $        #!"
	"xx##$######  #!"
	"xx# * * *   ##!"
	"### * * . # #!"
	"#   * . * # ##!"
	"# # . * * #  #!"
	"# @ * * *  $ #!"
	"###########  #!"
	"xxxxxxxxxx####!",
	"rurrdLLrruurrddLLrruuurrdddLLrruuuurrdddrdLLLuuulluRRllddlluuRRlldddll"
	"uuuRldRDrrrurrdddrruuuuuullllllulldRDDlddrrrruulLDLdRuurrdrruLLrrddddr"
	"ruuuuLLdlldddRRRluuuurruulllllLulldRdDrddddRRlluullddRRuuuRRdLLuullDRr"
	"drrddRRuuuurruulllllLulDDDldDRRllllddRRUdlluurRuuruurrrrrrrdddddrddlUl"
	"lrrUUUUUruLLLLLLLulDd",

	// 18
	"#########!"
	"#   ##  #!"
	"# $     #!"
	"##$#$## ##!"
	"x# . . . #!"
	"x#$.#.$.$#!"
	"x# * * * #!"
	"x#$.$.#.$#!"
	"x# . . . #!"
	"x## ##$#$##!"
	"xx#     $ #!"
	"xx#  ## @ #!"
	"xx#########!",
	"lulllluuuUdRldddrrrrdrruLLLLLdlUUUrrrrrDulllllddrrrUdllluuruuRuurrdDLr"
	"uLruuullllulldRRRRRurDDDlllllUdrrrrddrrDDlLddllluuruullUUddrrddlUdddrr"
	"rrdrruLLLuurrDuuulluurDuuullllulldRRRRRurDDDlllllUdrrrrruulllDurrrddrd"
	"dDDllddLLdlUUUlUUUUrRuululldRRRddllUdddddrddrrrrdrruLLLuurrDuuuuullLLu"
	"uRRurDDullllulldRddddddrrRRddLLdlUUdrrrrdrruLuuuuuuLLruulllLulldRRRRRu"
	"rDDulllllddddddRRlddrrrRdrruLLLLLdlUu",
};

// Miniatures, part 1, (c) Jordi Domenech
const char* DomenechCol4[] = {

	// 1
	"xx####!"
	"###  ####!"
	"#  $    #!"
	"# # ### #!"
	"# # *@# #!"
	"#   .## #!"
	"####    #!"
	"xxx######!",
	"ldllluuurRdDrddrrruuuullLulDlldddrRlluuurrDDuurrrrddddlllULuuulldddRr",

	// 2
	"#####!"
	"#   #####!"
	"# # $ $ #!"
	"# ..#   #!"
	"## . $ ##!"
	"x#  # @#!"
	"x#######!",
	"uuluLrdrddlUllluluurrDDurrDrruLLLrrdddlUlLulluurrDrrrddllldlUrrrruulDrdLl",

	// 3
	"######!"
	"#    #!"
	"# .$ #!"
	"##.$###!"
	"x#.$  #!"
	"x#  @ #!"
	"x#  ###!"
	"x####!",
	"lluuuurrdLulDDDRUluurrdLddddlUUdrrruLl",

	// 4
	"#####!"
	"#   ##!"
	"#    #!"
	"#@$$ #!"
	"### ##!"
	"#.. .#!"
	"# #  #!"
	"# $  #!"
	"##   #!"
	"x#####!",
	"urrDDDrddlUUllddRdrUUruLLrUUruLulldRurDDDDrddlUruLuuulldRurDDDDrddlluRdrUu",

	// 5
	"#########!"
	"#   #   #!"
	"#   .   #!"
	"## #*####!"
	"#   * $ #!"
	"#   * @ #!"
	"#########!",
	"luLUdLdlluRuurRddrdLLruuullddRdrUdrrruLLdllulldRRluuurrRurrdLl",

	// 6
	"#######!"
	"#. .  #!"
	"#. *  #!"
	"## # ##!"
	"# $$$ #!"
	"#  @  #!"
	"#######!",
	"lUUURurrdLLLdddrrUUddlluuururrdLulLdddRdrUUUrul",

	// 7
	"xxx####!"
	"####  #!"
	"#  #  #!"
	"# $$$ ##!"
	"#  # $ #!"
	"# ...@.#!"
	"########!",
	"luUddrruLdlllluuurDDldRRRRuulLrrddlllluuurDDurrDrdLruuuulDDd",

	// 8
	"########!"
	"#  #   #!"
	"#. ..  #!"
	"#$$### ##!"
	"# $     #!"
	"#   # @ #!"
	"#########!",
	"ullldlluUdRRRRdrruLuullllDlddrrurRdrUllldlluRuuulDDrdRRRdrruLLLLdlUUlu"
	"rRRurrdDuulldllddrrrdrruLuuLrddLLLdlUUluRdddlUu",

	// 9
	"#####!"
	"#   ####!"
	"# $$   #!"
	"#..... #!"
	"###$#$##!"
	"xx# $ #!"
	"xx#  @#!"
	"xx#####!",
	"uUUlllluurrDLrrdrruLLLullDRdRRuLulDrrrrdLdddlluUdRdrUu",

	// 10
	"#########!"
	"#       #!"
	"# $## # #!"
	"# ..# $ #!"
	"##..#$###!"
	"x#   $  #!"
	"x#@ #   #!"
	"x########!",
	"urrRdrruLLLLuulluurrrrddDuuullllddrrdddlUUdrrRdrruLLLruuuurrddLruulldd"
	"duuullllddRdddrUrRdrruLLLLdlUrrruuuullld",

	// 11
	"###########!"
	"#  @   #  #!"
	"## ## *$  #!"
	"# .  *  . #!"
	"#  $* ## ##!"
	"#  #      #!"
	"###########!",
	"lddrrRRRllddlULulldRRluuurrrrDldLLrrddrrruUruulDLdl",

	// 12
	"#######!"
	"#  #  #!"
	"# $#$ #!"
	"#  .  #!"
	"#.###.#!"
	"#  .  #!"
	"# $#$ #!"
	"#@ #  #!"
	"#######!",
	"rUluuurrrrddllLrrruulllldDrrrruuuulDrdddlllluurrRurDlllluurDldRlddrddl"
	"uUrrrrddlUrul",

	// 13
	"#######!"
	"#     #!"
	"#   $$#!"
	"# ##  ##!"
	"#  #$  #!"
	"##.#   #!"
	"# .##$##!"
	"# .    #!"
	"# . @  #!"
	"########!",
	"lluuuuluuurrrrDLLulldddrdddrrrUUlUUddrruLdddllluuuluuurrrrdDDDDuuuuull"
	"lldddrddddrrrruLLLrruuuuuulldRurDDDDDuuuuulllldRRRlllddrddlddrrrrruLLr"
	"uuuuluurDDDDDuuuullllddrddlddrUUddrruLdlUdrrrruLLLrruulUUruulldRurDDDd"
	"dDrdLLl",

	// 14
	"xxxx####!"
	"x####  ######!"
	"x#  # $     #!"
	"x#     $$$  #!"
	"##...##$@$ ##!"
	"# ...# $$$ #!"
	"# ...#     #!"
	"###  #######!"
	"xx####!",
	"uLLLLdlluurDrruurDrdLLLLulDDRurrrrrRurrdLLLLLLLDlluurDrrrrrrrdddllUURu"
	"lLLLLdDlddrUllluRuRluurDrrrrrdddlluRUruLLLLLulDDDldRRluuurrrrrdddrUUdd"
	"rUrULuLLLLLLulDDDldRuuurrrrrddrUruLLLLLLulDDDuurrrrrrruLLrrrrdLLLLLLLl"
	"ulDDurrruurDrdLLLLuld",

	// 15
	"xx####!"
	"###  ###!"
	"#  $   #!"
	"#@$ $  #!"
	"####$###!"
	"x#..  #!"
	"x# .  #!"
	"x# *$.#!"
	"x# .  #!"
	"x######!",
	"urRdRDDrdLLrrddlUUruLuuluurDDDDrdddllluUrRuuuurrdLulDDDDDrdLuuuuuullld"
	"rRurDDDrDl",

	// 16
	"xxxx####!"
	"xx###  #!"
	"x##  $ #!"
	"x#   $@#!"
	"x# ##$##!"
	"## .. .#!"
	"#    # #!"
	"#      #!"
	"########!",
	"lDuruulDlldlddddrrrruuLLLrruUruulDDDuulldldDrrddrruuLLddllluRuuurRurDd"
	"ulllddddrruuRlddlluRdru",

	// 17
	"##########!"
	"#   ##   #!"
	"#      # #!"
	"##$#.#.#$##!"
	"x# #      #!"
	"x#   ## @ #!"
	"x##########!",
	"ulluuurrdDuulldddlldlluUddrruuululldRRRRlddrrrdrruLLLLrrruuullDlllldddrru",

	// 18
	"##########!"
	"#   ##   #!"
	"# $  .   #!"
	"##$#.#.#$##!"
	"x#   .  $ #!"
	"x#   ## @ #!"
	"x##########!",
	"ruLLLuurrDulllllulldRRRRRddLLdlluUdRdrUrrrdrruLLLrruuLulDlllulldRRr",

	// 19
	"x#######!"
	"x#     #!"
	"x#.##  ##!"
	"## ## $ #!"
	"# $  $$ #!"
	"# ... # #!"
	"#  #### #!"
	"# @     #!"
	"#########!",
	"uurrrUdlllddrrrrruuuLUdLdlluRRdlllluRuuurrrdDuulllddddrruLdlddrrrrruuu"
	"ulluulllddDDrrrUUrrdLLLdlluuuurrrrDDldlLrruruullllddDldRRurrurrdLLLLrr"
	"ruuullllddDuuurrrDDrdLLLrrrrdddlllllluuRUUddlddru",

	// 20
	"x######!"
	"x# @  ###!"
	"##$ #$$ #!"
	"# $...  #!"
	"# #.#.# #!"
	"#  ...$ #!"
	"# $$# $##!"
	"###    #!"
	"xx######!",
	"rrDDrruLrdddLLddrUdlllUUlldRluuuRRuulDurrrDrrdddLddlllUlluuur",

	// 21
	"xx#######!"
	"xx#     #!"
	"###$#$# #!"
	"# $...$ #!"
	"# #. .# #!"
	"# $...$ #!"
	"# #$#$# #!"
	"#@      #!"
	"#########!",
	"rrUUddlluuRluuRRllddddrrrrrruuLLrruuuullllDurrDDuurrddLrddddllu",

	// 22
	"xx######!"
	"###    #!"
	"# $ # $##!"
	"#  *.*  #!"
	"# #.@.# #!"
	"#  *.*  #!"
	"##$ # $ #!"
	"x#    ###!"
	"x######!",
	"rDrruulLuurDullldDlluRldddrRddlUdrrrUUrrdLruuuLuulllDlldddRddrrru",

	// 23
	"#########!"
	"#  ##...#!"
	"#     .$#!"
	"#    #. #!"
	"# $$$$* #!"
	"### @#  #!"
	"xx#######!",
	"lUUruLdddrUluurrrdrddlULLUluRRurrDLLLddrrUUruLdlldllluurDRRRldddlUrrrr"
	"uUdlUlllllddRRRRluurrrdddlUllllUluRRRRllDldRRr",

	// 24
	"xxxxx####!"
	"xxxxx#. ##!"
	"######.  #!"
	"# *....  #!"
	"# $$ $#$ #!"
	"#@ # $ $ #!"
	"####     #!"
	"xxx#######!",
	"uuRRllddrURuRRRurrddddlllluUddrruLdrrruuuulldlLrDururrdLrddLUUruLddddl"
	"llUUruRUrrdLdddllUUdRdrUUUrul",

	// 25
	"#########!"
	"#   #   #!"
	"# $$  $ #!"
	"#  $ #  #!"
	"## ### ##!"
	"# .... #!"
	"# #### #!"
	"#  @   #!"
	"########!",
	"rrruuuuruulDDDDlllluuluurDDuRRRurrdLLrdddlllllddrrrrrUUUUruulldLLulldd"
	"rDuluurrdrrurrddlddddllllluuRRRlluuluurDDDuurrrurrdLLLLrrrdddddllllluu"
	"rRluuluurDDDuurrrrdddddllllluuRuuurrdLulDd",

	// 26
	"####!"
	"#  ########!"
	"# $#   #  #!"
	"#@$       #!"
	"##$#####  #!"
	"# $....  ##!"
	"#    #    #!"
	"####### # #!"
	"xxxxxx#   #!"
	"xxxxxx#####!",
	"rRRurrdrrddllllldlluRRRRRdrruuullulldllDurrurrdrrdddllullldlluRuurrRRr"
	"llllldddrrurrdrruuruulDDDuullllllluurDldRRRRRRllllldddrrurrdrddrruuLul"
	"lLrrrdrddlluUruuruulDDDLLrdddrruuLrddlluUrul",

	// 27
	"########!"
	"#. @ $ #!"
	"# $$ # #!"
	"#$  ## #!"
	"#.#    #!"
	"#    #.#!"
	"####  .#!"
	"xxx#####!",
	"lldDrrdrrruuuLLLDDlluuRDrrurrdddlldlUUddllUURuuRRdLDDullddrRuuuulDrddr"
	"rruuuLLrrdddddllUllluuRurDDRRlddrruUlllullddrRurrrddllUluuululDDurrrur"
	"rdDDDuuuullLLrdddRRlluuurrrddd",

	// 28
	"xx#####!"
	"xx#   #!"
	"xx# # #!"
	"x##$ .#!"
	"x# *@##!"
	"## *  #!"
	"#  *  #!"
	"#    ##!"
	"######!",
	"dddlluuRluRUrruullDDDldddrruLUdrruLUdddllluRuuRuRDlldddrruLUdrruLddlllur",

	// 29
	"#######!"
	"#     #!"
	"# *** #!"
	"# *+* ##!"
	"# ***  #!"
	"#    $ #!"
	"####   #!"
	"xxx#####!",
	"rDrrddllUUdllluuuurrrrdDLdddrruLdlUUdrrul",

	// 30
	"xx####!"
	"xx#  ######!"
	"xx#       #!"
	"x##$####  #!"
	"x# . ....##!"
	"## #$##  #!"
	"#   $ $ $#!"
	"#   #  # #!"
	"######@  #!"
	"xxxxx#####!",
	"uluLUdLdlluRuurRddrdrdrruUluuruulllllDurrrrrddlddrUdddllululuuRRllddLd"
	"lluRuuRRRlddrRRurUUruLLLLLulDDurrrrrdddldlllLdlluRuuRRllddRRRRddrruUUu"
	"uruLLLLLulDDurrrrrddddddlluuRlddrruUu",

	// 31
	"x######!"
	"## @  ###!"
	"# ...$$ #!"
	"# $ #   #!"
	"## # $$ #!"
	"# ..* # #!"
	"#  ## # #!"
	"#       #!"
	"#########!",
	"ldDDDlddrUUUUluRRldddddrrrrruuuullDDLLrruurrddddllllluUUUruulDDDDuuuur"
	"rrDLLulDDurrrDrruLLLLrrrrdddddlllllluurrrrUUruLullddlDuruurrddrrddddll"
	"lllluuRRllddrUluRuuruulDDDuuurrrdLLrrrrdddddllUUUUruLLrrrddLrdddlluuUUrul",

	// 32
	"#######!"
	"#  *  #!"
	"# $ .$###!"
	"#@$$ .  #!"
	"#  #  . #!"
	"####  #.#!"
	"xxx######!",
	"uRlddrURRRluurDDlllluurDRdrruulLddrddrUUlluurDDrdrruLLLuurDlllluRRdrdr"
	"ddlUUruLddrrruLdlluurDldRRurDllluuLulldRlddrURRurDuuLddllluurDRlldRRRdr",

	// 33
	"#####!"
	"#   #####!"
	"#       #!"
	"## $ $  #!"
	"###### ##!"
	"#   ...#!"
	"#  ... #!"
	"## ###$##!"
	"x#$ $ $ #!"
	"x# @    #!"
	"x########!",
	"lUUddrrruLLdrrrruLUUUllllldRRRurrdddLLdllUUddrrrruuuuUUruLLLdRurDDDDDu"
	"ullllldRRldddrruLdlUUddrrrrruLLruuuuuullLulldRdRRRurDDDDDuuuulllluurDl"
	"dRRRurDDDllllldRdddrrruLLdlUUUluRRRllddddrrrrruLuUddLLLdlUUUluRr",

	// 34
	"##########!"
	"#        #!"
	"# $ $$ $ #!"
	"# ## #####!"
	"# #....  #!"
	"#  ....  #!"
	"###### ###!"
	"# $ $ $$ #!"
	"#        #!"
	"# @ ######!"
	"#####!",
	"urrrrUUUruLdllllluuuurrrDDDldRRRuLdlUrrrrdLLdddrruLdlUUULulldRRuRDDDrd"
	"lLruuullllluuuurrrdDDldRRlllluuuRRurDDDldRurrDrruLLLLdRluuuurrdLulDDDr"
	"dLuuuurrrrdLLLulDDDrrrdLDDldLLuRRdRUUUruLLrddddllldlluuRRRRdrUUUruLddd"
	"dllldlUluRRRRdrUUUddrrdLLLLLdlUluRRRRdrUu",

	// 35
	"############!"
	"#   #...   #!"
	"#@$$$*$*$$ #!"
	"#    ...  ##!"
	"###########!",
	"drrrrrUdrrrUruLLDLdllURRRurrdLdLLrruulDrdLullldlllluurrDRRRlllulldRRRlldRr",

	// 36
	"x############!"
	"##   ....   #!"
	"# $$$$#$$$$ #!"
	"#   ..+.    #!"
	"#############!",
	"rrUdrrruulDLdllllUdllURuRDldRlllluRRluRRDrdRRURRdLLLrrruurrddLLLLrruurDrdLLl",

	// 37
	"x#########!"
	"##       #!"
	"# .$. .$.#!"
	"# #$#$#$ #!"
	"# .$. . .#!"
	"#.#$#$#$ #!"
	"#@    #  #!"
	"##########!",
	"uuuurRRlllddrRUdllddrrUUlluururrrrrrdddlllLLLrrrrrrddlUruuuulldRullldr"
	"rulllldldDrrrrUdlllluururrdLDuurrrdLddlLuuurrrrrDDDLLLuurRDrdLuuulllld"
	"rRRlllddddrrUUUdddlluuuuurrrdLurrrDLddrUldddru",

	// 38
	"xxxxxx#####!"
	"#######   #!"
	"#  . #    #!"
	"# $. $..* #!"
	"###.### ###!"
	"# $ #@#$  #!"
	"#     $   #!"
	"######   ##!"
	"xxxxx#####!",
	"dRRUUUdddlllluuurRRuRDDDuullllulldRRdddlluRdrUUUdddrrrdrrULuuullLuLDll"
	"uRdrrrrruurrddLLLLLrrrdddrruLdlUUUrruullDurrddlLuurDlddddLLLLulldRRRRRdrUUu",

	// 39
	"#######!"
	"#@    #!"
	"# ###.####!"
	"# #   $  #!"
	"# # $  # #!"
	"# .****. #!"
	"###  $ ###!"
	"xx#    #!"
	"xx######!",
	"rrrrdddrDrruulLdlUlldRDRRuulDldLddrUdrrULLdlu",

	// 40
	"x#########!"
	"x#       #!"
	"## ##$## #!"
	"#  ##  # #!"
	"# $$.*.+ #!"
	"#  #   # #!"
	"## ##### #!"
	"x#       #!"
	"x#########!",
	"ruuullllllddDDuuuurrrrrrdddlldlluLrdrruLLrrrruuulllDDrddlluRRluuullldd"
	"lddrURRRuuullldDldRRRlluuurrrrrrddddddllllllUUluRr",
};

const sCollect DomenechCol[] = {
	{ "Original remixed", DomenechCol1, count_of(DomenechCol1)/2 },
	{ "Pufiban", DomenechCol2, count_of(DomenechCol2)/2 },
	{ "Three parallel", DomenechCol3, count_of(DomenechCol3)/2 },
	{ "Miniatures, part 1", DomenechCol4, count_of(DomenechCol4)/2 },
};
const int DomenechColNum = count_of(DomenechCol);

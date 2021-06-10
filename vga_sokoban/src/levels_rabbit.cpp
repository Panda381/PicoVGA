
// ****************************************************************************
//
//                         Game levels - Thinking Rabbit
//
// ****************************************************************************
// (c) Thinking Rabbit

#include "include.h"

// XSokoban, Original Levels & extras, (c) Thinking Rabbit
const char* RabbitCol1[] = {

	// 1
	"xxxx#####xxxxxxxxxx!"
	"xxxx#   #xxxxxxxxxx!"
	"xxxx#$  #xxxxxxxxxx!"
	"xx###  $##xxxxxxxxx!"
	"xx#  $ $ #xxxxxxxxx!"
	"### # ## #xxx######!"
	"#   # ## #####  ..#!"
	"# $  $          ..#!"
	"##### ### #@##  ..#!"
	"xxxx#     #########!"
	"xxxx#######xxxxxxxx!",
	"u3l3ululldll3d11rurd12lulld13rdrrlu7l3ulull3duull3d11rurrld7l3ullul3duull3d11rdru7l3ull3urdduu"
	"ll5duull3d13r8l3ullul3duull3d12rlur",

	// 2
	"############xx!"
	"#..  #     ###!"
	"#..  # $  $  #!"
	"#..  #$####  #!"
	"#..    @ ##  #!"
	"#..  # #  $ ##!"
	"###### ##$ $ #!"
	"xx# $  $ $ $ #!"
	"xx#    #     #!"
	"xx############!",
	"rdrr3drruuluuruullu4ldduu4rdrrddld3lu6ldl3udd5r3urrdluldduu4rdrrddld3lu6ldluud5r3u4rd3lulddu6rdd"
	"ld3lu6l4r4d3lurrdr4urrd3rdrdd4lulldllurdr3uddrrdrru4lrrd4ruululldulu5l3r4dllurdr3uddrrdrruluulu4l"
	"dlu5rdrdd3ldllurdr3udd3ruulu4lullrd5rd3rdrd6ldllurdr3udd3ruulu4ldlluuddru5rdrrdrd5ldllurdr3udd3ru"
	"ulu5l5rd3ruuru4lulldduurrd3r3d3lu4luld3r3urrdlulddu5r3d3lu4ldl3urul",

	// 3
	"xxxxxxxx########x!"
	"xxxxxxxx#     @#x!"
	"xxxxxxxx# $#$ ##x!"
	"xxxxxxxx# $  $#xx!"
	"xxxxxxxx##$ $ #xx!"
	"######### $ # ###!"
	"#....  ## $  $  #!"
	"##...    $  $   #!"
	"#....  ##########!"
	"########xxxxxxxxx!",
	"lddll4d8l8rurrdrrulld9l7r4urr3drd9l4ruurdrd5ldlu8r6u4lddr3drd5lu4l3rd5r3urdduurur3dld6ld4l3ru4ru"
	"urrdrd6lu3lrrd4ru5rd8ld3lrru5r4uluur5drd5lullrd5r6urrddrdlul3drd6ldllru5r4uluur5drd5luldrdl",

	// 4
	"xxxxxxxxxxx########!"
	"xxxxxxxxxxx#  ....#!"
	"############  ....#!"
	"#    #  $ $   ....#!"
	"# $$$#$  $ #  ....#!"
	"#  $     $ #  ....#!"
	"# $$ #$ $ $########!"
	"#  $ #     #xxxxxxx!"
	"## #########xxxxxxx!"
	"#    #    ##xxxxxxx!"
	"#     $   ##xxxxxxx!"
	"#  $$#$$  @#xxxxxxx!"
	"#    #    ##xxxxxxx!"
	"###########xxxxxxxx!",
	"llul4Luluuluur5RurRu3RurD4ldllu8R8l4drruUUlu5R4lddrUlu3Rd4RUUllDDlU4l4dr3Ulu6R8l3dRUUlu7R4l4d"
	"l3Ulu5R6ldd6lddrUlu7R6l4dlddr5Ulu6RdrUUlu5Ru4RDrDuUllDDR3lU3l3dlUUlu4Ru4R3lDRR8ldd3lddLUlu5Rd"
	"dlUrrUl3Ldllu6RUlu7R4l3dlUUlu5R7lDrd3Ldllu6R6ld3Dlddr5Ulu6R5l7drrULdl6Ulu5RdrUUlu6Rd3RURDllUU"
	"RllD3l3dlUUlu7R6l3dlU6l5dr3Rurrd5Ldl5Ulu7RUlu7R4l3dlUUlu5R7ldd4l5d6rddlUru5Ldl5Ulu6R5l5d5rddl"
	"Uru4Ldl5Ulu5RdrUUlu6Rd3RUUllD4l3dlUUd7luurDld7R6luurDld5Ruu5RdRRlU3l3dlUUlu4RuRRlD4l3dlU5luur"
	"Dld5RUlu5RdRUR4l3dlUUlu5RluR",

	// 5
	"xxxxxxxx#####xxxx!"
	"xxxxxxxx#   #####!"
	"xxxxxxxx# #$##  #!"
	"xxxxxxxx#     $ #!"
	"######### ###   #!"
	"#....  ## $  $###!"
	"#....    $ $$ ##x!"
	"#....  ##$  $ @#x!"
	"#########  $  ##x!"
	"xxxxxxxx# $ $  #x!"
	"xxxxxxxx### ## #x!"
	"xxxxxxxxxx#    #x!"
	"xxxxxxxxxx######x!",
	"luulld9l8rddluru7l8rurrd9l9rddluru8l7rddluru6ldlu8r3dlrrdd3l4uru6lu4l3rd4r3u4rdd3l3ruu4luur"
	"rdull4drd4ld4l3ru4ru4ruu3lruull4drd4lu3lrrd4ru4rurru5lruull4drd4ld3lrru4rd4r3uru4lruull4drd"
	"4lullrd4r3druuru5ldllru7r3drrdd3l4uru6luldrdl",

	// 6
	"######xx###x!"
	"#..  #x##@##!"
	"#..  ###   #!"
	"#..     $$ #!"
	"#..  # # $ #!"
	"#..### # $ #!"
	"#### $ #$  #!"
	"xxx#  $# $ #!"
	"xxx# $  $  #!"
	"xxx#  ##   #!"
	"xxx#########!",
	"dr4dlDr3uLDr3ulD5LulD7rddlUru6LdLLrU6rddlUru6L7r4dll3Uru5LuLLDDulUdDrrU7r6dllUll4U4drr3Uruul"
	"l5L7rddlUru6L3r4dllddrUluRdr4U4drrur3Ulul3LuLLrD5rurrd6LdLLUUrD3r4dlluRdr3U4drrdr5Ulul4L5rur"
	"rd6LdLUruL",

	// 7
	"xxxxxxx#####x!"
	"x#######   ##!"
	"## # @## $$ #!"
	"#    $      #!"
	"#  $  ###   #!"
	"### #####$###!"
	"# $  ### ..#x!"
	"# $ $ $ ...#x!"
	"#    ###...#x!"
	"# $$ #x#...#x!"
	"#  ###x#####x!"
	"####xxxxxxxxx!",
	"ld5r4d4u7ldr4dllurl3druurrdl3urd5rurddl5uluur6dldru6lddrulu4r3luluulu6rur6duuld4ld3lu"
	"urld8r3urruulul4duu6l3dld6rurd3urrulul3duu4ldlul3dld6r7l3druulu6r",

	// 8
	"xx####xxxxxxxxxx!"
	"xx#  ###########!"
	"xx#    $   $ $ #!"
	"xx# $# $ #  $  #!"
	"xx#  $ $  #    #!"
	"### $# #  #### #!"
	"#@#$ $ $  ##   #!"
	"#    $ #$#   # #!"
	"#   $    $ $ $ #!"
	"#####  #########!"
	"xx#      #xxxxxx!"
	"xx#      #xxxxxx!"
	"xx#......#xxxxxx!"
	"xx#......#xxxxxx!"
	"xx#......#xxxxxx!"
	"xx########xxxxxx!",
	"d3ruR5D4ulldRur3Duu3rUUruuluuLL3d7DLruLLul3DuurDDrRRl9uuurrdLul9DD9urrdLul8D7uLLDDulDDR"
	"ur6DRRlDLLrdRRl6urruuLrruu3ld6D4u4ldRRur5DR8urrDrdLLruulld8DLdR9u3uLL4D3ul4DldRRluRR4D5"
	"ur6DL6ul5ul6DldRRur6DR9uuu4rdrd3rddlldlld3L3rurrurr3ulLu7Lrdd3l3ur6DldRur5D5ur6D5u4rurr"
	"d5L5ruurr4u9Lrdd3l3ur6DldRur4D4ur5D4u6ruurrdd7L7r4u3lUru7Lrdd3l3ur6DldRur3D3ur4DLLulD",

	// 9
	"xxxxxxxxxx#######!"
	"xxxxxxxxxx#  ...#!"
	"xxxxxx#####  ...#!"
	"xxxxxx#      . .#!"
	"xxxxxx#  ##  ...#!"
	"xxxxxx## ##  ...#!"
	"xxxxx### ########!"
	"xxxxx# $$$ ##xxxx!"
	"x#####  $ $ #####!"
	"##   #$ $   #   #!"
	"#@ $  $    $  $ #!"
	"###### $$ $ #####!"	
	"xxxxx#      #xxxx!"
	"xxxxx########xxxx!",
	"rurrd3ruuldrdrruul4ulu7r6l5drddl6ulu6r5l6dllurdr5ulu5r4l5dllurdr4ulu4rdruud4l5dr4dl8ulu4r"
	"uu3rdrddluulddlu4l9dluudlullulld5rdr7ulu7r6l5dlldrdr6ulu6r5l7d4lulld5rdr7ulu5r4l6d3rulldl"
	"5ulu4ru3rddluuld4l5drruldl4ulu4rd3rllu4l6d3rdlldl7ulu4rurrld4l7d5rurrd6ldl7ulu4rdrrlu4l9d"
	"3rulldl8ulu4rurd4l7d5rurrd6ldl7ulu5rldr",

	// 10
	"x###xx#############!"
	"##@####       #   #!"
	"# $$   $$  $ $ ...#!"
	"#  $$$#    $  #...#!"
	"# $   # $$ $$ #...#!"
	"###   #  $    #...#!"
	"#     # $ $ $ #...#!"
	"#    ###### ###...#!"
	"## #  #  $ $  #...#!"
	"#  ## # $$ $ $##..#!"
	"# ..# #  $      #.#!"
	"# ..# # $$$ $$$ #.#!"
	"##### #       # #.#!"
	"xxxx# ######### #.#!"
	"xxxx#           #.#!"
	"xxxx###############!",
	"dr4drdl5ulldrur4dl3dldr4urrdlrdr6d10r4u3luurdldlluur3uluurru3rur6d5u3lu3ld6rur12d5ul6u6l3dr"
	"uulu5rur5d4u5l3druulu5rur11d5ul5u4lddrulu3rur4d3u5l6dlddr7ulu6rur10d5ul4u5l10d4l4u3rdr6ulu5r"
	"ur3duu5l6d4lddrurrdr7ulu6rur9d5ul3u5l10dludllurrdr9ulu5rurddu5l7d4lu3rdr6ulu6rur8d5uluu5l9dll"
	"urdr8ulu5rurd5l6d3ldrrdr7ulu6rur7d5ulu5l6d4ldd3rdr8ulu5rur7d6u3ld6lddrrdr3ulu6rur6d5u3lu6ld9r"
	"ur6d5u13ldllu13rur5d4u12lddrulu11rur4d3u11l3dlulddl4dldr5urrdlrdr6d10r4u3lul6ulu5rur3duu5l6d"
	"l3dr5ulur4drruldl6ulu6rur5d4u4l4dl3ulu5rur4d3u4l3dll3dlddr7ulu6rur3duu4l3d6ld3rullu3r4dlddr7u"
	"lu5rurddu3l3dluulu4rurd5l10drudruuldl8ulu6rurddu6l8d4rd3ldl9ulu6rurd6l6drrddrdlldl9ud4lu3ru6r"
	"3lddllulu5r10ld4ldrur3dl4d4urrdlul3duur5u11r",

	// 11
	"xxxxxxxxxx####xxxxx!"
	"xxxxx####x#  #xxxxx!"
	"xxx### @###$ #xxxxx!"
	"xx##      $  #xxxxx!"
	"x##  $ $$## ##xxxxx!"
	"x#  #$##     #xxxxx!"
	"x# # $ $$ # ###xxxx!"
	"x#   $ #  # $ #####!"
	"####    #  $$ #   #!"
	"#### ## $         #!"
	"#.    ###  ########!"
	"#.. ..#x####xxxxxxx!"
	"#...#.#xxxxxxxxxxxx!"
	"#.....#xxxxxxxxxxxx!"
	"#######xxxxxxxxxxxx!",
	"d3ldldlddrrd3rdrr4urr3d5uruu2(l4dl)lu3lulluururu6r6ldldlddrrd3rdrr4uludrddlur3dlluluurrllddl"
	"luurdrdlul3drdl4ullu3(ur)rdl3drdlul3dlddur4ullu3(ur)4drdrdrruulullddlul3drddu3lulddrdruur4ul"
	"luururrddrdlu3ru3ruu3lddullul3dl4drd3lrr3urrulul4drdlluldrr3u3rdrr3u3lrruu3lddrdl3uruurd4rddl"
	"lrruuruuldrd4lddullul3dl4drdllr3urrul3uruurdrdllul3dl4drdl3urruldrrdrrdruruldl3u3lrruu3lddl4d"
	"lddlurr3urruldrrd4r4ullrruuruuldrd4lddrd3lrruu3lddl4drdllulddurr3urrul3uruurdrdllul3dl4drdllul"
	"drr3urruldrrd6ruldl6uruuldrd5luldrdlul3dl4drdllr3urrulul4drdl3u3rd8rurrd7ldl4udd4ruldl3ullrr"
	"uuruuldrd4lddrd3lrruu3lddrdl3uruurdrdllul3dl4dldr3urrulul4d",

	// 12
	"################x!"
	"#              #x!"
	"# # ######     #x!"
	"# #  $ $ $ $#  #x!"
	"# #   $@$   ## ##!"
	"# #  $ $ $###...#!"
	"# #   $ $  ##...#!"
	"# ###$$$ $ ##...#!"
	"#     # ## ##...#!"
	"#####   ## ##...#!"
	"xxxx#####     ###!"
	"xxxxxxxx#     #xx!"
	"xxxxxxxx#######xx!",
	"ldrddrrur3duu3luulldlul4u7r3drud3lurru3rur4dldrdrull5d4lur4uluurrulu3rur4dl6d3lurrdr5ur5u13l7d4r"
	"u4rur3duul3ulurrdrulu3rur5dl5d4lu3rdr4url3d3l3u3luurdldrrur3d3uluulurrdrulu3rur6dl4d4lu3rdr3url"
	"dd3l3u5lddrrudll3urd3rur3duu4l4u4rdrulu3rur7dldrldd4lurrl3u4lullu3rdld3rur3d3ul3(lu)4rdrulu3ru"
	"r7dl3dllurdruudd4lu3rdru3l3uluululu3rdrulu3rur6d6u11ldd7rdrulu3rur5d4u3ldlldd5lulu7rdrulu3rur4d3u"
	"3ldlldd4lulu6rdrulu3rur3d",

	// 13
	"xxx#########xxxxxxx!"
	"xx##   ##  ######xx!"
	"###     #  #    ###!"
	"#  $ #$ #  #  ... #!"
	"# # $#@$## # #.#. #!"
	"#  # #$  #    . . #!"
	"# $    $ # # #.#. #!"
	"#   ##  ##$ $ . . #!"
	"# $ #   #  #$#.#. #!"
	"## $  $   $  $... #!"
	"x#$ ######    ##  #!"
	"x#  #xxxx##########!"
	"x####xxxxxxxxxxxxxx!",
	"UruLullddD3urr3dDD3ldll4urRururr4drrdL3drrRdrru3Rluu3r3dl6U5d4ldllu5Rluu3r3dl5U6ldDrRR3lDld3RUd3"
	"Rlu4Ud4lddrRRluurrdD3r3dl3Udd9lulld9RR8l4ul4ulldldllddrD3rRDDld6Rdr4UdlluurRRl3u3rdLdD3ruuLLulD3r"
	"ddlUruLr4dl3Ur6dl5U4d9ll4ur3Dld9R9l3u5lddRd9Rdr4Udlluur4R3ldd5r3dl3Udd9ll3u3ldDld9R4R9l4luluRurDD"
	"ld9Rdr4Ud5r3dlU9l4lddlUUruulldRurDld9RdrUUdlluur4R5ldd8l4uluurrdrDuluurRur7Dld9RR9l3l3u3Rur3Dld8R"
	"8l7ull3D3u3rd5Dld7R9ll3u3Rur3Dld5RdrUUdlluurRR3luurRRluuR",

	// 14
	"xxxxxxx#######xxxx!"
	"x#######     #xxxx!"
	"x#     # $@$ #xxxx!"
	"x#$$ #   #########!"
	"x# ###......##   #!"
	"x#   $......## # #!"
	"x# ###......     #!"
	"##   #### ### #$##!"
	"#  #$   #  $  # #x!"
	"#  $ $$$  # $## #x!"
	"#   $ $ ###$$ # #x!"
	"#####     $   # #x!"
	"xxxx### ###   # #x!"
	"xxxxxx#     #   #x!"
	"xxxxxx########  #x!"
	"xxxxxxxxxxxxx####x!",
	"ull5d5rdd3l3ruu7l4u4l3d3r3lddrrd3r3d4ruudd4luurr4ud4rdd3lr4drrdrr6u6dlluuldl3udd4luurr3urullur"
	"rdd3rdd3lr3drruludd5luurr4ud4rdd3lrr3dluudd4luurr3uruu3ld3rd4ruurrdd4lrdd3lr3d4luurr3urulldlr"
	"r3dllddllurd5r3ulldlldld5rdd4lud4rururuldluurullr3d4luurr3urul4dlldlld6rdruruldluurullr3d4luu"
	"rr4u4dlluldduullulldldd4rd6rdruruldluurullr3d4luurr3uruulldr4d3ld5luurdld4rd6rdruruldluurull"
	"r3d4luurr3uluurrdl4d3lduulldrdd6rdruruldluurullr3d4luurr4u4dllulddld6rdruruldluurullr3d4luu"
	"rr3u3d5luull5u4rdrrddrlurl3urrdlul3d3u4rd3lulddllulldlul7d3rurddu3ldrrd6rdruruldluurullr3d4lu"
	"urr4u4d3ldu5ld4rd6rdruruldluurullr3d4luurr3u3d3ldld6rdruruldluurullr3d4luurruu",

	// 15
	"xxx########xxxxxx!"
	"xxx#   #  #xxxxxx!"
	"xxx#  $   #xxxxxx!"
	"x### #$   ####xxx!"
	"x#  $  ##$   #xxx!"
	"x#  # @ $ # $#xxx!"
	"x#  #      $ ####!"
	"x## ####$##     #!"
	"x# $#.....# #   #!"
	"x#  $..**. $# ###!"
	"##  #.....#   #xx!"
	"#   ### #######xx!"
	"# $$  #  #xxxxxxx!"
	"#  #     #xxxxxxx!"
	"######   #xxxxxxx!"
	"xxxxx#####xxxxxxx!",
	"drrduruu3rddldrr3dllulluldldlluurd3lddllddrulurur4ul2(uurr)3drr4dl4dllulluuddrd3r4ur4ull3ull"
	"ddr3lddrddldrrlddllddrulurdruuddrd3r4ululd4rdlu3rdrr3ulu3lrruulldl3dllrr3ururrddllulddu3rdr"
	"r3dllullullddrrurruuru3lulddu3rdrrdrru3lr3dllullulrddllurdrurruuru3lul3duu3r3dlldllur4u3ldrr"
	"ur4dldr4u3luuluurr3dldrrur4d3ull3urrur3durrddllul3duull4urrur4durrddllulddulluu4lddrddld4r3l3u"
	"luur4dld3r3ldrddllurdruulurrl3drd3ruu",

	// 16
	"#####xxxxxxxxx!"
	"#   ##xxxxxxxx!"
	"#    #xx####xx!"
	"# $  ####  #xx!"
	"#  $$ $   $#xx!"
	"###@ #$    ##x!"	
	"x#  ##  $ $ ##!"
	"x# $  ## ## .#!"
	"x#  #$##$  #.#!"
	"x###   $..##.#!"	
	"xx#    #.*...#!"
	"xx# $$ #.....#!"
	"xx#  #########!"
	"xx#  #xxxxxxxx!"
	"xx####xxxxxxxx!",
	"uludrdru3rddlu3rdlulu4lddlddrurrddldduu4rdrrdrr4ululull3drdduul3urrdl3urdd3lur5lulld3rlddlddr"
	"urrdd3rdrrdrr4ululrdr4dllurdr3udd4luurdld3rdruud3lu3lddlulu4r3luulluuru3rdr3drd3ldllu4rd3rdr"
	"u4l5urrdlul3drd3ldllu4rd3r3l4urr3ulddrdlullur4drdldrrlld3rlluu3ldllu4r3urr3uld6lulld7rllddr"
	"ur3drddldrrluu3ldllu4r3urrulruuld8l3urddld7r4drddldruu3ldllu4r3urrulruuld7l3urddld6r5d3urr"
	"ulruuld6luurdld5r4drdldrlulld3ldrlddruuluru4rurddu3lddlullddruluru4rurd3lddlulu4r3urrulruuld"
	"l5d3urrulul4d",

	// 17
	"xxx##########xxx!"
	"xxx#..  #   #xxx!"
	"xxx#..      #xxx!"
	"xxx#..  #  ####x!"
	"xx#######  #  ##!"
	"xx#            #!"
	"xx#  #  ##  #  #!"
	"#### ##  #### ##!"
	"#  $  ##### #  #!"
	"# # $  $  # $  #!"	
	"# @$  $   #   ##!"
	"#### ## #######x!"
	"xxx#    #xxxxxxx!"
	"xxx######xxxxxxx!",
	"luurrdrdrruldlluulldd4ruul3u9r5dllurdr4uru3ldl3uluurrd6l4r3d5l3drddl4ulu9rur4drdldllurdr4u"
	"ru3ldl3uluurrd5l3r3d5l5d3luurrdr3ulu9rur4drdldllurdr4uru3ldl3uluurrd4luld3r3d5l4d3rdrru4l"
	"dl4ulu9rur4drdldllurdr4uru3ldl3uluurrd4ldllru3r3d5l7d3ruullrrdd3l6ulu9rur4drdldllurdr4uru"
	"3ldl3uluurrd4lullrd3r3d5l5d4ru3ldl4ulu9rur4drdldllurdr4uru3ldl3uluurrd4ldlurul",

	// 18
	"xxxxx###########xxx!"
	"xxxxx#  .  #   #xxx!"
	"xxxxx# #.    @ #xxx!"
	"x##### ##..# ####xx!"
	"##  # ..###     ###!"	
	"# $ #...   $ #  $ #!"
	"#    .. ##  ## ## #!"
	"####$##$# $ #   # #!"
	"xx## #    #$ $$ # #!"
	"xx#  $ # #  # $## #!"
	"xx#               #!"
	"xx#  ###########  #!"
	"xx####xxxxxxxxx####!",
	"lddrr3dldurrdl4ulld5ld3l3dlddru10r5urullr6d3luurrllddrruruu3d6luuluulluurrd5ruudd5lul3ur"
	"rd4rurrd4ldlu3rddl4drruruurullr3dldll3uruudd5lul3urrd4rurrd4luld3rddrr3dlddr4u5d3r5ullullr"
	"3dldll3uruudd5lul3urrd4rurrd4lulldrurdrrddrr3dlddr4urullr4d3l3uruudd5lul3urrd4rurrd5lruld3"
	"r3d5ldlud3luuldld4rl3dlddr4u3drruur3ulldr3lulld4rl4drruldl3u3d7r4ulu5ldllulld3r3drruruuddr"
	"ruruu4lr3drdd3r3ud3r4ulld5l3rddrudd3r4ulld4l",

	// 19
	"xx######xxxxxxxxxxx!"
	"xx#   @####xxxxxxxx!"
	"##### $   #xxxxxxxx!"
	"#   ##    ####xxxxx!"
	"# $ #  ##    #xxxxx!"
	"# $ #  ##### #xxxxx!"
	"## $  $    # #xxxxx!"
	"## $ $ ### # #xxxxx!"
	"## #  $  # # #xxxxx!"
	"## # #$#   # #xxxxx!"
	"## ###   # # ######!"
	"#  $  #### # #....#!"
	"#    $    $   ..#.#!"	
	"####$  $# $   ....#!"
	"#       #  ## ....#!"
	"###################!",
	"d3rdd3r9dllu5lulld11rurd9lddrulu8rdrrdrullu14lur5ur3ulldr7dld13rurrlddldrrluu13l6urrddrr"
	"uu4r5d5u7lul6dld4rdrru7rurddldruu8ldllu9rurdd5ldlur4ulldlluullulul5dld4rdrru7rurd8ldllu9"
	"rdrrlu5l3ulldll3u3lul3ur3dl5dld13rurd5l6u7lul6dld12rdrruuld4l3ullulrddll3u3lul5dld13rdru5"
	"l6u5luurdldllul6dld13r4l6u7lul6dld8rdr4ullulluu4r6d3ldd3luruulld10r3l3ullullu4l4dld8rd5ru"
	"ll8u3luu3l3dl3d3rdrr3d6u7lul6dld12r4ld4r",

	// 20
	"xxxx##########xxxxx!"
	"#####        ####xx!"
	"#     #   $  #@ #xx!"
	"# #######$####  ###!"
	"# #    ## #  #$ ..#!"
	"# # $     #  #  #.#!"
	"# # $  #     #$ ..#!"
	"# #  ### ##     #.#!"
	"# ###  #  #  #$ ..#!"
	"# #    #  ####  #.#!"
	"# #$   $  $  #$ ..#!"
	"#    $ # $ $ #  #.#!"
	"#### $###    #$ ..#!"
	"xxx#    $$ ###....#!"
	"xxx#      ##x######!"
	"xxx########xxxxxxxx!",
	"r3dlUr3d4lu3l4dLLulldd3l9u4ru4rd3D4lulld5Rd3RurD4l4dllulldd3l9u4ru4r3dDld3Rd3RU3rddllU4luurDl"
	"d3RuRuulDu3r4dlldlUrUURld3LdlUru3L5u4ld4l9d3ruurrdrr3uUru3Lulld4R5dllulldd3l9u4ru4r3dDld3RurD"
	"ld3Rd3ruUllUluRRlldDrD3LdlUru3L5u4ld4l9d3ruurrdrr3uUru3Lulld4R5dllulldd3l9u4ru4r3dDld3RurDld3"
	"RdRRlddrruUll3UluRuul4Drd3LdlUru3L5u4ld4l9d3ruurrdrr3uUru3Lulld4R5drRddlUruLdl5U4dllulld3R3ld"
	"3l9u4ru4r3dD3Lulld4R4drddl5U3RurDld3RurD4lu3l4d4ld3l9u4ru4r3dD3Lulld4R6drrdrruu3Ldl5U3RurD4l4"
	"d4ld3l9u4ru4r3dD3Lulld4Rd3Rd3RdRRlU4luurD4l4d4ld3l9u4ru4r3dDl5d4lulDr4d5r3Ul5u3Rd3RuRRlD4luur"
	"Dld3RdR3dl3UrU3LdlUru3L5urrdLul4D4u4ld4l9drRu5r3uU3RurDld3RuR3DldRRlddrruU3l3u3lullu3Lulld4R6"
	"drruLdl5U4d5ldll9u4ru4r3dD3Lulld4R6drrdrUru3L4dlluRdr3Ul5U3RurD4l4d5ldll9u4ru4r3dD3Lulld4R6dr"
	"ruLdl5U3Rd3Rur5Durr3d3lURRdrUll5u4luurDld3Rur3DldRRll3u3lu3l5drdd5luUlu4R4ldll9u4ru4r3dD3Lull"
	"d4R4drddl5U3RurDld3Rur6DldRRl6u4lu3l4dlldLulldll9u4ru4r3dD3Lulld4Rd3RurD4l5drdd4lUlUlu4R3lddr"
	"U4l9u4ru4r3dD6lddrUlu5R4drddl5U3Rd3Rur6DldR3ulD4u3luurDld3Rur3DldR3u4lu3l4dllulld3R4ldll9u4ru"
	"4r3dD3Lulld4R4drddl5U3RurD4l4d5ldll9u4ru4r3dD3Lulld4Rd3Rd3Rur5DlDRRll5u3luurDld3Rur5DldR5u4lu"
	"3l4d5ldll9u4ru4r3dDld3RurDld3Rur6D",

	// 21
	"#########xxxxxx!"
	"#       #xxxxxx!"
	"#       ####xxx!"
	"## #### #  #xxx!"
	"## #@##    #xxx!"
	"# $$$ $  $$#xxx!"
	"#  # ## $  #xxx!"
	"#  # ##  $ ####!"
	"####  $$$ $#  #!"
	"x#   ##   ....#!"
	"x# #   # #.. .#!"
	"x#   # # ##...#!"
	"x##### $  #...#!"
	"xxxxx##   #####!"
	"xxxxxx#####xxxx!",
	"drrll4dllddrrurrddrdrrul3uruurdldrrdrruuldll4uluur5dld3rur3dulull5u3ldrrur4dldrrddrr3uldll4"
	"u3l3u5l3d7rur4dld3rurddlulluuludll3(ur)4dldrrdrruul3duu5lur4uluu5l3d5r3l4dllddrrurrddrdr3ud"
	"dlluull4udd3rd4rdrruulddll3ulldld4rdrruuldrdlulluuldld4rurd3l4ul3dld4rll5ull4duuld5u5l3drr3d"
	"3rd4rluulldld3ru6l3u5rur5d4u9lddrulu8rur4d",

	// 22
	"######xxxxx####xxxx!"
	"#    #######  #####!"
	"#   $#  #  $  #   #!"
	"#  $  $  $ # $ $  #!"
	"##$ $   # @# $    #!"
	"#  $ ########### ##!"
	"# #   #.......# $#x!"
	"# ##  # ......#  #x!"
	"# #   $........$ #x!"
	"# # $ #.... ..#  #x!"
	"#  $ $####$#### $#x!"
	"# $   ### $   $  ##!"
	"# $     $ $  $    #!"
	"## ###### $ ##### #!"
	"#         #       #!"
	"###################!",
	"uuRRddRRuRurrddldDldD8lLLuullUlUUluurDDRR3Du3l5drRuu4R4l3drrUUddlluuRuRR3lddlldRRlldRdd7r3uR3Ul"
	"uR4dlddR6Ulu3Rdd4rdDlUruLLr4dlLulLrrRdrUdrrdd6lUUl5URdrUddrU3rddD3ldLLdl5UdllUdlUUd4l3dRUUlu5RU"
	"d4lddrUluRuulDrdRRlldlluRRl5ullDRur4DrdRlddldd3rRRdr4UlURlUllDurrR6drd6ruu6Ldl5URdrU3ruur5D4lLd"
	"lUU3drd6ruuLLuUr6uruul6D7ldlU3ldlluRRuull5ur6Drd3RdrUd3Ru4r3Dld4Ldl3Udd5lUll3u8RUdRdlL4drd6ruuL"
	"Lr9ulldRur8Dld4Ldl4ULuR5drd6ruuLLuuUruLr4u4luRluurDDldRuRRur9Dld4Ldl3Udd5luUUlu5RdRRUdl4drd6ruu"
	"LLr9u3ldRRur8Dld4Ldl3Udd6luu3l5uRRur3Drd4rRRdLu5ldllu7R6l4u3ruulDLdlluur5Drddllu5R5l3dld7Rdr4U4"
	"drd6ruu6Ldl3Ud6r8u4lulld5Ldlluur5Drddllu4R3l5u3rdLLul4Drddllu3R",

	// 23
	"xxxx#######xxxxxxxx!"
	"xxxx#  #  ####xxxxx!"
	"##### $#$ #  ##xxxx!"
	"#.. #  #  #   #xxxx!"
	"#.. # $#$ #  $####x!"
	"#.  #     #$  #  #x!"
	"#..   $#  # $    #x!"
	"#..@#  #$ #$  #  #x!"
	"#.. # $#     $#  #x!"
	"#.. #  #$$#$  #  ##!"
	"#.. # $#  #  $#$  #!"
	"#.. #  #  #   #   #!"
	"##. ####  #####   #!"
	"x####xx####xxx#####!",
	"urru4r3dlddrulu3rdrruulur3dlu3luuldr4uldd3luurdld3rur3dldr3u4lddrulu3rdrddluuru3luldrd4l"
	"3ru4r5dl4uru3luldrd3lul6d4ul3udd4ru4r7dl6uru3luldrd4l3ru3r3d3rdrru4ldl3uru3luldrd3lul5d"
	"3uluud4ru3ruuruul3durdd3luldrd4l3ru4rddld3rdrru4ldl3uru3luldrd3lull5d3uru3r3dr3ulu3rur3d"
	"ld3rdrru4ldl3uru3luldrd4luudl4d3u4r5dr5ulu3rur3dld3rdrru4ldl3uru3luldrd4l3ru3r3d4r3dluur"
	"u3ldl3uru3luldrd3lull3druu3ru3r3d5ruuldrd4ldl3uru3lul3ur3dldrd4lulddu4ru3rur3dld3r3drr3u4"
	"ldl3uru3luldrd3luld3ru3r3d4ruuldrd3ldl3uru3luldrd3ldlu3ru3r3d3ruuruul3drd3ldl3uru3luldrd3l"
	"ul4d3u3ru3r3d3ruu4rurddlddrddl4uru4lulddrd3ldl3uru3luldrd3lul3duu3ru3r3d3ruu4rdr3drdldl5ur"
	"u4lulddrd3ldl3uru3luldrd3lulddu3ru3r3d5rulu3rur5drdldl5uru4lulddrd3ldl3uru3luldrd3luld3ru3"
	"r3d3r6ur3duurddlddrd4ldl3uru3luldrd4l3ru3r3d3ruu4rur5drdldl5uru4lulddrd3ldl3uru3luldrd3l",

	// 24
	"###############xxxx!"
	"#..........  .####x!"
	"#..........$$.#  #x!"
	"###########$ #   ##!"
	"#      $  $     $ #!"
	"## ####   #  $ #  #!"
	"#      #   ##  # ##!"
	"#  $#  # ##  ### ##!"
	"# $ #$###    ### ##!"
	"###  $ #  #  ### ##!"
	"###    $ ## #  # ##!"
	"x# $  #  $  $ $   #!"
	"x#  $  $#$$$  #   #!"
	"x#  #  $      #####!"
	"x# @##  #  #  #xxxx!"
	"x##############xxxx!",
	"uurllurrurruluuru3ldlluruu5rdrru3ruu10l11ru11l10r3dludlldllu5l3dr3drddrd7rururrdrrul6uru"
	"lulldlrddlul3u9l10ru10l8r4d3rulldluud3rurrd3ldl3u8l9ru9l7r3dlldllu3r8l3dr3d4rd3r3lu3lddr"
	"d7rururrdr7uru4ldlluuddr3u7l8ru8l6r3d5r7d3ldldlluru4rdr7uru5ldluud5r7d5lddrulu4rdr7uru4ld"
	"l3u6l7ru7l5r3d5r7d4l3druulu3rdr7uru5ldluud9l3dr3drr4ull4d4rddu8rdr7uru4ldl3u5l6ru6l4r3d9l"
	"ddldrur3dr3drrd3rud3rdruulu3rdr7uru5ldluud9ldd3r3drdrd8rdr7uru4ldl3u4l5ru5l3r3d5r7d5luuru"
	"ul3duul3(ld)dld5rluu5rdr7uru5ldluud5r7d3l3dluulu4rdr7uru4ldl3u3l4ru4lrr3d9lddr3drd3rd8rdr"
	"7uru5ldluud5r7d5l3ul3(ld)dllud3lurru3rd8rdr7uru4ldl3ull3ru3lr3d5r7d5l3ulldldllu3lddld4rlul"
	"u3rddu8rdr7uru5ldluud9lddlddrur4dld4rd6rdruulu3rdr7uru4ldl3ulur3d4r7d5l3ul3(ld)8rdr7uru4ld"
	"luud4r7d9ldld6rdruulu3rdr7uru5ldl3urul",

	// 25
	"####xxxxxxxxxxxxxxx!"
	"#  ##############xx!"
	"#  #   ..#......#xx!"
	"#  # # ##### ...#xx!"
	"##$#    ........#xx!"
	"#   ##$######  ####!"
	"# $ #     ######@ #!"
	"##$ # $   ######  #!"
	"#  $ #$$$##       #!"
	"#      #    #$#$###!"
	"# #### #$$$$$    #x!"
	"# #    $     #   #x!"
	"# #   ##        ###!"
	"# ######$###### $ #!"
	"#        #xxxx#   #!"
	"##########xxxx#####!",
	"ddldu4lddrddllu4luu5l5d7ruudd7l5u5rddrrd4ruulu3luululuulluurrdulldd9rdruuru4lrdd6lddldrd"
	"d5l5d7r3ull7ulluurrdulldd9rdruuru3ldd6l7drrd4ruulu3luurullrddlul3ulluurrdulldd9rdru8l3dr"
	"ruldl3ulluurrdulldd8rurrdrulddluud7lddrr3d3rdrdd4l5urulldl3ulluurrdulldd9rdru8lddrr5dllu"
	"ullul3ulldrur3drdrr5ulluurrdulldd8rurrddlu7lddrr8d7l5u4r4l5d7ruurruldl5urulldl3ulluurrdu"
	"lldd9rdruuld7lddrr5drruldl4urulldl3ulluurrdulldd8rurrddlu7lddrr4d3rulldl3urulldl3ulluurrd"
	"ulldd10r8lddrr5dll7ulluurrdulldd9rdru8l5d5lururdld3r4l5d7ruu6ruu5ldl4urulldl3ulluurrdulld"
	"d9r7lddrr5dll7ulluurrdulldd8r6lddrr4d6rdrru7ldl4urulldl3ulluurrdulldd7r5l5d3l4ul3dld4r4l5"
	"d7ruu7rddrruldl3uru7ldl4urulldl4u3drr5d3ldllu4rl7ulluu3rldulldd6r4l5d3l4uluuluur7dld4r4l5d"
	"7r7urulldl4u3drr5dll7ulluurrdulldd5r3lddrr4d4rd3ldl5urulldl3ulluurrdulldd4rllddrr3d3r2(urr"
	"d)d6ldl4urulldl3ulluurrdulldd3r",

	// 26
	"x#######xxxxxxx!"
	"x#  #  #####xxx!"
	"##  #  #...###x!"
	"#  $#  #...  #x!"
	"# $ #$$ ...  #x!"
	"#  $#  #... .#x!"
	"#   # $########!"
	"##$       $ $ #!"
	"##  #  $$ #   #!"
	"x######  ##$$@#!"
	"xxxxxx#      ##!"
	"xxxxxx########x!",
	"ullu3ldulluluu4r4lddrulu3rdru3l4dlullull3urdrull3drudrddluruulldrurdld3rdr3ulu3rdrruul"
	"d3l3d3lull3urr3dld3rdr3ulu3rurrddluud3l3d3lulluurur3dld3rdr3ulu4r3l3d4l6ur5dld3rdr3ulu"
	"3ru3rddlurulld3ldldrd3ldluulururddld3rdr3ulu5r4luul4drd3ldluulururddld3rdr3ulu4ru3rddlur"
	"ulld4l4dru4rdrru6ldl3ulu5rurrddluruld5l3dr3d4ruuru5ldl3ulu6rurd6l3dr3d5ruuru6ldl3ulu4r3l"
	"3d3rdlu3r3d3luurullrddlul3ulu3rll4drruldl3ulurr",

	// 27
	"x#################x!"
	"x#...   #    #   ##!"
	"##.....  $## # #$ #!"
	"#......#  $  #    #!"
	"#......#  #  # #  #!"
	"######### $  $ $  #!"
	"xx#     #$##$ ##$##!"
	"x##   $    # $    #!"
	"x#  ## ### #  ##$ #!"
	"x# $ $$     $  $  #!"
	"x# $    $##$ ######!"
	"x#######  @ ##xxxxx!"
	"xxxxxxx######xxxxxx!",
	"3(ru)uluuluulldlu4ruu3ld6luld7ru3rdd3lr3(rdd)3luul3uluru4l4ru3rdd3ldluru3lulddrd4lruluu"
	"rrd4rd3rddlrrddrdd3luul3udrruulldluru6lulddu7r3d3rdd4ruuruu3ldd4lrrddrdd3luul3udrruulld"
	"luru6l6r3d3rdd4ruu6lrrddrdd3luul3udrruulldluru5l5r3d3rddrud3ruu6l3r4d3luul3udrruulldluru"
	"4l4r5drddrr3uru3lrr4dlluul3udrruulldluru3lulddllru4rd4rddrddluru3lrr4dlluul3udrruulldlur"
	"u4lulldduurddu5r3d5ruurrdrd7lrr4dlluul3udrruulldluru5l5r3d5r4urr3drd7lrr4dlluul3udrruul"
	"ldluru4l4r5d3ldd5rdr4uru3lrr4dlluul3udrruulldluru3luld4r5dllu4lddlddru8rdr4uru3lrr4dldd"
	"3lulu3ruul3udrruulldluru3ldllru4r5drddrdr4uru3lrr4dlluul3udrruulldluru3lullrd4r5dllu3ldld"
	"ld3rdrrllu6rdr4uru3lrr4dldd3lulu3ruul3udrruulldluru3ldlu4r5drddrdr4uru3lrr4dlluul3udrruul"
	"ldluru3luld4r5d5lulddldrd4r4lu8rdr4uru3lrr4dldd3lulu3ruul3udrruulldluru3l3r5drddrdr4uru3l"
	"rrdd5rddl3u3d6luul3udrruulldlurullulddu3r3d5ruu3rdd7lrr4dlluul3udrruulldlurulluld3r5d3ldd"
	"5rdr4uru3lrr4dlluul3udrruulldlurull",

	// 28
	"xxxxxxxxx#####xxx!"
	"xxxxx#####   #xxx!"
	"xxxx## $  $  ####!"
	"##### $  $ $ ##.#!"
	"#       $$  ##..#!"
	"#  ###### ###.. #!"
	"## #  #    #... #!"
	"# $   #    #... #!"
	"#@ #$ ## ####...#!"
	"####  $ $$  ##..#!"
	"xxx##  $ $  $...#!"
	"xxxx# $$  $ #  .#!"
	"xxxx#   $ $  ####!"
	"xxxx######   #xxx!"
	"xxxxxxxxx#####xxx!",
	"r3ulu4rururrdr3dl4drrurdrrdruud5lddrulu5rdr3uldd4l3drrululu3rdr3urullr3d3l3dluulu4r"
	"dr4urullr4d6l4ur3ululldld3l3d3r3d8rdr5uruudl5d6l4urrdlul3dld6rdr4u3d6l3ur3urrulrruu"
	"lldl4drdlul3dld7rdr6udl4d6l3ur3u2(rrul)uldl4drdlul3dld6rdr3udd3lulld4l3u3l3u3ru3rlur"
	"r4dl3dld7rdr4ul3d6l4urrdlul3dld7r6l3ur3urrulruuldl4drdlul3dld6rdrruuld6l3ur3urrulul4"
	"drdlul3dld6rdr4urdl3urddl3d9lurrlluu3l3u3rurrdrur3dl3dld6rdr5u4d6l4urrdlul3dld6rdr4u3"
	"d9ldd4rludlluru7r3l3dluulu4rdr3u2(dd3l)ulu6rdruud3lu7lurdd8rdru6l3ur4u4ld3l3drrurddld"
	"3rlluu3l3u6rur3dl3dld6r5l4urrdlul3dld5r",

	// 29
	"#####xxxxxxxxxxxxxx!"
	"#   ##xxxxxxxxxxxxx!"
	"# $  #########xxxxx!"
	"## # #       ######!"
	"## #   $#$#@  #   #!"
	"#  #      $ #   $ #!"
	"#  ### ######### ##!"
	"#  ## ..*..... # ##!"
	"## ## *.*..*.* # ##!"
	"# $########## ##$ #!"
	"#  $   $  $    $  #!"
	"#  #   #   #   #  #!"
	"###################!",
	"d5lddrdrru5rdlu4ldllulld3rll5urdu4rdrrdrrurrdl4drddlulldllurrl3u6l6r3d3ldllu4rdr3"
	"uru6ldll3uruul4dldrrl4ulluulul4dlddrddlddrurrdrru4r4ldllu4rdrrurrdrrul3u6ldllur3u"
	"lluull3dlddrddld3r2(drrurr)dr3uru5l4r3d3ldllu4rdr3uru4l3r3d7ldllu8rdr3uru3lrr3d11l"
	"3uluur4dld11rdr3urullr3d11l8urr3drur3dldr5u5rdd4l4rurrdrrurrdl4drddlulldl3urul3d11l"
	"8urrddrr3d4u3rdurrdd4l4rurrdrrurrdl4drd3ldl3udd11l8u2(rrdd)u5rurrdrrur5drd3ldluu",

	// 30
	"xxxxxxx###########x!"
	"xxxxxxx#   #     #x!"
	"#####xx#     $ $ #x!"
	"#   ##### $## # ##x!"
	"# $ ##   # ## $  #x!"
	"# $  @$$ # ##$$$ #x!"
	"## ###   # ##    #x!"
	"## #   ### #####$#x!"
	"## #     $  #....#x!"
	"#  ### ## $ #....##!"
	"# $   $ #   #..$. #!"
	"#  ## $ #  ##.... #!"	
	"#####   ######...##!"
	"xxxx#####xxxx#####x!",
	"lluullddr4dlddru3rddrruuluu3rddrruuld6uluurdrrurrd4l6d4lulldrurd5rddlurul7ulldru"
	"rdrru4rd4l3rddr6drdlldl3urulrruu3l3u3d3ruuld4u3ldr3drrur6drdllur5ulldrll4urur3dr"
	"5dlldd3ruldlur4u2(llur)luurrddr6drdl5ullur3u5lulld6rur3dr5dlddrru3lurr3ullur3u5l6d"
	"rddl7ulu5rur3dr5dlddrruldlur4ullur3u5l6d4lulld5rdrddluur6ulu5rur3dr5dlddrrul4ullur"
	"3u5l6d4lulld5rdr6ulu5rur3dr6drd3lruur3ullur3u5l6d4luurruull3dld4rdr6ulu5rur3dr5dld"
	"drrullr4ullur3u5l6d4luurrululd3luulldd5rddld4rdr6ulu5rur3dr5dlddrrul4ullur3u5l6d4l"
	"uurrululd3luuldld5rddld4rdr6ulu5rur3dr6drdllur4ullur3u5l6d4luurrulul3dld4rdr6ulu5r"
	"ur3dr6drdl5ullur3u5l6d4l3u4l4dlddr5u4d3rddrruul4uruul3dld4rdr6ulu5rur3dr7d5ullur3u5"
	"l6d4lddrddl6uruul3dld4rdr6ulu5rur3dr6d4ullur3u5l6d4l3u3lulldr5d3rdruud4l5u4rddld4rd"
	"r6ulu5rur3dr5d3ullur3u5l6d4luurrulul3dld4rdr6ulu5rur3dr4duullurur3d",

	// 31
	"xx####xxxxxxxxxxxx!"
	"xx#  #########xxxx!"
	"x##  ##  #   #xxxx!"
	"x#  $# $@$   ####x!"
	"x#$  $  # $ $#  ##!"
	"##  $## #$ $     #!"	
	"#  #  # #   $$$  #!"
	"# $    $  $## ####!"
	"# $ $ #$#  #  #xxx!"
	"##  ###  ###$ #xxx!"	
	"x#  #....     #xxx!"
	"x####......####xxx!"
	"xxx#....####xxxxxx!"
	"xxx#...##xxxxxxxxx!"
	"xxx#...#xxxxxxxxxx!"
	"xxx#####xxxxxxxxxx!",
	"uldd3lddrdrr3drdllul3drdluurr5ulluluu3r6drdlluldduu8r4uluulu3lul8drdl8urrdrddluurullu"
	"l8dl3dluu4ru4r4ululldldlrdr4ulull7drdlluldrr4u3ruurrulu3lul8drdlulddlrr5u3r3uru3lul8"
	"drdllul3durr5urr3urullul8drdllulddrr5ullululldlddru4rll3u3r7d4u3luulldld5rll3u3r6drdl"
	"luldrr4u5lddrulu4rll3u3r6drdl4ulldlldlulu5rll3u3r6d6u3lull3dld5rll3u3r5drdlldrru5r4ur"
	"ulldluuluurrddu4lul8d3u5l3u4rur6drddllur3u3luul4urddld3rur7drdl4u3ru3r4d4l4r5u3rd6luur"
	"u3lul7drdl3urr3urullul8d6ruuldrd4l4r5u3ldluurullul7d",

	// 32
	"xxxxxx####xxx!"
	"xx#####  #xxx!"
	"x##     $#xxx!"
	"## $  ## ###x!"
	"#@$ $ # $  #x!"
	"#### ##   $#x!"
	"x#....#$ $ #x!"
	"x#....#   $#x!"
	"x#....  $$ ##!"
	"x#... # $   #!"
	"x######$ $  #!"
	"xxxxxx#   ###!"
	"xxxxxx#$ ###x!"
	"xxxxxx#  #xxx!"
	"xxxxxx####xxx!",
	"rurr3drddrrurrd6ldluurrd6rddluru7l6r3dlluuru4l3r3d3(ru)5ldlu4r3urddurdd5lullrd3rd"
	"drud3rull5ur4d5ldlluurd4r3ulurl3drd3ldlurul5u3rur6drd5l4urulu3rur4drruldlddrd4ldl5"
	"uruu3r5drd3lrr6u3lddl5drurrddrud3rullu4l3r6u3lddl4d3rddruru4l3r5dl4urullrr6u4l4d3ulldrurdd",

	// 33
	"############!"
	"##     ##  #!"
	"##   $   $ #!"
	"#### ## $$ #!"
	"#   $ #    #!"
	"# $$$ # ####!"
	"#   # # $ ##!"
	"#  #  #  $ #!"
	"# $# $#    #!"
	"#   ..# ####!"
	"####.. $ #@#!"
	"#.....# $# #!"	
	"##....#  $ #!"
	"###..##    #!"
	"############!",
	"ddldll3u3l3ur3ul3urrdll3r6d3rululdl3u3ruu4lull3dr3dl3d3ruurl5drruldl3urdlddrruldlu"
	"uru3lulddrdllr5ur3ul3urrd4rdd3l2(ddrddl)uru3lulddrdluu3ruuruul4drddluru3luldrd3lrdr5urd"
	"d5ul3urrdr8dllulddrdluu4rddluru3luldrdllruu3luurdldrrll5urrlddrurur6duulddrdlu3r8ulull3dl"
	"dr4urrdlul3dr5d5uluu5rdlul8dllul3duu4rddluru3lulddu3r3u3rdllul3drddluru3luldu3l3urddldrrll"
	"5urrdrur6drr7u3rdllul7drddluru3lrr8u3lddldrur5d4ul4ulldrur3dldrur4d",

	// 34
	"x#########xxxx!"
	"x#....   ##xxx!"
	"x#.#.#  $ ##xx!"
	"##....# # @##x!"
	"# ....#  #  ##!"
	"#     #$ ##$ #!"
	"## ###  $    #!"
	"x#$  $ $ $#  #!"
	"x# #  $ $ ## #!"
	"x#  ###  ##  #!"
	"x#    ## ## ##!"
	"x#  $ #  $  #x!"
	"x###$ $   ###x!"
	"xxx#  #####xxx!"
	"xxx####xxxxxxx!",
	"lul4(rd)dlu3luuluuru5lrddll6drddl6ulur6d3rdlrddluuruldd3rur3ulluur4uru4l4dlul7drrurd"
	"luldl8urruu3r5dld3l3rdrr3dldlldluurullul4ulurrdruull6drddl6ulurrdrull3d4rdrudrru6l4r"
	"uurdl4uru3lrd3r3(dr)ddlu3l4r3dlddlld4ldluurullul4ulurdrul5drddl7u3d5r5urulld3r3(dr)d3"
	"ld6lrd3rdrddrd4ldluurullul4ulu3rll5drddl6ulurrl3d5ruurdrd6l5r4drd4ldluurullul4ulur5drddl6u",

	// 35
	"############x######!"
	"#   #    # ###....#!"
	"#   $$#   @  .....#!"
	"#   # ###   # ....#!"
	"## ## ###  #  ....#!"
	"x# $ $     # # ####!"
	"x#  $ $##  #      #!"
	"#### #  #### # ## #!"
	"#  # #$   ## #    #!"
	"# $  $  # ## #   ##!"
	"# # $ $    # #   #x!"
	"#  $ ## ## # #####x!"
	"# $$     $$  #xxxxx!"
	"## ## ### $  #xxxxx!"
	"x#    #x#    #xxxxx!"
	"x######x######xxxxx!",
	"llu3ldlldl3drru5rdr3ulu5rurddu7lu3ldlldldd7rdr3ulu7r8lu3l3duullulld3rll3d7rdr3ulu6r7lu3l3"
	"duu3l3d7rdr3ulu4rddl9dllu3l5uludr5d5r8u4rl3uld6lu3l4dldru4rdr3ulu4rd3rululdlddl8d5l5ululu4"
	"rdr3ulu6rurddllu4l3d4lddrddl3ulu4rdr3ulu6r5l3d6l4drdr4ulu4rdr3ulu5rurd5l3d4l4d3ldrddrdd3lu"
	"ul3urrdrddlur5ulu6rdr3ulu5rdru5l3d4l4d5lddrrdr6ulu6rdr3ulu5rurddldll8d5l3udrruulldl2(3ulu4"
	"rdr)ruulddu4l3d6l7drdd3luulurrdr6ulu6rdr3ulu4rdrruuldrdlu4l3d6l6dludlluurrdr4ulu6rdr3ulu5r"
	"dru5l3d4lddr5d4lrrdd3luulurrdr6ulu6rdr3ulu5r4l3d4lddr5d5r6urruuddlluurl10d3luru7lrrdd3luulu"
	"rrdr6ulu6rdr3ulu4rdru4l3d4l5dl5rdu3lddrrd3r7urruuddlluurl8d9lr6ulu6rdr3ulu4rddl8d7ldd3luulu"
	"rrdr6ulu6rdr3ulu3r",

	// 36
	"xxxxxxxxxxxx#####xx!"
	"#####xx######   #xx!"
	"#   ####  $ $ $ #xx!"
	"# $   ## ## ##  ##x!"
	"#   $ $     $  $ #x!"
	"### $  ## ##     ##!"
	"xx# ##### #####$$ #!"
	"x##$##### @##     #!"
	"x# $  ###$### $  ##!"
	"x# $  #   ###  ###x!"
	"x# $$ $ #   $$ #xxx!"
	"x#     #   ##  #xxx!"
	"x#######.. .###xxxx!"
	"xxxx#.........#xxxx!"
	"xxxx#.........#xxxx!"
	"xxxx###########xxxx!",
	"l6d9u3rd3rddrud3lddrddlu3l4ruulurruu3lu3l8duu5ruuldrd4l3r3urruu3lu3l7dldrrd4ld6rll4u3r3urr"
	"urrdldllulddrd4l2(3ruu)lduu3lu3l9d3u4r3u3rdllulddrd4l3ruurr3u3lu3l8d8u3rdrruur4drdllulddrd4l"
	"3ruurr3u3lu3l7dr3d4lu6rllul8u5ruruulddrdrdul3drdllulddrd4l3ruurr3ullu4l8duu4r3u4rululddrdllu"
	"lddrd4l3ruurr3ullu4l7dldd3rd4lruur8u5rur4drdllulddrd4ldluulldld4l3ur3uru5r8d8u5rur4drdllulddr"
	"d4l3ruurr4u6l7drdd3ld4rluul8u3ldlluluulldd13rur4drdllulddrd4l3ruurr4u6l8d8u6luuldld13rur4drdl"
	"lulddrd4l3ruurr4u6l7dlddrrldluur8u4lulluldld13rur4drdllulddrd4ldluulldld4l3ur3uruulld7r8d8u5r"
	"ur4drdllulddrd4ldluulldldlluruulrddluddlluur4uruulld7r7d7u5rur4drdllulddrd4l3dllrdruul3ulldlldl"
	"l6uruulld7r9d9u5rur4drdllulddrd4ldluulld3ldl6uruulld7r8d8u5rur4drdllulddrd4ldluulldlluldl5uruul"
	"ld7r7dlddur8u5rur4drdllulddrd4ldluulldlluuldl4uruulld7r7drddul8u5rur4drdllulddrd4l3ruurr4u6l7dl"
	"dr8urruu3rur6drdllulddrd4l3ruurr4u6l7drdl8uluu6rur6drdllulddrd4l3ruurr4u6l7d",

	// 37
	"###########xxxxxxxx!"
	"#......   #########!"
	"#......   #  ##   #!"
	"#..### $    $     #!"
	"#... $ $ #   ##   #!"
	"#...#$#####    #  #!"
	"###    #   #$  #$ #!"
	"xx#  $$ $ $  $##  #!"
	"xx#  $   #$#$ ##$ #!"
	"xx### ## #    ##  #!"
	"xxx#  $ $ ## ######!"
	"xxx#    $  $  #xxxx!"
	"xxx##   # #   #xxxx!"
	"xxxx#####@#####xxxx!"
	"xxxxxxxx###xxxxxxxx!",
	"uull4rdrruluur3(uul)lu2(3ldd)rrudlluuluu4rdd3l4drr3udllul3u4rdd3lrr8drruldl7udlluluuld3urrdluld"
	"u4rdrdd3lrr7drruldl6udlluuluu4rdd3lrr7d4ru3ldl6udllul3ulurrd3rdd3lrr6d3ruullrrdd3l5udllul3u4rdd"
	"3ldluud4ruurrdd5l3ruu4lddr4d4ru3ldl3udrruull4ru8rurrd9lu5luld2(4rddru)lu4rurrd9lu5l3rddru5r4drdd"
	"l5ulu4rurrd9lu4lrrddru5r4dllulldurrd6ldluurr5d6rdr3ulludrr5ulu4rurrd9lu3lullrrdrddru5r4d6ldl3u5d"
	"3ruulu4rlddrr5ulu4rurrd9lullru3lrr3druud4rdd3rdldl3ulu4rurrd9luu3lr3dru10r4dl3uru10lurullr3dluud"
	"11r6dl5uru10ldludll",

	// 38
	"xxxxxx####x!"
	"####### @#x!"
	"#     $  #x!"
	"#   $## $#x!"
	"##$#...# #x!"
	"x# $...  #x!"
	"x# #. .# ##!"
	"x#   # #$ #!"
	"x#$  $    #!"
	"x#  #######!"
	"x####xxxxxx!",
	"ddlu3ldllddrrdru3l3urrddrddldll3u3drddl4urr3u3ldrrurddrdr3dllullddrulurluurrdru3rddrd5luudll"
	"ddrulurluu3rl3u3rdr4drd5luudllddrulurl3udrr3u3ldrrurdu3rur6drd5luudllddrulurdru",

	// 39
	"xxxxxxxxxxxxx######!"
	"x#############....#!"
	"##   ##     ##....#!"
	"#  $$##  $ @##....#!"
	"#      $$ $#  ....#!"
	"#  $ ## $$ # # ...#!"
	"#  $ ## $  #  ....#!"
	"## ##### ### ##.###!"
	"##   $  $ ##   .  #!"
	"# $###  # ##### ###!"
	"#   $   #       #xx!"
	"#  $ #$ $ $###  #xx!"
	"# $$$# $   #x####xx!"
	"#    #  $$ #xxxxxxx!"
	"######   ###xxxxxxx!"
	"xxxxx#####xxxxxxxxx!",
	"u3ldrddlu5lrddlulldr3dlddru4rdrrdrrudlluru5rdr9ulurrl9d6lddrulu5rdr5u4d5ld4luurdld3rdrul"
	"u5rdr4ud3luu4rul5d6luuluuluu3ldll4dld5ruu3l3rdrdld3rdrulu5rdr5ulurrl5d6luul3ulu3ldll4dld5"
	"rurd5l4ul3ur6dld5rd3rdrulu5rdr6ulurrl6d6luu6l3rdrdld3rdrulu5rdr7ulurrl7d6luuluuluu4ldl4dl"
	"d5rurd5l4ul3ur6dld5rd3rdrulu5rdr8ulurrl8d6luulldd5l8urrdlul7dld5rd3rdrulu5rdr5ulur5d6luull"
	"ddld3rdrulu5rdr9u8d6luuluuluu4lul6dld5rurdld3rdrulu5rdr8u7d6luul3urrdluu6lul6dld5rurdld3rd"
	"rulu5rdr7u6d6luul3uru6lul6dld5rurdld3rdrulu5rdr6u5d6luuluur4uldrd6lul6dld5rurdld3rdrulu5rd"
	"r5ur4u3dl5d6luul6uldu4rdluldld5lul6dld5rurdld3rdrulu5rdr5ul3uddr5d6luul3urru7lul6dld5rurdld"
	"3rdrulu5rdr5ur3uddl5d6luul6u3rd3luldrd5lul6dld5rurdld3rdrulu5rdr5uluudr5d6luul4u4lddlul4dld"
	"5rurd6l3druulu5rd3rdrulu5rdr5urul5d6luulldd5l3drruulu3rd3rdrulu5rdr5uruulldrurdl5d6luulldd3l"
	"3d3(lu)5rd3rdrulu5rdr6ulur6d6luulldd3lddlulu4rd3rdrulu5rdr5ulur5d6luullddlddrddl3u3rdlrrulu5"
	"rdr6u5d6luu7ldd4rurdld3rdrulu5rdr5u4d5ld4l3drrululu3rdrulu5rdr4u3d5l3dlldluulu3rdrulu5rdr3u3"
	"l2(uurl)4d3rdd5ld3ldrrdruulu5rdruu",

	// 40
	"xxxx############x!"
	"xxxx#          ##!"
	"xxxx#  # #$$ $  #!"
	"xxxx#$ #$#  ## @#!"
	"xxx## ## # $ # ##!"
	"xxx#   $ #$  # #x!"
	"xxx#   # $   # #x!"
	"xxx## $ $   ## #x!"
	"xxx#  #  ##  $ #x!"
	"xxx#    ## $$# #x!"
	"######$$   #   #x!"
	"#....#  ########x!"
	"#.#... ##xxxxxxxx!"
	"#....   #xxxxxxxx!"
	"#....   #xxxxxxxx!"
	"#########xxxxxxxx!",
	"l5dllrrddlludrr9u6l4dlldl3drruulrddl3dlddrruldluruuru3ruruu4ldduu4rddld3l3uruulldlddldrr3dlld"
	"d3ru5ldlurrurullrd3ruu4ruruulu3(ld)uu4rddld3l3ululddldrr3dlddrrul4uluuruurrdrdlldduu4rddld3l3"
	"ululddldrr4drd5l3rur4ul3uluruuruurr5drdlldduu4rddld3l3ululddldrr3dlldd3ru5lruruld3r3uluurrddu"
	"u4rddld3luur3ullrr4ullddl5dldrr3dlddrrul4uluurrdduu4rddld3luur7u3l7dldrr4drd4lrrur4uluurrddur"
	"7u6r7dllrrddllulld3luur7u4rdru3ldrddldduurrd2(lrdl)lrr3ulddld3lulddldrr3dlldd3ru4lu3ruu4ruruu4"
	"ldduu4rddld3l3ululddldrr3dlddrru3lrr4ul4u3rdrdlldduu3ruurrd3lrr4ul4dr3dld3l3ululddldrr3dlddrru"
	"l3u4ruruu4ldduu4rddld3l3ululddldrr4drdllur4ul4u3rdrdlldduu4rddld3l3ululddldrr3dllrddrrulldluurr"
	"uu4rur8urrdllul5drd4ldduu4rddld3l3ululddldrr3dlddrrullr4uluurrdduu4rddld3l3rurrdrruullrr5uru4lu"
	"l5drd5lulddldrr3dlddrruldlur3u4rur3urululddrd4ldduu4rddld3l3ululddldrr3dlddrrul4uluurrdduu4rddl"
	"d3lul4drdllu",

	// 41
	"xxxxxxxxxxx#####xxx!"
	"xxxxxxxxxx##   ##xx!"
	"xxxxxxxxx##     #xx!"
	"xxxxxxxx##  $$  #xx!"
	"xxxxxxx## $$  $ #xx!"
	"xxxxxxx# $    $ #xx!"
	"####xxx#   $$ #####!"
	"#  ######## ##    #!"
	"#.            $$$@#!"
	"#.# ####### ##   ##!"
	"#.# #######. #$ $##!"
	"#........... #    #!"
	"##############  $ #!"
	"xxxxxxxxxxxxx##  ##!"
	"xxxxxxxxxxxxxx####x!",
	"ulld4luul3(ur)ddlul6drd9l3u7r7l3d8r5ulur3d3ru3rd6l3d8l3u7r7l3d8r5u3l5(ur)r3(dl)6drd8l7r7urrd"
	"lul6drd7l6r6urrdlul5drd6l5r5urr5uldl8drd5l4r5urr3ulul8drd4l3r5ulluurur7drd3lrr5ullurur6drdll"
	"r9u4rd3lul8drdl8u4rd3lul7d6u4rd3lul5du3rddruru14lul3duu14r3druuddrdldlul3uru13lulddu13ru3rd1"
	"5luld13r4dr3uru14l",

	// 42
	"xxxxx########xxxxx!"
	"xx####      ######!"
	"xx#    ## $ $   @#!"
	"xx# ## ##$#$ $ $##!"
	"### ......#  $$ ##!"
	"#   ......#  #   #!"
	"# # ......#$  $  #!"
	"# #$...... $$# $ #!"
	"#   ### ###$  $ ##!"
	"###  $  $  $  $ #x!"
	"xx#  $  $  $  $ #x!"
	"xx######   ######x!"
	"xxxxxxx#####xxxxxx!",
	"llddrdrddlddlld3lullrrddllul3uru3lrr4drdrruulldl3urullr3drddrurulldl5uru3ld4l3drrdd5rdrurulldl3"
	"urul4d6ruuld4ldl5urull3u3r4d4urrddr4d7lrrdd4rudrrulu4l4rdrdd4ldlul5urul3d5ruuldrd5l3drruldl4ud4"
	"rdrd4ldl3ulurulurdrr4urrdlul3duurr4drd4l3rdd4rd6ldlul3urul4drruldl3uluruuldr4d8ru3l3ruu3luldrd5"
	"l4rdrd4ldl5udd4ru3rddrd7ldl4ud4ru4ruul4drd7ldl3u4ru3r4ur3drd4luldrd4l3ru3ruullul3drd3lrru3r3ullr"
	"ull4drdllr5ululdduu3lddu3l3drr4l3drruuddll3u3rl5d3rulldl4uddll3urr",

	// 43
	"xxxxxxxx#######xxxx!"
	"xxxx#####  #  ####x!"
	"xxxx#   #   $    #x!"	
	"x#### #$$ ## ##  #x!"
	"##      # #  ## ###!"
	"#  ### $#$  $  $  #!"
	"#...    # ##  #   #!"
	"#...#    @ # ### ##!"
	"#...#  ###  $  $  #!"
	"########x##   #   #!"
	"xxxxxxxxxx#########!",
	"rdrdrrurrdru3ldlluruurull4r3ulluld3l4d4u3rddldlrr3dllu4ldluru4l3rd4ruu3r3u3l4du3r3dllu4ldluru3l3ru"
	"urdulluurrdrlulldd3lddulddru3rd4ruu3r3u3l4du3r3dllu4ldluruurd4ldlluurdd3u3ruurrddurr4d3ldluru3ldl"
	"luurdldr3u5rdd3urru6r3d5lrr3dllu4ldluru4luld6r3urr3du6rdrru7lrr3dllu4ldluru4l5r3urr3du3r3d3rdrru4"
	"ldl3uru3lrr3dllu4ldluru3l3ruu4ldd5r3urr3du3r3d4ruuru7lrr3dllu4ldluru3l4r3urr3du3r3dllu4ldlurull",

	// 44
	"x#####xxxxxxxxxxxxx!"
	"x#   #xxxxxxxxxxxxx!"
	"x# # #######xxxxxxx!"
	"x#      $@######xxx!"
	"x# $ ##$ ###   #xxx!"
	"x# #### $    $ #xxx!"
	"x# ##### #  #$ ####!"
	"##  #### ##$      #!"
	"#  $#  $  # ## ## #!"
	"#         # #...# #!"
	"######  ###  ...  #!"
	"xxxxx####x# #...# #!"
	"xxxxxxxxxx# ### # #!"
	"xxxxxxxxxx#       #!"
	"xxxxxxxxxx#########!",
	"6l5rdd5rduur6d3l3urrur3dldr3u3lulu3rur5dlddrurul4u7luru4luull7dld4rurrdrrul3uluurdld6rur5drddll"
	"ur5u6luu4luull8d3rurrddlurr4uluurdld6rur5duu3l3drrdrrul5u6luu5lruull7dld4rurrddlurr4uluurdld6ru"
	"r6drdl6u6luu4ldlul5dld4rurrdr4uluurdld6rur6d5u6l3dlddlu4luurdld3rurrdr4uluurdld6rur5d4u6l3dlddl"
	"ulurrdr4uluurdld6rur4du3r3dlr3dllu",

	// 45
	"#####x####xxxxxx!"
	"#...#x#  ####xxx!"
	"#...###  $  #xxx!"
	"#....## $  $###x!"
	"##....##   $  #x!"
	"###... ## $ $ #x!"
	"# ##    #  $  #x!"
	"#  ## # ### ####!"
	"# $ # #$  $    #!"
	"#  $ @ $    $  #!"
	"#   # $ $$ $ ###!"
	"#  ######  ###xx!"	
	"# ##xxxx####xxxx!"
	"###xxxxxxxxxxxxx!",
	"3r3l3urrddrdlu3rdlrddluruu3lddrrululuull4drruldl4u3(ruldlu)urulddrr3d3rddrdrrulldlldl4u3(ruldlu)"
	"rr3d3rddrd4ru4ldlldl4uruldluruldl3uldrr3d3rddrdlldlulldllu4r3u2(ruldlu)rullrr3d3r3dldlu4luurdld4"
	"r3u3(ruldlu)udrr3d3r3dldl4u3(ruldlu)rr3d3rdd7rd5lddrulu3ldl4u2(ruldlu)ur3d3rdd4rd5ldl4u2(ruldlu)r"
	"ulr3d3rdd5rddlldluru4ldl4u2(ruldlu)rr6d4rdruru5ldl4uruldluudd3rdd4ruurruull4drd6ldl4uruldlurullrd"
	"d3rdd4ruurrulul4drd6ldl4uruldluruldd3rdd4ruull3urur6drd6ldl4uruldlud3rdd4ruulluululuurdld3rur6drd6"
	"ldl5udrrdd4r6ulldlluurdld3rur6drd6ldl4urulld3rdd4ruulluurur5drd6ldl4uruldrrdd4ruullurur4drd6ldl4u",

	// 46
	"##########xxxx!"
	"#        ####x!"
	"# ###### #  ##!"
	"# # $ $ $  $ #!"
	"#       #$   #!"
	"###$  $$#  ###!"
	"xx#  ## # $##x!"
	"xx##$#   $ @#x!"
	"xxx#  $ $ ###x!"
	"xxx# #   $  #x!"
	"xxx# ##   # #x!"
	"xx##  ##### #x!"
	"xx#         #x!"
	"xx#.......###x!"
	"xx#.......#xxx!"
	"xx#########xxx!",
	"3ldlddrrurr3d7l7ururrdllrruuruu7l3d3r9dld5ruu3r3u3luurd4lruruu3l7dld5ru3r3ulldluru4lrr3u3l8dld"
	"4ruu4r3ulluuld4l3u3rddrd3lrr3u3l8d9u3l3u7rddl4drruuruul5d4lrr3u3l7dld4ru4r3ulldlur4ur3urdrdllul5d"
	"4lrr3u3l7dld3rurdu4r3ulldluruuruuluurrdlul5d4lrr3u3l7dld3ru5r3ulldluru4lrr5u3rurdrdllul3drdllr4ul"
	"l4duu3l7dldrrl5urrurrd3lrr3u3l7dldr7ulururu5rurdrdllul3drdllr4uluu7l3drrur9dlddrrul8u3rddrd3lrr3"
	"u3l7dldr10u6rurdrdllul3drdllr4ull4drd3lrr4ulldl7drdl7ul3ur10d5urrdrdru3r3d5l5r3ullu4lrr3u3l7durd",

	// 47
	"xxxxxxxxx####xxxxx!"
	"x#########  ##xxxx!"
	"##  $      $ #####!"
	"#   ## ##   ##...#!"
	"# #$$ $ $$#$##...#!"
	"# #   @   #   ...#!"
	"#  $# ###$$   ...#!"
	"# $  $$  $ ##....#!"
	"###$       #######!"
	"xx#  #######xxxxxx!"
	"xx####xxxxxxxxxxxx!",
	"lddrdrrurd3luluu4rd6rdr3udd7l3urrdduull3d6rdruud7lullurd3lddrd4rudlluru6r6lddrulu5rdr3ud4luulu"
	"ur4duull3d5r4lddllurdrulu4rdrruuld4ldd4lu3rdrulu4rdru5lu4lu3rlluu4rur4duull3d5rdru5lddllurdrulu"
	"5ruudrd6lu6lu5r3l3dllulld8rdrulu5r5lulu5lddld7rdrulu4rdru4ld9l4urur4dldrrddluru5rdrulu3rurrddl"
	"u4lu6ldld7rdrulu4rdruuld3ldd5lullddrulu6rdrulu4rurd5lu6l3u7rur4duull3d4r3lddllurdrulu3rlurrd",

	// 48
	"xx#########xx!"
	"xx#*.*#*.*#xx!"
	"xx#.*.*.*.#xx!"
	"xx#*.*.*.*#xx!"
	"xx#.*.*.*.#xx!"
	"xx#*.*.*.*#xx!"
	"xx###   ###xx!"
	"xxxx#   #xxxx!"
	"###### ######!"
	"#           #!"
	"# $ $ $ $ $ #!"
	"## $ $ $ $ ##!"
	"x#$ $ $ $ $#x!"
	"x#   $@$   #x!"
	"x#  #####  #x!"
	"x####xxx####x!",
	"luur4ulurululuuddrdrruruu4lddrurrdllr7dlddr9u7dllurdr6u5d3lurrdr3ur4ullrurr3lddrrddl3d5ld4rdr8"
	"ulurrl7d4ldd3rdr9u6d3l4dl3ulu4rdr6u9dllullddr3urrdr7u4d4ld3rdr5u3d3r3(dl)5ul4u3dr3drrdldl4ur4u"
	"3dl3d5rd4ldl4ul3uddr3d4rdd3ldl5ur3uddl3d3r4dr3uru4ldl3uluudr7drrurrddl3ulldl5uruudl3d4rd3ldl4u"
	"lurdru",

	// 49
	"xxxxxxx####xxxxx!"
	"xxxxxxx#  ##xxxx!"
	"xxxxxxx#   ##xxx!"
	"xxxxxxx# $$ ##xx!"
	"xxxxx###$  $ ##x!"
	"xx####    $   #x!"
	"###  # #####  #x!"
	"#    # #....$ #x!"
	"# #   $ ....# #x!"
	"#  $ # #.*..# #x!"
	"###  #### ### #x!"
	"xx#### @$  ##$##!"
	"xxxxx### $     #!"
	"xxxxxxx#  ##   #!"
	"xxxxxxx#########!",
	"rd4rdrrul5ulld3ldrrlddlddr3udd3rdrru4l3r5uluur6d4ulld3ldrddlddr4ulurrl4d3rdrru4lullddr4uluu4ru"
	"r5d4u3ldl4d3rdrru4lul4uldll3u5rlululd3u4(rd)drd3ldllu4rur5d4u4l4dlddr4u3d3rdrrul5u5ldr5lu3ld"
	"drrdrulu5r4ld3luurrurdld4rl3urrurrdrluurdrddrd4l3r3ulldrurddrd3lrr3u4ld3rurddrdllruull3ulddld"
	"3rurddrdlr5d3lullddr3u",

	// 50
	"xxxxxx############x!"
	"xxxxx##..    #   #x!"
	"xxxx##..* $    $ #x!"
	"xxx##..*.# # # $##x!"
	"xxx#..*.# # # $  #x!"
	"####...#  #    # #x!"
	"#  ## #          #x!"
	"# @$ $ ###  #   ##x!"
	"# $   $   # #   #xx!"
	"###$$   # # # # #xx!"
	"xx#   $   # # #####!"
	"xx# $# #####      #!"
	"xx#$   #xxx#    # #!"
	"xx#  ###xxx##     #!"
	"xx#  #xxxxxx#    ##!"
	"xx####xxxxxx######x!",
	"rdrr3u3(ru)rrurrdrr4drdl6urrdlul5dl5dldrurdl4urrul5ullulld4rurrdlul4dl6dldr4urruul4u6l3(dl)l"
	"ururu8rurrdlul5drdl5u8ldlddrurudlluru8rurrdlul5dldr5u8lddrulu8rurrdlul5d4u6ld3l5dllurdr3u2(lu"
	"rdru)lu8rurrdlul4d3u6ld3l7dluulurdr3u2(lurdru)lu8rurrdluld6ld3l4d4ld3rdr4u2(lurdru)luru3r3lddl"
	"l6drrdlddll3udluurdr4ulurdrulurl5d3lurrdr3ulur3drdrdldl5u3(ru)dldllurl4dll4dru3dl4urdr5uruuldr"
	"dldd3ldrrdr4uruuldruurrdlulddr3urd6rurrd8l2(uldrdl)uu8rddruluurrd8luldrdllu8rddlddr3uru7luldrdlu"
	"ldu8rddl4dr5uru7luldrdlu7r3d3ldrr5drr3dll7ur4uru7lulddu7r3dlldr5drrddldl7ur4uru7luld7r3dlldr5drr"
	"dldl6ur4uru8l7r3dlldrdr4uru6lrulld6rddrrddllulldrddrrul4uru7l6rddrrddldl4uru6l3ru3l",

	// 51
	"x#########xxxx!"
	"x#       #xxxx!"
	"x# $ $$ $#xxxx!"
	"### #  $ #xxxx!"
	"#.#   $$ ##xxx!"
	"#.###   $ #xxx!"
	"#.#. $ ## ####!"
	"#...  $## $  #!"	
	"#...$   $    #!"
	"#..###$### #@#!"
	"#..#x#     ###!"
	"####x#######xx!",
	"u3l3u3ldllrdd3lulddu3ruurrurruulldldduururrddll3r3d6lruurrd4lddl4udd5r3ulddu4r3d7luld9rdd4lud"
	"4ruuruld7l3ru4ldluud5r4uruuldulldr4drd4ldlu4r6u3ldrrur5du4rddrd8l4ru4l3r6u3r3dluulul5drd3l2(rruu)"
	"lul5duurrulul3drdllrrd3l6r3u3lul3drdll",

	// 52
	"xxxxxxxxxxx########!"
	"xxxxxxxxxxx#......#!"
	"xxx####xxxx#......#!"
	"xxx#  #########...#!"
	"xxx# $   $    #...#!"
	"xxx#  # # # # #   #!"
	"##### # # #@# #   #!"
	"#   # ### ### ## ##!"
	"#    $ # $ $ $ # #x!"
	"# $$$  $   #     #x!"
	"#   # ###$###$## #x!"
	"### #  $   #     #x!"
	"x## $  # $ $ $ ###x!"
	"x#  # ### ### ##xxx!"
	"x# $          #xxxx!"
	"x#  ###########xxxx!"
	"x####xxxxxxxxxxxxxx!",
	"uurr4dld3rll5u4l4d3r4ldllu3lull3drr3dlddru10ruururr9uru4l3r8d4lu3l4u4r4dld3rlu6ldllu3lull3drr"
	"3dlddru10ruururr9uru3lrr10dlldllur3ud3rddlldluud3ruullulld3rlldd3r9urullr8dllu5l4u4r4dld3rll5"
	"d4luu3r3ldd4r4ud3r8uru4l3r7dllulld3rlu6ldllu3lull3drr3dldr4ull3urr6dlddrurr5u5d4ruulullrrd4ru"
	"4r8uru3lrr7dllu6ld3l4d4ululull3drrddrl3urr3d3u3rurrdlu4r4d3luluudd3ld3l3u5ru4r3l4u4r4dld3rlld"
	"d3r5urul6dlld5l3u6ldllu7ru4r3l4u4r4dld3rlldd3r9u9dlld5l3u8luurdld7ru4r3l4u4r4dld3rlldd3r8u8dl"
	"ld5l3u7luurdld6ru4r3l4u4r4dld3rlldd3r5ul4u3dr6dlld5l3udd3ldluuddll3u5ru4r3l4u4r4dld3rlldd3r5ur"
	"4ull3dr6dlld5l3udd3ld3ldlddr5ulu6ru4r3l4u4r4dld3rlldd3r8u8dlld5l3u5d5lr4uddll3u5ru4r3l4u4r4dld3"
	"rlldd3r7u7dlld5l3u6l4dlddr5ulu6ru4r3l4u4r4dld3rlldd3r6u6dlld5l3u3lul3uluur5dld4ru4r3l4u3l7r4dld3"
	"rlldd3r5ur3uddl6dlld5l3u7luurdld6ru4r3l4u4r4dld3rlldd3r5ul3uddr6dlld5l3u4l4uluur5dld4ru4r3l4u4r"
	"4dld3rlldd3r5uruudl4d3l5d4l5u5d5lruulldlddr5ulu6ru4r3l4u4r4dld3rlldd3r5uluudr6dlld5l3ulu4r3l4u4"
	"r4dld3rlldd3r5uruldlu",

	// 53
	"####################!"
	"#                ###!"
	"# $#   $ ##  $    ##!"
	"#    $###    # $$ ##!"
	"#.###     $ $ ##  ##!"
	"#...#  #  #    #$  #!"
	"#..##$$#### $  #   #!"
	"#...#      $ ##  ###!"
	"#...$  ###  #    # #!"
	"##..  $#  ##   ##@ #!"
	"###.#              #!"
	"####################!",
	"d12luulldl3ulur3d3ruruulddrd3ldl3ul5urdurrdr5drd3ldluud3ru5rdr5ulld3ldluu3lul4d5u5rdluldu4rd"
	"3ld3lul3d4u3rdu7r5durrdld6luldrd3ldlu3ru7ruuldrd6luldrd4l3ru6r3u5ldluu3luldd3u5rdluldrd3luld"
	"uu13rdllul5drd6luldrdllrddruul4u4ru3rddrdld6lulddrd3lurru7ruuldrd6lulddrdllrd8ruu3ruuruuluru"
	"5lul5drd6luldrd3ldrrd8ruu3r5uru3ldrlullul5drd6lulddrdllrd8ruu3r5uru5lul5drd6luldrdll",

	// 54
	"####################!"
	"#   #    #   #   #@#!"
	"# $      $   $   # #!"
	"## ###..## ###     #!"
	"#   #....#$#  $### #!"
	"# $ #....#  $  $ $ #!"
	"#   #....# # # $ $ #!"
	"#   ##..##   #$#   #!"	
	"##$##    ##  #  #$##!"
	"#   $  $     #  #  #!"
	"#   #    #   #     #!"
	"####################!",
	"ddllu4lulldllulddu3rurrd5lul3druu7rd4r4d2(lluu)ru7lul4dldrl3d3ldllu4rdr5ur3u7rddlldlluuddrrurr"
	"d3l3r3u6lul3dluu3lulldrddl3drdul3uruu3rur4drdl3d3ldllur6u6d3r2(druud)4ruurudll4uddrrurruu7lul"
	"4d3u3lulld4rur3duu8r6drddl4url3uru7lul4d3u7rd4rdd3ldl3uru7lul3duu7rd4r4dluru3ldl3uru7lulddu7"
	"r8d3r4uru3ldl3uru7luld3r3d4rdrruldl3uru8lulddu4r3d6rddruru3ldl3uru8luld",

	// 55
	"####################!"
	"#    @##      #   ##!"
	"#    ##    $    $ ##!"
	"#  ###....# # #  ###!"
	"#   #....# # # $   #!"
	"### #...#  #       #!"
	"##  ##.#     $   $ #!"
	"##  $ $ ###  # # ###!"
	"## $       # # $   #!"
	"#### $  $# # # # $ #!"
	"####         # #  ##!"
	"####################!",
	"3l3dr3drdrr3uruuldrdl3dllurdr3urur3u4rd3lulddu7rurrd8luldrdllu9r3dluuru7luld8r6drrdldl5urrdluu"
	"ldluuru7ldlruuldlddl3dllddrdr5udd4ld3rdr3u4drrudrruu3ldluu3d6r4urrddrruurul4drruldl3ul3uru7ldl"
	"ruuldldu8r4drddlluulurdr3uru7ldlru6rddrrdldl3uru6lulduld",

	// 56
	"####################!"
	"#  #  ##    #   @###!"
	"##    $    # $###  #!"
	"##$# $ ##$# $ $    #!"
	"#   $#    $      ###!"
	"# ##   $ ###  #....#!"
	"# # $# # # # #....##!"
	"#    $ $ #  #....###!"
	"##$ ###  $ #....####!"
	"#  # $        ######!"
	"#      # #    ######!"
	"####################!",
	"3ldldld4rurddu4luurdld3rurdldrrluu3luldld4rurdl3dlldd5l5u6rur3drdl3u9ldrur4dld5rdrulurrld5l4ull"
	"ddrluurr3dld5rdrulurd7ldllu8rdruud7ld4luuru4rluurr3dld5rdru3luldlluurd3u4ldl2(d4rd)rullull3ulu7"
	"rurddrdluu7ld4luururddulldd3rlddrruulu7rur3duu9lulld3l3d6rdr3ulu7rurddu9luluuldlldurr4dldll3urr"
	"ll3d6rdr3ulu7rurd9lull3dld4rdr3ulu8rur3duu10luurrurrdldu3ldd9rurddu10lullu4rurddu3ldd9rurd",

	// 57
	"####################!"
	"#@     ###   #  #  #!"
	"# # #  #  $  $     #!"
	"#####     # $ $#$# #!"
	"#.#..#    ##$ $    #!"
	"#.....    $   #   ##!"
	"#.....    ###$##$###!"
	"#.#..#    $    #   #!"
	"#####     #  #$  $ #!"
	"#####  #  $    $ $ #!"
	"#####  #  #  #  #  #!"
	"####################!",
	"4rdd3rurrurrdr3d9l4r4d3rdru3rururrdlrddlu8ldl3udd3ruullu7luldrru5r3u3rdrdrd8lr3drruru5lu4r3urr"
	"urr3drd11ldlurrd3rd8rdrd6ldl3udd4rudrruu5lu7l4rddrruru6l5r3d10ruuldll3rd9ldl3uru5lrrd8rdrd6ld"
	"l3uru4lu7ru3rdrru4l5ruu6lddrd11l6r3u3rur3drd10l5r3u6rdlulddrddu9ld4r3d6ruu5l5rdrr3ululluldrd8"
	"l7ru3rdrru4luldrd7lrr3u8rdurrdd5l2(uldrd4l)rddrruru3l",

	// 58
	"####################!"
	"##...   ## #    #  #!"
	"#....         $ ## #!"
	"#....# # #$###$    #!"
	"#...#    #       # #!"
	"##.#  #$ #     $## #!"
	"#  #  # $ $ ###  $ #!"
	"#     $  $ #  # ## #!"
	"## # ## #$$# $#  # #!"
	"#  #   $ $ #      ##!"
	"#    #     #  #   @#!"
	"####################!",
	"3l5u4ldldlluld4lr3dll8u10ru3rd13l4rddrddrd5lr3dll6u3drrddrrdrruluuruuldrd5lr3dll5udd8r3u4rur"
	"u12ldlrdl3d8r4ud4ruu10lulddu3rddrdruu4drr5u6luld7r4dldl4u3drr4u5l9rd4r3dllrr3ulldl4drddl5ulu"
	"uru8lrddlluuru3ld10rdrrdl5d3luurdld3rdrruldl5uluuru11l10rdrrdldluuru8lrddlluurullr3dr6d3rull"
	"dluud3r6ud4ruu9l3r5d5lr3dll6u3d5rddrruru7lr3dll5u2(ddrr)druudrruu6lr3dll4u",

	// 59
	"####################!"
	"#   #  #@# ##  #####!"
	"# # #  $    $  #####!"
	"# #    ###### $  ###!"
	"#   #  #....#  $$  #!"
	"##$##$##....#      #!"
	"#      #....##$##$##!"
	"#  $$  #....#      #!"
	"# $  $  #  #  ###  #!"
	"#####  $   $    $  #!"
	"##### #    #  #   ##!"
	"####################!",
	"dllddlddldlu3rdlrdd3rdruudrruru4r3dllu5ldl3urdd3ruu4ruu3ldu3r4d7ldluud4luruu3lddrrlluurrdrduu"
	"3ldrdrd4rdr3ulur3d5luluurdrdulldrd4rdr5ulur5d5l5ur3ul6drdulldrd4rdr3udd3ruu3rlluul3ur4du3r3d"
	"rd8ldl4u3d4luurdld3rdr3urulurul5d3l3u5ld4rurddld4rdr5u4d3ruu3rlluu3rdd3l4urrdull4d3ruurul4dr"
	"d8ldl5u4d3luu5ld4rurdld4rdr4u3d3ruuruurrlluurrdr4drd8ldl4u3d4l6ulldl3dld4rurdld4rdr3udd3ruur"
	"uurruuldrr4drd8ldl3udd4ruuruurrur4drd7lrruur5u8lul6dldrurdld3rdruuddruu",

	// 60
	"####################!"
	"# #     #          #!"
	"#       $  ## ### ##!"
	"#####  ##   $  $   #!"
	"##..##  # # $ # #  #!"
	"#....  $     ##$# ##!"
	"#....  $#####   #$##!"
	"##..# #  #   #  $  #!"
	"###.# #  $   $  # @#!"
	"##  $  $ #   #  ####!"
	"##       ###########!"
	"####################!",
	"lulld3lu3(lld)l3uddldl3uluu7r3ullul3drd4lrdllu7r4u4rdd3lrdd7lrrd3lu3r3u3rdd3u8rdd7lrdd5l3r"
	"uuru3lul4d4ldr3d5ruulu4l4rdd3rurrd4ld4ldl3udd5ru7rurr3uru8lrdd8l3r3u3rddurrdd7l3r3d8r4uddld"
	"rd7ld4ldluud5ru6ru3r4u4ldlru3lrdrd7l4ruuru3lul4drdllrrddrd4ldlu",

	// 61
	"####################!"
	"#     ###..###     #!"
	"# $$  ###..###  $@ #!"
	"#  # ##......#  $  #!"
	"#     #......#  $  #!"
	"####  ###..######$ #!"
	"#   $$$ #..#    #  #!"
	"# $#   $  $  $$ #$ #!"
	"#  #  ## $  ##  #  #!"
	"# $    $ ## $    $ #!"
	"#  #  ##    ##  #  #!"
	"####################!",
	"r4d2(lur3d)lull3u3ldldl4u3drrurrd3ldl3u3dlrrdd3lu3luu3r3ldd3rur4urrluudllr5dld3luu3rdr4u3"
	"d5luurdld4rdr3udd6rdd3lrruru4ldl4ullruudrrl4d4rdd4ruuldrd3ldluuru4ldl4u3d4rdd4r4ul3drd3ld"
	"luuru4ldl3udd3luldlluurdld4rdr4urul4dllu6lddrulu3rurdld4rdr4u3dllu6l4drurrdruulu4rdr3uddl"
	"3d3ruud3ruu3ldl4ulur4drdd7r6ul5drd3ldluuru4ldl4u3drdd6r8ulldrur7drd3ldluuru4ldl3uddrdd6r7u"
	"lldrur6drd3ldluuru4ldluudrdd6r6ulldrur5drd3ldluuru4ldlu3lu5lddld3rdruulu4rdr4u3d4luulu3l3"
	"u3r4dr4d3l3urrurdld4rdr3udd5l6ulldrur4dr4d3l3urrurdld4rdruud5l5ulldldrrluurr3dr4d3l3urrurdld4rdru",

	// 62
	"####################!"
	"#    #  # #  #  #  #!"
	"# @# # ## $   $   ##!"
	"#### #    #  # $   #!"
	"#    # ## #$ ## ## #!"
	"#      $   $   $   #!"
	"#..###$$## $##$ ## #!"
	"#..#.#  # $   $ #  #!"
	"#....# $$   ##$ ####!"
	"#....#  #####      #!"
	"#...###        ##  #!"
	"####################!",
	"urr4drruu3rdd6lul5d4u7r3urrdrdd9lul4dldr4u10ruuldrd9lul4d3u9r4urd3rd3rdd15lul3dldrrdrull"
	"3u4rddrul3u3rdd6lul3duu13rddluru13lul4drrlldrrl4u7r3u5rdrdu3rdd15lul4dldr4u13r4dld7lul3ur"
	"u4lul3duu4r4dr3ul3u3rdd7lul4dr3u5r5d6rur3uru12lul4d3u13ruurru5luldrdduu3r3d12lul3duu7r3ur"
	"rddrd9lulddu8rddldlldl3uru4luld12rdd3ld4ldl3uru5lul3duu5r3d4ruudruu9lulddu11ruuldrd10luld",

	// 63
	"####################!"
	"#....#       #  #  #!"
	"#....# # $  $      #!"
	"#.... ##  $# # $#$ #!"
	"#...#   $   $#  $  #!"
	"#..####  # $   $$  #!"
	"#      #### #### ###!"
	"#        #   #     #!"
	"# ##   #   $ # $ $ #!"
	"# ##    $ ## $  $  #!"
	"#     @#     #   # #!"
	"####################!",
	"3urrdrrurrd3ld3ldl3u3rdullu3ldl5ulurrddrrdrrdru3r3drd3ld3ldl3u3rdullu3ldl5ulurdd3rd5rd4"
	"r3ulldduurr3dllul3drd3ld3ldl3u3rdullu3ldl4ulurrdrrd7r3ulldru3ldrrurr3duurr3dllul3drd3ld3"
	"ldl3u3rdullu3ldl5ud3rd4ruurdurur3duurr3dllul3drd3ld3ldl3u3rdullu3ldl4u3rd4ruuldrdrrluurrd"
	"duurr3dllul3drd3ld3ldl3u3rdullu4ldl5urd3rd6rluurrdduurr3dllul3drd3ld3ldl3u3rdullu3ldl4u3r"
	"d3ruu10rdd3lrd4lul3drd3ld3ldl3u3rdullu3ldl3ururrd3ruu6rddrd3lul3drd3ld4ldl3uru3ldl4urrl4d6"
	"rd3r3ur3u3rddrd4lul3drd3ld3ldl3uru3ldl3ulur4d6rd3r3ur3u5rddrd6lul3drd3ld3ldl3uru3ldluudd6r"
	"d4rd2(rruu)rulluldrd3lul3drd3ld3ldl3uru4ldl3ur3d6rd4rdrrdrr5urulluldrd3lul3drd3ld3ldl3uru3l"
	"dl3u3d6rd4rd3rdr5urulluldrd3lul3drd3ld3ldl3uru3ldluudd6rd4rdrrurdr4urulluldrd3lul3drd3ld3ld"
	"l3uru3ldlud6rd4rd6ruldl4urulluldrd3lul3drd3ld3ldl3uru4ldluudd7rdrd3ldl3uru4ldlu",

	// 64
	"####################!"
	"#....###           #!"
	"#....##### #  #$# ##!"
	"#....###   #$  $   #!"
	"#....###    $  #$$##!"
	"##  #### $#  #$ $  #!"
	"##  ####  $  $  #  #!"
	"#@  ####$###$## $  #!"
	"##        #  #  $  #!"
	"##   ###  #  $  ####!"
	"########  #  #     #!"
	"####################!",
	"rd6ruuruul4drddluru5ldl6u5d5r4u3rddllul3drddluru6ldl7urul7d6ruu4rddlddrurruruu6lul3drddl"
	"uru6ldl6u5d6r4urr3u3r3dlrrdrd6lul3drddluru5ldl7ulur7d5r5ur3d3ruu3lul5drddluru5ldl5u4d5r4u"
	"5ruulduu5rdd4ld4lul5drddluru6ldl7udr5d5r4u5ruulduu3rdurr4dllrruu4ld4lul5drddluru6ldl5u4d6"
	"r4u5r3u3ldduurr3drrduurrdrdlld6lul3drddluru5ldl7udl5d6ruu4rddlddr3uddrrdr4u6lul3drddluru6l"
	"dl4u3d6r2(uu3r)duurrddld6lul3drddluru5ldl6udl4d6r2(uu3r)d4r3dllruuru3ld6lul3drddluru5ldl4u"
	"3d5r2(uu3r)drd6lul3drddluru6ldl6udr4d5ruu4r3d3r3uluullduu4rddlrrddldluu6lul3drddluru5ldl5u"
	"4d5r2(uu3r)duurrddld6lul3drddluru5ldl4u3d5r2(uu3r)drd6lul3drddluru6ldl5u4d6ruu3ruullul5drd"
	"dluru6ldl4u",

	// 65
	"####################!"
	"#     #     @#...###!"
	"#     #      ##...##!"
	"# # # ##$## ## ....#!"
	"#   $ #   $$$  ....#!"
	"###$### $$  ### ##.#!"
	"#     $  #    # ####!"
	"#  $  #  ###  # #  #!"
	"## #$##    $  $$   #!"
	"#   $ ##   #  # #  #!"
	"#     #    #  #    #!"
	"####################!",
	"l3d4r4drrddll6ulurrldrrurd8lddrulu4r3lddrdd3r6urul9drruulrddll6ulur5d5ldllul4u10rluudd"
	"9lddrurllu7r6l4d7r6u8drruulrddll6ulurd4lddlulu7rud5luu3ldu3r3d4lu7r3lddrdd3r5ud7ldd3ldl"
	"lu4rdruulu7r3lddrdd3r4ulu3rld8ldd7ldr3d3ruluu3dll3uru4rdruulu7r3lddrdd3r4ulurrd8ldd6l4dr"
	"r3ulu4rdruulu7r3lddrdd3r4ulurd7ldd6l3drdr3ulu4rdruulu7r3lddrdd3r4u7ldd5luulluurr4dldrlddr"
	"ruulu4rdruulu8r7ldd5l4urrddlruull4dldrlddrruulu4rdruulu7r",

	// 66
	"####################!"
	"#     #  #...#@    #!"
	"# #       ....#    #!"
	"#  $  #   #....#   #!"
	"# ##$#### ##....#  #!"
	"# $   $  #  #...#  #!"
	"# $$ #   #   # $$  #!"
	"###  $$$#   $$  $  #!"
	"# $  #  #    # $#  #!"
	"#   $#  #       $  #!"
	"#  #    #    #  #  #!"
	"####################!",
	"3r8d3luurrlldd3r6u4dlldldlluluurdll3dru4rl4urdrdruudllull3u8ldlddrr3drdd3luluur4ulu8r"
	"3(urdldr)urdll3u8lu4lddrrlldd3ruulu8r2(urdldr)ur4drrurd5lrrd3ul3u9l5dlu3dr6ulu8r2(urdl"
	"dr)ur3drrldluul3u8ld4lddrrdr3ulu8r3(urdldr)urdll3u8ld4l3drrdr4ulu8r2(urdldr)ur3drull3u9"
	"l8d3ruululldd3lurruu3dr6ulu8rurdldru7ld4lddrrdr3ulu7rurrdrdldrulluruld7l5drruulrddll4ul"
	"u8rurd8l3drrdrru3lrddll4ulu8rdrurdu9l8drruuruuru3lrrdd3ldluur3ulu8rdrruldlu6ld4lddrrdr3"
	"ulu8rdrrulld3rdrddluludrrulullrrd2(dlurul)dd3r4dl3u2(ruldlu)d3r6dl5uruldlurulr4d4ruuld"
	"ll3d5l3urrdrruurullrddrrdldlullulld4ruuruldluur3drrdldl3uruldlurdd4r3ulddrd3ldluuruldd"
	"3r3uluur4drd3ldl3udd4rd3ldl3ud4r3d3ldl3udd3lulu4ruddr3ul4dllulu3rdruu3drruuru3ldlu",

	// 67
	"####################!"
	"#####@###.##...##  #!"
	"#####$  ..#...#    #!"
	"####    ......#  $ #!"
	"###  $ #.....## # ##!"
	"##  $$# #####  $ $ #!"
	"## $# $    ##  $$  #!"
	"##  #  #    # $  $ #!"
	"##   $$ ### #$##   #!"
	"## $#      $ $  $ ##!"
	"###    #    #    ###!"
	"####################!",
	"2(drddld)dllul4ururu7r2(drulur)dd9ldldl4drdrruuruuluulu7rdrulurdrud8l3drddl4ulu7rdru"
	"ud7l5drrdldl6ulldruu7rdrulurd6ldlddrddl4ulu7rdru7ldd3lddrulurrll4drurr4ulu6r5l6drrul"
	"dl5ulu4rurdld3ru5ld3l3dldrrlddrr6ulu4rurdldrru5l6d3rd3rurrdrru9ldl6ulu4rurd4l3d3rd3rd"
	"ulu4ldl3ulu4rdruu4l7d8rdrru9ldl6ulu4rurd4l6d8ruuruur3u3rdlddr3dld11ldl6ulu3rll6d8ruur"
	"uurr3drd11ldl6ulurdrulu3rd3l6d8ru3(ur)3drd11ldl6ulu8r7l6d8ruurrurddrd11ldl6ulu7r6l6d8r"
	"uuruul3du3rdd10ldl6ulu6r5l6d11rurrulrullddrd11ldl6ulu5r4l6d8r3urr4urr3dl3drd11ldl6ulu4"
	"r3l6d11rurruul3ulul3dr3drd11ldl6ulu3rll6d8r3urrur3drd11ldl6ulurdrulurr",

	// 68
	"####################!"
	"#@     #   #       #!"
	"## ### ##  #### # ##!"
	"#    # #  $$       #!"
	"#  # # # $ # $ ## ##!"
	"#     $ #  #$$ #   #!"
	"#  ###  #      ## ##!"
	"#..#.# $ #  $ #    #!"
	"#..#.#  $ # ## $$  #!"
	"#....##   $$  $  # #!"
	"#.....##        #  #!"
	"####################!",
	"5r4drddluru4lruull5dldrrl4u4rddrrdrddluludrrululrddluluuru4lruull6dld3ruudll4u4r3drruldl"
	"uuru4lruull5dldrrdrull4u4rddrr3d3rul2(ldluru)ldluuru4lruull6dldrrl5u4rddrr3d7ru6l2(dluru"
	"l)dluuru4lruull6dldr5u5r4d4ruul4u4r3dldlurr3ull3dldduur3u3ruurr6dlldurrdldlldllu3l2(dlur"
	"ul)dluuru4lruull5d3u4rddrr3d6ru5l2(dlurul)dluuru5lul5drrl4u5r4d4r3urrdluldduu3ruulduu3rlu"
	"urr6dlldrdlldllu3l2(dlurul)dluuru4lruull5dldr4u4rddrr3d6ru5l2(dlurul)dluuru4lruull6d4u5r4d"
	"4ruuruur2(rdluld)durr4u4r4drdlluldrdlldllu3l2(dlurul)dluuru4lruull5d3u4rddrr3d6ru5l2(dluru"
	"l)dluuru4lruull4duu5r4d4ruululuulu4r3drdlulddur4u4rluurr6drdlluldrdlldllu3l2(dlurul)dluuru"
	"4lruull3du4rddrr3d6ru5l2(dlurul)dluuru5lul4d3u6r4d4r3ull5urdldrddldrrl3urr3drdlulddur4u4r"
	"luurr6drdlluldrdlldllu3l2(dlurul)dluuru5lul3duu5rddrr3d6ru5l2(dlurul)dluuru5luldd",

	// 69
	"####################!"
	"#  #      #   #   ##!"
	"# $# $ $ ##...$  $ #!"
	"#  $  # ##....# $  #!"
	"# ## $ ##....#   $ #!"
	"# $    #....## $   #!"
	"# $##  #...#       #!"
	"#   $$$##$##  ### ##!"	
	"# # #  #   #  #    #!"
	"# $ #  $  ##       #!"
	"#    #    #@       #!"
	"####################!",
	"r4urruuruurddur5drdl5ul3ur7d6u4lulld4rurddu3ld3l3dlddlddr4u3(lurdru)lu5rur6d5u5ldd3l6d3lur"
	"rdr4u3(lurdru)lu4rurd4ldd3l5d3l3ululuurdr4dld3rdr4u3(lurdru)lu5rur5d3ulu4ldd3l5d3l5ulldrur4"
	"dld3rdr4u3(lurdru)lu4rurd4ldd3l5d3lulull3dll3u4rurddld3rdr4u3(lurdru)lu5rur3duu5ldd3l5d3l5u"
	"lldrur4dld3rdr4u3(lurdru)lu5r4ldd3l5d3l4ull4ur3dldrur4dld3rdr4u3(lurdru)lurdd3l5d4l8u3rdllu"
	"l3dldrur4dld3rdr4u2(lurdru)udll5d3luu5l4u3rurddldrur4dld3rdr4u2(lurdru)ll5d3luu5luu4rur4dld"
	"3rdr4ulur4d3l4u4ldld4rurddld3rdr4urulurl5d3luu5l6urdld3rurddldrur4dld3rdr4uruuldrdl3d3luu5l"
	"ddrdruudlluu4rurddld3rdr4uruuldruurrdluldrdlurr3ulddrdlulddr3u4rurrd5lulddrdluldruu7rddluru"
	"6lulddrdllruu7r4dl3uru6lulddrdluu6rddluru5lul3duu6r4dl3uru5lulddu5r4dlluururu4luld4rddlddr3"
	"uru3lulddlu4r3druuru5luld4r4dll4d5ruul5uru5luld5r6drddl7uru6l3r4dll3d3rdr7uru5lrr4dll3drrurd"
	"r6uru4l",

	// 70
	"####################!"
	"#  #  # #    #  #  #!"
	"#   $      $ $     #!"
	"## #  #$###$##  ## #!"
	"#   $     $  #  $  #!"
	"# ###$##$#   # $   #!"
	"# #   $ $  ###### $#!"
	"# $  $$ $  #@#.#...#!"
	"# #     #  # #.#...#!"
	"# ########## #.....#!"
	"#            #.....#!"
	"####################!",
	"3d11l6uruurrdrdl3urd4ru3rdrr3drrlurr4drd3ldluud3r4u3l4ur3dldrrur4drd3ldlu3r4ull3u3lulld"
	"4rur3dldrrur5drd3lrr5ull3u11lddrulu10rur3dldrrur5drdllr5ull3u10lddrrudlluu9rur3dldrrur5d"
	"rdl5ull3u8ldd3rdrrulud4luu7rur3dldrrur4d3ur4d3lrr4ull3u13lddl3drrurr3ulu10rur3dldrrur4dr"
	"dllr4ull3u10ldd5rdruud4luu7rur3dldrrur4drdl4ull3u13ldd8rdruud4luu7rur3dldrrur3duull3u3r6"
	"dl3ull3u10l4dllddrr5ulu10rur3dldrrurddull3u10l4dlldrdr5ulu13rur6dluull3u10l6drruldl5ulu1"
	"0rur3dldrrur5d4ull3u4lddl3d4ldl5ulu10rur3dldrrur4d3ull3u4lddl3d3luldl4ulu10rur3dldrrl3u4"
	"lddlddlludlldl4ulu13rur5duul3duull3u8ldd3rdruud4luu7rur3dldrrurdd",

	// 71
	"####################!"
	"#  #     #  ##    ##!"
	"# $#   $ #     ##  #!"
	"# $  $  #..#     $ #!"
	"# $ $  #....#   # ##!"
	"# $#  #......### $ #!"
	"#   #  #....#  #$  #!"
	"# $  ####..#   #   #!"
	"## $   ## # # $  $##!"
	"### $    $#@$ $#   #!"
	"####   #       #   #!"
	"####################!",
	"dll5ur3u4ru3rdrdlddrddl4u3ldluru3lul3dlruu4ru3rdrdl4dlddr6u3ldluruu3rdrdluu3ld3lulddldrld"
	"rrll4d3lullululldrdrd5rdr4u3d6luluurdrdulldrd5rdr3uruulldrrl3d6luurdld5rdr4ulurrl4d5luu3l"
	"4urrdru3ldrd2(dldrur)dld5rdr4u3d5luu3l6ur5d2(ldrurd)ld5rdr3u3d4ruu3rdr6u3ldluruu3rdrdluu3"
	"ld3lul4dlrdl4d5rulu3rdr4uldduuruu3ldluru3lul4d3u4ru3rdrd4ldluru3lul3dl5d3lu4l5urrdlul3d2("
	"ldrurd)ld5rdr6u5d3lu4l5u3ruu3rdldld3lul3d2(ldrurd)ld5rdr5u4d3lu4l4u4ru3ldlluur4d2(ldrurd)"
	"ld5rdr4u3d3lu4l4u3r3ulddrdllul3d2(ldrurd)ld5rdr3udd3lu4l5u5rullulddrdllul3d2(ldrurd)ld5rd"
	"ruuddrrurru3rdr6u3luu3rdrdl5d4lddrulu3rdr6u3ldluru3lulddu4ru3rdrd4ldluru3luld",

	// 72
	"####################!"
	"#      ....#    ####!"
	"#      ....        #!"
	"# # ##########     #!"
	"# #$   #      ###..#!"
	"#  $   #$$###   #..#!"
	"# $ ### $   $   #..#!"
	"# $ #   $ $ #  ##..#!"
	"#  #  $$ # $ ##   ##!"
	"#@## $#  $  $     ##!"
	"##       ##   #  ###!"
	"####################!",
	"3urur3ulu7r8l7drur5ulu6r7l5drdr3urrdluluulu5r6l5drr4ulu4rd11r7d4ldllu4rdrulurdr6u6d5lulu"
	"ulldldd7rdrulurdr5uruu10l6rd3rur4dl3d9luurrdulldd7rdrulurdr6u6d7l3urddld5rdrulurdr5uruu"
	"9l5rd3rur3dl4d9ld4luuru5rurddld5rdrulurdr6u6d10lulururrlddld8rdrulurdr5uruu8l4rd3rurddl"
	"5d9ld4luu3rurdld8rdrulurdr6u6d9ld3lulu3rurdld8rdrulurdr5uruu7l3rd3rurdl6d6l3urruu4ldduu"
	"l4dld8rdrulurdr4u4d6l3ullul3dld8rdrulurdr3u3d6l3urrurrd6lul3dld8rdrulurdruudd9luurrurddl"
	"d5rdrulurdru",

	// 73
	"####################!"
	"#        #   #@ #  #!"
	"# $$  #$$# # #  ## #!"
	"#  # $ $ #$$ #     #!"
	"## #  #  # # #  #  #!"
	"#   ##       #     #!"
	"#   # $ #   #   #  #!"
	"# $ #$ #   #  $ #..#!"
	"##$ #  ####    #...#!"
	"#  $          #....#!"
	"#   #  #     #.....#!"
	"####################!",
	"5dld2(drulur)rluurr6drd3lrr5ulldll3d10ldllu10r4(drulur)rluurr6drdllr5ulldll3d10l3ulldrdrd"
	"dllu10r4(drulur)rluurr6drdl5ulldll3d11l6uluur4dr3dld9r4(drulur)rluurr6d4ulldll3d10luullur"
	"5urr3dr3(ul)7d7u6r3dldl3dld6r4(drulur)rluurr5drdllr4ulldll3d10ldllu10r4(drulur)rluurr5d3ul"
	"ldll3d7l3uldduurruuru3ldlu4ruu3ldllul7drd8r3(drulur)drulu3rur5dl4ulldll3d10ldllu10r4(drulur"
	")rluurr5d3ulldll3d7l3ur3ulldlurullul7drddllu10r4(drulur)rluurr4duulldll3d7l4u3rdrrulrr4ull4"
	"dll4uldrd3ldlurullul7drddllu10r3(drulur)drulu3rur4dl3ulldll3d7l3uruudrrddruru3luu3ldlurullu"
	"l7drddllu10r4(drulur)rluurr4duulldll3d7l3uruud5ruulruull3durrdd4luu3ldlurullul7drddllu10r4("
	"drulur)rluurr3dulldll3d7l3uruuru3ldlurullul4dr3dld9r3(drulur)drulu3rur3duu3ldll3d10luulluru"
	"r3dld9r3(drulur)drulu3rurdd",

	// 74
	"####################!"
	"#     #   #####    #!"
	"## $  #   ####  $  #!"
	"#### $$   #..#  #  #!"
	"#  $  $  ##..#### ##!"
	"# $   ###....   $$ #!"
	"#  #$#   ....# # $ #!"
	"# #  # $ ..###$#   #!"
	"# #   $ #..#   ##  #!"
	"#   $#  ####   # $##!"
	"# #  #    @#      ##!"
	"####################!",
	"3l3uldll3uruurrdru4luurdldrddluu4dl3druu3rddluru3ld3l5urrdrddld3rdrulu3ruu5r3dldd4ruuruu"
	"lu5ldllurdru6r3dluuru6luld6rddlur3uruul4d5ldluud5rddrurul4ulldrur4d5ldlu3r3dlddr4u4d3r4ulu"
	"4ldllurdru4rdrru6ldllurlddllu3rld4lu3rdrulurd3ldd3l3uruul4dld3rdruulu3rdru3ldd3l3ur4ul6dld"
	"3rdruulurrldd3l7ulldrur6dld3rdrulu3rulldd3l5u3rdllul4dld3rdrulurrld3l4u3r3urrdd4lul5dld3rd"
	"ruulu4rldlld3l4u3r3urdrd4lul5dld3rdrulurrld3l4u3ldrrur3dld3rdruulu3rlldd3l3u3l4drrdrulu3rdruulurr",

	// 75
	"####################!"
	"#   #   #    #   #@#!"
	"#   $  $     # $ # #!"
	"##$# $### #    $$# #!"
	"#  #  #.###  #$ $  #!"
	"#  #$#....#  # ### #!"
	"# $  #.....##    # #!"
	"##$  #.#....#$$ $  #!"
	"#  ######..## #  # #!"
	"#  $         $ ### #!"
	"#   #   #        # #!"
	"####################!",
	"3dllu4lu5lulldrr3lddrulurllulldrddlddruu4dlddru7rdruudd4ru4ldl3uruldlurulr4d7l3uluur4dld8rd"
	"rruldl3uru3luld3r3d7luurr3ur3urrdrru3rdd4rdrr3dllu3ldduu3rdrr3ullu4luu3l2(dllull)dr6dld8rdr"
	"ruldl3uruldlurullrr5d5ru4ldl3uru3lrr3d4r3u3rddlululddu5r3ullull3d3ulluu3ldllulldllul7dld8rd"
	"rruldl3uruldlurulr5d5ru4ldl3uruldlur3d4r3ur3urrdrr3dlluldl4r3ullull3dldduur3ulluu3ld6lul7dld"
	"8rdrruldl3urullr4d5ru4ldl3urul3d4r3urrdlulddur4ullu9lul7dld8rdruudd4ru4ldluuruldd4ruur4urrd"
	"lul3drdlulddur4ulldluru9lul7dld8rdruudd4ru4ldl4u3d4ruur6urrddulul5drdlulddur4ullu7lddlu3dld"
	"luluur4dld8rdrud4ru4ldl3udd4ruu5r3u3lul3drdlulddur4ullu9lul7dld8rdrruldluudd5ru4ldlu",

	// 76
	"####################!"
	"# # # #   #@##   # #!"
	"#             $    #!"
	"#  ##$# ##### $ # ##!"
	"##    ##.....#  #  #!"
	"##$##$#.....###$#$ #!"
	"#   # ##.....#  # ##!"
	"#  $    ##..##  #  #!"
	"# $ #   $   $  $$$ #!"
	"## $  $# #  #  $   #!"
	"#   ##   #  #      #!"
	"####################!",
	"d9l4dlddru3rd5rdrurrdd3rulu4ldluudruullrdd3rddruru4ldl3uru3lu3r4drrd5ruuld6ldl4urullr4dlld"
	"dlluluu3ldd3ru5rdruudrrdd4ruru7ldl3urullr3d4ruurdlddrru5ldl4urul4d5lu3l4ulu6rurrd4rdrdr3d"
	"lddrru5ldl4u3dllddllulurru4ldld3ru5rdru4r4ululururrdr5drd7ldl3u2(ddll)u3lullururddld3ru8rd"
	"rru4ldluudr3ulrd2(lddl)lu4l5u3r4dullddrru5rdr3udd4r4uluur5dlddrru5ldl3u2(ddll)u4l7u3r6dulld"
	"drru5rdruud6r6ulul6dlddrru5ldluud5l6u9rur6dlddrru5ldlullddllulu5rdru",

	// 77
	"####################!"
	"#    ##   #    #   #!"
	"#  $  $     ## $   #!"
	"## #####  .###### ##!"
	"x# ##  ##....#### ##!"
	"## ##$ ###..##     #!"
	"#      #... .# $ $ #!"
	"# $ ## ## . ### ####!"
	"# # $    #.## # #xxx!"
	"# $ $ #   .#### ##xx!"
	"# #  ## # ##  #  ##x!"
	"#######  $##$   $ #x!"
	"xxxxxx##      $ #@#x!"
	"xxxxxxx#  ## ######x!"
	"xxxxxxx#######xxxxxx!",
	"ulld6luudll3uluu4l5urrd4rurdldrur3drdllr3dllu3ldldlurruruu5l3drruuddll3ur4u6rurdldrur3drddldd"
	"llulluu3l3dlluur4u3d4rddrrdrruulurrl4u6lu3ld7rurdldrur3drddlddllu3ldlluuddrruruu3ldl4u3d4rddr"
	"rdrruulur4u6lu3ld7rurdldrur3d3u8l4d4rddlldluud3ruu3ldl4u3drdd5rdrruurul4u6lu3ld7r2(urdldr)rl"
	"5dlddlluuru4ldluud3ruu3ldl4u3drdd4rdrr4dlur3ur7u6lu3ldr4drdd4r3drdruudll3u4lul5u6r2(urdldr)5d"
	"llrddlluuru4ldluud3ruu3ldl4u3drdd4r3drd5ruuldrd4ldlur3ur7u6lu3ldr4drdd4r3drdruudll3u4lul5u6rur"
	"ddr6dllrddlluuddrd7rulluldrd4ldlur3ulu4ldluud3ruu3ldl4u3drdd4r3drluu3r7u6lu3ld7rurdrru3rdrrurr"
	"dl3dll5drd3luld3r6u3rdllul5drd3ld4luudll3u4lul5u8r7dllrddlluuru4ldluud3ruu3ldl4u3drdd4rdrr4dlu"
	"r3ur7u6lu3ldr4drdd4r3drdruudll3u4lul5u5rurrdr7dllrddlluuddrd5ruuldrd4ldlur3ullddrluu3r7uru3rdrr"
	"ur4drdllul5drd3luldrd4luudlluuru4ldluul5u5rurrdr7dllrddlluurulluu3ldl4u3d4rddrd3r7ululldrdrluur"
	"dr5d5ulldrur4d4u6lu3ld7rurdldru7l4d4rddlldluud3ruu3ldl4u3drdd4rdrr4dlu7r6urr4u3lu3ldl3d3u6lu3ld"
	"7rurdldru7l4d4ruuldrd3ldl4u3drdd4r3drdruudd6r6urr4u3lu3ldldduu6lu3ld7rurdldru7l4dl3drrdruruldlu"
	"ud3ruu3ldl4u3drdd4rdrr3d6r6urr4u3lu3ldldu6lu3ld7rurdldr",

	// 78
	"xxxxxxx###########x!"
	"xxxxxxx#         #x!"
	"xxxxxxx#    $ $  #x!"
	"######x# $ ##### #x!"
	"#    ##### $  ##$#x!"
	"#       $ $      #x!"
	"#          ## ## #x!"
	"#    ##@##### ## #x!"
	"#    ####xxx# ## ##!"
	"#....#xxxxxx# $   #!"
	"#....#xxxxxx#     #!"
	"######xxxxxx#######!",
	"urru5lulddu7r4u6r7d3u13lul5duuru7r4ulldrurddrd7lul4duu7r5u3rdllul3drd8l10rulld5r3u6lddrd7l6ruu"
	"llurur3drd6ldl3dlluld5ur4d4ur5d5ur4d3u9r5drruldl4u4d4rul4u12lul4d3u13r4dlldl4u3d3r4u14lul4d",

	// 79
	"#############xxxxxx!"
	"#           #xxxxxx!"
	"# ### $$    #xxxxxx!"
	"#   # $  $  #xxxxxx!"
	"#  $####$######xxxx!"
	"# $ ##        #####!"
	"#  $$ $        ...#!"
	"### ## $$#     ...#!"
	"xx# ##   #     ...#!"
	"xx#      #     ...#!"
	"xx###@#############!"
	"xxxx###xxxxxxxxxxxx!",
	"ururrudlluru9r3lu5luuruul4dlld5r3l4u3rdllul3dld3rurd3l5u3lddrrlluurdrr3dld3rd6r3luuldduuld"
	"3l3urrulul4dld4rdd5r6ld6r3l4uld4l4u3ldrrur3dld8r7l5u7l3drdrd8r8lulld9rurdd4rlluulddld4r5ld5"
	"r3u13l3urddld12r7lddrulu4r3lddlludd3l3u7rurd9luurdld8rd4rluuldduul3d3r4ld4r",

	// 80
	"xx#################!"
	"###@##         ...#!"
	"#    #         ...#!"
	"# $  #         ...#!"
	"# $$ #         ...#!"
	"## $ ###$##########!"
	"x# ###  $ #xxxxxxxx!"
	"##   $  $ #xxxxxxxx!"
	"#  $ #  $ #xxxxxxxx!"
	"# $  #    #xxxxxxxx!"
	"#  $ #    #xxxxxxxx!"	
	"#    #    #xxxxxxxx!"
	"###########xxxxxxxx!",
	"dlldr4d4rdd3r3uluulur3drddl5ulu9r7ldl6dllurdr5ulu9r8l5dllurdr4ulu8r7l4dllurdr4u4d4lddlur3d3l3"
	"uru5rdr4u8ruulur9ld8r7ldldr3d4lddlulu5rdr4ulu8r7l4d4l4dl3ulldr7urrdlul5d5rdr4ulu7r6l4d4l3dluu"
	"dllur5urrdlul4d5rdr5u4d4lddludllur4urrdlul3d5rdr4u7ruulur8ld7r6ldldr3d4lddludlluru5rdr5u4d4ld"
	"dlulu5rdr4u6r7lu7r6lulu7r",

	// 81
	"xxxxxxxxxxxxxx#####!"
	"xxxxx##########   #!"	
	"xxxxx#        #   #!"
	"xxxxx#  $ $    $$ #!"
	"xxxxx# ##### ## $ #!"
	"xxxxx#$$   #$## $ #!"
	"xxxxx# ### # ##$  #!"
	"###### ### $ $    #!"
	"#....        ##   #!"
	"#....        ######!"
	"#....        #xxxxx!"
	"###########@##xxxxx!"
	"xxxxxxxxxx###xxxxxx!",
	"ur3u3rdrr4uldr3uld3lu7l7drd5l4r8u3rdllul7drd4l3r8u5rd4lul7drd3l6r5u3l3r3drrul4rdrr5u9lull6"
	"drd5l4r7urrdlul6drd4l3r4u4rddrr3u3d3rdrru6ld9l4r6u7rd6lul6drd3lrr4u4rdd7ruuldrd6ld8l3r3u4r"
	"dd6ruuldrd5ld7lrr3u4rddrr4u3r3drd5ld6lr3u4r3drr5u4r3drd6ldd6lr4u4r4drd6l",

	// 82
	"xxxx######xxxxxxx!"
	"x####    #xxxxxxx!"
	"x#    ## #xxxxxxx!"
	"x# $     #xxxxxxx!"
	"### #### ########!"
	"#  $   $ ##  ...#!"
	"#   $$ $$    ...#!"
	"#    $  $##  ...#!"
	"##@## ## ##  ...#!"
	"x###  $  ########!"
	"x#   $$  #xxxxxxx!"
	"x#    #  #xxxxxxx!"
	"x#########xxxxxxx!",
	"urrururrd7rurddu8lulld9r6l3u3luu3r4dld6r5l3u3lu3ldrddld10r4l3u4lul3dld9rurd6ldlddlddrur"
	"ruruulu4rd3rllu4l3dlddr4ulu4ru3rdduulddlu4l4d3lurrdr3ulu6r5l3d3luurrlldd3ruulu5r4lu4ldldru7"
	"rurrld4l3d3luulu7rdrrlu4l3u5lddld9rurdldr",

	// 83
	"#######x#########!"
	"#     #x#   ##  #!"	
	"# ### #x#   $   #!"
	"# # $ ###   $   #!"
	"#   $$      ##$ #!"
	"#    ####   ##  #!"
	"#@############ ##!"
	"###..    #####$ #!"
	"xx#..    ####   #!"
	"xx#..       $$  #!"
	"xx#..    #### $ #!"
	"xx#..    #xx#   #!"
	"xx########xx#####!",
	"urruurlddru5rdruruurrdrrddl3dld9l9rurrd10l10rddluru9l8rddluru7lulddrd3luluurddru9r4uruul5dr"
	"d9lullrd9r4ur4ul7drd10l9r7u3ldrrur6drd9ldlluurd9r6u3ld10l3u4rdduu4l3drrurd5ru4rur6drd11l10r"
	"6u3lddlu9l3u4rddld5ru4rur6drd10l9r6u3lddlulu4rur6drd9ldlurul",

	// 84
	"#######xxxxxxxxx!"
	"#     ##########!"
	"#     #    #  ##!"
	"# $   #   $ $  #!"
	"#  $  #  $ ##  #!"
	"# $$  ##$ $    #!"
	"## #  ## #######!"
	"## #  ##    ...#!"
	"#  #$       ...#!"
	"#   $$      ...#!"
	"#     ##@#  ...#!"
	"################!",
	"6uluur6d3l6u4ldr5dldd4rudlluru8r5ld5rurdru6l3urrulul5dld5rdruu9ld9r8ld4lu11r10l4urrur3duldd"
	"9rd8ldllu9r4l7urrdrrurdrdd5lul4d3l3u3lurrur4d2(ld4r)llu4l3u3luurrur5dld8rd4l6u5rdrd5lul3d3rd"
	"d4lu4r3l5urrdu3rdd4lul4dld4r",

	// 85
	"############xxxxxxxx!"
	"#      #   ##xxxxxxx!"
	"# $  $   #  ######xx!"
	"####  #####      #xx!"
	"x#..  #     #### #xx!"
	"x#.####  ####    #xx!"
	"x#....    #  $ ####x!"
	"x# ...#   # $$$#  ##!"
	"###.#### ##  $@$   #!"
	"#     ##### $ #    #!"
	"# #.# $      $###$ #!"
	"# #.########  #  $ #!"
	"# #..        ##  $ #!"
	"# # ####### $ # #  #!"
	"#   #xxxxx#       ##!"
	"#####xxxxx##########!",
	"rrdrrddlrdlr3uldduuluurddr4dld4lulu9l3urrd6ruurrdl3d4uluurdd3rd3r4dld6ludrrulu8l8rddlur3u7l"
	"u4l5drr7ulu5rdruluu4ru5rddllddldl4d8l7rddrruldlur3u7lu4l5drr6udrrd7ruuld3ur6d8l7rddrruldlur"
	"6u2(rruu)5ld4ldd5ldrddll5drr7urul3drrd6rur3d8l7rddrruldlur3u7lu4l5drr7ulu5ruu4ru5rdd3ldrdlu"
	"l6d8l7rddrruldlud6rur4u3lullul3d7lu4l5drr6udrrd7rdd8l7rddrruldluruur3ur3urruu5ld4ldd5ldrddl"
	"l5drr7uddrrd6r4urru3ruu5lululld3lulddrdllr3u3ldrrurddrdluu4rurrdr2(dd4l)4rdrru4lrruurdlddrr"
	"u3lruu4ru5rddllddlul6d8l7rddrruldlur5u3rdrru4lul3d7lu4l5drr7uddrrd7rdd8l7rddrruldlud6ruruu"
	"luuru5lul3d7lu4l5drr6udrrd7rdd8l7rddrruldlud6r5uru5lul3d7lu4l5drr5urrd7rdd8l8ruu7lu4l5drr3u"
	"d8rddrruldlud4ruurlddrr5uru5lul5d8l8ruu7lu4l5drruu8rddrruldlud4r3urdr3uru5lul5d8l7rddrruldluru7l",

	// 86
	"################x!"
	"#       #@ #   #x!"
	"# # # # # $  $$#x!"
	"# #...# #$$$   #x!"
	"#  ...# # $  $$##!"
	"# ##.## # ##    #!"
	"# #...     $    #!"
	"# ## ###  #######!"
	"#    #x####xxxxxx!"
	"######xxxxxxxxxxx!",
	"3drrurrddld7lrr5u6l7d3r4udd8rurrd9lrr5u6l7d3r3ud9r3urddrd10lrr5ull3dllurluull7d3r4udd9r3uldd"
	"rd8lrr5ullddlruu4l7d3r4ulur3d8ruu3ldu3rdd7lrr5u4ldull3drl4d3r4udd8r5ur4drd9lrr5u6l7d3r3ud8r5"
	"urr4drd10lrr5u6l7d3ruu5r3urluurdrdrruul4drd9l5ruurrurddrd8l4r3urrur3drd7l",

	// 87
	"xxxx#####xxxxxxx!"
	"x####   ##x#####!"
	"x#  $    ###   #!"
	"x# $@$ $    $  #!"
	"x# #$######## ##!"
	"x# #  $  #     #!"
	"x# # $ $ # #   #!"
	"## #  $# # #####!"
	"#  ##    #     #!"
	"#    $ # ###   #!"
	"##### ##  #....#!"
	"#    $     ....#!"
	"#         #....#!"
	"################!",
	"ddrdrrur5drddllu6rurd5ld5lu7rurdrdlu4l3u3ldduu3r4d4lu8rdrurulld4l5ulldurr5d3l3urrluurr4drd"
	"dllu5rdruulurdd5l5u3l4duu3r4d4lu8rdruud8l6uluulul6dld3rll6urrddr5duu3r4d4lu8rdruruldlud7l6ul"
	"uulurrurrdld3lul6dld3rll6urrddr5duu3r4d4lu8rurrdluld7l6uluurruuldrd3lul6dld3rll6urrddr5duu3r"
	"4d4lu8rurd5l3ullull4ulurdrruuldrd3lul6dld3rll6urrddr5duu3r4d4lu9r5l6u3ldl3ulurdrruuldrd3lul6d"
	"ld3rll6urrddr5duu3r4d4lu8r4l3ullull5u4rd5lul6dld3rll6urrddr5duu3r4d4lu7r3l3ullull4u8rurrd11lu"
	"l6dld3rll6urrddr5duu3r4d4lu6rll3ullull4u9rdd3l3d3rduldurrd",

	// 88
	"#############xxxx!"
	"#........####xxxx!"
	"#...#### #  #####!"
	"#...#  ###    $ #!"
	"#...$$     $ $  #!"
	"#  .#  $ $# $  ##!"
	"#...# #$#   $  #x!"
	"#.# # $   $    #x!"
	"#.  #$###$####$#x!"
	"##  #   $ $    #x!"
	"x#  #  $@$  #  #x!"
	"x#  # #### $  $#x!"
	"x#  #    ###   #x!"
	"x#  # $$ #x#####x!"
	"x#  #    #xxxxxxx!"
	"x#########xxxxxxx!",
	"l3rdrrdrr2(uluuru)l3dllulldrrullululldldd4ruullululd3l5rdrrdd4luuddrruulu3luld4rdrru5lull4du"
	"ur3ulu6r4l3d4r3dlluuru3l8d7ul3ulu5r3l3drr8d3rdd3l9uru4l3r10drruldl9uru3luld3r9d3rulldl8uru3lu"
	"ll3dur3ulu4rll3drrd4rdrruu8l6d5ul3ulu3rl3drr5drrdl3r5udrruu9l3r8drddl9uru3luld7r5d3ldl5uru3lu"
	"llddr3ulurr3d7ruurdrrddlu10l11rulluldrd8ldllurdr3udd12ru4luldrd8ldl3udd7rddrrdlruuru9l2(dluu)"
	"rdd3r5d4r4udrruu8ldluud11r3d3l4ruu4d8ldl5uru3ldlu8ru5rd13l3r5d4r4udd3ruulu8ldlluurd3r5d5rddrr"
	"druudr6ulu11ldlu9ru5rd13l12r5d8ldl5uru3ldlu3r5d5rddrudrruu7ldl5uru3l4dlddr5u3dl4dr6uddl6dr7u",

	// 89
	"x##################x!"
	"x#   $       ...#.##!"
	"x#       ####..... #!"
	"x# #######  #..... #!"
	"x# #    $ $ ##....##!"
	"x# #  $ # # ###...#x!"
	"x# # $@$ $  ##### #x!"
	"## #  $  $ $$   $ #x!"
	"#  #$# $#   # $## #x!"
	"# ##    ## ## $ # #x!"
	"# # $# $ $  #     #x!"
	"# #         #######x!"
	"# ########$##   #xxx!"
	"#        #  $   #xxx!"
	"########    #####xxx!"
	"xxxxxxx###  #xxxxxxx!"
	"xxxxxxxxx####xxxxxxx!",
	"luurdlddr4d4r5uluullrrddrruullddr7drddlullu7l5ur6u4ru7rd4r8d4l3u3r3l3d4r6uluurrdl7dl3(lu)3rl"
	"l3d3r7urulldulu7ld6l6dl5d7rdrr6uru5rll3d3r6uluurrd4lurddrr3d6lulluurrddld6rll3d3r6uluurrdl4d"
	"7l6drddl7ulu7rll3dluudd4r7urulldr4d6ldllu7rll3d3r6ulluu3rdluldr4d7l4d4luulldld6r3l4u10rll3d3"
	"r6uluurrd3lrr4d7l6drddl7ulu7rll3d3r6uluurrdlulddr3d13l3dld6r3luurulu10rll3d3r6uluurrdllr4d7l"
	"6drddl7ulu7rll3d3r6uluurrdl4d7l6d3rurrd4ldl6ulu7rll3d3r6u3d7l7dllu7l5ur7u4rdrru5rd3rdurrdl4d"
	"12luul5dld6rll3ulu10rll3d3r8u4lu5ldllu6r10l7dl5d7rdrr6ulu7rll3d3r7uru4l3r5d10l3drrdr3ulu7rll"
	"3d3r7uru3lrr5d12luurdld11rll3d3r7urullr5d11luuru3rur3dld6rll3d3r7urul5d12l3u5rur3dld6rll3d3r"
	"7u4d6l3ulldduullddrd8rll3d3r6u3d6l3ullddld8rll3d3r5udd6lu5ld10rll3d3r4u",

	// 90
	"####################!"
	"#..#    #          #!"
	"#.$  $  #$$  $## $##!"
	"#.$#  ###  ## ##   #!"
	"#  # $ #  $$   $   #!"
	"# ###  # #  #$  ####!"
	"#  ## # $   #@ #   #!"
	"# $    $  ##.##  $ #!"
	"#  # $# $# $     ###!"
	"#  #  #  #   ###   #!"
	"#  ######## #      #!"
	"#           #  #.#.#!"
	"##$########$#   ...#!"
	"#    .*  #    ##.#.#!"
	"# .*...*   $  .....#!"
	"####################!",
	"ruurr3u7ldrddrddlld4l3uluullul5dr3dldd10ruulurdru4ruurrdlul5dulldd3r4ld3ld7r9lulldrr4lull"
	"d4rul3rd8r3lull4ulu5rurddrr3d4luu3rurdlluu5l3d10luurdld9r8lddrd12r4l5ulu5rur5d3ldlluu9l5ulu"
	"uruurrddr3dllrr3ul3urrd4ldlu4dr4dld9r8lddld13r3l5ulu5rur4dulldd3r4ldlluu9l3ul4u3d8rurruu3ld"
	"drd6lrr4uluurrd4lddlddr4dld9r8l4urrddrulu3rurrd6lrr5u3lddlddr7dld12rll5ulu5rur4dullddrr3ldl"
	"luu9l4u5rddruluurrd6lrr5u3lddlddr4dld9r8l4u6r3urrdrdllruullddrr4uldr3dld6lrr5u3lddlddr7dld5r"
	"urrd3r5ulu5rur4d3u5l3d9l4u6r3ururddrdllruullddrd6lrr5u3lddlddr4dld9r8l4u6r3ur3u3rdlul4d4u6r3d"
	"5lddllruullddrd6lrr5u3lddlddr7dld4ru3rd3r3u9l4u6r3uruur3du4rddluru3lddllruullddrd6lrr5u3lddld"
	"dr6du9ruulu5rur3d3l4d5lu3ldllurrd4lu3rll6u6r3uruur3du6rurrd7lddllruullddrd6lrr5u3lddlddr7dld3"
	"rll7u6r3uruur3d4u3rdduu4rddld5lddllruullddrd6lrr5u3lddlddr7dldrrl7u6r3uruur3du6rurrd7lddllruu"
	"llddrd6lrr5u3lddlddr7dldr7u6r3uruur3drdllruullddrd6lrr5u3lddlddr7d",

	// 91 (alternative 77)
	"######xx#####x!"
	"#    #xx#   #x!"
	"# $  #### $ #x!"
	"# $      $  #x!"
	"#  ###@###$ #x!"
	"########## ###!"
	"#..   ##     #!"
	"#..   ##$    #!"
	"#..   ## $   #!"
	"#..   ## $   #!"
	"#..     $ $  #!"
	"###  #########!"
	"xx####xxxxxxxx!",
	"urrRuurrdd7Luu3ldRurrdd6r4DrddlLd5LdlUruLLdl3U3d8rurrd7LdlUruL"
	"LdlUUdd9rr3ullDDrd8L7ruulDrd4LullddrUru3Ld7r4ul3Drd4Lullddr"
	"UUru3Ldd9ruuLLulDDrd6L7r7uluur5DrdLLul3Drd4LullddrUruLdlUruLdlUU"
	"3r3d5r7u6luulldRllddrUluRd7Rur4DrdLLul3Drd5LdlUUruLdlU3rdd5r4u"
	"3u8luurrDullddr6Rur4DrdLLul3Drd4LullddrUruLdlUruLdd7r7u6luulDld"
	"7Rur4DrdLLul3Drd4LullddrUruLL",
};

// Boxxle 1, (c) Thinking Rabbit
const char* RabbitCol2[] = {

	// 1
	"x#####xxx!"
	"x#   ####!"
	"x#   #  #!"
	"x##    .#!"
	"### ###.#!"
	"# $ #x#.#!"
	"# $$#x###!"
	"#@  #xxxx!"
	"#####xxxx!",
	"rr4uruulldrurdl5dllurdr4u3rurddu3luulldrurdl4dllurdr3u3rurd3luulldrurdld3r",

	// 2
	"xx#######x!"
	"xx#     #x!"
	"xx# $ @ #x!"
	"##### # #x!"
	"# $     #x!"
	"#  #$## ##!"
	"#..$  #  #!"
	"#..      #!"
	"##########!",
	"u3ld3rur5drd6lrrullulu3rdurrluurr4drd5lrrull",

	// 3
	"######!"
	"#..*.#!"
	"#.$  #!"
	"## $ #!"
	"##$ ##!"
	"#@$ #x!"
	"##  #x!"
	"x####x!",
	"3(ru)ullrrddlulur3dluu4dr4u",

	// 4
	"########!"
	"#.   $ #!"
	"#.$  # #!"
	"#.# #  #!"
	"### # ##!"
	"x# $  #x!"
	"x#@ ###x!"
	"x#####xx!",
	"rurruuruulldlluld3rull4rddlddlluuddrruuruulldll",

	// 5
	"x########x!"
	"##..#   #x!"
	"# ..# $ ##!"
	"# @ $  $ #!"
	"##$###   #!"
	"x#     ###!"
	"x#######xx!",
	"3ruurrddldd4l3u3d4ruu3l3rdd4luulurdrud5rdlu5ldd4ruru4l3rdd4luulurd3ruurdrd4l3rdd4luu",

	// 6
	"x#######xxx!"
	"x#     ####!"
	"x# ###.   #!"
	"##    # # #!"
	"# .#$ $ # #!"
	"# #  *  # #!"
	"# # $ $#. #!"
	"# # #    ##!"
	"#   .### ##!"
	"####      #!"
	"xxx#####  #!"
	"xxxxxxx#@ #!"
	"xxxxxxx####!",
	"4u3luLulDDurrd3rur4u3lu4l3dl4drR3urUruLLr3drd3rur4u3lu4ldD3rdRdrUUd3"
	"lddrd3rur4ulL3dlDldRRl3uruurr4dl3Drddl4U",

	// 7
	"#########x!"
	"#.....  #x!"
	"### $ # ##!"
	"xx# $##  #!"
	"xx#$ $ $ #!"
	"xx#   #  #!"
	"xx##  # @#!"
	"xxx#######!",
	"3uldlldll3u3drrurr3ulldlull5r3dlldll3urul4drruluulur3d4rddluru3ldl3u3dl3u",

	// 8
	"xxxx#####x!"
	"#####   #x!"
	"#.. $ $ ##!"
	"#..$ $  @#!"
	"##. $## ##!"
	"x###    #x!"
	"xxx######x!",
	"3lu3lrdurrd3l5rdd3luluurrdll4ru4l",

	// 9
	"###########!"
	"#     # @ #!"
	"# $  $  $ #!"
	"## #...# ##!"
	"x# #...# #x!"
	"x#$ ### $#x!"
	"x#   $   #x!"
	"x#  ##   #x!"
	"x#########x!",
	"ldldlluurdldrurrurrd3ldlluu3ldr3drd3rdrr4u4dllur4lul3ururdurdldrurrurrd3lrr3dld"
	"dr4u3d5lul4u3rddurrurrd3lrr4d5lul4u3rd3l3drddl4u3d6r4u3lu4ldrrurd",

	// 10
	"xxx####x!"
	"####  #x!"
	"# $...##!"
	"#@ $.. #!"
	"###$$$ #!"
	"xx#    #!"
	"xx######!",
	"u3rdrrddlluululld3rddrruldludluu",

	// 11
	"x##########x!"
	"##    # @ ##!"
	"#  $.... $ #!"
	"# $ ####$  #!"
	"##  #xx#   #!"
	"x####xx#####!",
	"d3lu3ld3rllddlulu2(rrurrd)3l4rddluru3lrrddlurul",

	// 12
	"xxxx########xxxxxxxx!"
	"xxxx#      #########!"
	"##### #### #@##  ..#!"
	"# $  $           ..#!"
	"#   # ### #####  ..#!"
	"### # ### #xxx######!"
	"xx#  $  $ #xxxxxxxxx!"
	"xx###  $###xxxxxxxxx!"
	"xxxx#$  #xxxxxxxxxxx!"
	"xxxx#   #xxxxxxxxxxx!"
	"xxxx#####xxxxxxxxxxx!",
	"d3l3dlldllull3u12rdru13ldllu14rurrld7l3dlldll3uddll3u12rdrrlu7l3d3l3druull3uddll"
	"3u12rurd7l3d3ldl3uddll3u14r8l2(3dll)5uddll3u13rldr",

	// 13
	"xx#####x!"
	"xx#   ##!"
	"### *$ #!"
	"#  .$. #!"
	"#  $. ##!"
	"###  @#x!"
	"xx#####x!",
	"ullulldrrdrruulluurrdull3dllur",

	// 14
	"xx########xxxxxxxxxx!"
	"xx#      #xxx######x!"
	"xx#$ $ $ #xxx#  ..#x!"
	"###  $  $#####  ..##!"
	"#  $$$   $      ...#!"
	"# #  $ ####@##  ..##!"
	"# #  $ #xx####  ..#x!"
	"#    ###xxxxx######x!"
	"######xxxxxxxxxxxxxx!",
	"u3lulld11r11l3urddld10r9l3urddld8r7l3u4l3d10rdruud12l3dll3u13ruu"
	"rrdrddluuld12lddrulu13r12luurduullddrd11r7l3ullddld9rdrrlu9lddlul"
	"u10rurrddlu9ld3lddrud3l3u14r9lddllulu11rurdldr",

	// 15
	"########!"
	"#  @   #!"
	"#  #$$ #!"
	"## $  ##!"
	"x#  $.#x!"
	"x## .##x!"
	"xx#..#xx!"
	"xx####xx!",
	"lddrrddull3urrdduurrdlu3lddrrdru3luurrddrdl3urddlldd",

	// 16
	"#########xxxxxxxxxxx!"
	"#   #   ##xxxxxxxxxx!"
	"# $$#$$ @#xxxxxxxxxx!"
	"#    $  ##xxxxxxxxxx!"
	"#   # ##############!"
	"####  $ #     #....#!"
	"xxx# $$ #$ $ $#....#!"
	"xxx#  $     $ #....#!"
	"xxx# $$$#$  $ #  ..#!"
	"xxx#    #  $ $   ..#!"
	"xxx############  ..#!"
	"xxxxxxxxxxxxxx#  ..#!"
	"xxxxxxxxxxxxxx######!",
	"ldllddldd6rdrrd5r5lulld6r6l4urr3dld4rd3r4uddlddlu4luurdld5r5l4ur3dld4r3uddrrddlu7l3ur"
	"ddld5rdr3uddr3uldlu3dll4ul3dld4rdruud3luu9lddrulu7r6lddrulu5rurddld7rdr3ulldluddll3uld"
	"dld4rdr3udd3luu7lddrulu5ruulldrd3ldllu5rurddld5rdruud3l3ulddld5rdr3uldd7luru3ldllu6r7lu"
	"urdld6r5l4urruull5dld5rurddld7rdruud4l3ullddld7rdruud5l3ulddld4rdru3luu8l4urrulul5dld7r4l"
	"uuldld5r3lull3uruul5dld5rurddld6rurrld3l3ullddld5rdrrlu3l3ulddld4rurd3luu8l4ulldllu4rurrdl"
	"ul4dld7r6l4u4luurdld4rurrdlul4dld6r5l4u3luurdld3rurrdlul4dld5rurddld8r4l3ullddld6r3l3ulddld4rdruu",

	// 17
	"xxx#######!"
	"xxx#  @  #!"
	"#### # $ #!"
	"#...$#$ ##!"
	"#... $   #!"
	"### $ ## #!"
	"xx# $    #!"
	"xx#    ###!"
	"xx######xx!",
	"llddlddrluurdl3drruldl3udd5ruu6lrrullrruurrddrd4lddrruldluurulruu3rddldlldludd5ruu4l",

	// 18
	"xxxxxx####!"
	"#######@ #!"
	"#   #    #!"
	"#   $  $ #!"
	"## ##$# ##!"
	"x#  $ #*.#!"
	"x##  $...#!"
	"xx#   #. #!"
	"xx########!",
	"rddlddrddlulldllu4rdrul3uruuldll3d3urr4dlldllurlurd3r4ulldrur3duullddldru3luu4rurdd",

	// 19
	"x########!"
	"x# @    #!"
	"##  ..$ #!"
	"#  #..###!"
	"# $$$##xx!"
	"#    #xxx!"
	"######xxx!",
	"lddldd3ruurul3dllurdruuruurrdlulduldulldrrlldldrdrruuddllurdru",

	// 20
	"########!"
	"#  #   #!"
	"# $..$ #!"
	"#@$.* ##!"
	"# $..$ #!"
	"#  #   #!"
	"########!",
	"drluurdrrulrurrdll3drrululuurrdld4luurdldrrllddrulur",

	// 21
	"xxx#####xx!"
	"#### @ ###!"
	"#    #   #!"
	"# $$  #$ #!"
	"#  $#$ $ #!"
	"###...$###!"
	"x#.... #xx!"
	"x#######xx!",
	"lddrduluurrdrrddllrruullulldlldurrdlddrdrruldll4ulldrur3duulldrurdur"
	"rddrdl3uluurrdrrddllrruullullddrddu3ruuldrdllruulullddrd",

	// 22
	"x###xx####xxxxxx!"
	"##.####  ##xxxxx!"
	"#...  #  @###xxx!"
	"##..     $  #xxx!"
	"#...  # $ $ #xxx!"
	"##.###### ######!"
	"x###xxxx# $ $  #!"
	"xxxxxxx## $ $# #!"
	"xxxxxxx#   $   #!"
	"xxxxxxx#  $ $# #!"
	"xxxxxxx# # # # #!"
	"xxxxxxx#       #!"
	"xxxxxxx#########!",
	"6drdulldrrl6urrdlul5dl3d6r3u3luulrddlul3uru7l6r4drruldl3uru5luld5r3drdd4ruu4ldl3ur"
	"u5ld3luurrd5r3drd2(drru)u4ldl3uru5ldllru5r3d5r5d4l3u3dlluurlddrruul5uru5lu3lddrru5r"
	"3drrddl3drruulrddlluul5uru7l6r3drrddldl5uru6l5r3drrdldl4uru5lullrd5r3d5rdd4ldl5uru5l"
	"dllru3rdrur3drddl4uru5luldrdl",

	// 23
	"#######!"
	"#  #@ #!"
	"# $$$ #!"
	"#  $  #!"
	"# $$$ #!"
	"#..#..#!"
	"#..$..#!"
	"#######!",
	"rddldrdd3luluurddl4ur3drrduurdd4uldldulul3drrurduurdd",

	// 24
	"########xxxxxxxx!"
	"#  ##  #xxxxxxxx!"
	"#  ##$ #xxxxxxxx!"
	"#  $   ##xxxxxxx!"
	"## #    ##xxxxxx!"
	"x# ## #  #xxxxxx!"
	"x# $ $## #xx####!"
	"## ##    ####..#!"
	"# $ #$ #$##  ..#!"
	"#      $     ..#!"
	"########@##  ..#!"
	"xxxxxxx#########!",
	"3ulldd7rdruud12l6urrd3rdr3du3ldrd7r5l4ulu3lu3luur7drd9r9lulld10rdru4l4ulull"
	"4d4ulull3drrll3d9rurrld4l4ulull4duu3l3d9rdrruuld4l4ulululruul7duu3l3d10r10l"
	"6urrdrruul6duu3l3d9rdrulur",

	// 25
	"xx######!"
	"xx#  @ #!"
	"xx# $  #!"
	"#### $ #!"
	"# .#$ ##!"
	"#..# $#x!"
	"#..$  ##!"
	"#.. $  #!"
	"####$  #!"
	"xxx#   #!"
	"xxx#####!",
	"lldRdDuuurrddLdDDDulLLdlUrrrrdLLLrrrrddllUUruLLLrrdddrUruLuuulDrdLLdlUUdrrru"
	"uuruulldDDDrdLLdlUrruuuuurDrdLulDDDrdLLrrdLL",

	// 26
	"xxxxxxx#####xxxxx!"
	"xxxxxx##   #xxxxx!"
	"xxxxxx#  $ #####x!"
	"xxxxxx# $ $    #x!"
	"xxxxxx### #### ##!"
	"x######## $    @#!"
	"##...  ## $$## ##!"
	"#....       ## #x!"
	"##...  #### ## #x!"
	"x######## $ $  #x!"
	"xxxxxxxx#  $ $ #x!"
	"xxxxxxxx#      #x!"
	"xxxxxxxx########x!",
	"luu4luulldr4d3u5r8dllul3u9l7r4u5rdd4ldu4r5dldll4u8l7ruu4ruu5l3drd6l5r5ulldruurrdl4drd"
	"5l4ruu5ruu4lul4drdruld4ldlu4r4u5rdd4l4ruu5l3drd4lu3lrrd6r4drruldl5u4drruldl3udd3r4u4l"
	"4ruu5l3drd4ld3lrru6ru3d3r4u4l4ruu5l3drd4lullrd6r4dllurdr5u3d3r4u4l4ruu5l3drd4ldllru6r3d"
	"llurdr4u3d3r4u4l4ruu5l3drd4luldrdl",

	// 27
	"x########!"
	"x#  #  @#!"
	"x#$  $  #!"
	"x# ## $ #!"
	"##...$ ##!"
	"# ...# #x!"
	"# #$$  #x!"
	"#      #x!"
	"########x!",
	"dlddlld3lddrrudrurr3uruulldllul3duu3rdrdlurru4luldd",

	// 28
	"xx######xx!"
	"xx#....#xx!"
	"xx#  ..#xx!"
	"###$$#####!"
	"# $   $ @#!"
	"#   $ $  #!"
	"###   ####!"
	"xx#####xxx!",
	"3lddlluuruulurrl3dlddr4ulur4d3lurrdruudluurrl3drruldluulurdd4rd3ldl4u",

	// 29
	"x#######xx!"
	"x#     ##x!"
	"x# $  $ #x!"
	"x## # #@#x!"
	"xx#.# $ #x!"
	"###..$ ##x!"
	"#  ..# #xx!"
	"# #.*# ###!"
	"#  #.$$$ #!"
	"##   # # #!"
	"x###     #!"
	"xxx#######!",
	"dLdLLdlUUdrrUrruuLulldRullldRDDDDllddrdrrdrruUUdddlluuUdddrruuLrddlluUrrddr"
	"ruuLLLrddllulluluurruuuuurrdLulDDDDrrrDDDuuuuruuLLLulDDurrDDrdLLrrdddrrddll"
	"UUUUUluuurrddLruulldDrdL",

	// 30
	"xx####xxxxxxxxxxxxx!"
	"xx#  ####xxx####xxx!"
	"xx#     #####  #xxx!"
	"xx#  $$$       #xxx!"
	"xx## #  #  # # #xxx!"
	"xxx#$ $ ####$# #xxx!"
	"xxx# $####     #xxx!"
	"####  #  #  ## ####!"
	"# @$$    ## # ....#!"
	"# #  $$ ### # ....#!"
	"# $ $  $    # ....#!"
	"# ## $  ##  # ....#!"
	"#    $  ###########!"
	"######  #xxxxxxxxxx!"
	"xxxxx####xxxxxxxxxx!",
	"l4d5ruuruullul4uluurdrrd7rur7d3u3l4d4luullul4u9rur6dldd3rllulur5u11luurdld10rur6d"
	"ld3rll6ulldduu8l5d3rdd4r4urrl3urr5dldrrl3u3l4d4ldldlluru5rdr4ulu3rl3urr7dld3rll5u3l"
	"4d6lddrulu5rdr4ulu3rl3urr5drrddlluluruu3l4d5ldd5l4urrdd7rdr4ulu3rl3urr5dldrrl3u3l4d4l"
	"uulldrurdld4rdr4ulu3rl3urr5dldr3u3l4d4ld3lulurd6rdr4ulu3rl3urr5drddluluruu3l4d4luulld"
	"ld6rdr4ulu3rl3urr6dldrrl4u3l4d6l3ulddld7rdr4ulu3rl3urr6dldr4u3l4d5ldd5luu9rdr4ulu3rl3u"
	"rr5dldr3u3l4d5l3druulu4rdr4ulu3rl3urr7d7u7lddludldluuddr3dld6rdr4ulu3rl3urr6d6u7lulld8r"
	"ur6d5u7lu4ld10rur5d",

	// 31
	"xx############!"
	"xx#    #     #!"
	"xx# $  $ $ $ #!"
	"###### ##$ $ #!"
	"#..  # #  $ ##!"
	"#..    @ ##  #!"
	"#..  #$####  #!"
	"#..  # $  $  #!"
	"#..  #     ###!"
	"############xx!",
	"rurr3urrddlddrddlld4luudd4rurruulu3ld6lul3duu5r3drruldluudd4rurruulu3ld6lulddu5r3d4ru3l"
	"dluud6ruulu3ld6l4r4u3ldrrur4drru3ruruu4ldllulldrur3duurrurrd4lrru4rddldlludld5l3r4ulldru"
	"r3duurrurrdlddld4luld5ruruu3lulldrur3duu3rddld4ldllru5ru3ruru6lulldrur3duu3rddld4lulldduu"
	"rd5rurruru5lulldrur3duu3rddld5l5ru3rddrd4ldlluuddrru3r3u3ld4ldlu3r3drruldluud5r3u3ld4lul3drdl",

	// 32
	"xxxxxx#######x!"
	"xxxxx##@#   #x!"
	"xxxx##  # $ #x!"
	"x####  # $  #x!"
	"x#    # $ # ##!"
	"x#   # $  #  #!"
	"x#  # $  #   #!"
	"x# # $  #    #!"
	"##  $  ### # #!"
	"#  $  ##...# #!"
	"#   ##.....  #!"
	"########  ####!"
	"xxxxxxx####xxx!",
	"dldld3l4dr7(ru)r5drdlul3duurr3d5l3r3ur5ulldrur4drdlul3duurr3d4lrr3ur4u3l4(dl)dd5(ru)d3(ld)"
	"ll5(ur)rur4drdlul3duurr3dllullddrur3ur4u3l3(dl)dd4(ru)dldldll4(ur)rur4drdlul3duurr3d3ldlur"
	"r3ur4u3ldldldd3(ru)dldll3(ur)rur4drdlul3duurr3d3lr3ur4u3ldlddrurudllururrur4drdlul3duurr3dl"
	"l3ur4u3lddrulurrur4drdlul3duur4ulldd3l3d4lddrulur5(rdrulu)rrur4drdluldd",

	// 33
	"########xxxxxxxxx!"
	"#....  ##########!"
	"##...    $  $   #!"
	"#....  ## $  $  #!"
	"######### $ # ###!"
	"xxxxxxxx##$ $ #xx!"
	"xxxxxxxx# $  $#xx!"
	"xxxxxxxx# $#$ ##x!"
	"xxxxxxxx#     @#x!"
	"xxxxxxxx########x!",
	"luull4u8l8rdrrurrdllu9l7r4drr3uru9l4rddrururrdllu5luld4rddruru5ld4l3ru8r6d4luur3uru5lu4l3rd5r"
	"4dlddr5uru5ld3lrru5r3druuru6lu3lrrd8r3dlr3dluul3uru6ldllru8r3dl3dll5uru5lullrd5r4dr3uru6ldlurul",

	// 34
	"############xxx!"
	"#...#  @#  ##xx!"
	"#...#$$  $  #xx!"
	"#...   ##  $#xx!"
	"#   # ##    ###!"
	"#####  $ #$$  #!"
	"xx# $ $       #!"
	"xx#   #########!"
	"xx#####xxxxxxxx!",
	"lldurrdld4l4ruuldrd3ldlluudrdruudrr4dllurdr4uruuldrd4l3ru4rurdrdldlldllrdlluud3r"
	"ururu4ld3ldllurdru3ruuldrd3ldluud3r4dllurdr3udd5r3uru5ld3ldlu4ruuldrd4l3r3d7ruldl"
	"3urduu5luldrd3lrr3d7ruldl3uru5luldrdll",

	// 35
	"xxx#########!"
	"xxx#  ##   #!"
	"xxx# $  $  #!"
	"xxx#  $# $ #!"
	"#### $ #$  #!"
	"#..### # $ #!"
	"#..  # # $ #!"
	"#..     $$ #!"
	"#..  ###   #!"
	"#..  #x##@##!"
	"######xx###x!",
	"ur4u2(lur3d)lu7l8ruuldrd7l6ruuldrd5lulddu7r4ull3drd5lddlluluurddru7r6ulldll4d4urrdr3dld"
	"4lullrd5rdrru7l3r4ulldrur3d4urr3drdd5ldlluurd6ruuldrd7l4r3ull3urddldrur3d4urru"
	"r5dld5l5rdrru6ldlurul",

	// 36
	"xxxxxxxxxx#########!"
	"########x##   #   #!"
	"#...#  ###  $  $  #!"
	"#...#    @ # ### ##!"
	"#...    # ##  #   #!"
	"#  ### $#$  $  $  #!"
	"##      # #  ## ###!"
	"x#### #$$ ## ##  #x!"
	"xxxx#   #   $    #x!"
	"xxxx#####  #  ####x!"
	"xxxxxxxx#######xxxx!",
	"rururrdrrurd3lulldrddrdll4r3dlldlu3l4u4d3ruululrdrdd3r3u3l3ulld4luldrd3lullddruud3ru5rurr6d"
	"3l4u4d3r6ulld4luldrd3l3rddrudllddrrurldlluu3luu3ru5rurr6d3l4u4d3r3ullrr3ulld4luldrd4ldluur3d"
	"3rddrrurr3ud6rurrd7lrr3ulld4luldrd3lullddrulur3d3rddrrurr3ud3r3u3rurrd4lul3drd3lrr3ulld4luldr"
	"d4ldlurdd3rddrrurr3ud3r3u4rddrd7lrr3ulld4luldrd4ldd3rddrrurr3ud3r3ulld4luldrddru4l3rdd4luudd3r"
	"ddrruudrr4u3luldrd3l3rddruu3drr4u3luldrdll",

	// 37
	"xxxxxxxxxxx#####!"
	"x###########   #!"
	"x#     $    ...#!"
	"x#$$#  #####...#!"
	"##  #$ #   #...#!"
	"#  $   #   #...#!"
	"#@#$$ ##   #...#!"
	"# $    #   #...#!"
	"##  $$ ######.##!"
	"x# $ $ #   #   #!"
	"x#$ $ $ $ $    #!"
	"x#  ## #  $$# ##!"
	"x#     ###    #x!"
	"x#######x######x!",
	"urrddrr3uruu7r8d3luld4rddlludrr10u7lddl3dr3drrurrdrrlddrr5urululdr4d3lulld4rlddlud3r5uru"
	"l4d3lullddrlu4rlddrr6urul7d3lulu3rlddrr7urul3ur5dl4d7l3u3luullddr3d10rlddrr8urulu11lddrul"
	"u11rur4d3u8l3dllrddlul3ulu11rur3dl6d9luurdld8rlddrr8u6d11luurdld10rlddrr7u5d10l3url4ulu11r"
	"urddu8l3dlldl3ulu11rurd8lddlu4d4luur3u11r8l7dld8rlddrr6u4d8l3urddld7rlddrr5u3d10ldd3rud4l4u"
	"r5ulu10r6l3d5lddrdr5ulu9r6l5dlddrd7rlddrr4udd7lu3ld9rlddrr3u",

	// 38
	"############!"
	"###..##    #!"
	"##....#  $ #!"
	"#.....# $# #!"
	"####.. $ #@#!"
	"#   ..# ####!"
	"# $# $#    #!"
	"#  #  #  $ #!"
	"#   # # $ ##!"
	"# $$$ # ####!"
	"#   $ #    #!"
	"#### ## $$ #!"
	"##   $   $ #!"
	"##     ##  #!"
	"############!",
	"uulull3d3l3dr3dl3drrull3r6u3rdldlul3d3rdd4ldll3ur3ul3u3rddrl5urrdlul3druluurrdlulddrd3ldluu"
	"rullr5dr3dl3drru4ruu3l2(uuruul)drd3ldluuruldd3rddrddl4uruuldrd3ldluru3lrur5druu5dl3drrur8ull"
	"dluuruldd4ruuldrd3ldlurullrdd3lddrulurrll5drrluurdrdr6uddluuruld3r8dldll3ulur4drruldl3ur5u5dl"
	"dd5ruldl8ulldl3udd4ruuldrd3ldluud3r3d3rulldl3uruuldrd3ldlud3l3druulurrll5drrurdr6urr7d3rulldl"
	"7uruuldrd3lrr8d3luulurdr5u4dl4dllurdr3ulurdr4u",

	// 39
	"xxxxxxxx####xxxxx!"
	"xxxxxxxx#  #xxxxx!"
	"xxxxxxxx#  #xxxxx!"
	"xxxxxxxx#  #xxxxx!"
	"xxxxx#### ###xxxx!"
	"xxxxx# $    #xxxx!"
	"###### $$ $ #####!"
	"#@ $  $    $  $ #!"
	"##   #$ $   #   #!"
	"x#####  $ $ #####!"
	"xxxxx# $$$ ##xxxx!"
	"xxxxx### ########!"
	"xxxxxx## ##  ...#!"
	"xxxxxx#  ##  ...#!"
	"xxxxxx#      ...#!"
	"xxxxxx#####  ...#!"
	"xxxxxxxxxx#  ...#!"
	"xxxxxxxxxx#######!",
	"rdrrurruurrllddrddlururrddl4dld7r6l5uruul6dld6r5l6ulldrur5dld5r4l5ulldrur4dld4rurddu4l6u"
	"3rdllul5dld4rdd3ruruulddluuld4l5urrdlul4dld7r6l4ur5ul8dld6r5l9uldduldlldllu5rur7dld5r4l6u"
	"3rullul7dld4rd3ruulddlu4l5ullurur6dld6r5l7u4ldllu5rur7dld5r4l7u5rdrru6lul7dld4ru3rlld4l9u"
	"3rdll3uruul4dl8dld4rdrrlu4l4urr4ulul8dld4rurrld4l7u5rdrru6lul7dld4rdrulur",

	// 40
	"####xxxxxx####!"
	"#..########..#!"
	"#.*.*.....*.*#!"
	"#$ $ $ $ $ $ #!"
	"# $ $ $ $ $ $#!"
	"#$ $ $@$ $ $ #!"
	"# $ $ $ $ $ $#!"
	"#*.*.....*.*.#!"
	"#..########..#!"
	"####xxxxxx####!",
	"d3udru3duruudrdruruudrul3drdduulldrduu3ldrrurdurd3ud3lurdrud6lddululdld"
	"duldr3uluuddrruludd3rullddrdluld3udlu3d",

	// 41
	"xxx####xxxxxxx!"
	"xxx#  #####xxx!"
	"x###$ $   ###x!"
	"x#  $ #  $  #x!"
	"x#    ## ## ##!"
	"x#  ###  ##  #!"
	"x# #  $ $ ## #!"
	"x#$  $ $ $#  #!"
	"## ###  $    #!"
	"#     #$ ##$ #!"
	"# ....#  #  ##!"
	"##....# # @##x!"
	"x#.#.#  $ ##xx!"
	"x#....   ##xxx!"
	"x#########xxxx!",
	"ldl4(ru)uld3lddlddrd5lruull6uruul6dldr6u3rulruulddrdluu3rdr3dllddr4drd4l4uldl7urrdrul"
	"dlul8drrdd3r5ulu3l3rurr3ulullulddrdlldl4dldrrurddll6uruul6dldrrurdll3u4rurdurrd6l4rddr"
	"ul4drd3lru3r3(ur)uuld3l4r3uluullu4lulddrdlldl4dldrurdl5uruul7d3u5r5drdllu3r3(ur)u3lu6lr"
	"u3ruruuru4lulddrdlldl4dld3rll5uruul6dldrrl3u5rddruru6l5r4uru4lulddrdlldl4dldr5uruul6d",

	// 42
	"xxxx######xxxxx!"
	"xxxx#....####xx!"
	"xxxx#....#  #xx!"
	"xxxx#...  $ #xx!"
	"#####   #   #xx!"
	"#   #####$####x!"
	"#   #      # #x!"
	"## $  $#     #x!"
	"x#$ ## # $ $ #x!"
	"x#  $   ####$##!"
	"x# # #  ####  #!"
	"## $       $  #!"
	"#@  ########  #!"
	"#####xxxxxx####!",
	"r3urrddrr4u4dlluurlluu3rdduu4luurdldrddluuddrrddldl3u4ruulu3rd4r3drddlu8luurr3urrd4r3drd"
	"l4ulldru3ldrruuluurruuldrdlullullddrurr3drddl4uru4ldluurrdrr4d3r3drddlu5luu4luurru3rdr3ur"
	"ullullddruudrr3d4ldlldd3ruulu3rdr3urullullddrurr3d3ld3luulldrurdld3rlldd3ruulu3rdr3uru3ldl"
	"uurdrr3d3l3d4luuruulldrurdld3rlldd3ruulu3rdr3uru4l3r3d3l3dllddldl5uruulldrurdld3rlldd3ruulu"
	"3rdr3uru3ldllurdrurr3d3l3drddl4u4d3ldl5uruulldrurdld3ru3rdr3uru3ldlu3r4d3r3drd7l4u4d3ldl5uru"
	"ulldrurdld3ru3rdr3uru4l3r5drrur3drd7l4u4d3ldl5uruulldrurdld3ru3rdr3uru3lrr3d4ldlldd3ruulu3rdr3urull",

	// 43
	"######xxxxxxxxxxxxx!"
	"#    ######xx####xx!"
	"# $  $ #  ####  ##x!"
	"#  $   # $$      #x!"
	"##   $$#  ### #  #x!"
	"x# $#  ## ##  #  #x!"
	"x#$ $  $@$ # ##  ##!"
	"x#  #  #   # #....#!"
	"x# $ $ ##$## #....#!"
	"x##   #x#  # #....#!"
	"xx#####x#  $ #....#!"
	"xxxxxxxx#  # ######!"
	"xxxxxxxx######xxxxx!",
	"LLulDrddLdllUlu3Urrurr3D3ulldll4drdrruUUr3ulldRurDlluulD3ruLdlluurDu3lddR5drdrr3uUU5dllul"
	"uurRll3uluu3rdrrddldD3luuRRlluluu3rdDRluu3lddr3d3ruUdd3rdrru6LruuLrdd4ruuluurD5Rur4Drddllu"
	"Rdr3Uluullddl5dLLulUUlu3luul3u3lddr5drdrruUU3dllul5uluR6drdrr3ulLrr3dllulu4Uluu3r3drDD3l3uR"
	"l3d3ruulUdrdd3rdrru6L5ruUlu6Rur4DrddlluRdrUl4ullddl5dlldl7Ulu6Rur7DldRRl7u6l3d4luurDld3Rdr3U"
	"lu6Rur7DrdL7u6l3d4luulull5drdrrurUdldllul5urrdrdd3Rdr3Ulu6Rur5DldRurDldRl6u6l3d4luulull3d6Rdr"
	"3Ulu6Rur5DldRurDDl6u6l3d3lddlUddlluluurr4Rdr3Ulu6Rur5DldRdrUluRl4u6l3d7lddrRdrUUd3luurr4Rdr3Ul"
	"u6Rur5DldRRl5u6l3d4lddllUlu6Rdr3Ulu6Rur6DldR6u6l3d7luuRRlDld6Rdr3Ulu6Rur5DrdLulDr5u6l3d7l3uluu"
	"3rDDurr3Dld3Rdr3Ulu6Rur5DrdL5u6l3d3l4ullul4Dld6Rdr3Ulu6Rur4DurDDL4u6l3d6l3urRur3Dld3Rdr3Ulu6Ru"
	"r7D6ur3D3u7l3d3l3ulDDuull3dr4Rdr3Ulu6Rur6D5u6l3d6luuRurDDullddr4Rdr3Ulu6Rur5D4u6l3d7l3uluRur4Dl"
	"d6Rdr3Ulu6Rur4D",

	// 44
	"xxxxxx####xxx!"
	"xxxxxx#  #xxx!"
	"xxxxxx#$ ###x!"
	"xxxxxx#   ###!"
	"x######$ $  #!"
	"x#... # $   #!"
	"x#....  $$ ##!"
	"x#....#   $#x!"
	"x#....#$ $ #x!"
	"#### ##   $#x!"
	"#@$ $ # $  #x!"
	"## $  ## ###x!"
	"x##     $#xxx!"
	"xx#####  #xxx!"
	"xxxxxx####xxx!",
	"rdrr3uruurrdrru6lulddrru6ruuldrd7l6r3ullddrd4l3r3u3(rd)5luld4r3druudruu5ldllru3ruurdu3rdll5dr"
	"4u5lullddru4r3dldrl3uru3luldrdl5d3rdr6uru5l4drdld3rdr4urrdluluuru4lul5drdd3r5uru3lrr6d3luul5ur"
	"drruurdu3rdlld4l3r6d3luul4u3ruurdrd4l3r5ul4drdllrr6d4l4u3dllurdruu",

	// 45
	"xxxx#########xxxx!"
	"xxxx#.......#xxxx!"
	"xxxx#.......#xxxx!"
	"xxxx#.......#xxxx!"
	"xxxx#### $###xxxx!"
	"xxxxx#  $  ##xxxx!"
	"xxxxx# $ $  #xxxx!"
	"x###### # # ###xx!"
	"x#  ## $ $ $  #xx!"
	"## $$         #xx!"
	"#   #####$##$##xx!"
	"#   $     $ $ ###!"
	"######## $#     #!"
	"xxxxx#  $ #  #  #!"
	"xxxxx#   @#$  $ #!"
	"xxxxx## $ $   $ #!"
	"xxxxxx########  #!"
	"xxxxxxxxxxxxx####!",
	"d3r3u3rddlrddluuruu3l3dr4luuluurdduu6luluurd3ruruuruudruu3lrr3dllurdr4uru3lrr"
	"4drrdlrrddldl6uddll3drdr5uddlrddlluulurdr3uru3lu4rl10dlddr11uru3lrr10dl3dldrr1"
	"2uru3lrr12d3lurrdr12u13d3ruuluulrdr3d3l12uruulldr9drrd4rddlurulluluuru3ldl6urul"
	"l3dl3dld4ldld7rdr9u5d3r3dlddr4uru3ldl3uruldl4ur9drrdrud3r4dluulrurulluluuru3ldl5"
	"u4d3rdllrrdd3l5uruldluuruudllrddl3dld3ldld6rdr8u11drr3udr4uru3ldl3uruldl3ur12d4rl"
	"6uru3ldl5u7drrdr3uru3ldl3uruldluurulddl3dldrru4r3d3l7u7drrd4r4dlurulldl6uru3ldl3"
	"uruldluu",

	// 46
	"######xxxxxxxxxxx!"
	"#....#xxxxxxxxxxx!"
	"#....#xxxxxxxxxxx!"
	"##   ############!"
	"x#   #  #   #   #!"
	"x## ## $ $ $$   #!"
	"xx#    @# # #####!"
	"xx#  ##$# $  #xxx!"
	"xx####   $   #xxx!"
	"xx#  $   #####xxx!"
	"xx#      #xxxxxxx!"
	"xx########xxxxxxx!",
	"dduuluurdrrurrd4luld5rddldllddlluuruu3ldl5urullr5d3ru3rurrd4luldr3dlddr4u3ldl5u"
	"4d3ru3rurrd4luld5rddldluudrruu4ld3ldl4u3d4ruuld3r3dldl3u3ldl3urul3d4rddrr3ulluld"
	"r5d3lurrdr4u3ldl3uluudr3d4rddrr3ullul2(d3rd)4ldl3u3ldl3uruulldr3d4rddrr3ulluldrd3"
	"ldl4u3d3ru7rurrd8luldrd3ldl3uruldlu",

	// 47
	"xxxxxxx#######xxx!"
	"########.....#xxx!"
	"# $   $ .....####!"
	"#  $ $ #.....   #!"
	"##  ## #.....#  #!"
	"x#  $  ###$### ##!"
	"x# $  $  $   $ #x!"
	"x#$####  $   $ #x!"
	"x#   #  $# #####x!"
	"x###   $$ $ $  #x!"
	"xxx#### $  $   #x!"
	"xxxxx#@  #######x!"
	"xxxxx#####xxxxxxx!",
	"ruu3lull3urrdrr3ulu3rd6r3dlldll5ulurrdd3r3d3ldl5u5dllurdr4ullull4dllurd4rdr3udd4lu4l3d"
	"rrd4ruudd4lulluurrurrd3rdruud4l3ulu3rd3rurdldlddll3dlluruddrul3drurr6urullur4l4d3rdr3ul"
	"urrul4d3lddrulurrdr3urul7dll3ulurrdr3uruu8ldrru4rdr3dll3drdr6udd4l3ulu6rdlu4ld5lu9r4l3d3"
	"luulu6rll3d4luulu6rl3dlld5rdr4u3d4r3ullrr4d3lu3l3drr5u5drrdrru3lrd3lr5ud3l5dr4ulu6rdr3urull",

	// 48
	"xxx#####xxxxxxxxxx!"
	"xxx#...#xxxxxxxxxx!"
	"xxx#...##xxxxxxxxx!"
	"xxx#....####xxxxxx!"
	"x####......####xxx!"
	"x#  #....     #xxx!"
	"##  ###  ###$ #xxx!"
	"# $ $ #$#  #  #xxx!"
	"# $    $  $## ####!"
	"#  #  # #   $$$  #!"
	"##  $## #$ $     #!"
	"x#$  $  # $ $#  ##!"
	"x#  $# $ $   ####x!"
	"x##  ## @#   #xxxx!"
	"xx#  #########xxxx!"
	"xx####xxxxxxxxxxxx!",
	"dluu3luururr3urulldl3urulddrr5dlldldd3r6urulldluudd8r4dlddld3ldl8urul8drruruulddrdlldl8ul3ul"
	"dd4rd4r4dldllululrur4dldll7urulldlurr4d3rddrrdld3ldl8uruldluulrr5d3r3drd3ldl8urulldl3udrr5drr"
	"3drdlldl8urulldluurr5dlldldlluluurd4rll3d3r7u4d3lddllulu5rll3d3r6urulldlurr4d5luurdld4rll3d3r6"
	"urul4dllulluldld5rll3d3r6u6d3ldll3ulu5rll3d3r5urullurrd5r4drdllulddlddrruud4ldl8u3d5l3d4rdr6uru"
	"ulldr3d3lddl4druulu3rdr7urul4d3rd3r4u4l4r5d3ru6lddrd3ldl7urul3drr3drdlldl8u6rddluru4l4r5d3l"
	"ulddrdlldl7u",

	// 49
	"xxx#####x!"
	"xxx#   ##!"
	"xxx# #  #!"
	"x### $  #!"
	"##   # ##!"
	"# .#.#  #!"
	"# ..*$$ #!"
	"# *#.#  #!"
	"##  ##$##!"
	"x#$ @  #x!"
	"x#  ####x!"
	"x####xxxx!",
	"3(lu)ururrdd5urrddlrddrddlull3urrddrdl3ulldlldlddruddrddluud4ruuruulu"
	"ull3dlr3urrddrddlull3urruull3durrddrdll",

	// 50
	"xxxxxx########x!"
	"xxxxxx#      ##!"
	"x######  ##$$@#!"
	"##  #  $$ #   #!"
	"##$       $ $ #!"
	"#   # $########!"
	"#  $#  #... .#x!"
	"# $ #$$ ...  #x!"
	"#  $#  #...  #x!"
	"##  #  #...###x!"
	"x#  #  #####xxx!"
	"x#######xxxxxxx!",
	"dlld3ludlldldd4r4luurdld3rurd3l4urd4rurrd6lul3dld3rurrddlu3l3ur3u4rddrd5l"
	"ul3dld3rdrruulddu3l3ur3u5rddrd6lul3dld4r3l3u3ruld3r3u3lddrdllruuldl3dld3rd"
	"3ruuldrdllu3l4urrdlul3dld5r4l4uldlldll3drurdll3urduruulddl3drr3ulu3rur3dld4"
	"rd3ruuldrdllu4l3u3ldllddrdr3ulu3rur3dld5rdrruuldrdlu5l3u3ldlldrdruulu3rur3dl"
	"d6rdru6l3u4l6dr5ulu3rur3dld4r3luluru3lulddldrdruulu3rur3dld3rllddl4uru3luldd"
	"ldrdruulu3rur3dldrr",

	// 51
	"xxxxxxxxxxxx#####!"
	"xxxxx########   #!"
	"######@#   ## # #!"
	"#   ##   $      #!"
	"#...   ## ### ###!"
	"#..## ##    # #xx!"
	"#..#  ##$#### ##x!"
	"#..# $$     #  #x!"
	"#..#  ## $  $  #x!"
	"#####  #  $ #  #x!"
	"xxxx#$$ $$# ####x!"
	"xxxx#       #xxxx!"
	"xxxx#########xxxx!",
	"d3rddlddrrdrrlu3luuruu3ldlddlddr3udd3rdrru4lrruuruu3ld3lul4d3u3rddlddr3udd3ruur"
	"uu3ld3lul3duu4ru7r4drddlull3d6l6udd3ruuruu3ld3lulddu3r7drruldl6udd3ruuruu3ld3lu"
	"ld3r7d4ru3ldl6u5d3ruuru3lrruuruu3ld4lul4d3u4rddlddr3u5d4ruu3drr3ulu4lrruuruu3ld"
	"4lul3duu4rddlddr3udd3rddruru4lrruuruu3ld4lulddu4rddlddr3udd3ruuruu4r4drd3ldluru"
	"5lrruuruu3ld4luld4rddlddr3udd3ruuruu4ruurrddlruull6drd4ldluru4lrruuruu3ld4l3rdd"
	"lddr3u5d3ruuru3lrruuruu3ld3lrrddlddr3udd3ruuruu3ldll",

	// 52
	"########xxxxxxxxxxxx!"
	"#      ######xxxxxxx!"
	"# ####      #xxxxxxx!"
	"# #  ### ## #xxxxxxx!"
	"#     $   # #xxxxxxx!"
	"# #  #    # #xxxxxxx!"
	"# #$ ### #  #x######!"
	"# # #### # #### ...#!"
	"# #   # $$ #  #  ..#!"
	"# #   #   ##$    ..#!"
	"#  $$ #     $ #  ..#!"
	"###   #   ##$ ######!"
	"xx##########@ #xxxxx!"
	"xxxxxxxxxxx####xxxxx!",
	"ruu4ldlulurudd5ruuldrd4ldlu5rddluru4ldl2(lu5rdru)ud5ld6luurdld5rdrulu5r4ld5l5ulul"
	"d3ruluu3r4dlddldld4rdrulu4r3ld4luuruur4u3l3dllurdr4dld5rdrulu3rdru3ld4luuruur4u3l"
	"3d3ullu5l3drr4drr3dlul5uru3rdr4dld5rdrulu3rurrld3ld4luuruur4u3l3d3ullu5l3d3rl4drr"
	"dldl5uru3rdr4dld5rdrulu3rdrruuddlu3ld4luuruur4u3l3d3ullu5l3d3r3l6drrurrdldl6uru3r"
	"dr4dld5rdrulu4r3ld4luuruur4u3l3d3ullu5l3d6rdr4dld5rdrulu3rurd3ld4luuruur4u3l7dld"
	"5rdrulu3rdruu",

	// 53
	"#####xxxxxx!"
	"#@  #######!"
	"# #$#  #  #!"
	"# $    $$ #!"
	"### ##$#  #!"
	"x#  # .# ##!"
	"x#  $..   #!"
	"x#  #..## #!"
	"x#####.   #!"
	"xxxxx######!",
	"rrdd3r4d4u3luullddrrddlddrurl3urrur4drruuruuldllddldll3urrurd3l3d5r"
	"uuru3lddldll3ulluurrddrrurddu3lddldrr",

	// 54
	"xxxxxx#####xxxx!"
	"xxxxx##   #####!"
	"x##### $  #...#!"
	"x#   # # ##...#!"
	"x# #   # #.. .#!"
	"x#   ##   ....#!"
	"####  $$$ $#  #!"
	"#  # ##  $ ####!"
	"#  # ## $  #xxx!"
	"# $$$ $  $$#xxx!"
	"## #@##    #xxx!"
	"## #### #  #xxx!"
	"#       ####xxx!"
	"#       #xxxxxx!"
	"#########xxxxxx!",
	"urrll4ulluurrdrruururrdl3drddrulurrurrddlull4dlddr5ulu3rdr3udldll4dluulldrruruu3l"
	"du3rddllulu4ruurr3dlullddlulu4rdruuld3l4dr3ulurrurrddl3udll6dll4u4dldd5l3urr3u3ru4r"
	"urrddluull4d3luru4dlu3d5l3u6r4l3u3ru4rurrddluruldllddllulu5rdru3l5dl4ulu4rll4d3luudd3"
	"l4ulluurrdrruurur3duullddll4duu3ru4rlddllulu3r3l7d5l3u7rdr5u4d9luurdld8rdr4u",

	// 55
	"xxxxxxxxxxxx########!"
	"xxxxxxxx#####   #  #!"
	"xxxxxx###   #$ $ $ #!"
	"xxxxx## #     $ $  #!"
	"x#####    # #$ # $ #!"
	"x#  #  # ## #   #  #!"
	"x#    ##### ### #$ #!"
	"x# $## ...# ##  $  #!"
	"x## ## ...#  #    ##!"
	"x#  ###...   ######x!"
	"x#  $ ....####xxxxxx!"
	"x#  #######xxxxxxxxx!"
	"### $ #xxxxxxxxxxxxx!"
	"#@$   #xxxxxxxxxxxxx!"
	"##  ###xxxxxxxxxxxxx!"
	"x####xxxxxxxxxxxxxxx!",
	"Rdr3UluuruUluR3dlddr4U3d4Ru4r6urrRddr3drruruulUlU5LulldRur6Drd3Lrr6u3ruurDl3dr3drrur3ulluLrd"
	"rr3dldll3uluU3l6dllullddRUUluRdrdrr6u5rdrru7LulldRur6Drd3LullddrUluRd3r6u7ruulDrd7LulldRur6Dr"
	"d4LdlUruulldRd4r6u7r4dl3Uru7LulldRur6Drd4LdlUUluRdd4r6u4ruullDurrddl3LulldRur6Drd4LdlUUd4r6u3r"
	"ddlUru3LulldRur6Drd4LdlUd4l3uluur4Dld5Ru4r6ulld3ldldLruru3rurr6d4ld4l3uluur4Dld4R3l3drruLdlUUlu"
	"3Rll4urruru3ru4ruurDrd4LulldRur6Drd4L3r6u6ru3LulDrd3LulldRur6Drd3Lrr6u3rddrddRdr4Uru7LulldRur6DrdLL",

	// 56
	"xxx######xxxxxxxxxxx!"
	"x###    ###xxxxxxxxx!"
	"x#        ####xxxxxx!"
	"x# #$$$## #  #xxxxxx!"
	"x# #    # #  #######!"
	"x# #    # # $   ...#!"
	"x# #$#$## #$    ...#!"
	"##         $$###...#!"
	"#  #$$$## #$   #...#!"
	"# #     # #    #...#!"
	"# #  $  # # ## #...#!"
	"#  #$#$##  #   #...#!"
	"##       $   $ #...#!"
	"x# #$$$# ####$##.###!"
	"x# # @ #  #  $   #xx!"
	"x#  ###   # $$ ###xx!"
	"x##     ###    #xxxx!"
	"xx#######x######xxxx!",
	"rudlluruluururudldll3(ur)uuruluddlluuruurrdrr9drdrrurr3ulludrr3dlldllul4urru6rur6d5u7ldll4"
	"drdrrurruu3lurudrr3dlldllul4urru6rur5d4u7lddrulu6rur4d3u6ld3l5ullull3dr3d5rdrulu6rur3duu6ld"
	"3l5ullu3ldll5d9rdrulu6rurddu6ld8l3druulu7rdrulu6rurd6ld7lddrrdluulu6rdrulu6r5ld10ldl3dr4drd4"
	"rur3ull4ulu6rdrulu5r5lu6r6d5u5ld8l7drr6ulu6rdrulu5rur5d4u5ld8l5drdr5ulu6rdrulu5rur4d3u5ld3l4d"
	"rd4ldllurdr5ulu6rdrulu5rur3duu5lddrr4d8ldllurdr5ulu6rdrulu5rurddl7d3lud3r8u4lddrr4d8ldllurdr5u"
	"lu6rdrulu5rurdl8dllddl3ud3r8u4lddrr4d8ldllurdr5ulu6rdrulu5r8dlldd3lurdr3ud3r8u4lddrr4d8ldllurd"
	"r5ulu6rdrudrr3dl4dllurdruud3r9u4luul3d4rur7d6u4lddrr4d5l5urrdrulu4rur6d5u4ld3l5d3ldllurdr5ulu6"
	"rdrulu4rur5d4u4ld10ldl3drd3rdr5ulu6rdrulu4rur4d3u4ld8l3drlddrr4ulu6rdrulu4rur3duu4ld6l3ulldru"
	"rddulldd7rdrulu4rurddu4ld8ldrddllurrdruulu6rdrulu4r3ld6luul3ur4d4ull5d7rdruulu5rd4ld8ldrddllu"
	"rrdruulu6rdrulu4r3ld3l5ullul5dulldd7rdruulu4r",

	// 57
	"####xxxxxxxxxxxxxx!"
	"# @#xxxxxxxxxxxxxx!"
	"# $#####xxxxxxxxxx!"
	"#  $   ##xxxx#####!"
	"#   $#  #xxxx#   #!"
	"##   $  #xxxx# $ #!"
	"x##$# $ #######  #!"
	"xx#   #$    #  ..#!"
	"xx# # # $## # #..#!"
	"xx#      $     ..#!"
	"xx###########  ..#!"
	"xxxxxx#     #$#..#!"
	"xxxxxx# $      ..#!"
	"xxxxxx#     #   ##!"
	"xxxxxx###########x!",
	"dlddrdrddrrdd10rur3du3lduulluu3ldld8rurddlddll3u5luluuluur3drdd5l4urr3dulldd12r4luu4ld"
	"uull3d9rdrruuld10l4uruulldurrdr4duull3d10rdru13l4ulurd3rur4duull3d10r8l3ul3ulld3luurdl"
	"drrd3rur4duull3d9rluurrdd8l3ul3ullduldlluurdldrrd3rur4duull3d9rdru8l3ul3ulldld3rur4duu"
	"ll3d9rl3drrud4ldllu5rdru4ld4lu7rl5urruruuldd",

	// 58
	"xxxxxx#####xxxxxxx!"
	"xx#####   #######x!"
	"xx#@$    $   $  #x!"
	"x#### #$#  ##$  #x!"
	"x#  #  $  $ #   #x!"
	"x#  ### ##  # ####!"
	"x#  $ # $  #  $  #!"
	"x#        ### $  #!"
	"#######$ ##  $ ###!"
	"#.....#  #  $  #xx!"
	"#.....## $ #$  #xx!"
	"#....     $   ##xx!"
	"#...   ########xxx!"
	"########xxxxxxxxxx!",
	"4rurrd4r4drddl3d11ldluud7r4u3luldlud6rul5drruld4r3uruul4u2(3ldd)r4drd7l6r4u3lulld4r3u3r"
	"uulull5dr4drd6l5r4u3lulld4r3u3ruullul5dr4drd5l4r4u3lulld4r3urrurullul5dr4drd4ldlu4r4u3l"
	"ulld4ru3ruru3lruull4dr4drd4l3r4u3lulld4r5ullddrluurr4dr4drd3ldluu3lrrd9rurulldrd8l3r5ur"
	"r4u3r5d3rulldlddrdluldrd7ld4l2(uuddr)uurd3r4u3lulld4r5u6r7drdluldrd9ldlu9ruurruluurrdlu"
	"l3drdluldrd9luld7ruururddrr3ulddrdld9ldlu7ruurrdrd10l10r7urruu7lul5dr4drd5l4r4u3lulld4r"
	"ur4drd4l3ruuluru3lulld4rur4drd3ldlludru3r4u6l3urddld5rur4drd4l",

	// 59
	"#######xxxxxxxxx!"
	"#     #xxxxxxxxx!"
	"# ### ###xxxxxxx!"
	"# #  $  #xxxxxxx!"
	"# # $ $ ##xxxxxx!"
	"# #@ #$  #######!"
	"# # $# $$#  ...#!"
	"# #$ #   #  ...#!"
	"# #  #$     ...#!"
	"# #$ #  $#  ...#!"
	"#   $ $  #  ...#!"
	"###  $  $#######!"
	"xx### ## #xxxxxx!"
	"xxxx#    #xxxxxx!"
	"xxxx######xxxxxx!",
	"rdl3urdrrdrrddld6r6lddrulu5r4l3ulluuluu4l9drrdrrurl3d3r4ulu4r3ldlldldrrlldd3r4ulu3r"
	"druud3l3ulddlddu4ruu3rdrddluulddlu3l3dluulu7r5l3d3lurdruulu6r4l3d5luruuldrdrrdruulu5r"
	"3l3ulluur4dld4ru3rddluuld4l4ull3u4l9d5rdruulu4rd3rllu4l4u4lurl3drulu3rur4duul4du4rurr"
	"ld3l3d3lur5l9u4rddldrrur4dld6r4l3dluulu5r3ldd4l4ul3d3urulu3rurddull3u4l9d5rdruulu4rdr"
	"rlu3l3ulddld4rurdldr",

	// 60
	"xxxx###########!"
	"x####.........#!"
	"x#   .*******.#!"
	"x# ###.......##!"
	"## # #.$$$$$.#x!"
	"#@ ####     ##x!"
	"# $  ## $$$ #xx!"
	"# $ $  #   ##xx!"
	"# $ $ $    #xxx!"
	"# $ $ $  ###xxx!"
	"# $ $  ###xxxxx!"
	"# $  ###xxxxxxx!"
	"#  ###xxxxxxxxx!"
	"####xxxxxxxxxxx!",
	"6drluurdl3urdrr3ldd3ruru3ru2(ulur)rudlluru4r6lrddlu4l4dldd6rdr6urulu3rllddllu5l5dld6"
	"rdr5udruurrurldlud3lu5l4drdld5rdr7u3r9l4drrdld4rdr5u3dr4ulurrll6dllulluldld5rdr5uluru"
	"llrr6d4lddllulu6rdr6u5d4lddlulu5rdr5uruulldr5d7l4dr3ulu6rdr6u6dlldlulu3rdr5urul5dllddl"
	"ldluulu5rdr5ulur5d7l4dr3ulu6rdr4urruudr3l3drr3uddruul4dlldllurdr5udlu",

	// 61
	"x###xxxxxxxxxxxx!"
	"##@#########xxxx!"
	"# $#   ##  #xxxx!"
	"#      $   #xxxx!"
	"# $##$###  ##xxx!"
	"#  ## ### ###xxx!"
	"#####.###   #xxx!"
	"xxxx#....#  #xxx!"
	"xxxx#....#  #xxx!"
	"xxxx#....## ##xx!"
	"xxx### ####  #xx!"
	"xxx#         #xx!"
	"xxx#   #### ####!"
	"xxx#####  $ $  #!"
	"xxxxxxx# $ $   #!"
	"xxxxxxx# $$$$$ #!"
	"xxxxxxx#       #!"
	"xxxxxxx#########!",
	"Dld3RurrdRRllulldRRl4Drddl4Uddr4d5rddLrRdrruLr3d6l3uRRdRRl6Uluur4Drd6LdlluRdr3UluR3d5rdd3"
	"l3d6r3ulLdl6Uluur4Drd6LdlluRdr3UluurDldRRldd5rdd3r3d3l8Uluur4Drd6LdlluRdr3UluurDldRuRl3d5r"
	"dd3ldRRlldd3ru7Uluur4Drd6LdlluRdr3UluR3d5r5ulluuruulDDulLLulldRRl5Dr3d5r5ullUUddrr7d3rdLLrr"
	"dd3lu7Uluur4Drd6LdlluRdr4UluRRl4d5r5dlUUluRdr6Uluur4Drd6LdlluRdr4UluR4d5r5ulluuruulDDulLLul5"
	"Dr4d5r5ullUUru4Lul4D3u4lddrUlu3Rur3Duu4r3drr9ddrUUruLdl6Uluur4Drd6LdlluRdr4U3d5rdd3lddRRdr8Ul"
	"uur4Drd6LdlluRdr3Udd5rdd3rddLLdl8Uluur4Drd6LdlluRdrUU",

	// 62
	"####xx####!"
	"#  ####  #!"
	"#   @    #!"
	"# $$$$$$ #!"
	"##      ##!"
	"# $$$$$$ #!"
	"#        #!"
	"#  $$$$  #!"
	"###    ###!"
	"x# $$$$ #x!"
	"x#      #x!"
	"x#  $$  #x!"
	"x###..###x!"
	"x#..**..#x!"
	"x#......#x!"
	"x#..##..#x!"
	"x#......#x!"
	"x########x!",
	"lDulldRdDDuu4R4ldd3rDRdDDllUdrDLdDldRRlldd4r3ulDll4ulldRur3Dl3d4ruullLulDDld3Rlluur3urur"
	"4u3lDu3r4dll4drruLdl3UruLrdDDrdLLulDDldRRluurr4urrdLLul3DrdLulDDldRuur3ullu3RdrruulDrdLLu"
	"l3DrdLulDDurr3ur5u3ldRRur4DrdLLul3DrdLulDrr3ur4ull6Dld3RurDDuull3u3luRd3r3ulld5Dld3RurDull"
	"uuruuLruulld5Dld3Ruluur4ul6DldR7ull3DldRur3DrdLLulDDurr8ulluurr9DrdLLulDrr9uur6DrdLul3DrdLL"
	"r8u3ldRRur7DrdLr3ur5urrdLLul7D7u3luRur9Dr9ur6DrdLulDDldRRluur4urruuLLul8DldR9u3luurr9DDrdLLr"
	"9uuur8DrdLulDDrdL9ulluRRur9DD9uur8DrdLulDr9urrd3Lul9DDurr8ur3Drd3Lul5D",

	// 63
	"xx###########xx!"
	"xx#....   ..#xx!"
	"xx# .......##xx!"
	"### .#....#####!"
	"#  #$##..##   #!"
	"#     #### $  #!"
	"# $$  #  #  $ #!"
	"##  $$#   $$ ##!"
	"x#$  $   #$  #x!"
	"x# $$ #  #  $#x!"
	"x# $ $#### $ #x!"
	"x#       #  ##x!"
	"x#### $  # ##xx!"
	"xxxx### ## #xxx!"
	"xxxxx# $   #xxx!"
	"xxxxx#@ #  #xxx!"
	"xxxxx#######xxx!",
	"u3Rdr4UrUrUUlU3LrruuRlddlldllLLUUruL3UruL6dllUdrrd4ru3rdrddldl3d3l3u3lu8U9drUUddrr3d"
	"3r3ururuulu3ldllLdl6Ulu3RdrUruLLdll6d4ruulDrd3Ldl6Ulu3RdrUruLd3l5dlluRdr4Ulu5RdrUluRR"
	"3ld3l4d3luurDldRRdr4Ulu5RdrUluRlld3l4dlluRdr3Ulu6R5l3drdDlddrddrr3d3r3ururuulu4ldlLdl6"
	"Ulu4RurDrdLLu3l9dlluu3UluRRdr3Ulu4RurDrdLulDu3l3dll3dRurrddl6Ulu4RurDrdLu4l3dll4dRurrd"
	"dl7Ulu5RurD5l3dll5dRdr8Ulu5R4l3dr7dRul3u3ru3rdrddldl3d3luUruLLdl3Uddrr3d3r3ururuulu4ld"
	"lLdl6Ulu4RurDDu4l3dr3d3ru3rdDlUru3LulDrd3Ldl6Ulu4RurD4l3dr6drr3d3r3u3Uru3LulDrd3Ldl6Ul"
	"u4R3l3dr3d3rurruurDDlddrruLdlUru3LulDrd3Ldl6Ulu3Rll3dr3d3ru3r3urrddLLulDrd3LulDrd3Ldl6"
	"UluRRl3dr3d3ru3r3urDrdLLulDrd3LulDrd3Ldl6UluR3dr3d3ru3rdrUUruLulDDrd4LulDrd3Ldl6Uddr3d"
	"3rurr4dr3Uru4LulDrd3Ldl5U",

	// 64
	"xxx######xxxxxxx!"
	"xxx#    #xxxxxxx!"
	"#### ## #######x!"
	"# @$  $   #   ##!"
	"# # $  $  # $  #!"
	"#  $  ##### #  #!"
	"#### ##  #### ##!"
	"xx#  #  ##  #  #!"
	"xx#            #!"
	"xx#######  #  ##!"
	"xxx#..  #  ####x!"
	"xxx#..      #xxx!"
	"xxx#..  #   #xxx!"
	"xxx##########xxx!",
	"lddrrururrdlullddlluu4rddl3d9r5ulldrur4drd3lul3dlddrru6l4r3u5l3uruul4dld9rdr4urulu"
	"lldrur4drd3lul3dlddrru5l3r3u5l5u3lddrrur3dld9rdr4urululldrur4drd3lul3dlddrru4ldlu3r"
	"3u5l4u3rurrd4lul4dld9rdr4urululldrur4drd3lul3dlddrru4lullrd3r3u5l7u3rddllrruu3l6dld9"
	"rdr4urululldrur4drd3lul3dlddrru4ldllru3r3u5l5u4rd3lul4dld9rdr4urululldrur4drd3lul3dl"
	"ddrru4luldrdl",

	// 65
	"#######xxxxxxxxxxxx!"
	"#.....#xxxxxxxxxxxx!"
	"#...#.#xxxxxxxxxxxx!"
	"#.. ..#x####xxxxxxx!"
	"#.    ###  ########!"
	"#### ## $         #!"
	"####    #  $$ #   #!"
	"x#   $ #  # $ #####!"
	"x# # $ $$ # ###xxxx!"
	"x#  #$##     #xxxxx!"
	"x##  $ $$## ##xxxxx!"
	"xx##   @  $  #xxxxx!"
	"xxx###  ###$ #xxxxx!"
	"xxxxx####x#  #xxxxx!"
	"xxxxxxxxxx####xxxxx!",
	"u3lululuurru3rurr4drr3u5drdd2(l4ul)ld3ldllddrdrd6r6lululuurru3rurr4dlduruuldr3ull"
	"dlddrrlluullddruruldl3urul4dlld3(dr)rul3uruldl3uluudr4dlld3(dr)4urururrddldlluuld"
	"l3uruud3ldluururddr4dllddrdrruuruld3rd3rdd3luudlldl3ul4uru3lrr3drrdldl4urulldlurr"
	"3d3rurr3d3lrrdd3luurul3drddru4ruullrrddrddluru4luudlldl3ul4urullr3drrdl3drddrurul"
	"ldl3ul4urul3drrdlurrurrurdrdlul3d3lrrdd3luul4uluuldrr3drrdlurru4r4dllrrddrddluru4"
	"luuru3lrrdd3luul4urulldluudrr3drrdl3drddrurulldl3ul4urulldlurr3drrdlurru6rdlul6dr"
	"ddluru5ldluruldl3ul4urullr3drrdldl4urul3d3ru8rdrru7lul4duu4rdlul3dllrrddrddluru4l"
	"uuru3lrrdd3luurul3drddrurulldl3ul4ulur3drrdldl4u",

	// 66
	"xxxxxxx#########!"
	"xxxxxxx#  ##   #!"
	"xxxxx### $     #!"
	"xx#### @$  ##$##!"
	"###  #### ### #x!"
	"#  $ # #.*..# #x!"
	"# #   $ ....# #x!"
	"#    # #....$ #x!"
	"###  # #####  #x!"
	"xx####    $   #x!"
	"xxxxx###$  $ ##x!"
	"xxxxxxx# $$ ##xx!"
	"xxxxxxx#   ##xxx!"
	"xxxxxxx#  ##xxxx!"
	"xxxxxxx####xxxxx!",
	"ru4rurrdl5dllu3lurrluuluur3duu3rurrd4l3r5dlddr6u4dllu3luruuluur4dldrrl4u3rurrd4ldlluur4dl"
	"dd4rdr5u4d3lul4u3rurrd4ldl4dlull3d5rldldlu3d4(ru)uru3lulld4rdr5u4d4l4uluur4d3u3rurrdl5d5lu"
	"r5ld3luurrurdld5r4lu3lddrrdrulu4rl3drrdrrurlddruruuru4l3r3dllurdruuru3lrr3d4lu3rdruurullrdd"
	"ll3dluulu3rdruurulr5u3ldlluur3d",

	// 67
	"##################!"
	"#   ##       $...#!"
	"# $ $ $#$ ####  .#!"
	"# $$#$       @...#!"
	"# $   #$##$$ #...#!"
	"# $ $$#    $ #...#!"
	"#         ## #...#!"
	"##################!",
	"4luu3ldu9rdd3lddllurdrulu4ruu6ldd5rurr3duulul3duulldd3ld8l5urrdrrllddrru10ruu9ldlddlluurrd"
	"9rurduu9ld3lulld4rd9rurrddluulu8ld5lddrulu4rd9rurdluu8ldld9rdru3ldd3ldlluuddll3u3d3l3ururrd"
	"10rluu8ld3ldllu4rd9ruu8ldl4dluluulu3rd8r4luu5rddur3duuluu8ldlddldluulu3rd9rurdduluu8ldld9rur"
	"d3ldd4ldluudd5l3ulu4rd9ruu8ldld8r5ludlluu7r",

	// 68
	"x#######xxxxxxxxx!"
	"x#     #xxxxxxxxx!"
	"x# $ $ #xxxxxxxxx!"
	"x# $ ####xxxxxxxx!"
	"## $##  #########!"
	"#   #  $  ......#!"
	"# *##  #$ #  $  #!"
	"#.....*.  ## $  #!"
	"#.###   ##  ##$ #!"
	"###x######      #!"
	"xxxxxx#@$  $ $$ #!"
	"xxxxxx###   #   #!"
	"xxxxxxxx#########!",
	"rrdrruru3ruuld3ulldrurdu5lddlldluluu8r4ldd8luurdld6rlud4l6urrdlul5dld4rdru4l5urrdlul4dld4rdr"
	"ru5luuruluurrdlul4d5u4rd3lul4dldd4rdrru5l3ruurdlddrru4lrruu4rdd5lruu6rdrru6lulddlddrrulluu6rd"
	"4ru8lulddlddrruluurrdrdluu7r3dluuru8lulddu9r6dllur4uru4l3r5dllurdr4uru3lddrurrddluurullr5d3ldl"
	"luru3rdr4urul4d4ld3rdr5u5dr5u",

	// 69
	"xxxxxxxxxxxxxx####xx!"
	"xxxxxxxxxxxxx##  ###!"
	"##############  $  #!"
	"#........... #   $ #!"
	"#.# #######. #$ $###!"
	"#.# ####### ##   ##x!"
	"#..           $$$@#x!"
	"#  ######## ##    #x!"
	"####xxx#   $$ #####x!"
	"xxxxxxx# $    $ #xxx!"
	"xxxxxxx## $$  $ #xxx!"
	"xxxxxxxx##  $$  #xxx!"
	"xxxxxxxxx##     #xxx!"
	"xxxxxxxxxx##   ##xxx!"
	"xxxxxxxxxxx#####xxxx!",
	"dllu4lddl3(dr)uuldl6uru9l3d7r7l3u8r5dldr3u3rd3ru6l3u8l3d7r7l3u8r5d3l5(dr)r3(ul)6uru8l7r7drru"
	"ldl6uru7l6r6drruldl5uru6l5r5drr5dlul8uru5l4r5dllddrdr7uru4l3r5dlldrdr6uru3lrr5drr3dldl8urull"
	"r9d4ru3ldl8urul8d4ru3ldl7u6d4ru3ldl5ud3ruurdrd14ldl3udd14r3urddl3ul3drd13ldluud13rd3ru15ldlu"
	"14r5ur4d3urrd3lul3drd13l12rd3ru14l",

	// 70
	"xxxxxx#######x!"
	"xx#####     #x!"
	"###   # ##$ ##!"
	"# $   #      #!"
	"# $# ##$# #$ #!"
	"#@ # # $  #  #!"
	"# $# # $###$ #!"
	"# $  $    # ##!"
	"## # $# #    #!"
	"# $#  ..##. .#!"
	"#  ### ..#.# #!"
	"#   ## ......#!"
	"##############!",
	"uurrur5d3rluur4dldr3u3l4u3l4d5rurd4u5rddl3drdl3ur3ul5dldr8uldu3l4duu3rur6drdlullullddldd6"
	"rud6luurdld5r4l4uluur5dld4r3l8urrddlruull7dld3rlluu3luurrur4dldrrl4ulldldruu4luurdld5rur4d"
	"ldr4u6l4u3r3d3ullddldd5rur4d3u6luurdld5rur3duu5lddlddr4uluurdld5rurdd",

	// 71
	"xxxxxxxx#######xx!"
	"xxxxxxxx#     #xx!"
	"xxxx#####     ###!"
	"#####   ## ##...#!"
	"#     # ## ##...#!"
	"# ###$$$ $ ##...#!"
	"# #   $ $  ##...#!"
	"# # #$ $ $###...#!"
	"# #   $@$   ## ##!"
	"# #  $ $ $ $#  #x!"
	"# # ######     #x!"
	"#              #x!"
	"################x!",
	"ruluurdrr4u3rdr7d4luurdld3rdr4ulururdll4u3l4dllurdr3udd3l3drdrrurdld3rdr4ul6u4ld3rur5dr"
	"4d3luulluulurdr3udd3l3dld4rurdld3rdr5ul5u4ld3rur4dr6d11l3u3r3luu4rdrulurrdr3uddllddldld"
	"4rurdld3rdr6ul4u4ld3rur3dr7d13l7u4rd4rdr3uddll3dld3rurdld3rdr7ulurluu4ldrrl3d5luurrdull"
	"dd4rdr3u3dlddldrrurdld3rdr7ul3ulldrurdduu4ld3rurd3l3dl3d5ld6rurdld3rdr6u5d3lull3u3lddld"
	"5rurdld3rdr5u4d3lu8l3urrddld6rurdld3rdr4u3d3lull4u3l3dld5rurdld3rdr3u",

	// 72
	"xxxxxxxxxxxxx####x!"
	"xxxxxx########  #x!"
	"xxxxxx#     #   #x!"
	"xxxx### ###   # #x!"
	"#####     $   # #x!"
	"#   $ $ ###$$ # #x!"
	"#  $ $$$  # $## #x!"
	"#  #$   #  $  # #x!"
	"##   #### ### #$##!"
	"x# ###......     #!"
	"x#   $......## # #!"
	"x# ###......##   #!"
	"x#$$ #   #########!"
	"x#     # $@$ #xxxx!"
	"x#######     #xxxx!"
	"xxxxxxx#######xxxx!",
	"dll5u5ruu3l3rdd7l4d4l3u3r3luurru3r3u4rdduu4lddrr4du4ruu3lr4urrurr6d6ullddlul3duu4lddrr3dr"
	"dlldrruu3ruu3lr3urrdlduu5lddrr4du4ruu3lrr3uldduu4lddrr3drdd3lu3ru4rddrruu4lruu3lr3u4lddrr"
	"3drdllulrr3ulluulldru5r3dllullulu5ruu4ldu4rdrdrdlulddrdllr3u4lddrr3drdl4ullullu6rurdrdlul"
	"ddrdllr3u4lddrr4d4ulldluuddlldlluluu4ru6rurdrdlulddrdllr3u4lddrr3drddllur4u3lu5lddrulu4ru"
	"6rurdrdlulddrdllr3u4lddrr3dlddrrul4u3luddlluruu6rurdrdlulddrdllr3u4lddrr4d4ulldluulu6rurd"
	"rdlulddrdllr3u4lddrr3d3u5lddll5d4rurruurldrl3drruldl3u3d4ru3ldluulldlluldl7u3rdruud3lurru"
	"6rurdrdlulddrdllr3u4lddrr4d4u3lud5lu4ru6rurdrdlulddrdllr3u4lddrr3d3u3lulu6rurdrdlulddrdll"
	"r3u4lddrrdd",

	// 73
	"xxxx####xxxxx####xxx!"
	"xx###  #######  ##xx!"
	"xx#  ........... #xx!"
	"xx# $ ##### ### $##x!"
	"x####  $ $ #   $  #x!"
	"x#  #  # # #$# @# ##!"
	"x#         #   $ $ #!"
	"x#   ##   # $$$#   #!"
	"##  #     #      ###!"
	"#    # ##  #  ####xx!"
	"#         #   #xxxxx!"
	"########  #####xxxxx!"
	"xxxxxxx####xxxxxxxxx!",
	"ldlldd4r2(uull)3dld3ruurrdrruluulluurdl3dlddll4urrll4drr3uruuru10lul4drd3lul4dld5ruuruul"
	"l4ulldrur3drdlldlluur4d3urr4u10r3dl3dll4urrdruuru10lul4drd3lulddu3r4u10rdd3l3drdr3uddll3"
	"urrdruuru10lul4drdllr4u10r4drdrruluulrddll3uru10lul4drdrruullddrddlddlluluuru3rluluulu10"
	"rurdrddluru10lul4du3r3(ddl)luluuru3rddrruluddllddrrdr3udd5lulld4r3l3uluur3duurr4u10rdd3l"
	"3drruuddll3urrdruuru10lul4drdllr4u10rdd3lddrdruudl4dluulurrl3urrdruuru10lul4d3u10r4drddl"
	"l3udlluurrdruuru11l10rdd3l5druulurdruudlluurrdruuru10lulddllu11r9lddrddl3ulu9r8l4d5ruu4l"
	"dluulu8r7l4d3rudrruu4ldluulu7r6ldd3r4drul3urrddldluudrruu4ldluulu6r5ldd3r4dludlddrrdr4ul"
	"3urrddldluudrruu4ldluulu5r4l4drrdruudrruu4ldluulu4r3l4drrddlddlluluuluurd4rdruudrruu4ldl"
	"uulu3rll4drrddldd3l3ulu5rdruudrruu4ldluulurr2(l4dl)lurdr3ulduu5rdruudrruu4ldluulur2(4dll)"
	"urdr3ulu5rdruudrruu4ldluu",

	// 74
	"xx#####xxxx!"
	"xx#   #xxxx!"
	"###$# ###xx!"
	"# $...  ###!"
	"# #.#*#   #!"
	"# $.#.$   #!"
	"#  ## ## ##!"
	"## @ $ $ #x!"
	"x###   ###x!"
	"xxx#####xxx!",
	"lul3urrllddrddrrdrruluurr2(uull)ddllddrddrrdru3lul3urruurrddl3rddlludrruu"
	"llrrdrrdlddlldllur3udrrurrdlddlldl3udd3ruull",

	// 75
	"xxxxxxxxxx####x####!"
	"xxxxxxxxxx#  ###  #!"
	"xxxxxxxxxx#  $    #!"
	"xxxxxxxxxx# # $ $ #!"
	"xxxxxx##### # #  ##!"
	"xxxxxx#.....# $$$#x!"
	"xxxxxx#....* $   #x!"
	"xxxxxx#*..*.# #$##x!"
	"#######....*# $  #x!"
	"#     $*.*..#    #x!"
	"#  $$ # ##$###$$ #x!"
	"#    $   #      ##x!"
	"#####$ $ ####  ##xx!"
	"x#@# $        ##xxx!"
	"x#    ######  #xxxx!"
	"x######xxxx####xxxx!",
	"drrurruurrdd5ruu3luudd5ruruuldll3ulldlldlluurd3rul5ruururuuld4lul4dlldrdrdl"
	"3d5ruruuldll3urruurudlddrud7lrr4urr3d3urr3dld4ldlu5rurrd6lr4urr3drd3lullrd3"
	"r3drruldluudrruu4l4u4rdrru5lul6dlu5d4ruuruldluudrruu4lulddr5u4rdlrddrd5ldlu"
	"3r3urullul5drrddr3d4l3u3d3rdd5luul4uddrrllddrdd5r2(uu3l)ddldd6rdruud6l5u2"
	"(d3rd)r3uddr3uldluudrruu4l5r3uru5lul3duu4r3drd4lrddr3dldd5luu3luu4r7lddru"
	"lu6r5ldrld3rdr3uddllulu3r4dll3ulurr",

	// 76
	"xxxxxx#####xxxxxxxx!"
	"xxxxx##   ##xxxxxxx!"
	"xxxx##  *  ##xxxxxx!"
	"xxx##  * *  ##xxxxx!"
	"xx##  * * *  ##xxxx!"
	"x##  * * * *  ####x!"
	"##  * * * * *  # ##!"
	"#  * * * * * *    #!"
	"# * * * . * * *@$ #!"
	"#  * * * * * *    #!"
	"##  * * * * *  # ##!"
	"x##  * * * *  ####x!"
	"xx##  * * *  ##xxxx!"
	"xxx##  * *  ##xxxxx!"
	"xxxx##  *  ##xxxxxx!"
	"xxxxx##   ##xxxxxxx!"
	"xxxxxx#####xxxxxxxx!",
	"ululdld3l3ru3rddlu3l3rd6(dl)l7(ur)rul3rdl6(ld)l",

	// 77
	"xx########!"
	"x##..    #!"
	"x#...$ $ #!"
	"###.## ###!"
	"#   ##$ #x!"
	"#  $@$  #x!"
	"##$ ##  #x!"
	"x#  #####x!"
	"x####xxxxx!",
	"l4u3rdllu4rdllddrddl4uru3ldl3drrll3ururr3drddl4u3d3lulldrrddluur3ur"
	"urr4dllrr4ulldl3dllurdruudl3dr3ud3r3ul3ru3l",

	// 78
	"xx####xxxxxxxx!"
	"xx#  #xxxxxxxx!"
	"xx#  #########!"
	"xx# $$ #.....#!"
	"xx#    #.*...#!"
	"x###   $..##.#!"
	"x#  #$##$  #.#!"
	"x# $  ## ## .#!"
	"x#  ##  $ $ ##!"
	"###@ #$    ##x!"
	"#  $$ $   $#xx!"
	"# $  ####  #xx!"
	"#    #xx####xx!"
	"#   ##xxxxxxxx!"
	"#####xxxxxxxxx!",
	"dldururd3ruuld3ruldld4luuluurdrruuluudd4rurrurr4dldldll3uruuddl3drrul3druu3ld"
	"r5ldllu3rluuluurdrruu3rurrurr4dldlrur4ulldrur3duu4lddrulu3rurddu3ld3luuldld4r"
	"3lddllddrd3rur3uru3lulld4ru3rurd4l5drruldl3uru3lulld4ru3r3l4drr3dluuruldlldr4"
	"urulurrllu3rlldd3lulld4r3drr3dlu6ldllu7rlluurdr3uruulurrldd3lulld4r3drrdlrddl"
	"u8l3druulu7r4uruulurdd3lulld4r3drrdlrddlu7l3druulu6r5u3drrdlrddlu6lddrulu5r4u"
	"rulurldllu3lurluurddldrd4rdruud3luuldlluurdldrd4rdru3luuldld4r3drrdlrddlul5u"
	"3drrdldl4u",

	// 79
	"###xxxxxxxxxxxxx!"
	"# ##xxxx####xxxx!"
	"#  ######  ###xx!"
	"#   # $ $$ $ ###!"
	"#  $ @ $    $  #!"
	"# $ # #$  $    #!"
	"#  ## # ### ####!"
	"# ##    #  $  #x!"
	"###... ## $ $ #x!"
	"##....##   $  #x!"
	"#....## $  $###x!"
	"#...###  $  #xxx!"
	"#...#x#  ####xxx!"
	"#####x####xxxxxx!",
	"3r3l3drruuruld3rulruuldrdd3luurrdldlddll4urrdlul4d3(rdluld)drdluurr3u3ruururrdllu"
	"llul4d3(rdluld)rr3u3ruuru4rd4lullul4drdluldrdlul3dlurr3u3ruurulluldllulld4r3d2(rd"
	"luld)rdllrr3u3r3ululd4lddrulu4r3d3(rdluld)durr3u3r3ulul4d3(rdluld)rr3u3ruu7ru5luu"
	"rdld3lul4d2(rdluld)dr3u3ruu4ru5lul4d2(rdluld)rdlr3u3ruu5ruulluldrd4lul4d2(rdluld)"
	"rr6u4rurdrd5lul4drdluldduu3ruu4rddrrddll4uru6lul4drdluldrdllruu3ruu4rddrrdldl4uru"
	"6lul4drdluldrdluu3ruu4rddll3drdr6uru6lul4drdluldu3ruu4rddllddldlddrulu3rdr6uru6lu"
	"l5durruu4r6dllullddrulu3rdr6uru6lul4drdllu3ruu4rddllddrdr5uru6lul4drdlurruu4rddl"
	"ldrdr4uru6lul4d",

	// 80
	"xxxxxxxxxxx####x!"
	"xxxxxx######  #x!"
	"xxxxxx#   $   #x!"
	"xxxxxx# $$ $  #x!"
	"xxxxxx## # $  #x!"
	"x######   $ # #x!"
	"x#      $ $ $ ##!"
	"x# ## #######  #!"
	"x# $  ##...##$ #!"
	"##   ##...#.#  #!"
	"# $ $ #.....$$ #!"
	"#    $$.....#  #!"
	"##$   #..#..#$##!"
	"x# $#$####### #x!"
	"x#    #       #x!"
	"x#### # # #####x!"
	"xxxx#   #@#xxxxx!"
	"xxxx#######xxxxx!",
	"uulldd2(lluu)ruululd4u3rddllrruu3ldduu5rurrdllr3uru3rddlddllrruurr3drddlur3dlu3ldluul"
	"urdd5ruuldrd5l4r4ulluurr5drd4l3r6uluu3ldlddl2(dlld)drddl2(ddrr)uu6r3urullr4d6ldd2(llu"
	"u)rrdduuluurd4rluurdrdrurr6ul3ur8drd6ldrr6ldlddrruulu3rudllulluurddld3rll3uruurrurrd3r"
	"luurr5drd4lrdlluuldduldllu4ld9r6l3uruu7rluurr5drd6ld4l3ulluu10rluurr5drd5l4r4u5l3ulu4r"
	"durur8drd4l3r4d6lddll4ulu5rudlud4l3ullddld7r3l3dlluudluu5r3luulldld5rll3uruu3r3u4rur7d"
	"rd5l4r4u4lururrur6drd4l3r4ullulurrur6drd3lrr8u4ld3rur7drdll",

	// 81
	"xxxx######xxx!"
	"xxxx#    #xxx!"
	"x#### ##$###x!"
	"x#         #x!"
	"x# #....#  #x!"
	"## #....#$$#x!"
	"#   ....#  #x!"
	"# ##....   ##!"
	"# ##....#$$ #!"
	"#  $....#   #!"
	"# $#### #   #!"
	"#  $  $$$$$##!"
	"##$    $   #x!"
	"x# $$# #   #x!"
	"x#  $ $ $$$#x!"
	"x# $   $   #x!"
	"x#@##   ####x!"
	"x########xxxx!",
	"uurrdrdrrurruur3uluuddrruulu5l5rdrddlluuru4ldlluurd4rdrrdldluuru4ldl3urulu5r5drdldluu"
	"ru3l3r6dllul4ul3uruu3r4d3ldluud4r5dl4uru3ldlur5drdr5uru3lu3lrrdr4drdr4uru3ldlu3r8dr6u"
	"ruldluru3luldllur5u3rdu3ldd3l3drll3d4r4lddrulu3rllddrd5rdr5uru5lrr5dllu3rdr4uru4lr5d4"
	"lu3rdr7uddrr8dl3u3dll3ulurdr6u5drdr4uru3l4dl4dlluluudl3ud4rdr5urruuruu4lrruu3l4duu5rd"
	"dluru4lrru2(u3l3d)l3drrl6d3rdr4ulurdr4u3dl4dll3ulu3rdr3udd3l3drdr3ulurdruudl3drrdr11u"
	"ru4lrruu3ldd",

	// 82
	"x####xxxxxx!"
	"x#  #######!"
	"x#$  $    #!"
	"x#   # #$ #!"
	"x# #. .# ##!"
	"x# $...  #x!"
	"##$#...# #x!"
	"#   $## $#x!"
	"#     $  #x!"
	"####### @#x!"
	"xxxxxx####x!",
	"uuld3lulluurrurd3l3drruuruulull3d3uruul4drr3d3lurrdruurur3ulldlluurdldrlddrrurd3ruuru5ldd"
	"ulluurdldrldd3rl3d3rur4uru5lddulluurdldrl3durr3d3lurrdrud3rdr6uru5lddulluurdldrurd",

	// 83
	"x#####xxxxxxxxxxxxxx!"
	"x#   #xxxx##########!"
	"x#$  ######    ##  #!"
	"## $$  $   $  $... #!"
	"# $ ##   #  #$#.#. #!"
	"#    ##  ##$ $ ... #!"
	"# $#    $ # # #.#. #!"
	"#  ## #$  #    ... #!"
	"# #  $#@$## # #.#. #!"
	"#  $$ #$ #  #  ... #!"
	"###      #  #   ####!"
	"xx###   ##  #####xxx!"
	"xxxx#########xxxxxxx!",
	"drdldll3uldrddrr5u3lu3l4drrurr3drr4urrul3u3rurrd3rldd3r3ul6drd3l6ulu3ld5rldd3r3ul5d6luu"
	"3rlddrruu4lulu6r3l3dulldd3rl3drr3urrdrdllrr7ul6drdl6u9ldllu10r3ldd5r3ul6d5u9l4dlddr5ulu"
	"9r8l4dl4dll3ulldll4urruu9rur4du5r3ul5duu6ldd5r3l4u10lddrd3ruulu10r9l4dr3ulu5rur4dulldd4"
	"rlluu5r3ul3duu14lddllurdrulu14r13ldll3druulurdrulu10rur4du5r3uld13luulduldd14r13lddllur"
	"drulu13r8l8dll4u3drdr7ulu8r11lddrd3rdr3ulu5rurddulldd5r3luu5l3d3lddlldrldrr3u3drdr7ulu6"
	"rurddulldd4rlluu10lddrd3rdr3ulu5rurddulldd3r3ldd3rl3drrudllur",

	// 84
	"xxx#####x!"
	"xxx#   #x!"
	"xxx# #$#x!"
	"####   #x!"
	"#  #.# ##!"
	"#  *.* @#!"
	"#  #.#  #!"
	"## # #$##!"
	"#  # #  #!"
	"#    $  #!"
	"#  ###  #!"
	"####x####!",
	"luullddlruurrddllrr3drddl4uruluull6drl6urrddlr3drddl4uruluulluurr7drddlull6urrddlruull"
	"ddrr3drddl4urul4ullddrr6d4l3uluurdrl3dlddr4ulur",

	// 85
	"xxxxx#####xxxxxxx!"
	"######   #xxxxxxx!"
	"#  #     #xxxxxxx!"
	"# $$  #  #xxxxxxx!"
	"#   ### #######xx!"
	"##  #.....#   #xx!"
	"x#  $...*. $# ###!"
	"x# $#.....# #   #!"
	"x## ####$##     #!"
	"x#  #      $ ####!"
	"x#  # @ $ # $#xxx!"
	"x#  $  ##$   #xxx!"
	"x### #$   ####xxx!"
	"xxx#  $ $ #xxxxxx!"
	"xxx##  #  #xxxxxx!"
	"xxxx####  #xxxxxx!"
	"xxxxxxx####xxxxxx!",
	"urrudrdd3ruulurr3ull2(d3lr)rddrddrruulldl4uru3lrd4rddrrurrd3ld3ldl4urulld4rddrd3ldl4uru"
	"l5dlullddrulurrdr3ulur5l3dl2(ddrr)3ulurrl3drrdrddluur3ul3uluurrdluld4r3dlld3lddrrdr3ul4"
	"ulurd3r3dlldl4u5luulluurdldrdrddl3uluurdrdduulldrdd6rl3uruul3duulldllddld4r3luulluurdld"
	"rurddld3rll3dlddr4ulurrl5drrlddrr3ulurrdr3uddll4drrdr4udrruulldluu",

	// 86
	"xxx####xxxxx!"
	"xxx#  #####x!"
	"x###$     #x!"
	"x#     .# #x!"
	"x# ## #.  #x!"
	"x# $  #*####!"
	"## ####.   #!"
	"#  #  @.#  #!"
	"# $  #$.#$##!"
	"###    . $ #!"
	"xx######   #!"
	"xxxxxxx#####!",
	"r4u6drdrruluurullr3dll5urruull5d3ldd4rdr3urullr3d5luu3r3urruullddu5l4dldrrd6r3ulld3ldl"
	"d5rdr3urullr3d3ludlluurrlldll5u3rddllrruu3ldd3r4uldrdrruldldd3luu4rurd3luurdldrrldd3l"
	"ddldrrd3ruulldld3r",

	// 87
	"xxxxxxxxxx#########!"
	"xxxxxxxxxx#       #!"
	"xxxxxxxxxx# ### # #!"
	"xxxxx####x# #...# #!"
	"######  ###  ...  #!"
	"#         # #...# #!"
	"#  $#  $  # ## ## #!"
	"##  #### ##$      #!"
	"x# ##### #  #$ ####!"
	"x# #### $    $ #xxx!"
	"x# $ ##$ ###   #xxx!"
	"x#      $@######xxx!"
	"x# # ######xxxxxxxx!"
	"x#   #xxxxxxxxxxxxx!"
	"x#####xxxxxxxxxxxxx!",
	"6l5ruu5ruddr6u3l3drrdr3ulur3d3ldld3rdr5uluurdrdl4d7ldrd4lddll7ulu4rdrrurrdl3dlddrulu6"
	"rdr5uruulldr5d6ldd4lddll8u3rdrruuldrr4dlddrulu6rdr5udd3l3urrurrdl5d6ldd5lrddll7ulu4rd"
	"rruuldrr4dlddrulu6rdr6urul6d6ldd4luldl5ulu4rdrrur4dlddrulu6rdr6u5d6l3uluuld4lddrulu3r"
	"drrur4dlddrulu6rdr5u4d6l3uluuldldrrur4dlddrulu6rdr4ud3r3ulr3ulld",

	// 88
	"####xxxxxxxxx!"
	"# @#xxx####xx!"
	"#  #####..###!"
	"#  # $  $...#!"
	"##   #  ... #!"
	"x#$$  ###$# #!"
	"##  # ### $ #!"
	"# $   $   # #!"
	"#    ####   #!"
	"######xx#####!",
	"3drrurrd5r4dll5udludllullddrdd3r3luuluu5rdrr4dll4u3d5ld3lu7r3luuluurrd5r4dll3udrl"
	"ddrr4u3lu4ldlddld6r3luuluu4rd3r4dll3udd4luulullddrddllu7r3luuluu4rdrddrrddll3udd4"
	"luuluurrdr",

	// 89
	"xxxx########xxxxxxxx!"
	"x####  ....#xxxxxxxx!"
	"x# #  $....######xxx!"
	"x# $  #....## ..####!"
	"x#  $$## #### ....##!"
	"####    $ @## .....#!"
	"#    $ $$ #### #####!"
	"# #$$$$# $$ $  #xxxx!"
	"#       # $ ## #xxxx!"
	"###  ## $  $  $#xxxx!"
	"xx# $   $      #xxxx!"
	"xx####  $ ### $#xxxx!"
	"xxxxx###  #x#  #xxxx!"
	"xxxxxxx####x####xxxx!",
	"4ldll2(dd3r)urrdrr5uluurdldr5dlddr7u3rlluuldldr5dllurdr5urrluuldldrrl4d3luurrlld"
	"dld3rur5u5dlddr6uluurdldr4d5luu4r4l5dlulu6rur4ulu3rll5dlddr6ulurrl3d4ldld4rdr5ul"
	"ur3d6luurdld5r4luul3ululldru3rl4dlldr3lddldd10rur5u5dlddr6udd6l4ulurrl4d4lu3rdru"
	"ud3luulu4rldrrul3d4l3druuddruulurrdruud3luuldllurru4rldrdd3luulurrl6d4luu6rur4uld"
	"r3drddl5u3dll3d3lddruuludlluu3rudldrruddruul3ulu3rlldlldrdruulurrlurl4drrdruudll3"
	"drd6rdr4u",

	// 90
	"xxxxx#####!"
	"######   #!"
	"#   ## # #!"
	"#        #!"
	"##$###*###!"
	"## #.@.##x!"
	"#  *.#  #x!"
	"# # $ $ #x!"
	"#   ##  #x!"
	"#########x!",
	"ldlddlluuruuddlddrruruurrdrddlulluurrdrdl4urruulldd3lulldr3drllddrrudlluur3u4ruurrd"
	"dll3drddlulludrr4urruull3du3lulld5ruurrddlruulldd4l3drllddrru",

	// 91
	"xxxxx#####xx!"
	"xx####   #xx!"
	"xx#    #@#xx!"
	"xx# ###  #xx!"
	"xx# #  $ ###!"
	"xx# # # $$ #!"
	"xx# # $$   #!"
	"### #   #$ #!"
	"#   # $$ $ #!"
	"# $ $      #!"
	"##$#########!"
	"# ....#xxxxx!"
	"# ....#xxxxx!"
	"# ....#xxxxx!"
	"#######xxxxx!",
	"3d3(ld)drudrruld3ruluddllurd3l3urrur4ulld3l7drrllulldr3d4ur6u3rurr4dldll3dllul3dld"
	"d3rllulu3rlluu3rurrd4lul4d3u3r3urddrd4lul3dlddrrlulurrluu8ruuldll3rd7lul4d3u3ruurd"
	"rd4lul3dlddruluruu3r3urrddrd5lul4d3u5r4uruul5drd5lul3dld3rll3u5r5ull4drd3lul3dldrr"
	"l3u8r4ullr3drd7lul3dldr3u3r5urr4drd5lul3duu7r3ulul3drd5luldd",

	// 92
	"#########xxxxx#####x!"
	"#       #######   #x!"
	"# # # # #         #x!"
	"#   $ $ # ###### ##x!"
	"#####$#$# #  ..  ###!"
	"xx#  @$  $   ..# $ #!"
	"xx# #$#$# ###... $ #!"
	"xx#       ##...#   #!"
	"xx##################!",
	"lldd6ruudd6luu9rurddrdluu4ldd4ludlluu10r4ld2(dllu)u7rurddrudrrdrru3lr4u7l3dllddrr"
	"udlluu5rurrddlu8luulluu4r3d3u4lddrrdd7r3l3u7r4drruld3luuld8luur3luu4r3dulldd8rurd7"
	"l4ull3durr4d4luu10r6l4u6ldd5rluurr3dulldd7rlurd3l3u7rddlrdrdl",

	// 93
	"x####xxxx!"
	"x#  #xxxx!"
	"x#  ###xx!"
	"x# $  ###!"
	"## ##.  #!"
	"# $$..# #!"
	"#  #*.$ #!"
	"## #. ###!"
	"x#   @#xx!"
	"x#$ ###xx!"
	"x#  #xxxx!"
	"x####xxxx!",
	"3uldruurrddlldd3l3urrll3drddl4uluruuruul7d3ruurruullullrrdrrddlldd3l5u3r3d3u3lddrrl"
	"luu3rdrrddllu3l3d3rudllddl4ulu3rlluuruul7drddl4ulurr",
	
	// 94
	"xxxxxxx#####xxxxxx!"
	"####xx##   #######!"
	"#  #xx#  $   $   #!"
	"#  #### $ $ $ #  #!"
	"#... $ $  #$#$## #!"
	"#...# $ $        #!"
	"#..# $ $ $########!"
	"#...$ $ $@##xxxxxx!"
	"###### $ $ ###xxxx!"
	"xxxxx# ##  ..#xxxx!"
	"xxxxx# #  ...#xxxx!"
	"xxxxx#    ...#xxxx!"
	"xxxxx#########xxxx!",
	"ddrddllu3rll3uluullu3ldlluurddu4rd3r4drddllurrd4l3urrurddrddlluruu3luurrur5dld3rl"
	"ul7uld5ldlluurdldrldd3rururu3lrrddld3l4urd6ruuldrd6lulddu7r3urddurrdlluldrd7luld8"
	"r5drrlddlluruu3lu4l4rdrru5lrruurdrd3lu3ruru6l7r6dldrrul5u7r3u3ldduu3r3d6l3ruu4lul"
	"drd6l6r5drddllur5urrudrruu3l3ru4lulddurdd5l5r6dldr",

	// 95
	"xxxx#####xx!"
	"xxxx#   #xx!"
	"##### # #xx!"
	"#   $   #xx!"
	"#   #$#####!"
	"##$## $ $ #!"
	"x# ...#   #!"
	"x# #..*   #!"
	"x# @ ######!"
	"x#####xxxxx!",
	"ru3rurrd4lu3luururr3d3lddrru3ruulrdd3ldll4ururr3dlrurrddll4ulldl4drrur6urrd"
	"dlruull5durrdrru3lrddll4urruullddlldllu4r3d5urrddlruull4d4rddll",

	// 96
	"xxxx#######xxx!"
	"xxx##     ##xx!"
	"xxx#  ###  #xx!"
	"x###$##. # ###!"
	"##    #..$   #!"
	"#  $$ #..#   #!"
	"# $$@ #.*# ###!"
	"#  $#$#*.# #xx!"
	"##     ..# #xx!"
	"x###$##  # #xx!"
	"xxx#   ##  #xx!"
	"xxx###    ##xx!"
	"xxxxx######xxx!",
	"rd3u3ldlddrd3r3luluurduu3rddlldurruuldr3drruruuluurdrruulu4ldlddr4drruruuddldll4ul"
	"uuru4rdrddlldlur3dlddr4uddluddll4u3ldlddrd4rl4uluuru4rdrddll5dluud5luurdld4rl4uluu"
	"ru4rdrddll5dlur4urr6dld3lulludrrd3rur5urru3lruulu4ld2(lddl)drd5rdr3udd6luurdld5rdr"
	"uud3l4ull3dld5rdru3l3ulul3dld5rlluululddld4r",

	// 97
	"x######x######xxxxxx!"
	"x#    #x#    #xxxxxx!"
	"## ## ### $  #xxxxxx!"
	"# $$     $$  #xxxxxx!"
	"#  $ ## ## # #xxxxxx!"
	"# # $ $    # #xxxxxx!"
	"# $  $  # ## #######!"
	"#  # #$   ## ##    #!"
	"#### #  #### ## ## #!"
	"x#  $ $##  #       #!"
	"x# $ $     # ## ####!"
	"## ## ###  #   ....#!"
	"#   # ###   ## ....#!"
	"#   $$#       .....#!"
	"#   #    #@####....#!"
	"############xx######!",
	"ulld3lullul3urrd5rur3dld8rdruud8l3u6lulld7rur3dld8r9ld3l3uddllulld3rll3u7rur3dld7r8l"
	"d3l3udd3l3u7rur3dld6rdru6l3u6l5u3r3dldld4rur3dld5ru3rdldlu5l3u4luuruul3dld4rur3dld7r"
	"druulld5l3u4l5ull4dld6rur3dld7r6l3u4luur5u3l6dld6rur3dld6rdru6l3u6l7uruu3lddl3drrll3"
	"urrddr4dld6rur3dld6rurd6l3u4l5u3luulldrrllddrrur4dld6rur3dld6rdruud6l3u4luur5u4lr6dl"
	"d6rur3dld5rurrddluud5l3u6l7uruu3lddldrrur6dld6rur3dld5rurrddluruld5l3u6l4urur4dld4ru"
	"r3dld6rurdl4u3ruu3l4duu3lddrrll9ulld7lrruu3lddldrrur6dld6rur3dld5rurd4u3ruu3l4duu3ld"
	"drrll10u3ldrd7lrruu3lddldrrur6dld6rur3dld6r5l3u4l3u3ruurud5ldlluur5dld6rur3dld5ruull"
	"8u9lrruu3lddldrrur6dld6rur3dld4r",

	// 98
	"xx#########xxx!"
	"xx#.......#xxx!"
	"xx#.......###x!"
	"xx#         #x!"
	"xx##  ##### #x!"
	"xxx# ##   # #x!"
	"xxx# #   $  #x!"
	"xxx#  $ $ ###x!"
	"xx##$#   $ @#x!"
	"xx#  ## # $##x!"
	"###$  $$#  ###!"
	"#       #$   #!"
	"# # $ $ $  $ #!"
	"# ###### #  ##!"
	"#        ####x!"
	"##########xxxx!",
	"3luluurrdrr3u7l7drdrrullrrddrdd7l3u3r9ulu5rdd3r3d3lddru4lrdrdd3l7ulu5rd3r3dlluldrd4lr"
	"r3d3l8ulu4rdd4r3dllddlu4l3d3ruuru3lrr3d3l8u9d3l3d7ruul4urrddrddl5u4lrr3d3l7ulu4rd4r3d"
	"lluldr4dr3drurulldl5u4lrr3d3l7ulu3rdrud4r3dlluldrddrddlddrruldl5u4lrr3d3l7ulu3rd5r3dl"
	"luldrd4lrr5d3rdrurulldl3urullr4dll4udd3l7ulurrl5drrdrru3lrr3d3l7ulur7dldrdrd5rdrurull"
	"dl3urullr4dldd7l3urrdr9uluurrdl8d3ruuru3lrr3d3l7ulur10d6rdrurulldl3urullr4dll4uru3lrr"
	"4dllul7urul7dl3dr10u5drrururd3r3u5l5r3dlld4lrr3d3l7udru",

	// 99
	"#########xxxxxxxx!"
	"#....   #xxxxxxxx!"
	"#....   #xxxxxxxx!"
	"#.#... ##xxxxxxxx!"
	"#....#  ########x!"
	"######$$   #   #x!"
	"xxx#    ## $$# #x!"
	"xxx#  #  ##  $ #x!"
	"xxx## $ $   ## #x!"
	"xxx#   # $   # #x!"
	"xxx#   $ #$  # #x!"
	"xxx## ## # $ # ##!"
	"xxxx#$ #$#  ## @#!"
	"xxxx#  # #$$ $  #!"
	"xxxx#          ##!"
	"xxxx############x!",
	"l5ullrruulldurr9d6l4ullul3urrddlruul3uluurrdluldrddrd3rdrdd4luudd4ruulu3l3drddlluluulurr"
	"3ulluu3rd5luldrrdrdllru3rdd4rdrddld3(lu)dd4ruulu3l3dldluulurr3uluurrdl4dlddrddrrurulluud"
	"d4ruulu3l3dldluulurr4uru5l3rdr4dl3dldrddrddrr5urulluudd4ruulu3l3dldluulurr3ulluu3rd5lrdr"
	"dlu3r3dlddrruudd4ruulu3lddr3dllrr4dlluul5ulurr3uluurrdl4dlddrruudd4ruulu3lddr7d3l7ulurr4"
	"uru4lrrdr4dlddrruudr7d6r7ullrruulldllu3lddr7d4rurd3luruuluuddrru2(lrul)lrr3dluulu3ldluul"
	"urr3ulluu3rd4ld3rdd4rdrdd4luudd4ruulu3l3dldluulurr3uluurrd3lrr4dl4d3rurulluudd3rddrru3lr"
	"r4dl4ur3ulu3l3dldluulurr3uluurrdl3d4rdrdd4luudd4ruulu3l3dldluulurr4urulldr4dl4d3rurulluu"
	"dd4ruulu3l3dldluulurr3ullruurrdllulddrrdd4rdr8drrulldl5uru4luudd4ruulu3l3dldluulurr3uluu"
	"rrdllr4dlddrruudd4ruulu3l3rdrrurrddllrr5drd4ldl5uru5ldluulurr3uluurrdluldr3d4rdr3drdldlu"
	"uru4luudd4ruulu3l3dldluulurr3uluurrdl4dlddrruudd4ruulu3ldl4urulld",

	// 100
	"xx####xxxxxxxxxxxx!"
	"xx#  #######xxxxxx!"
	"###$       #######!"
	"# $  $$  $ ##....#!"
	"#  $# ###$$   ...#!"
	"# #    @  #   ...#!"
	"# #$$ $ $$#$##...#!"
	"#   ## ##   ##...#!"
	"##  $      $ #####!"
	"x#########  ##xxxx!"
	"xxxxxxxxx####xxxxx!",
	"lluururrdru3ldldd4ru6rur3duu7l3drruuddll3u6rurddu7ldlldru3luuru4rdulldrd6r6luurdld5rur3du"
	"4lddlddr4uddll3u5r4luulldrurdld4rurrddlu4luu4ld3rurdld4rurd5ld4ld3rlldd4rdr4uddll3u5rurd5"
	"luulldrurdld5rdduru6ld6ld5r3l3ulldllu8rurdld5r5ldld5luulu7rurdld4rurd4lu9l4drdr4ulurruuld"
	"rd5rurdld3rdrruuld4ld6lulu7rurdld4rurddlu3luu5ldlluurdld6rurdld4rdru5ld6l3d7rdr4uddll3u4r"
	"3luulldrurdld3rldrru",

	// 101
	"#############!"
	"#@$ $ $ *...#!"
	"#  $ $ $.*..#!"
	"# $ $ $ *...#!"
	"#  $ $ $.*..#!"
	"# $ $ $ *...#!"
	"#  $ $ $.*..#!"
	"# $ $ $ *...#!"
	"#  $ $ $.*..#!"
	"# $ $ $ *...#!"
	"#  $ $ $.*..#!"
	"#############!",
	"9d3(ru)rrdrd3rlldrru3luluuru3r3ldldlldrd4r3ld3ru4lulld5r4ld4ru6ld5r3u3rlldrr3ldllu4rlld"
	"6lu7r7luurdld6r5lu7rlurrld3lu3rl2(lurr)3uldl3(drr3l)d3rldd3lu4r7l3urd5r3(3lu4r)3lu3r3l4"
	"d5l3(u5r4l)u4rll3d6l2(u6r5l)u5rl4d5ldld6r4lu4r4l3ulu5r6lu6r",

	// 102
	"xxxxx#####xxxx#####x!"
	"######   ######...##!"
	"#   ## $ #  ##.... #!"
	"# $$   $ #   #.. . #!"
	"#   ### ## $ #....##!"
	"### #     $  #....#x!"
	"x## #   ### #####$#x!"
	"x## ###   # ##    #x!"
	"x# $  @$$ # ##$$$ #x!"
	"x# $ ##   # ## $  #x!"
	"x#   ##### $## # ##x!"
	"x#####xx#     $ $ #x!"
	"xxxxxxxx#   #     #x!"
	"xxxxxxxx###########x!",
	"llddlluur4ulluurrd3ruurrddldd3ruurrdd5ldllurdru3ruurdrdl5dlddr8u7drrdrru4ldllurdrurrd4ru"
	"4l3ruur6urullr5d3l3d3u3rddlu4d3lur3urrdr5uluurrd3luldd3r4dllurll4drdr3ur5uluurrdluldr4d2"
	"(lldr)lddrruur5ulluu3rdluldr4dlldr3d5ldllu6rdr3ur6urul5dlldr3d5l6uruul7dld5rdr3ur5uluurr"
	"d3ldrr3dlldr3d5l6u4ldllu5ruruulddr6dld5rdr3ur5uluurrdluldr4dlldr3d5l6u4ldllu5rur6dld5rdr"
	"3ur5uluurrdl4dlldr3d5l6u4lddrrddll3ulu4rur6dld5rdr3ur6uru3lrddr3dlldr3d5l6u4lddrrdldlu3l"
	"ddlluu5ruulu4rur6dld5rdr3ur5uluurrdllr4dlldr3d5l6u4lddrrdldlu3lddlulu5ruulu4rur6dld5rdr3"
	"ur5uluurrdl4dlldr3d5l6u4lddrrdldl3ulu4rur6dld5rdr3ur6urulldr4dlldr3d5l6u4l3d4l4ulluurr5d"
	"4u3ruurrddl4drddl3ulu4rur6dld5rdr3ur6urul5dlldr3d5l6u4l3d3ldllur5u3ruurrdlddu4l5d4ruulu4"
	"rur6dld5rdr3ur7u5dlldr3d5l6u4l4uldr5drrdldl3ulu4rur6dld5rdr3ur6u4dlldr3d5l6u4l3d4l5u3rur"
	"ddu4l5d4ruulu4rur6dld5rdr3ur5u3dlldr3d5l6u4luu4lulld5rurddu4l5d4ruulu4rur6dld5rdr3ur4udd"
	"lldrdr3u",

	// 103
	"xx####xxxxxx######x!"
	"xx#  #xxxxxx#    ##!"
	"xx#  ###xxx##     #!"
	"xx#$   #xxx#   #  #!"
	"xx# $# #####      #!"
	"xx#   $   # # #####!"
	"###$$   # # # # #xx!"
	"# $   $   # #   #xx!"
	"# @$ $ ###  # # ##x!"
	"#  ## #          #x!"
	"####...#  #    # #x!"
	"xxx#..*.# # # $  #x!"
	"xxx##..*.# # #$ ##x!"
	"xxxx##..* $    $ #x!"
	"xxxxx##..    #   #x!"
	"xxxxxx############x!",
	"lurruruulur3dlu3r3(dl)urrurrdldl4drdrd4rul4rdrrullruuruu3lddrdrddl4ul3urrddl4dlldllu4rdr"
	"ruldl4ul6ulurdrulurrll5d2(rrddl)dluul6ulurdrul4drrddl4dlld5lululuu3(rd)6rdrruldl4ul6ulur"
	"urdl4drrddl4d6lululldrd8rdrruldl4ul3urrddlruullddr4d8luurdld8rdrruldl4udrruulldlur4d6lu3"
	"l4uruul4d2(ldrurd)ld8rdrruldl3udd6lu3l5ulldrur3d2(ldrurd)ld8rdrruldluud6lu3l5u4ld3rur3d2"
	"(ldrurd)ld8rdrruldlu6lu3l7ulldrur5d2(ldrurd)ldrd3r3luull4u3lurrur4dldrurdldrl4ul5ul4dldr"
	"rur3dldr3ul7ul6dldrrur3d3(rd)ululldrl5u4ruu4lruulldd3ul4drur5drddluruluu3lurrur4drddlurd"
	"drruldluur3dru6rdrru8l2(dlurul)dd9ruuruu3lddrdrd7ldluruldlud8ruuluur3drd7ldlurulld8r4urr"
	"ddlruull3drd7ldluud7r4u3ldrrur3drd7ldluruld7r4uruullddldrur3drd7ldlu7ruul8uruul8dldrur3d"
	"rd8l7ruul10u3rdllul8dldrur3drd7l6ruul9u4rdd3lul6dldrur3drd6lrdllu6ruul9u3rdrd3lul6dldrur"
	"3drd6l3rd3l",

	// 104
	"###################!"
	"#  #   #   #   #  #!"
	"#  $   $  $    $  #!"
	"# $########## ##$ #!"
	"## ## *.*..*.* # ##!"
	"#  ## ..*..... # ##!"
	"#  ### ######### ##!"
	"#  #      $ #   $ #!"
	"## #   $#$#@  #   #!"
	"## # #       ######!"
	"# $  #########xxxxx!"
	"#   ##xxxxxxxxxxxxx!"
	"#####xxxxxxxxxxxxxx!",
	"u5luururrd5ruld4lulldllu3rll5drud4rurrurrdrrul4uruuldllulldrrl3d6l6r3u3lulld4rur3drd6"
	"lull3drddl4ulurrl4dllddldl4uluuruuluurdrrurrd4r4lulld4rurrdrrurrdl3d6lulldr3dllddll3u"
	"luuruulu3r2(urrdrr)ur3drd5l4r3u3lulld4rur3drd4l3r3u7lulld8rur3drd3lrr3u11l3dlddr4ulu1"
	"1rur3drdllr3u11l8drr3urdr3ulur5d5ruu4l4rdrrurrdrrul4uruuldllul3drdl3u11l8drruurr3u4d3"
	"rudrruu4l4rdrrurrdrrul4uru3lul3duu11l8d2(rruu)d5rdrrurrdr5uru3luldd",

	// 105
	"xxxxxx####xx!"
	"#######  #xx!"
	"#  #     #xx!"
	"# $$ $#  #xx!"
	"#  ##.# ####!"
	"## ##.#  $ #!"
	"## # . $ # #!"
	"#   *..#   #!"
	"#  # . # ###!"
	"## ##.##$#xx!"
	"x#     $@#xx!"
	"x#  ######xx!"
	"x####xxxxxxx!",
	"3urruullrrddllulldl3d3l3urrdrruurr4d3luulur3dlldl3ulu3rurddu3l3d6r4ul3uruuldll5d3l"
	"3d6r4ullrr4d6l3u3ruudrr3uruul4drdllrr4d6l6uluur5d3rurr4u3ldlru3r3drddrruull5d6luul"
	"u3rll3uluur4d3urru3r3drdllrr4d6luulurr",

	// 106
	"x##########!"
	"##  ..... #!"
	"#  #..... #!"
	"# $ #### ##!"
	"# $  @   #x!"
	"## $ $ $ #x!"
	"x# $$$$$ #x!"
	"x#   #   #x!"
	"x#########x!",
	"3r3dlluururd4u6ldlddr3drruururrdruud3ldlddlluurluluuru7rd4lu3lddrd4rdruud5luluu7r"
	"d3lu4ldldd6rdruud6l3u7rdllrdd3ldrddrr4ud6l3u7rdlddllddrdr5uru4l3r3dlldrdr4uru3lrr"
	"3d6lddrulu5rdr3urullr3d5ld4rdr4urul3d5l3dru3rdr5udd5ld4rdr3u",

	// 107
	"##############!"
	"#     #      #!"
	"# $$$    $$$ #!"
	"##   $$$$   ##!"
	"x#$ $    $ $#x!"
	"x#   $$$$   #x!"
	"x#$$$    $$$#x!"
	"x# $ $$$$ $ #x!"
	"x#          #x!"
	"######..######!"
	"#..*.****.*..#!"
	"#..*......*..#!"
	"##.********.##!"
	"x#..........#x!"
	"x######@#####x!"
	"xxxxxx###xxxxx!",
	"u4ruullurrlld3luurd3rdrdd5luu5r4ldld4r6lurrd4lurrlluurdlddrruldluurul3d4ru3ldluud4r"
	"urrd5ldlu5rdrrll5urruull4duldd4rld5ldluuld5r4urrulul4d4ulldr4d3rdr7ldlu4r6ur3duu3ld"
	"rur3d3rlluu4ru3lul4dldrrld3lrr4u4lururuu3r5d5ul6drrl6urrdlul7duldd3rlld4lu3r4u3luru"
	"urur4d3u4rdllul4dulddr7uruul9dldr3u4ru3lul6d4l3rdr12u3rdllul10d3u3luurur7drrld3l3r1"
	"2u5rd3ldduulul10d9ul10drdllr5ullurur6drdl11ulddllurrur9drd3lrr4ull3urur7d3u4r3ullul"
	"8dllr4ul7ulldrur3d3u4ldrrur4drur8d4u3luurrur6drdl8u3ldluuruulldrurddrrur9d3u4luu3ru"
	"r5duu4l4urluruulldrur3drrur6du4l3u3rur4d3u5ru3lul8d6u4ruu3lul8d9u5rd4lul8du4r5uluur"
	"rd4lul7d",

	// 108
	"xxxxx#####!"
	"######   #!"
	"# $ .. $ #!"
	"#@$$.. $##!"
	"# $ ..  #x!"
	"#########x!",
	"drrlluurdrrurrdlruurrdluldlddrruluurd4lddrlulldrrlluu5rurrd3lrddruluurrdll",
};

// Boxxle 2, (c) Thinking Rabbit
const char* RabbitCol3[] = {

	// 1
	"#####xxxx!"
	"#   #####!"
	"# $ #   #!"
	"#   #$# #!"
	"###$    #!"
	"x#   ####!"
	"x# @...#x!"
	"x#######x!",
	"3ulluurr4dld3rll3ullurur4dldrruu3ruulldurrdd3ldluuluur4dldr",

	// 2
	"xx####xxx!"
	"xx#  #xxx!"
	"### $####!"
	"#@$.. $ #!"
	"#  .*   #!"
	"###  ####!"
	"xx#  #xxx!"
	"xx####xxx!",
	"drrurdl3urddldllurdrurrdllddruluulldrurruul3(dr)rull",

	// 3
	"#######!"
	"#  . ##!"
	"# $ $ #!"
	"#. * .#!"
	"# $ $ #!"
	"## . @#!"
	"#######!",
	"3lul3u3rdlddr3(lu)rd3rdlddru",

	// 4
	"#########!"
	"#      @#!"
	"# $.$.$ #!"
	"# .$.$. #!"
	"# $.*.$ #!"
	"# .$.$. #!"
	"# $.$.$ #!"
	"#       #!"
	"#########!",
	"6d4luurruullddllurluur2(urrd)rddlrddl2(dllu)",

	// 5
	"#########!"
	"#   @   #!"
	"#$$$$$$$#!"
	"#...#...#!"
	"#.......#!"
	"#$$$ $$$#!"
	"#       #!"
	"#########!",
	"rddrdl3urrduldduu3ldulduld4rurdlddlddlludlurrdrudruuddrruldlu",

	// 6
	"##########!"
	"#    $  .#!"
	"#  $##$# #!"
	"#   $    #!"
	"### ## ###!"
	"#  $#  ##x!"
	"#.*.  $@#x!"
	"#...##  #x!"
	"#########x!",
	"l3u3lddldurd3u3r3d4luldrr3u5ruu5l4duu3r3d4lr4ulldrur3d4u3rdurrdd4lrr3d3l3ulluu6r4l4d",

	// 7
	"#######!"
	"#  .  #!"
	"# $*$.#!"
	"#  .. #!"
	"#$$*$$#!"
	"# ..  #!"
	"#.$*$ #!"
	"#  . @#!"
	"#######!",
	"u2(ulld)ruluu4ruuldu3l4drrudlluurulur3drdrrddlurulrulru",

	// 8
	"###########!"
	"#  $  *.* #!"
	"#  $  *.* #!"
	"#  $  *.*@#!"
	"#  $  *.* #!"
	"## $  *.* #!"
	"x##########!",
	"ulrddlu3lddrurllurrllullrurrddldr3lu3r5luu4r3ld3r2(4ld4r)3ld3r",

	// 9
	"xxx###########!"
	"xx##     #  .#!"
	"xx#  $#$ #...#!"
	"###  $  $#  .#!"
	"#  $$$   $ @.#!"
	"# #  $ ###  .#!"
	"#  $ $ #x#...#!"
	"#    ###x#  .#!"
	"######xxx#####!",
	"3lulld4rurd5ldllu7r7l3d3l3u9rurr3dulu8luurdld8r7lurluu4rddld3rdrr3udld3l3uldduu"
	"llddrd5rdruud4luuldld5r5ldllu6rurrddlu10lddrrdrulurd3luu10r5lddlulu6rurd8l3druulu7rdruu",

	// 10
	"####x#####xxxxx!"
	"#  ### @ ###xxx!"
	"#..     $  #xxx!"
	"#..# # $ $ #xxx!"
	"#..#  ## ######!"
	"#..   ## $ $  #!"
	"#..#  ## $ $# #!"
	"#######   $   #!"
	"xxxxxx#  $ $# #!"
	"xxxxxx# # # # #!"
	"xxxxxx#       #!"
	"xxxxxx#########!",
	"r6drdulldrrl6urrdlul5drruldl4uru6lr3d3l4ur4d3u6r4drruldl3uru6lr3d3l4urddu6r5dl3drr4"
	"uruldl3uru6lr3d3luurdl3urddu6r5dldrlddrr3u3d4r3u4ldl5uru7lul4drrll3u7r3drrdldl4uru6"
	"lrddrddlu3l4urd6r5d5ruu4ldl3uru7lul3duu7r5d3rudrruu4ldl3uru7lulddu5rdrur3dr5drruulr"
	"ddll3ul4uru7luld7r3drrdldl4uru7l6r3d5rdd4ldl5uru6lrddrdll",

	// 11
	"#########!"
	"#  .#   #!"
	"#  $ $*.#!"
	"# $## # #!"
	"#   #   #!"
	"# * #  ##!"
	"##  .@##x!"
	"x######xx!",
	"2(lluu)rdlddrd3ruurr3ulldr3lullddrul3drd3r3u3d3luurdldrull4ur3duu3r",

	// 12
	"xx####xxxx!"
	"xx#. #x###!"
	"###$ ###.#!"
	"#  .$.   #!"
	"#   ##$$ #!"
	"# $$.#@  #!"
	"#  $.#####!"
	"###   .#xx!"
	"xx######xx!",
	"rruu5luddllddrrlluurrdrdululldrruu5rddllurdruu4lulddllu3rll3druu3drr",

	// 13
	"x########xxxxxxx!"
	"x#......#xxxxxxx!"
	"x#......#xxxxxxx!"
	"x#......#xxxxxxx!"
	"x#      #xxxxxxx!"
	"x#      #xxxxxxx!"
	"x#### ##########!"
	"##  $    $ $ $ #!"
	"#    $ #$#   # #!"
	"#@#$ $ $  ##   #!"
	"### $# #  #### #!"
	"xx#  $ $  #    #!"
	"xx# $# $ #  $  #!"
	"xx#    $   $ $ #!"
	"xx#  ###########!"
	"xx####xxxxxxxxxx!",
	"u3rdr6u5dllurdr4u3d3rddrddlddll4uddlluudluurdr4urul4d3lurrdr3ul3urrdlldr3d3rddlludrruu"
	"lldl5u4drddlullddruulurdr4u3dr6drruldl5udrruulldl3ur3u3lrrull3r3dlu6d4rddlldl4udrruull"
	"dl3ul3uddr5d3rdrdlldl4udrruulldl4u3dr6dll4u3dl4urdr4ur3ullrulddrrdl4d3lurrdr3ul3urrddl"
	"3dl7dl6ulurrdr3uluudr3dr6d4ruru3ruullullu4ldl3uruudl3d5rdrru6ldl3ulur3d7rddrruu8ldl6u5"
	"d9r5dlld8ldl6ulurrdr5u4d9r4d3ldrd8ldl6ulurrdr4u3d9r6d10ldl6ulurrdr3uru3ldlu",

	// 14
	"xxxx#######xxxxx!"
	"xxxx#     ##xxxx!"
	"xxxx#  $$  #####!"
	"xxx### #  $#...#!"
	"x### $ #  $ ...#!"
	"x#     ## $#...#!"
	"x# $ #$    #...#!"
	"x# #  $ # $ ...#!"
	"x#  $ $##$  #  #!"
	"## ##$ #@ ######!"
	"# $    ####xxxxx!"
	"#   #  #xxxxxxxx!"
	"########xxxxxxxx!",
	"r3ulldllddrddlulldllur5u4r4urrdrdd3rurddu4luurdldrl3u3ldrrurdrddrr3dldlluulldl4u3d3"
	"rddrrur3u4luruulldrurddld3rll3u4ld3rll4d3rddrru3r4ullddu4l3urddld3rlluu3l3dllurdruu"
	"3d3rddrru3ruulludrruuld4luurdld4r4l3u4ld3rurddld4rlluu4l4d3rddrru3r3udlur3dludlldll"
	"u3rllu4l4u2(rrdd)4lu4l5d3ruudr6u3d4ruu4r4dlulldllu4rdruud4l3uld4u4ld3rurddld5r3luu4"
	"l6dl3dr8udd4l3d3rdr3u3r5u4ld3rurddld4rllddld4rdru4lu4l3u3d3r5u4ld3rurdldrur4dld4r3l"
	"u4lddlluudrdr5u3d3r5u4ld3rurdldrur4dld3rllu4ldd4luururr3l3d4r5u3d3r5u4ld3rurdldrur4"
	"dldrrlu3ld3lulurrlddrr4u3d3r5u4ld3rurddld3r",

	// 15
	"xxx###########!"
	"xxx#   #     #!"
	"####   # $ $ #!"
	"#  $  $   #$ #!"
	"#   $  # $$  #!"
	"# #  $$##  # #!"
	"# $$    ##   #!"
	"#@$  $ $   ###!"
	"## ####$##$#xx!"
	"#  #...... ##x!"
	"#   .....#  #x!"
	"####......  #x!"
	"xxx##########x!",
	"3urrdduullddr3dldrrl3ul3urrdrdrrdr3dldllu3r4u3ldrrurddu4lruuldl3dld3rdrruurdrd3lu3l"
	"4urururddldrrur4d3ull3urddldrur3drdl3ull5ur4dldrur3drddllurdrul3ul4urruurrdluldrd3l"
	"ul4dldrrur4drdl4ul4urruu4rd3luld4r4dll4drdllr6uluu3lul4dldrrur4d3urr3l4urruurrdluld"
	"4rddll6drdl6uluu3lul4dldlul3dld6r3u3lr4u3ruurrdluldrd3lul4dldrrur3duu3r3ururu3luldr"
	"d3lul4dldlul3dld4r3l3u4r5ull4drdllul3dld3rll3ul4u3rur4drrddu4lul3dldrr",

	// 16
	"#####xxxxxxxxxxx!"
	"#...##########xx!"
	"#....$ $     #xx!"
	"#..*. $   #  #xx!"
	"#.*..### ## ####!"
	"#....# $  #    #!"
	"###### #$ #$#$ #!"
	"xx#@$  $  # $  #!"
	"xx##      #    #!"
	"xxx########$ # #!"
	"xxx#     $   $ #!"
	"xxx# # # # $## #!"
	"xxx#   $   $ $ #!"
	"xxx########    #!"
	"xxxxxxxxxx######!",
	"rd5r3uluullu4lul3druru3rdrru4ldduldl3urd5r3drddl4uru6lul3duru5r6dllurdr5uru5ldlluurddu"
	"5r6d4lu3rdr5uru7l6r5dlluurlddrr4uru6luldd5ru4r3d3r3d3l5uru9lulduldd4ru6r3d3rddlldl5uru"
	"8ldlluurd8r3drrdrdlldl5uru10ldru8r5dr3dl7uru9ldlu9r3d3r8dllul9uru9luld9r3d3r7dlldl10ur"
	"u9ldlu9r3d3r5dllrrdd3l9uru9l8r8d3lddrr4luu4rdr8uru8lrdllu8r3d3r8d3l10uru8l7r8d7ldd7rdr"
	"ruldl10uru7lrrd3lru4rd4l",

	// 17
	"xxxx######xxxx!"
	"xx###    ####x!"
	"xx# $ $ $   ##!"
	"###    $ ##  #!"
	"# $ # ##$  $ #!"
	"#   #$   $   #!"
	"#  $   $  $$ #!"
	"# $@## ### ###!"
	"#   #  #. ...#!"
	"#####   .....#!"
	"xxxx####.....#!"
	"xxxxxxx#######!",
	"dlluru3rll3urrddr3dldrrl4ul4urrdrddrdr4dldrruu3ldll4u3rur4dldrrl4ulldrurdduu5luullddl"
	"lurdd3rur3dld3rurrddlu3l3ul3ullddld3rur3dld3rll3u3rur3dldrurdl3u5l3urrur3dldrrur4d4ur"
	"rdlr3ulduu3lulldrur4drr3dldr3urrulul3du3lulluurrur3dll3dld4ruruu3lul3dld3rll3u4lddrul"
	"u3rll4u4rur4dll3dldrrl3u3rurdd",

	// 18
	"xxxxxxx#####xxx!"
	"########   #xxx!"
	"#.....# $# #xxx!"
	"#.....   # #xxx!"
	"#...  # $# ###x!"
	"##### #  #   #x!"
	"xxxx#   $#$# #x!"
	"xxxx###$ $ # ##!"
	"xxxxxx#   $@$ #!"
	"xxxxxx#   # $ #!"
	"xxxxxx#$ $$$  #!"
	"xxxxxx#       #!"
	"xxxxxx#########!",
	"lldll4urd3l3u3rdu3l3drruuru6l5r6drruldl5uru5l4r5dr3dl7uru4lr3d3rddrrulldl4uru3ldlu3r8"
	"drruuldl6uru3lu3lrrd3r4d3rdlldl5uru3ld3lrru3rdr3drdldl5uru3lullrd3r8d4ru3ldl7uru3ldll"
	"ru3r7d6ruu5ldl5uru3luld3r7d5ruru5ldl5uru3ldlu3r7d4ruru4ldl5u4d5r3ulldd6ulldd3l3r4drdl"
	"dl5urullr3dll3urr7d4ruu3ldl5urull",

	// 19
	"x##########xxxx!"
	"##  #     #xxxx!"
	"#     $...#xxxx!"
	"# # @ #...#xxxx!"
	"#    #....#xxxx!"
	"# $#$$...####xx!"
	"#    ###$   #xx!"
	"##  #    $$$###!"
	"x#$ $ ##   $  #!"
	"x#  #$#  #    #!"
	"x###  $  ######!"
	"xxx#   # #xxxxx!"
	"xxx###   #xxxxx!"
	"xxxxx#####xxxxx!",
	"urrurddrdlr3d3l3drruru3r3l3ul3u6l4drudrr3ulu3rur3dr5dldlddrr8uluu6lddrrlddrrurluulu3r"
	"urddr3drdurrdldluruldl4ulu3l4dl3dl4ulurrlddrr3ulu3rurdr5d3l3dldrurrur6u9dllulurrlddrr"
	"4urrdrudrrulldlull4udd3rdlldl3udrr3drruldlurulldluud3ldlldl4ulurrlddrr3ulu3r",

	// 20
	"xxxxxx######xxx!"
	"xxxx### ...##xx!"
	"xxx##   ....##x!"
	"xxx# $##$#...#x!"
	"xxx# $  @ ...#x!"
	"x###  # # # $#x!"
	"## $ #  #$## #x!"
	"#    $ $   # ##!"
	"# $ # ##   $  #!"
	"#  #   ## # # #!"
	"# # $$   $    #!"
	"#     #  ##  ##!"
	"#####   ######x!"
	"xxxx#####xxxxxx!",
	"uulur3dlddldlddrd3r5u5d3luluurr3u3rurrddluruld4l3drdr3uddll3u3ruudrrddluruldll6dllddll"
	"uud4lu3(ur)3u6rurullrdrrddluruld3luu3ldld6rurullrdrrddluruld7l3d4rdr3uddll3u3ruruldrrd"
	"dluruldll3d6ldllu7rdr3uddll3u3rurrddluudll6d4luu3d4luur3urd5rdr3uddll3u3rurrddluruld6l"
	"dldld5rdr3uddll3u3rl4drrddrruu3lrr4udlull3d4l4dllurdr3udd5rl5uddll3u4rdr3drddldluudrru"
	"u3lrddll5uddll3u3r6l3d4rdr3uddll3urr",

	// 21
	"xxxx############!"
	"xxx#......#####x!"
	"xx#@..$ **.###xx!"
	"xx#  $ $      #x!"
	"xx####### #$#  #!"
	"x#x#xx# $ $  $ #!"
	"#xx#xx# #  # # #!"
	"xxxxxx#  #   $ #!"
	"xxxxxxx#  $##  #!"
	"xxxxxxxx#     #x!"
	"xxxxxxxxx#####xx!",
	"ru3rdldlurul4rdldlu3rdl3drdrruulldl4udrrdurrdr3dlluulldl3urullulldrdrurrdrddlluurulldlu"
	"lld3rurrdrddlluuru3ldlu3ld5rurrdrddlluuru5ld8rdrd4ldl3uru4l3r3d3rddrdd3lulluluurlddrdrr"
	"uul3urulld3r2(ddlrr)dd3l3ul3ulurdrrddldl3u3lur",

	// 22
	"xxxxx######xxxxx!"
	"######    #####x!"
	"#   #  #  #   ##!"
	"# $$  $#$#  $  #!"
	"#  #.#...  $ $ #!"
	"#   .....@# $  #!"
	"# $#.##*#  $$$ #!"
	"##  ....#$ #   #!"
	"x###.#...  #####!"
	"xx# $ $#$# #xxxx!"
	"xx# $#   $ #xxxx!"
	"xx#    #   #xxxx!"
	"xx##########xxxx!",
	"8l3urddld3ruululddldrrluu3rurdd3urr3drddr5dllulld3luur4uddllulurrlddrrddlddr4u4drr3uru"
	"llrddlrdrruddrr3u3lrddlldlluurru4rdd3lruululddllddrr3u4ruuldrd3lrr4ulldduu3rururrdld3l"
	"dluldul3urr3d4ruuldrd3ldlull3urr3drru4rd7l6rdlrrddllullrruru5lr3drdllruu3rdrru4lruru3l3drdl",

	// 23
	"########x!"
	"#  #.#.##!"
	"# $.$. .#!"
	"#   .#$##!"
	"####   #x!"
	"xxx#$$$#x!"
	"xxx# @ #x!"
	"xxx#####x!",
	"luurruullrrddllddrr3udlluurrlld3luurdldrrlurrddrruu3l3r4dll3ulurd3lurdrrdrrdldluu",

	// 24
	"xx##########!"
	"xx#        #!"
	"x## $ ##   #!"
	"x#@ $$$  # #!"
	"x##  $ $$  #!"
	"######  $$ #!"
	"#... #$ $  #!"
	"#..  # $## #!"
	"#..     #  #!"
	"#..  # ##  #!"
	"#... #     #!"
	"############!",
	"ruu5rddldrllddrruluururr8d4luuruuldrd4l3ruurruull3drd3ldlu3ruurrulul3drd3lullddlu"
	"urrd3rdd4r4u3lulddrd4l3ruu4ru3lul3drd3ldlluldrru3ruu4r4ulldd3u5l3drrll3urrddr4drd"
	"4luld4ruu3rullul3drd5l4r5uluull3drrur4drd4l3r4u3luurdldrrur4drd3ldlluurd3r4ull3ur"
	"ddldrur4drd4l3ruu4ruu3lrull4drd3ldlu3r4ulluurdldrur4drd3luldd",

	// 25
	"xxx######!"
	"xxx# @  #!"
	"####  $ #!"
	"# *..*$ #!"
	"# $*..* #!"
	"# $  ####!"
	"#    #xxx!"
	"######xxx!",
	"ddlddluddlluurldrrdr3uruuldduu3rddllrrululd",

	// 26
	"xx#######!"
	"xx#. .  #!"
	"####$#$ #!"
	"# $. .  #!"
	"#@$# #$ #!"
	"# $.$.  #!"
	"####.  ##!"
	"xxx#####x!",
	"u3ru3d3r4u2(3ldd)3ruulldldruurruu3rdd3l3rdd2(luru)l",

	// 27
	"##########!"
	"# @###...#!"
	"# $$  .$.#!"
	"#   #$#$ #!"
	"##       #!"
	"##########!",
	"DldRd6r3ulldllL3rurrdLrddlUUruL3d5luluurD3rRRdrUdd6lUlu5R4ldd5ruUdd4lUlu5RddllUdlluurR",

	// 28
	"######x!"
	"#    ##!"
	"# $ * #!"
	"##.$$.#!"
	"#. @ .#!"
	"#.$$.##!"
	"# * $ #!"
	"##    #!"
	"x######!",
	"rruuldldr3lddrdrrululrdruuluruuldulldrrddldr",

	// 29
	"#########!"
	"#   @...#!"
	"# #$#.*.#!"
	"# $  $$ #!"
	"## #$   #!"
	"x#   ####!"
	"x#####xxx!",
	"rdDRdrUUdlUlu4ldd4RurrddlU3lUdlluurRRlddlddrrUdlluur3RdrUdlLu3lddrrUdlluurRdrU",

	// 30
	"xxxxx######!"
	"######    #!"
	"# $ .*. $ #!"
	"#@$.* *.$ #!"
	"# $ .*. $ #!"
	"#     #####!"
	"#######xxxx!",
	"dRRuurRllddlluuRRlldRdrdrrUUdrruuurrdLulDrrddLLLrrruulDrdLL",

	// 31
	"######!"
	"# # .#!"
	"# $ .#!"
	"#@ $.#!"
	"# $$.#!"
	"#  ###!"
	"####xx!",
	"ddrUluuRRllddrRUrUdldlluurRlldRR",

	// 32
	"####xxxxxxxxxx!"
	"#  ###xx#####x!"
	"# $$ #xx#...#x!"
	"#    ####...#x!"
	"# $ $ $  ...#x!"
	"# $  #### ..#x!"
	"### ##  ##$###!"
	"### ######   #!"
	"#  $  #    $ #!"
	"#    $  # $  #!"
	"##@#  ###   ##!"
	"x######x#####x!",
	"uur5ulldrl3urddrrul3dru6r3drrddldllur5udruuldlud6luurdld7r6lu3ld8rdrruldlu8l3u"
	"rddld9r3drrddldl4udd3ldllull3uruu3lddru7rdruu5d3ldlldlul4ulu7rdru3drrdldl3udd3"
	"ldlluldl4ulu7r6l5dllurdr4ulu6r",

	// 33
	"xxxx####xxxxxxxx!"
	"#####  #xxxxxxxx!"
	"#  $ $ #x#######!"
	"#   $  #x#*.*.*#!"
	"## $ $ ###.*.*.#!"
	"x#$ $  #  *.*.*#!"
	"x#@$ $    .*.*##!"
	"x#$ $  #  *.*.*#!"
	"## $ $ ###.*.*.#!"
	"#   $  #x#*.*.*#!"
	"#  $ $ #x#######!"
	"#####  #xxxxxxxx!"
	"xxxx####xxxxxxxx!",
	"drru4rdrurdrdrrlluluururr4dlluruulddu7ldllu9r7lddrulu6r5l3druulu3ru4rdduruu3dlluulld3l5"
	"dl4ulu8rdruud7l4dll3ulu9r6l3d4ld3rdr4ulu6r9lddrddllu3ruulu7r4l4dl3ulu5r3l3u3(ld)5rd4r3l"
	"u3luuldld4ru4r3ld3l5ul4dld4rd3rllu3l4ull3dld5ru3rlld3l3u4lu3rur4dld3rdrrlu7luuruulld3rd"
	"dld5rurrld3l4ul3dld4rdrulur",

	// 34
	"xxxxx####xxxxx!"
	"xxxxx#  #####x!"
	"x#####      #x!"
	"x#  ## ##   #x!"
	"##   $   #$$ #!"
	"#  ####  # $ #!"
	"#  ..##$#    #!"
	"###... $ # # #!"
	"xx#.*.#$ #$  #!"
	"xx#...#  # $##!"
	"xx#####$    #x!"
	"xxxxx#@  ####x!"
	"xxxxx#####xxxx!",
	"rr4u4lulddru4rddluru3ldlluurddu4r3d2(rruu)ll3ulu3lddr3drddluru3ldlluurdldru4r3d3rud3ldl"
	"3uru4lulduluu4ruu3rdr6drd3ldl3uru3lrr3d3r7ulu3ldd4lddrrd3r3d3r4urrddlr4uldl4drd3ldl3uru"
	"4l3r3d3ruurruulul4drd3ldl3uru3lrruuru5lulddldrrluu4ruu3rdrru4lulddu3rdr6drd3ldl3urullr3"
	"u4lulddldr",

	// 35
	"x####xxxxxxxxxxx!"
	"x#  ######xxxxxx!"
	"x#@$  $  ####xxx!"
	"x#  #   $#  #xxx!"
	"x## #$ $  ..####!"
	"### # ####.....#!"
	"#    $ # $.....#!"
	"# $    $  #  ###!"
	"#### #$#  ####xx!"
	"xxx# $ $ ##xxxxx!"
	"xxx#    ##xxxxxx!"
	"xxx######xxxxxxx!",
	"dr4d5ru3rdru4lddrulurru3rlddlulld3luldllulld7rdrulu5rlulu4lull3dld4rdrulu4r3ld7lur3u"
	"luur5drlld6rdrulu3rdruluu4luu3lr4dld4rdrulurruruuldrdrddlulld5l3drruuddll3u4rdrulu3r"
	"dru3ld5lddrdruudlluu4rdrulu3r3l3dldluudlluu4rdrulurrld4l3u5r3luurdldrr4lddll3uluur5d"
	"ld6rdrulur",

	// 36
	"##############!"
	"#....#       #!"
	"#*...# $ $ $ #!"
	"#..####  $   #!"
	"#..#  #   $$ #!"
	"#..$  ## #   #!"
	"# $#  $  #####!"
	"#  #  #      #!"
	"## #### ## # #!"
	"# $    $ #   #!"
	"# #$#$#@ #####!"
	"#       ##xxxx!"
	"#########xxxxx!",
	"d6l2(uur3ul)drddlddr4ulurrl4drrd3rdr4urruull5d4luurdld3rllu3l4dldd6r4uru3ldlurullrd3"
	"r5d6luur7ulur8d4r5ldd6r4uru3ldlurullrd3r5dllud4luur7u7d4rlddrr4uru3ldlurullrd3r5d4lu"
	"dlluur6udluurrl7d4rlddrr4u3rddrruu4l3ururuull5d3ldlurullrd3r3d5l6ulur7drdd4r4u3rddrr"
	"uu4l4urrulul5d3ldlurullrd3r3d5l6u6drdd4r4u3rddrruu4l6ulldrur5d3ldlurullrd3r3d5l5u5dr"
	"dd4r4u3rddrruu4l6u4rd3lul5d3ldlurullrd3r3d5l4u4drdd4r4u3rddrruu4l5u4rd3lul4d3ldluru3"
	"ldl3uddr4d5ruu3rddrruu4l4u4rddlullul3d3ldluru3ldluudr4d5ruu3rddrruu4l3u4ru3lul4d3ldl"
	"uru3ldlur4d5ruu3rddrruu4lu3ldluru3l4d5ruuru3ldlurull",

	// 37
	"xx###########xx!"
	"xx#.........#xx!"
	"xx#.........##x!"
	"##########$$ #x!"
	"#     $  $ $ #x!"
	"# @##$ $  $  #x!"
	"# $#  ## ### ##!"
	"#    $$ $   $ #!"
	"####$  $  #$$ #!"
	"xxx#  $#      #!"
	"xxx#     ######!"
	"xxx#######xxxxx!",
	"ldd3rdrdd3ru5ruuluull3uru7l6r4drruldl3uru6l5r3drr3drddluudd3luurrdulldllur3urldrr3uru5"
	"l4r3dll6d3luululluluu8rdr3uru4l3r3d9lddrulu8rdr3uru3lrr3d8l3drrurudldll3u7rdr3urullr3d"
	"4ldrlldldd3ruruulurrdr3urul3dll3drddl4ulurrdr3uddll4d3lurrdr3ulurr2(druu)7l6r3d5ldld3r"
	"dr3ulurrdruuru6l5rddll6dlluuddlluururrdr3ulurrdruuru5l4rdd8l3d5rdr3ulurrdruuru4l3rddll"
	"5d3ruulldl3ulurrdruuru3lrrddll3d3rdrru4ldl3ulurrdruurullrdrrdd3l3rddrdlr2(dllu)l3ulurr"
	"druuruldd2(ll3d)rr5ulu3rdruur4d3ldl3ulurrdruu",

	// 38
	"#########xxxxx!"
	"#....   #xxxxx!"
	"#....$# #xxxxx!"
	"#.#..  $##xxxx!"
	"#..@ #$  #xxxx!"
	"###### #$#####!"
	"xx##   $   $ #!"
	"xx# $$ #$    #!"
	"xx#   $   $$ #!"
	"xx#   #$   ###!"
	"xx###    ###xx!"
	"xxxx######xxxx!",
	"u3r3dlldlddrrd3ruull4uru3ldlu3r3dlldrllddrrur4uru3lulluldrrd3r3d2(lldr)drur4uru3ldllru3"
	"r5d3ruullrdrd3l4uru3lullrd3r3dlldrlddrur4uru3ldluurullrdd3rdrr3d4ru5lrrdd3l4uru3ldluuru"
	"l4rddl3drruulrddlluuru3ldlu3r3dlldrlddruddrrurull4urullullddrurr3dlldrlddrur4uru3ldluud"
	"3r5drd3ruuru4l5rdd6l4uru3ldlu3r3dlldrlddrur4uru3lrr3dlldrdr4urullrruull",

	// 39
	"###############!"
	"#             #!"
	"# # $..... ## #!"
	"# ##.$###$. # #!"
	"#    . # .  $ #!"
	"# $#@$...# #  #!"
	"# $  . # .$ # #!"
	"# # # ... #   #!"
	"#   ##$#$##$$ #!"
	"# #  $ #      #!"
	"# $ #$ # $##$ #!"
	"#      #      #!"
	"###############!",
	"u3l3urrd6r5lddrulu3r3l4dl5d3r5ul3ulurru7r8d5lud5r5ulluldludlddrdllruulldl3ulur4dll5d3r5u"
	"drruulldl3ud4lddrulurrlddrr3l4drdr4uddrrllddrrur4udluurllullddrrl3drrdr4udrr4drud4ruu4ld"
	"luud5r5u5lddrdllr4d4ruru4ldluud5r8u3lddldlddrdl3ururrdl3r3dldrd4ldl4u3d4ruululuuddrddrd3ldluu",

	// 40
	"####xxxxxxxxxxxx!"
	"#  #####xxxxxxxx!"
	"# $$ $ #######xx!"
	"#        ##  ###!"
	"### ####$# $ $ #!"
	"#....        $ #!"
	"#....####$ #   #!"
	"#....###  ## $ #!"
	"##.#### $ $@$# #!"
	"x#    $   #    #!"
	"x#  #    #######!"
	"x#########xxxxxx!",
	"d3r4u12l4d3rdrrurr3uru7luu5rdu7luurdldrrdd5ruu4lul4d3ulluurdldrur3drdll3d3rdrrurruuldru"
	"uru6l4ruullu3l3drddlluru9ruuldrd8l4ruu5l3dl3d3rdrru4ldl3uruu11rulluldrd8l4ruu5l3d3ulluu"
	"rdldrur3d11r4dllu3ld6ldluud7ru3ruurrdluu9l5r3d3ruuru8l4rddldrd6ldlu",

	// 41
	"xxxxxxxxxx####x!"
	"###########  #x!"
	"#      $   $ #x!"
	"#  ##### ### #x!"
	"## # $...$ # ##!"
	"x# # $...     #!"
	"x# #@#...###$ #!"
	"## ## ...    ##!"
	"#  $ $$$ #####x!"
	"# $$   ###xxxxx!"
	"#      #xxxxxxx!"
	"########xxxxxxx!",
	"uurldrrdrudd5ruru6lr3u3rur4dlluldldd4ruru5ldd3ldlddrr3udlldrdruulur3d5luurrl6u9rur4d4"
	"ldd4ruru4l3rdd4ldlullddrulurrdrull3d4lu3rdruulurrldd3lurrdrulurdd5lu4rdru",

	// 42
	"xxxxxxx####xxxx!"
	"xxxxxx##  #xxxx!"
	"x###### $ #xxxx!"
	"##    # $ #xxxx!"
	"# $ $   # ####x!"
	"#  ##$#....#@##!"
	"# #   #....   #!"
	"# # $$ ....## #!"
	"#     #....#  #!"
	"### # ### # $ #!"
	"x# $  $ #$ $  #!"
	"x#   $  # $  ##!"
	"x# $# # ##  ##x!"
	"x# $  # #  ##xx!"
	"x#  ###   ##xxx!"
	"x####x#####xxxx!",
	"dr4dldldluluuddrddldll4u2(lluu)rd4rdruulurll3urur4dllullulld3rlddld3rdruurrd7l3drdr"
	"3udd3ldrlddr5uru3rdru4ldlddrr3dlr5ulu3rurdrdlu3ld2(ll3dr)urr5ulu3rurdrrul4ull3dull9"
	"dlluulurrdr3u4l4u5rlddlld6r5ulldrurddulld6l4d3rlddrruulu3rll3drrdlu3l3drr5ulurrl3dr"
	"r4drruruurrur4ullrrd4(dl)4u3drrurrd3ldl3uddrddrurulldluu",

	// 43
	"xxxxxxxxxx#####!"
	"xxxxxxxx###   #!"
	"xxxx#####   $ #!"
	"#####   # $#$##!"
	"#....$ $#     #!"
	"#....$#   $ $ #!"
	"#....@#  ###$##!"
	"#....#   $    #!"
	"## #$ $ $ #   #!"
	"# $$ #$########!"
	"#      #xxxxxxx!"
	"###   ##xxxxxxx!"
	"xx#####xxxxxxxx!",
	"luururrd5l5dldrrdrrululrddluluuddrr4urulururrddrddldllrurruulu4ldrdllrdl3d4rudll4u"
	"ru3lru4rdrddldllrddll3uluurrdllrddrru3rd4lrddll3uluurrdluu3r3d4rdrru5ld3lrddll4uru"
	"llduu4rdrrurrd3ldldrd3lrddll4urululdu4rddurru4rd5ldldrd3lrddll4urulu3rddurr3urddrd"
	"3ldldrd3lrddll5urul3rddurr3urrurrdlddrd5ldldrd3lrddll5ururrddurr3urrur3drdldu4ldld"
	"rd3lrddll4uruurr3drd3lrddll3udrru5rdrru5luldrd3lrddlluudldluu",

	// 44
	"xxxxxxxx####xx!"
	"xxxxx####  ##x!"
	"x##### $    #x!"
	"x#   #   #$ ##!"
	"x# $$ #$#....#!"
	"##  $    ....#!"
	"#  ## $ #.##.#!"
	"# #  ## #....#!"
	"#  $ @ $  $ ##!"
	"## $ $ #$ #$#x!"
	"x#   ###    #x!"
	"x#####x######x!",
	"rr3lddlluuluuru7r5drruuddlluurl3ururr3dlr3ulldrurddu10luurdld9r3uldrdrd3lurruu3ldll"
	"u3rurddrddllurd3l3drrddrruulrdd3lur4ull3drdr3uddll3u4r8luurdld3rldru4rl3dlluulu3r7l"
	"dldd7rdr3udd5lddlulu6rdruud3ldlldlulu6rdrull5ulu3rurdd",

	// 45
	"xx#####xxxxxxx!"
	"x##   #xxxxxxx!"
	"x# $# ####xxxx!"
	"##  .....##xxx!"
	"# $ #.....#xxx!"
	"# #$ # ...##xx!"
	"#   $# ##  ##x!"
	"#    $$###$ ##!"
	"# ##$#  @  $ #!"
	"#    #$$ #   #!"
	"### # $  $ ###!"
	"xx#   #  ###xx!"
	"xx########xxxx!",
	"ll3uruulld3rll3d3lull3drrddrrur5uruulldrrl4drrdlrddlul5uruulldrd3rdrdrdlddllulrddlul6ul"
	"urrdl3d3lulld4r4ldd3rudlddrrur5urrluulldrurdl3d3lulld4rlddlddrrur5uruulldrurdu4lddrdldr"
	"rlddlddrrur6u4drrdldl5udd5lurluuru3rdrl3ulldldrrluurrddr7d4ruurrdlu4ldl5u6d4ruru4ldl4ud"
	"dlluululurrlddrddl3ulur",

	// 46
	"xxxxx####xxxxx!"
	"x#####  ##xxxx!"
	"##    $  ####x!"
	"#  $  #$  $ ##!"
	"# $ #   #    #!"
	"#  ### $@ #$ #!"
	"######...##  #!"
	"xxx####..#####!"
	"x###  ... #xxx!"
	"## $$#... #xxx!"
	"#  # $ ## #xxx!"
	"# #    $  #xxx!"
	"#     #####xxx!"
	"##   ##xxxxxxx!"
	"x#####xxxxxxxx!",
	"3d4lddrdruudlluurrddldd4luururldlddrrurdruruurruuld3lddrddllurdruruuddllurluu3ruuluur3drd"
	"r3d3luudllddrulurdrud3r3ul3uruulul3dldrurdduuru3rddlurullru3lul3dldrurdururullul4duulluu3"
	"ldrrurrur4dldruullu4lddrulu3rurrur3durrddlluldululurrur4d",

	// 47
	"xx#########!"
	"xx#      @#!"
	"xx#$ $ $  #!"
	"xx# ##$# ##!"
	"x##.. .. #x!"
	"x# .. ..##x!"
	"## #$## #xx!"
	"#  $ $ $#xx!"
	"#       #xx!"
	"#########xx!",
	"3ldduurr3d3ld3l3d5r3ul3ulull3d3urrdluldduu5rdlul3duurrddl4d3luudrrdr3u3d5lu4rdruu",

	// 48
	"######xxxxxxxxx!"
	"#    ######xxxx!"
	"# $$$#    #xxxx!"
	"# @$ # ## #xxxx!"
	"# $$....# #####!"
	"#  #.#.*# #   #!"
	"#  #.#*.$     #!"
	"#  #.*.. ###$##!"
	"#######$#  #  #!"
	"xxxxxx# $$    #!"
	"xxxxxx#    #  #!"
	"xxxxxx#  ######!"
	"xxxxxx####xxxxx!",
	"luu3r5duurruu3r4dldlluuddrrululd6rddrddl3uddlld3l4u4rurrdl3dlluldldl3urul3d3rdlldl3ud"
	"5r3u4lr4u3lddll3u3lddrd3rl3ulldrur4d3ulldld3rllururdd3lddrulurr",

	// 49
	"xxxxxxxx#######!"
	"xxxxxxxx#     #!"
	"xxxxxxxx#$$ $ #!"
	"xxx######  $  #!"
	"xxx#   ## $ $ #!"
	"xxx# ....*  $ #!"
	"xxx# .###.#####!"
	"xxx##.# #.#xxxx!"
	"#####.###.#xxxx!"
	"# $  *....#xxxx!"
	"# $ $ #####xxxx!"
	"#@ $  #xxxxxxxx!"
	"# $ $$#xxxxxxxx!"
	"#     #xxxxxxxx!"
	"#######xxxxxxxx!",
	"rruu5r5lddlluu6r4lddlulu5r3l4dl3ulu4rll4drr7uluurrd3ruurrddlul3duu3lulld5rurrdlulddu4l"
	"4dll3drdr7ulu5rurrdluld4l4dllddrdr6ulur4dlldrdr5uluur4d3u4rurrd5lul3duu6r4ull3drd4luld"
	"du6r3ulddrd5luld5r4u3r4d7l7ruuldrd6l3r3urddrd4lrr4urr3drd4lr4ul3d",

	// 50
	"x########!"
	"x#  @   #!"
	"##$ $ $ #!"
	"# $ # $ #!"
	"#  $ # ##!"
	"#......#x!"
	"########x!",
	"l3drdllr4urrdlu3rdllull3dllurdrrdrruuluullddlddrrlluurdldr4u3r3duullul3d3ul3d",

	// 51
	"xxx####xxxxxxxx!"
	"xxx#  ###xxxxxx!"
	"####  $ ####xxx!"
	"#    $# #  #xxx!"
	"# $#  #   @#xxx!"
	"#    #  #  ####!"
	"# #$ $ #..... #!"
	"# $ # $ ..##. #!"
	"##$  # #...*.##!"
	"x#  $#  #..#. #!"
	"x# $  #$$  $$ #!"
	"x#  # $    #  #!"
	"x####    ######!"
	"xxxx######xxxxx!",
	"ddrr3drddl3ullddrluurrdrddlulldlld3luull4urrd3rd3rllulu3rluu3ldldur3ullul4duu3lddrrdrrd"
	"3rdrulurruu3ldldur3u3l3dldrrd3rurd3ulldldlluuru3ldl3d2(rluur)rddldrrd3rdruluruulldldur3"
	"ullul4dldrrd3ruruul3(ld)rrluururr4dlurdr3dlld3luulluluruur3ullddrluurrdd3lddrdrrdlddl3u"
	"ruurrl4u3r3dldld3rllull3ullddrluurrdd3lddrdruurrlldl2(luurr)dd3u3rddrr3d3ul3(ld)3rlld3("
	"dr)r3ulu3lddrdrrdruudludlddludllurrdru3lulullddr5urrl4u3r3dldld3rllu3ldl2(luurr)ddldrrl"
	"4u3r3dldldrrld3(dr)ulddllurdrulurrdru",

	// 52
	"xxxx########xx!"
	"xxxx#  ....#xx!"
	"x#### #....#xx!"
	"##  # $...##xx!"
	"#  $ #$.*. ###!"
	"#    $ $# $$ #!"
	"# $#  @ #    #!"
	"##  #  #  $ ##!"
	"x#  $ # $ ###x!"
	"x#  #  $ $#xxx!"
	"x#####    #xxx!"
	"xxxxx######xxx!",
	"r3u3dll3drrdrr7ulur8dllurdr8ulur4lddrrudlluurr4dluddl3drrurdr3urrdlul4uddluluullddrrldrdd"
	"3lurrdr4u2(3dll)ululu5rdr3udd5luurdld4rdruudll3dlldl3ulu5rdrull4drrurr5udrdlddrruldl3udd3rulldlu",

	// 53
	"#######!"
	"#. . .#!"
	"# $$$ #!"
	"#.$@$.#!"
	"# $$$ #!"
	"#. . .#!"
	"#######!",
	"lrudrdrd3luluururr3dullddrruuludd",

	// 54
	"##############!"
	"#   ###      #!"
	"# $$$     $$ #!"
	"# $ ### $ $  #!"
	"# $ #  ### ###!"
	"#   #.*...$@##!"
	"#   #.....#$ #!"
	"## # ...#.#  #!"
	"## # .....#  #!"
	"##$#####  # ##!"
	"#     $ ###  #!"
	"# $$ $    $$ #!"
	"#       ###  #!"
	"##############!",
	"3ld3luurddrruldlluurdldru5rdrddlddrddlu4lu3lddrrud5luur4ul5urrd4rurrddrddrdrddlddrd5l4r3uru"
	"ululuuluur3d3u3ldrr6lull5dr4dldd6ru4r3uruulu4ldlluurdldrru3ruuluur3duu7lulld8r8l4drr3u3dl4d"
	"ldd6ru4r3uruulu4ldlluurd4ruuluur3duu7l4dl4dldd6ru4r3uruulu4lrr3d4luurluurd4r3u7lulld8rur3du"
	"u7l4dl4dldd6ru4r3uruulu5lul3dld4rdruud4l3u5r3u9ldrlddruulu8rur3duu8l8dldd6ru4r3uruulu5lul3d"
	"ld4rdru4l3u6rdrddl3d4ld5l9ulu8rur3duu8l10d5ru4r3uruulu5lul3dld4r3l3u6rdrddl3d4ld3luldl9ulu8"
	"rur3duu8l10d5ru4r3uruulu5lul3dld3rll3u6rdrddl3d4ld3luuldl8ulu8rur3duu8l10d5ru4r3uruulu5lul3"
	"dldrrl3u6rdrddl3d4lu4ldl8ulu8rur3duu8l10d4ru5r3uruulu5lul3dldr3u6r5drd5lu4ldl8ulu8rur3duu8l"
	"8d5rd4r6u5lul3duu6r6d4ldlu3ldl9ulu8rur3duu8l9d9r6u5lulddu6r6d4lu4ldl8ulu8rur3duu8l9d9r6u5lu"
	"ld5r3u8lddrulu7rur3duu8l9d9r6u5l4r3u8l4dr3ulu7rur3duu8l9d9r6u4l3r3u3ldrrurdduu8l9d9r6u3lrr4"
	"urrdlul3duu8l9d9r6ullr3urrdluldduu8l9d9r6ul",

	// 55
	"xxx#####x!"
	"####   #x!"
	"#  $.# ##!"
	"#   $   #!"
	"#.##.##.#!"
	"#  $$$  #!"
	"####.  @#!"
	"xxx######!",
	"3uluulldldruurrddr3d3l3u3lddrrll3urdrrddrdrr3u3lddrrdru3luurruullddllurlld",

	// 56
	"x##########x!"
	"x#    .   #x!"
	"## $##$## #x!"
	"# @$. . .$##!"
	"#   ##$##  #!"
	"###   .    #!"
	"xx##########!",
	"uu7rdd6ldd3rud3luu4r4ldlluruu4rdu3r3drd3lrr4u7lddrulu3r",

	// 57
	"########!"
	"#   @  #!"
	"# #$## #!"
	"# $  $ #!"
	"###  $##!"
	"x#. $.#x!"
	"x#. ..#x!"
	"x######x!",
	"l4dldrrul4u3rddllrduruu3l4drdl5ullddrluurr3durddl",

	// 58
	"#######xxxx!"
	"#  .  ####x!"
	"# $.$ $ @#x!"
	"#  .####.##!"
	"#  $ $ $. #!"
	"####    . #!"
	"xxx########!",
	"3d4lululururrdllddrd4r3u3l3r3dllurd3lurr3l3urrdl4rddrd3lurdru5lulluurdldrld6r3ld3r",

	// 59
	"#####xxxxxx!"
	"#   #######!"
	"# $ * .$  #!"
	"# #.#.#.# #!"
	"# $ $@$ $ #!"
	"# #.#.#.# #!"
	"#  $. * $ #!"
	"###   #   #!"
	"xx#########!",
	"ddllrr4ur2(rddl)luu3dll3u3rlddrrdrru3l3r4ull3d3ur2(rddl)luu4l3drrurrdrruldl"
	"ulldllurrll5ull5drrlluurl3urr3dlluururd",

	// 60
	"x#####xxxxx!"
	"x#   ######!"
	"x# $.##   #!"
	"x##$...$  #!"
	"### .$. ###!"
	"#@$ $$###xx!"
	"# $ ..###xx!"
	"# $  .  #xx!"
	"#####   #xx!"
	"xxx######xx!",
	"ddrr3urduu3rurr3(dll)urrl3ulldrurddrddluluruulldr5dr3u3d3luurrdru3ldrr",

	// 61
	"xx#########xx!"
	"x##.......##x!"
	"## .$$$$$. ##!"
	"#   #   #   #!"
	"#  #*#@#*#  #!"
	"##  #   #  ##!"
	"x#. $$$$$  #x!"
	"xx#.$     #xx!"
	"xxx##   ##xxx!"
	"xxxxx###xxxxx!"
	"xxxxxx#xxxxxx!"
	"xxxxxx#xxxxxx!",
	"ululrdrddldlluluururrdrrurl2(dlddr)urrur3ulu3lulrrl4drdrdldl6u4r4d3ldl"
	"4ulu3r6l3drdrrurrddl4ulur6dlulurdr4uru3l",

	// 62
	"xx####xxxxxxxx!"
	"###  ######xxx!"
	"#    ##   #xxx!"
	"# #     $ #xxx!"
	"# $$ #$#$##xxx!"
	"### $    ###xx!"
	"xx##  ##.*.##x!"
	"xxx##$ $... ##!"
	"xx##  ##...  #!"
	"xx#   $ #. @ #!"
	"xx# #   $.# ##!"
	"xx#    ##   #x!"
	"xx#######  ##x!"
	"xxxxxxxx####xx!",
	"u3l3u3ldd3rurddu4lululuu4rurrdl3du3ldd3rurdldrurdll3u5luu4rur4du3ldd3rur"
	"dluu4lulu4rur4du3ldd3rdrurr4dlluuddrruulruu3luulludlluu3rur5d3ldldlddrr5"
	"ulu3rluurr3du3ldd4r4l3d3rluldl4ulu3rluurr3du3ldd3r3lul5uldllddrrudlluurr"
	"urdld4rur4du4lulu4rur3d",

	// 63
	"x#######x!"
	"##  *  ##!"
	"# . .@. #!"
	"#   * $ #!"
	"#*$$*$$*#!"
	"# $ *   #!"
	"# . . . #!"
	"##  *  ##!"
	"x#######x!",
	"3drddllul3u3dldrurr4urrdlu3lddruddrruulrdldlldllurruuldd",

	// 64
	"#######!"
	"#     #!"
	"# $.$ #!"
	"# .$. #!"
	"#*$.$*#!"
	"# .$. #!"
	"#  .$ #!"
	"# @   #!"
	"#######!",
	"3ruluu3dlluuruulduluurdurdduurrdl",

	// 65
	"x######x!"
	"x# @  ##!"
	"x#$##  #!"
	"## ..  #!"
	"# $**$ #!"
	"#  .. ##!"
	"#  ##$#x!"
	"##    #x!"
	"x######x!",
	"rrddldurrdlu3ldlddrurudllur3d3r3uruluu3l3dldr",

	// 66
	"###############!"
	"#             #!"
	"# $.$.$.$.$.# #!"
	"# .$.$.$.$.$  #!"
	"# $.$.$.$.$.#@#!"
	"# .$.$.$.$.$  #!"
	"# $.$.$.$.$.# #!"
	"#             #!"
	"###############!",
	"3u4ldrd4(dlul)dl3u3(rdur)rdu5rddllrr4dllu4(uddllurl)uddllur",

	// 67
	"#######!"
	"# $.  #!"
	"#. .$.#!"
	"#$.*. #!"
	"# $*$ #!"
	"#  .  #!"
	"# $*$ #!"
	"#  * @#!"
	"#######!",
	"4ullullurdrrdrddlluuddllurlurl4dr3ud3rddlurulu",

	// 68
	"xxx#######x!"
	"xxx# ... #x!"
	"####$##$ ##!"
	"#    $    #!"
	"# #$@.* # #!"
	"#   $*. # #!"
	"## # .* # #!"
	"x#$ ####  #!"
	"x#       ##!"
	"x#########x!",
	"rdrruuruu4lddrddrr3urullr4dlluurlddrr3uruldd6lddrrudlluu5rlddrruurr4dld6luudd6rur4ullud4ldrldrrluu3ldd3r",

	// 69
	"#######!"
	"#  .  #!"
	"# $.$ #!"
	"# $*$ #!"
	"#..*..#!"
	"#$$*$ #!"
	"#  .  #!"
	"# $. @#!"
	"#######!",
	"u4ldru3ruulldurrddlur4ullddrluurrddulu3lddrulurl4drddluu",

	// 70
	"##########!"
	"#.     $.#!"
	"# #### #.#!"
	"#. $ #$  #!"
	"#  $ # $ #!"
	"#   $@ $##!"
	"######...#!"
	"xxxxx#####!",
	"lulluluu6rl3durrdlduuluu5ldd3(rdr)uud3lulluluu5rddrlddllulldl3udd3rulldd4rurduru",

	// 71
	"xxxx##########x!"
	"xxx##   #    ##!"
	"####    #  #  #!"
	"#  $.******.$ #!"
	"#   #   @  #  #!"
	"#####    ######!"
	"xxxx######xxxxx!",
	"ruruulddrd3lurrdruluu3rdrddlu3luu3rdrdluulldlddld3lurrurlddru3lulururrdlu3(ld)llurr",

	// 72
	"xxxxxxx#xxxxxxx!"
	"xxxxxx###xxxxxx!"
	"xxxxx##  #xxxxx!"
	"xxxx#  $ ##xxxx!"
	"xxx#  $.$  #xxx!"
	"xx## $.*.$  #xx!"
	"x#  $.*.*.$ ##x!"
	"## $.*.*.*.$ ##!"
	"x## $.*.*.$  #x!"
	"xx#  $.*.$ ##xx!"
	"xxx#  $.$  #xxx!"
	"xxxx## $  #xxxx!"
	"xxxxx# @##xxxxx!"
	"xxxxxx###xxxxxx!"
	"xxxxxxx#xxxxxxx!",
	"ururruullrrddludd3lululluurruuldurrurduruulddrddrrulrulldrdrddlud3rulldld"
	"druul3d3luluudllurlulurru2(ururd)drdrrddrdll",

	// 73
	"#######!"
	"#  *  #!"
	"#  *  #!"
	"# $*$ #!"
	"#*...*#!"
	"# $.$ #!"
	"# $.$ #!"
	"#  . @#!"
	"#######!",
	"uulrddlluuruuruulddrddllddrruudld3luurdldr4uluurdd",

	// 74
	"#########!"
	"##  @  ##!"
	"# $ $.# #!"
	"#  $.#. #!"
	"# $.#.$ #!"
	"# .*.$  #!"
	"# #.$ $ #!"
	"##     ##!"
	"#########!",
	"lldlddrdrddrruurudlddllurlull3u3rllddurddrddluudd3rull3ruuldll3rdlldlu",

	// 75
	"#######!"
	"#  .  #!"
	"# $*$ #!"
	"# $.$ #!"
	"# ... #!"
	"#.$.$.#!"
	"#$$*$ #!"
	"#  . @#!"
	"#######!",
	"3ulluuddllurd3ruuldr4dlluurlddrruld3luurdldr4uld3urdd",

	// 76
	"###############!"
	"#  .........  #!"
	"# $.$$$$$$$$$ #!"
	"# $.$.......$ #!"
	"# $.$.$$$$$.$ #!"
	"# $.$.$...$.$ #!"
	"# $.$.$*$.$.$@#!"
	"# $.$...$.$.$ #!"
	"# $.$$$$$.$.$ #!"
	"# $.......$.$ #!"
	"# $$$$$$$$$.$ #!"
	"#  .........  #!"
	"###############!",
	"5dll9u6(dlu)6r9d10l10urr9d5(urd)ur5udludlurr5d6l6ururrdl5durdurdll3urduu3r3d"
	"luddrdd6l3urdlu3(url)uru7r3dlurd3(dlr)dldrdr8(rul)ruul9drdl9u9lul8(ldr)lddr9ulur",

	// 77
	"x########x!"
	"##  @#  #x!"
	"#  ###$ ##!"
	"#  * *   #!"
	"# * * *  #!"
	"#  * * . #!"
	"###   ####!"
	"xx#####xxx!",
	"lldl3drrururrdlullddlluurlddrrdrrulrruuld3rullruuldd",

	// 78
	"#######!"
	"#  .  #!"
	"# $.$ #!"
	"# $.* #!"
	"#.$*$.#!"
	"# *.$ #!"
	"# $.$ #!"
	"#  . @#!"
	"#######!",
	"6ullddluldrruurrdlrdlr4dlluurudlddrruudld3luurdldr4uluur3d",

	// 79
	"##########x!"
	"#        #x!"
	"# $#$#$#$##!"
	"#. .$...$.#!"
	"#. .$...$.#!"
	"# $#$#$#$@#!"
	"#        ##!"
	"##########x!",
	"ullu4ldlldd7ruruulldrdruldd7l5u7rddldrdd7luurru3rldrllulldlu3d3ruullrur"
	"3drrudrr5ulldullddldr3ullddldrurr3dlluuluruuldr4dlu",

	// 80
	"#########xx!"
	"#   #   ###!"
	"#   $ $   #!"
	"## ##.#   #!"
	"#@$##.##$##!"
	"# $.....  #!"
	"##$##.##$ #!"
	"#  ##.#   #!"
	"#  $ $#  ##!"
	"#     #  #x!"
	"##########x!",
	"drddldd4r4u3rdd4ulululdllulldr3d5r5l3u3rurrddrdd3l4d4luurudlddrurdrr4u4"
	"rddlurullrddlddr3uruluuluulld3lddld3rll3u3rurrd4lul3dldrrl3u5rdrru6lul3"
	"dldrddlddrrurdruudd4lu3rdru",

	// 81
	"xxxxxxxxxxxx####!"
	"x############  #!"
	"x#      $      #!"
	"x#$$#  ## ###  #!"
	"##  ## #....# ##!"
	"#  $   #....$  #!"
	"#@#$$ ##....#  #!"
	"# $    #....#  #!"
	"##  $$ ###$### #!"
	"x# $ $ #       #!"
	"x#$ $ $  #   # #!"
	"x#  ## #####   #!"
	"x#     #xxx#####!"
	"x#######xxxxxxxx!",
	"urrddrruur3u4ldu10r3l5drdul5u3l3dlddr3drru4rddrr6u5l4ruuruul4drddluru3ldl3dlld"
	"ll3u3l4ulu10r3lddrddu3ruuruul4drddluru3lulluu3l3dldldl4ulu10r3lddlddrdruu3ruur"
	"uul4drddluru3lulluu3l3dlldl3ulu10r3lddr4d3u3ruuruul4drddluru3lulluu3l3d5lddr3d"
	"rr3u3dlddl4ur5ulu10r3lddrd3ruuruul4drddluru4luluu6l6dlddr7ulu10r3lddrd3ruuruul"
	"4drddluru3lulluu3l3d5lddrdr5ulu10r3l4dru3ruuruul4drddluru5l3u3l3dlddr3drrurrll"
	"d4lull3d4rud3l9ulu10r3lddrd3ruuruul4drddluru4l4dlld4lullddr8ulu10r3l3d4ruuruul"
	"4drddluru4l4dlldllulldl7ulu10r3lddrd3ruuruul4d3l4dlldllul3uldl4ulu10r3lddrddlu"
	"ud5rddluru4luld4ruuruul4drddluru3lrr3u4ldu3l3dlldl3uldr3dlluur3u10r6l3dl5d3rur"
	"r4u3ruuruul3duu7l3dldll3ulu10r6l3dl5d3rurrdrruldl3u2(ddrr)6u4l3ruuruul4dr4d3ld"
	"luudlldlluulldl6ulu10r6l3dl5d3ru6ruuluru3lrruuruul4drddlurull",

	// 82
	"x####xxx####xxx!"
	"##  #####  #xxx!"
	"# $ $   $$ #xxx!"
	"#    ## #  ###x!"
	"##$#.....$   #x!"
	"x# #.....#  $##!"
	"x# #.....# $$ #!"
	"x# ### ###    #!"
	"x#    @    #$ #!"
	"x#  #  $ ###  #!"
	"x#### $ $ $ $ #!"
	"xxxx#####     #!"
	"xxxxxxxx#######!",
	"uull3uluuldldrrur3d3r3u3ldlluurdldrurddrr4d4l4u4d8rurudrruldll3urrdlu3ldllulluu"
	"3rdd3r3ulddrdlldllulluu3ldrrurdu4rl3drdlldd4r3uru3lrr3uldll3d3urrdrdllruullddld"
	"ru3r3druuru4lruullddrdlu3r3d3ruldluuru4lruull2(dd3r)3dluuruldluuru6ldru3rdd3r5d"
	"l4uruldluuru5l5r7d3lurrdr4uruldluuru4lruulldd3r4dlldld4rdr4uruldluuru4lrr4d4luu"
	"ddlddr3u3d5rdr4uruldluuru3l",

	// 83
	"x############!"
	"x# @# ......#!"
	"x#$ #...* $ #!"
	"x#   $ ##  ##!"
	"x# $ $  ## #x!"
	"## ### $#  #x!"
	"# $# $    $#x!"
	"#     ##   #x!"
	"####  ######x!"
	"xxx####xxxxxx!",
	"ddrruu4rddrurullr4dlddruud4luurdld3rur3u4lddu4l3dld3ru3ruul3uld4rulld4ru3lrr4dl"
	"ddr5urulld3lddrddrrdr4uluurrdl4d6lddrulu5rdr5ulur5d3luuluurrllddrddl3ulldruurrl"
	"ddrddl3ulur4dld3l3urrllurrdrulluul5dld3rdrulurr3u3d3rdr5udlu",

	// 84
	"xxx#########xxx!"
	"xxx#@      #xxx!"
	"x### ##  # ##xx!"
	"x# $$ # $#  ##x!"
	"x#    # $ #$ #x!"
	"x#  # # #    #x!"
	"x## # $  $ $ #x!"
	"xx# #   ###  ##!"
	"xx# ##...##$  #!"
	"###$$ ..### # #!"
	"#  $  ...##   #!"
	"#   ##....#####!"
	"###########xxxx!",
	"6rddrdrdlrddlulluulul4dldr4urrddlruull6dldrru5ldllu4rurrddluuruull3ull5drdldl"
	"lu6r9u3lddr3drluul3u4rddl7dldru4l5uluur6drdrruldlldllu4rurdr4urruulul7d4u5ruu"
	"ldrd4lruull5d3u5rddrddll3uru4lruull4duurrurdrruuldrd4lruull3d6u3lddrdlul6drrl"
	"dldllu4r",

	// 85
	"x####xxxxxxxxxxx!"
	"x#  ########xxxx!"
	"x#   $     ###xx!"
	"x# ##$ ###   #xx!"
	"x#    #...$  ##x!"
	"x#$ @ #...# $ ##!"
	"##  #  ...#$   #!"
	"# $$  $#..  #  #!"
	"# #  $ #..$ $  #!"
	"#  $  ##..#  ###!"
	"### #$  $ ####xx!"
	"xx#    #  #xxxxx!"
	"xx#########xxxxx!",
	"rddlddrurudlluru3ruurrurrd4l3d3ruudrrulu3lddldr4dlulldl3urudllururrurdrddldrdlr"
	"4ul3d3u3lddrulurrurddulldd3luddlluu4rdrulurrurrddlurulruruu5l4drddllurdrulurrll"
	"4u5rddl3dlu3lulldld3rdrulu3rdrddlur3dlur4u4l4d3rdru3ld3l3udlluu4rdrulu3r3luu3ld"
	"dr3dlluu4rdrulurrll4ullul5dr3dlluu4rdrulurl4u5rdrr3dlurullr3dlrdllrruurrdd3l",

	// 86
	"#########x!"
	"#   ## @#x!"
	"# $  $  #x!"
	"## *.#$ ##!"
	"x# #.*   #!"
	"x# .. $# #!"
	"x#####   #!"
	"xxxxx#####!",
	"3dludrrddllu4luuruulldrurdl3d4rdrruululdr3uldlldduu3rddlldlrurru"
	"u3ldduululldrdrluurd3rdrdll3rddlludrruull",

	// 87
	"xx####xxxxxxx!"
	"xx#  ########!"
	"x##    $    #!"
	"x# $# #.# # #!"
	"x#  ...*. $ #!"
	"## #$##.##  #!"
	"# $     $ @ #!"
	"#   ###  #  #!"
	"#####x#######!",
	"r4u2(lldd)rr6ldlluruu4rluulldld3r3ldd5r2(uurr)dd3l3r3dlulldlu3rurulluu5lulddldrrllddrru",

	// 88
	"#####xxxxxxxx!"
	"#   ########x!"
	"#   # .    ##!"
	"#  ## *$$#  #!"
	"# @ # .   $ #!"
	"#   # .#$#  #!"
	"##  ##.# $ ##!"
	"x#  ##.#   #x!"
	"x#   #. # ###!"
	"x#   $* # $ #!"
	"x#    . #   #!"
	"x############!",
	"6d5ruul3ul3u3rdu3ldd3rll4drddluuddllurdrruuld4ulurluur6d6urrddlruull5d5u4rdrddlu3l"
	"ruull4d4u4rdrd4lruull3du4r3dlluudr4drruldl3ur3u3lruulldduu4rdrd4l3rddldl4uld3ruu3l",

	// 89
	"xxx######x#####!"
	"xxx#    ###   #!"
	"xxx# #$     $ #!"
	"x### $ ##### ##!"
	"x#   #.##     #!"
	"x# $##.##  #$ #!"
	"x#  ..... $#  #!"
	"##$ ##.##  ####!"
	"#  $ #.#####xxx!"
	"#   $ @ #xxxxxx!"
	"#####   #xxxxxx!"
	"xxxx#####xxxxxx!",
	"3u4luurr3urr4d4ull3dlldd4r3d3lulld4rdrullulluurdu3r4u5rurrd6lul5d4u6rddrddl3ud3l3"
	"druulurrldd4l5ull3dldd5rll4u5rurrd6l5rddrddl3udll3dlu7l3drrululu4r3l3dllurdruulur"
	"rluul3drddllurdruuluruur3urr4d4ullddrluurr3duu5rurrd6lulddu6rdd3ldrdl",

	// 90
	"#########xxxxxx!"
	"#  #    ###xxxx!"
	"#  #  #   ###xx!"
	"# .   # $ $ ###!"
	"#..#  # $ $   #!"
	"#..   # @$ $  #!"
	"#..#  ##$# $  #!"
	"#..  ##   $ ###!"
	"#..#    $$# #xx!"
	"#    ##     #xx!"
	"#  ##########xx!"
	"#  #xxxxxxxxxxx!"
	"####xxxxxxxxxxx!",
	"l4u3l7d3ru3rurld3lddrru4lrrd4ruuluul3ullulldd3l6drr3ur5urr4drddrd4l3r3ul4ull4d3"
	"lul3drddrr3ur5urrddr4drd4l3r3ul4ull4d3lulddr3drr3udd3rd4ruuluulul3drd4l3r3ul4ul"
	"l4d3luldr4drr3udd3rd4ruullruullddrd4l3r3u3rurrd4lull3ull4dllrddllddrr5ur3urrdrr"
	"ddl3drd4lrru3ruulull3ulldd3luldr6drr5ur3urr3dr3drd4l3r3u3rullulluullddllrddll4d"
	"rr6uruurrddr4drd4l3r3u3ru3(ull)4d3l4drr3ur5urrdr5drd4lrru4ruurrdluu3lulluull4d3"
	"luu6drr4ur4urrddr4drd4l3r3ul4ulldd3l6drr3udd3ru4ruru3lul3drd4l3r3ul4ull4dllrddl"
	"lddlddruurr3ur3u3l3d3u3rddllrruu3ldduuluurdd3ruuldrdllrdrdll",

	// 91
	"############!"
	"#    ... $ #!"
	"# $$$*** $@#!"
	"#    ... $ #!"
	"############!",
	"u3lrdd4lud3luu3rdd3rururrdllrrd6luu3ldd5rlluulldld4rluuldldrr",

	// 92
	"xxxxx#####xxxxxx!"
	"######   ######x!"
	"#   #  $ ##   #x!"
	"# $ $ $ #   $ ##!"
	"#  $# @ $ $$#  #!"
	"## $  #     $$ #!"
	"#..#$#### #$#  #!"
	"#....  #  #   ##!"
	"#....   $$#####x!"
	"#...###   #xxxxx!"
	"#...#x#####xxxxx!"
	"#####xxxxxxxxxxx!",
	"ldllul5d5uluurrdul6d3u3ruullul5dldr3u3rurrdrru3lru4lul4dldruu3ru4rurrurrddrddlu4luur"
	"rd5lu3lul3d3rud3lddrddul5rdrr4ururuurrdluldrrdrddlu3lu4lu3lul3d3rud3lddlddururrd3rdr"
	"r4uruu3rdrd4lu4lu3lul3d3rud3lddrdl5rdrr4uruurdurrdd3lu4lu3lul3d3rud3lddrd4rdrr4uru4l"
	"u3lul4dlddrruldluruu3rurulruurrdluldldllul5drdl5urdurrddllulddu3ru4r5dllu3lulluu3rur"
	"rdrluu4lul5drrd3rdrr4u4rddlludrruu3lu4lu3lddrrud3lddrrdrrulld3rdrru4l4r3uru4lu3lul4d"
	"urrdururu3lul3d",

	// 93
	"xx#####xxxx!"
	"xx#   #xxxx!"
	"### . #xxxx!"
	"#   . #####!"
	"# ##$## @ #!"
	"#   . $   #!"
	"###$.$#####!"
	"xx#   #xxxx!"
	"xx#####xxxx!",
	"d4lddrul3uruld3lddrrlluu3rddrddlludr4u3lddrrlluu4ruulldurrddldd3rurrd4ldd2(lluu)rr",

	// 94
	"xxxxx#######x!"
	"xxxxx#@ #  #x!"
	"###### $   #x!"
	"#...### #  ##!"
	"#.  #  $ #  #!"
	"#.    $ $ $ #!"
	"#.  #  $ #  #!"
	"#...### #  ##!"
	"###### $#  #x!"
	"xxxxx#  $$ #x!"
	"xxxxx#  #  #x!"
	"xxxxx#######x!",
	"d3rdrdrddl4dlur4ulluluur3(rd)luulullddrddlu4luld5r3dlddr4uru6l5r4drrdr4uruuld7lullddru5"
	"r4d3ruuldruuru9l5r4drrdr4uru8ldlluurd8ruulullddrd5ldlu5r3urrur3drd8lulddu3rurd4r3u3lddr"
	"d6l3rdrur3dlddr4uru5ldluu",

	// 95
	"xxxxx#####xxx!"
	"xxx###   ####!"
	"x### $ $ #  #!"
	"##   .#     #!"
	"# $# ..# $  #!"
	"#@$  ...#  ##!"
	"# $# #...#$ #!"
	"##   $ $    #!"
	"x#### # #####!"
	"xxxx#   #xxxx!"
	"xxxx#####xxxx!",
	"3rddllulurdd3rddrruurululluu3ldlddrdrr3u3drrudlddrruu3r3uruul4drd3lulullrrddludl"
	"ddrruu3r4ulldrur3drd3lululrddllddrr3ud3r2(3ull)drurdldrrdrruul4drd3luldllddrruul"
	"urd5luluururrdrrdulluurdurrurdldrrdrruul4drd4lddlluurlddrruu3luurlurl3dlluluurur"
	"rurd3lddrrddllulurrlddrr3udlluurr",

	// 96
	"xxxx####xxxxx!"
	"xx### @####xx!"
	"x#  #   #  #x!"
	"x#$ $ $$$ $#x!"
	"x#  #.#.#  #x!"
	"x# #.....# #x!"
	"x# #.....# #x!"
	"#   #...#   #!"
	"# $  # #  $ #!"
	"x#  $ $ $  #x!"
	"xx#$ $ $ $#xx!"
	"xx#       #xx!"
	"xx#########xx!",
	"l4dr4dllddrr5u3dlldrdr4ulurrl3drrdldl4urullr3drrururrdld3ldl3urul3d4ruuldrd3ldl3u"
	"ruulldr3dllululldrd3rdr4ulurrdl3d4luurdld3rdr4ul4urr3dlr3ulldrlddr6d3luruulld3rdr"
	"4u3d4l5ururrddrl3urrdlulddullul5dldrurdld3rdr4u5d3ruluurrd3ldl3udd4r5ulu3luld4rur"
	"5drdluldrd3ldluu",

	// 97
	"xxxxxxxxxxxxx#x!"
	"xxxxxxxxxxxx##x!"
	"xxxxxxxxxxx###x!"
	"xxxxxxxxxx#   #!"
	"xxx######## # #!"
	"xx# $ $ $ $   #!"
	"x## # # # #$##x!"
	"###.......   ##!"
	"x## #.#.#.#@$#x!"
	"xx# $ $ $ $   #!"
	"xxx######## # #!"
	"xxxxxxxxxx#   #!"
	"xxxxxxxxxxx###x!"
	"xxxxxxxxxxxx##x!"
	"xxxxxxxxxxxxx#x!",
	"urdl3drruulrddlluuruu3lddrru3drruuluulddlluullddrruu4ldd2(rruu)rrdd4luurrdd3rddludr"
	"rddlluuruu3lddrru3drruuluuldd6urrddlruull4drdd3l4ull4dlluullddrr4urrddllrrddrruullr"
	"ruurr2(ddll)4ull4dll4urrddlrddrruullrruurr2(ddll)4urrddlruulldd7rddluru6l5rddrrddll"
	"3urul4urrddlruull4dll2(uurr)ddlruu2(lldd)lluurr4drruru3luull4dr2(ruul)ldd4r4drruulr"
	"ddll3uru3lddrluul4rddrddll3uru3luurrddrddlurullruullddrr4urrddlruull4drddlurull",

	// 98
	"xxxx##xxx##xxxx!"
	"xxx######  #xxx!"
	"####  $ $  ####!"
	"x### *.*.* ###x!"
	"xx## .$ $. ##xx!"
	"xxx# *.*.* #xxx!"
	"xxx#  $ $  #xxx!"
	"xxx### @ ###xxx!"
	"xxxxx#####xxxxx!"
	"xxxxxxx#xxxxxxx!",
	"rurruuldr3ulddulldlrrluurdrruuldrdllrr3dlldllull4u4rdrruuldr4dlluu3dllurdru",

	// 99
	"#####xxxxxxx####!"
	"#   #########  #!"
	"#              #!"
	"## ##########  #!"
	"x# # * . * ## ##!"
	"x# #  * *  ## #x!"
	"x# # * * * ## #x!"
	"x# #  * *  ## #x!"
	"x# # * * * ## #x!"
	"x# #  * *  ## ##!"
	"x# # * * *     #!"
	"x#$#  * *  #   #!"
	"x#@  * * * #  ##!"
	"x##############x!",
	"9u9drr5ur3(rd)4rdrrul8u10lulld11r10l10drr5ur3(rd)rr3(ul)uuddrdrrulruuldlrr"
	"ddlu3d3rdrrul7uruul9d3ldluud3rddruru4l",

	// 100
	"###########!"
	"#  #   #  #!"
	"#  $  $   #!"
	"#  ##.##  #!"
	"## ...##$##!"
	"##$#...   #!"
	"#  #.##$# #!"
	"# $$  $   #!"
	"# @#  #####!"
	"#######xxxx!",
	"luuruurrd5rdd4ldlu3rudrruullruuruuldllul3d3luluurd3rdd3lulur4dlddrurruudd3ruur"
	"uuruuldllulldrddl3d3ruurrdd4ldl3uddll4uluurdrrurddu3l4dld6ruuruuruuldlluld3l5d"
	"5ruuruuru6l5r3drdd4ldluudll4uluur5dld6ruurrdd4ldlu",

	// 101
	"#####x####xxxxx!"
	"#   ###  ######!"
	"# $  $ @$.... #!"
	"##$ $  #$.##. #!"
	"x#  # $# ....##!"
	"x#  $  #$.##. #!"
	"x# $  #  .... #!"
	"x#$$$ # $$  $##!"
	"x#    #  ##  #x!"
	"x#############x!",
	"4rll4drrddr4udd5lddru3rdruud5lu4rlluuldrddllu3rl4ul3drddllurdruulu3rlluu3ldl5d3luur4u"
	"7r5l3druulurrur4drddllurdruulurrluu6lulld6rur4drddllurr4u6lddlu3rdrulurrur4drddllurdr"
	"uuluruu6lulld8r4l6dll4uddl3u3rdrulu3r5lulld6rur4drddllurdr3uluu5l5drdr5ulu3rur4drddll"
	"urdruul3u5l4drdr4ulu3rur4drddllurdrul4u5l3drdr3ulu3rur5dlddrulur",

	// 102
	"xxx#####xxxxxx!"
	"xxx#...######x!"
	"xxx#...#    #x!"
	"xxx#...$ $$ #x!"
	"#####.. @# ##x!"
	"#    $ ### ###!"
	"#   #$####   #!"
	"## $     ### #!"
	"x#   # $  $  #!"
	"x######  # $ #!"
	"xxxxx#  $#$# #!"
	"xxxxx#       #!"
	"xxxxx#########!",
	"uldld3ldlddrrur5urulrddlddlldllu3rll3drurr4ulur5dllulurrlddrr3uruulldr4d3rddluru4ldluulu"
	"rrlddrr5urdrrurrd5l4drr4d5r5ulluuddrrdd4ldluru4ldluulurrlddrr4urul5drr4d3ruuddrruulu3ldl"
	"uru4ldluulurrlddrr4u4drr4d3ruuru3ldluru4ldluulurrlddrr3u3drr4druuddrr3ulldluru4ldluulurr"
	"lddrruuruurru3rd4lrdl",

	// 103
	"xxxx#####xxxxx!"
	"xxxx#   #xxxxx!"
	"x####$# ###xxx!"
	"x# $  @$  ###x!"
	"x#   #    $ #x!"
	"###$## $$   #x!"
	"#....#$#  $ ##!"
	"#..... ###$  #!"
	"##.#.  #   $ #!"
	"x#... $#$ #  #!"
	"x#  #   $ ####!"
	"x####  ####xxx!"
	"xxxx####xxxxxx!",
	"lldlduru3ruulldurr3drrdrrddrddlulldd3ldl3urduulluluururr5d4u3rdrrddrddlulldd3ldl3urulrdd4l"
	"uulur3drruull4r3u3rddlulul3duu5rddrddlulldd3ldluru3ldl3uruld4rdd4u5rdlrdrddlulldd3ldlu4ruu"
	"ruuru4lul5d3ldl3u4ruu4r3dldd3ldlu4ruu3ruldluuru4lul5d3ldlu4r4urrdrurr3dlldd3ldlu4ruuruuru4"
	"lul5d3l3r4u4r3dldd3ldl3udd4ruuldrd3ldlur5u3rullul4d3l3rddllrr6uluurr3drdrr3dldd3ldl3ur4urr"
	"dlul3dllrrdd6ulldldulu4rluurr3drdrr3dldd3ldl3ur4urrdlul3dlrdd4u5ru4l3r4dldd3ldl3ur3uruul6d"
	"4u3ruuldrr4dldd3ldluur6uluurr3drdlul5dulr3u4r3dldd3ldlurul",

	// 104
	"###########xxxx!"
	"#   ##..  #xxxx!"
	"# $ ....# ##xxx!"
	"#  #.... @ ###x!"
	"#  #.#.. #   #x!"
	"####.###  $# #x!"
	"x##  ##  $ # ##!"
	"##   #  #$    #!"
	"#  $ #$$#   # #!"
	"# # $  $ ##   #!"
	"# ###$ $  $  ##!"
	"# $    ##    #x!"
	"# $   ####   #x!"
	"#  ####xx#####x!"
	"####xxxxxxxxxxx!",
	"r3dulldrururr3dldlluul3urrddl3drruldluuluul3u2(rrddl)rdlddrrulr4dllurdr3ulluuluululu3luld4r"
	"u3rddlldluru3ld6rddldluudrrurr3dlldluur3u3ldluruldll4dlldl3drrdrruru4rdr3udrruu3luuldluudrr"
	"uu3lr3dldlddld3rulrdrrdr3ulluuruldluudrruulldlluurd3rdrr3dlldluulldlddld5rdr3udrruu3luuldlu"
	"uddl3dld4rdr3ulluurulruu3luldllurrll5dlldl3drrdrrudllull3ururrdld3rddluruurd3uruudrrurr3dll"
	"dluurulruu5lullulld4r4lddrulu3r4dl3d3rd4rdr3udrruu3ldluuluuddrr3u5l3r3dl3d4l3ur3u3dlddr3u4d"
	"r3dllurdruud4l3urrdr3u3drrd4rdr3udrruu3luuldluudrruu5l3r3dl3dldd5lddrulu3rdruud4l3urrd3rd4r"
	"dr3ulluuruldluudrruu4l4rdrr3dlldluuruldluudrruu3lr3dl3dld4rdr3udrruu3ldluuruldluudrruull",

	// 105
	"x#######xxxxxxxx!"
	"x#...  #####xxxx!"
	"x#...#$#   ###xx!"
	"x#... $@ $   ###!"
	"x##$$# ##$#$   #!"
	"x#   #     $$# #!"
	"x# $###$## # $ #!"
	"x# $.#.$       #!"
	"##  ...#$$ #####!"
	"#  $#..  ###xxxx!"
	"#   ##.   #xxxxx!"
	"#######   #xxxxx!"
	"xxxxxx#####xxxxx!",
	"3lrrdd4rddllddlddrrullr3urrdlulddlluurudld4lurluurdduuruuluu3rdu3lddrul4dldd3rdrrddrruldl"
	"urullrruru5r3ullullulld3lruu3l3dru4rurrd6ldluud3rddrddrdrrurruuddlluururu8ldlu3r2(dd4r)3u"
	"lldluru8luld3rdd4rddrruuddrrulruulldluru7lrddrddld4lddrulu3r3luurdldrrl3uruul4dldr5u3rdd3"
	"rudrdd3l5ruudrruullu8ldlu3rdd5ruru8lrrddrdd5ruudrruulldluru7l",

	// 106
	"x####xxx#####!"
	"x#  #####   #!"
	"##*   * #$# #!"
	"#   #   #   #!"
	"# * . *  ** #!"
	"######   #@##!"
	"# .   ###   #!"
	"# $ *    *# #!"
	"##*   * **  #!"
	"x#  ####    #!"
	"x####xx######!",
	"dr3d3lululldlululldrrdrruullrd3rdrrdrr3ulld4ldrrlluullddrru4rurr3dlludrrulruuluulldllu"
	"drruluullddrdru4r3ulldduurrddldlldllurr3luurrdld3luurrdrdlrdrrulrrurruulldd",

	// 107
	"xxxxxx####xxxxx!"
	"xxxxxx#  #xxxxx!"
	"xxxx###  ####xx!"
	"#####       ###!"
	"#   $ #$###   #!"
	"#  $@$....#$$ #!"
	"######..*.  $ #!"
	"xxx#####..#####!"
	"xxx# $ $ ##xxxx!"
	"xxx#     #xxxxx!"
	"xxx#######xxxxx!",
	"ruu2(rrdd)luruldlur4dllurdruurul3d4lu3rdruuruulduluu4rdrrdd4l4ruuldrd3lrruulu4l"
	"ddrrdulluulldd3r5lur3ld6ruulldldruu3ruul3du4rddrdll",

	// 108
	"xxxxxxxxx#####xx!"
	"xxxxxxxxx#   #xx!"
	"########## * ###!"
	"#          .   #!"
	"# $$$$****$...@#!"
	"#          .   #!"
	"########## * ###!"
	"xxxxxxxxx#   #xx!"
	"xxxxxxxxx#####xx!",
	"u11ldulldd10rlddrruuluru7ldulldd7rlurd3luru3rldd5lurrlu3ld3ru5ld4ru5ruurrdd",

	// 109
	"########x!"
	"#  .$  #x!"
	"# .$.$ ##!"
	"#*$.$.@ #!"
	"# .$.$  #!"
	"#  .$ ###!"
	"#######xx!",
	"llulur3dlu3rdlullddlluu3ruu3ldur3(rd)dlrurrululrull",

	// 110
	"###########!"
	"#    .    #!"
	"#  $.$.$  #!"
	"###.$.$.###!"
	"xx##.$.##xx!"
	"xxx#$.$#xxx!"
	"xxx# $ #xxx!"
	"xxx# @ #xxx!"
	"xxx#####xxx!",
	"ruululuurdlddrrddll4urrdl3urdrllddrulddlddruruul3urrdlduu3rdll2(ulld)llu3r",

	// 111
	"xxxxxxx#####x!"
	"########   #x!"
	"#......... #x!"
	"#  $ #$#   #x!"
	"# $#    # ###!"
	"#  #  # $   #!"
	"#$### $ # # #!"
	"#@$    $  $ #!"
	"######  #####!"
	"xxxxx####xxxx!",
	"uuruulu7rdrrul5dllulrddlur3uludlluull3dldd4ruuluululdu4rddldluudrruu3lrdd3rddlrddluluu"
	"ddrr3ulldluulurrldd3rddldluudrruulldluulurdd3rdrlddrr4uddrrdd4ldluruldluudrruulldluu3l"
	"urdrrdr3d4l4uddruu",

	// 112
	"xxxxxxxxxx#####x!"
	"xxxxxxxxxx#   #x!"
	"########### # #x!"
	"#             #x!"
	"# # $#######$$#x!"
	"# #  *.....#  #x!"
	"# #$ #.***.*  #x!"
	"# #  #.....#  #x!"
	"# #  ####*###$##!"
	"# #         $  #!"
	"# $ $ $ $ $ $ @#!"
	"##  ############!"
	"x####xxxxxxxxxxx!",
	"l3uluuruu9ldlddr3d7rdrlull3(dru3l)dr4uluurdrrdd4ruuldrd3lrruulduldu3luu3l7drdruru5ruuru3lu3ldlu"
	"r3dluruu5r4d3ld3lurdrrurrd3lru4rd3lrr5u5l4d4rdr3urullu4luu9rddlddrdd3lrrd3l3udd5rdllr3uluur3d5u"
	"9ldd4rdr3d3rdrru4ldl3udd4r6ulluurr7d5u9ldd6rdl3d3rdrru4ldrll4u3dll2(drru4l)drrl7u3l7drrur4ulur5"
	"dldll7u3r4dluur4drdluluur4u3l7drdru2(u4rdll)u4rdlu3rdlu8l4uluru8rluurr7duullrr3u9ldd5r4d3rdrru4"
	"ldl4u3d6ldll7u11rdduuluurr7duul3u8l4dl3ur5d8rdrru4ldl3udd6ldll7u11rluurr7d5u9l6d8rdrru4ldluud6l"
	"5u6dll7u11rluurr7d5u9l6d8rdrru9ldl4ulu4r3luu3l7drdr7u6dll7u11rluurr7d5u9l6d8rdrru9lrrd3l4ulu3rl"
	"luu3l7drdr7u6dll7u11rluurr7d5u9l6d8rdrru9l4rd5l4ulurrluu3l7drdr7u6dll7u11rluurr7d5u9l6d8rdrru9l"
	"7rd8l4uluruu3l7drdr7u6dll7u11rluurr7d5u9l7d10ru4ldlu",

	// 113
	"###########!"
	"#  .$ $.  #!"
	"#  .$  #  #!"
	"#.#*#..*..#!"
	"#$ .$$$#$$#!"
	"#  .$@$.  #!"
	"#$$#$$$. $#!"
	"#..*..#*#.#!"
	"#  #  $.  #!"
	"# $. $ .  #!"
	"###########!",
	"drrurrudlldlluruululrulrrdlddrddluulldllur3dlddruluuruulddu3rurrdllrddldd3r"
	"urrdlr3uluurddu3ldldlddrurlluurruullddurr",

	// 114
	"xxx#####xxx!"
	"xxx# @ #xxx!"
	"xxx#$$$#xxx!"
	"#### . ####!"
	"#   *.* $ #!"
	"# $.....$ #!"
	"# $ *.*   #!"
	"#### . ####!"
	"xxx# $$#xxx!"
	"xxx#   #xxx!"
	"xxx#####xxx!",
	"ddrdrddldlludrruruuldllddrruruluuluur3drddluddlluuruuddlddrurruululld3ldd3r3drud"
	"ruudlluu3luurdldrrluurrurruuldulddurrddrddrrulrull",

	// 115
	"#######!"
	"# $. @#!"
	"#  .$ #!"
	"# **$ #!"
	"#* .$*#!"
	"# $*. #!"
	"#  .$ #!"
	"#  .  #!"
	"#######!",
	"lldllddrdrddrrulrullull2(uurrd)lrdlddrddlud3luurdldr4uluurd",

	// 116
	"#######!"
	"#  *  #!"
	"# $.$ #!"
	"#  .$ #!"
	"#.*.*.#!"
	"#$ *  #!"
	"# $. $#!"
	"#@ *  #!"
	"#######!",
	"rurrur4ull4drr3ulrddl3druuluuruuldd3luurdldrlddrddluu",

	// 117
	"xxx######xxx!"
	"####    ####!"
	"#@ $.#*$   #!"
	"# $ ...# $ #!"
	"###$#.     #!"
	"xx#   ######!"
	"xx#####xxxxx!",
	"d3ruurrdduullddllurdrrddlluurrd3ruurrdd4lrruulu3ldldllurr3drru3ruurdrd4l",

	// 118
	"xxx#####xxx!"
	"xxx#.  #xxx!"
	"xxx#...#xxx!"
	"xxx#.  #xxx!"
	"xxx#.  #xxx!"
	"##### #####!"
	"#         #!"
	"# $@$$$$$ #!"
	"#    #    #!"
	"###########!",
	"u6rddludlluru4lddlluu3rlddrur4u3drrddluruldl3uluurdrdlddrdd3rulru3ldl4uluu"
	"rrdl4drddrurulldl5urul6dllurdr3urul3dlddllulu3rdr4u",

	// 119
	"xx#####xx!"
	"xx# . #xx!"
	"xx# * #xx!"
	"xx# . #xx!"
	"###$*$###!"
	"#   *   #!"
	"# ***** #!"
	"#   *   #!"
	"### . ###!"
	"xx# $ #xx!"
	"xx# @ #xx!"
	"xx#####xx!",
	"r3urruulldd4ulluurrddlur3dluudd3rddlldlluruu3rddlldlu3luurrdurruullddru"
	"d3lddrrdrruluu3lddrrdru3ruulldurrddlldllddrudr3u",

	// 120
	"#############x!"
	"#.          #x!"
	"#.#$#$#$#$#$#x!"
	"#.          #x!"
	"#.#########.#x!"
	"#.#.  $ ..$$#x!"
	"#.# $ $ *.$@#x!"
	"#.#.* $ ..$*##!"
	"#.#########  #!"
	"#.$ $ $ $ $  #!"
	"#.           #!"
	"##############!",
	"ullddlluullddlruurrddrruulrddllululldrdrrurull5rddlurddrdd11l7u10rddlruu10luurrdull9d"
	"rruldl7u7d4ru3ldl5u5d6ru5ldl4u4d8ru7ldl3u3d11ruuld9ldluud10ruuluur3drd10ldlu10r6u9lru"
	"u8r7drd10l9r8ulldu6lddrrud5rluurr6d6u4ldu5lrdd7rluurr4dlddruu3drdd10l9r3uluurdlulldld"
	"l2(lurr)ld3lu3r",
};

const sCollect RabbitCol[] = {
	{ "XSokoban, Original & Extra", RabbitCol1, count_of(RabbitCol1)/2 },
	{ "Boxxle 1", RabbitCol2, count_of(RabbitCol2)/2 },
	{ "Boxxle 2", RabbitCol3, count_of(RabbitCol3)/2 },
};
const int RabbitColNum = count_of(RabbitCol);

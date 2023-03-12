
PicoVGA - VGA/TV display on Raspberry Pico
------------------------------------------
Miroslav Nemecek, panda38.sweb.cz, Panda38@seznam.cz

project: https://www.breatharian.eu/hw/picovga/index_en.html

Update note: You can use Wayne Venables' project to compile PicoVGA
in Linux. You can also find there the addition of the VSYNC signal
to the library (look for VGA_GPIO_VSYNC in vga.cpp).
https://github.com/codaris/picovga-cmake

How to install:
- Install compiler gcc-arm-none-eabi-10-2020 into folder C:\ARM10
- Unpack this package into some folder

If you have gcc compiler installed in another folder,
 edit PATH in files _c1.bat and _boot2\c.bat

I recommend FAR Manager as program editor - it contains
 very useful console output.

To compile demo project, run c.bat (or c_all.bat to compile all).
To clear demo project, run d.bat (or d_all.bat to clear all).
To write demo project to the Pico board:
 - press and hold BOOTSEL button on the Pico board
 - connect USB cable
 - release BOOTSEL button
 - edit destination drive (now there is r:) in file _e1.bat, command:
       copy /b program.uf2 r:
   and then run e.bat 
   ... or drag and drop file 'program.uf2' to Pico drive.


How to connect VGA display
--------------------------
GP0 ... VGA B0 ... resistor 1K0 to Blue output
GP1 ... VGA B1 ... resistor 390 to Blue output
GP2 ... VGA G0 ... resistor 2K2 to Green output
GP3 ... VGA G1 ... resistor 1K0 to Green output
GP4 ... VGA G2 ... resistor 470 to Green output
GP5 ... VGA R0 ... resistor 2K2 to Red output
GP6 ... VGA R1 ... resistor 1K0 to Red output
GP7 ... VGA R2 ... resistor 470 to Red output
GP8 ... VGA SYNC synchronization ... resistor 100 to HSYNC or composite sync CSYNC

GP19 ... PWM sound output (RC LOW filter 1K5 resistor + 10n capacitor)


How to connect Pico to PC with serial port
------------------------------------------
Most demo projects are prepared to control via USB serial port adapter.
USB interface is selected in Makefile with this parameter:
DEFINE += -DPICO_STDIO_USB=1

Instead of it, you can use serial port. Change Makefile parameter to:
DEFINE += -DPICO_STDIO_UART=1

To connect Pico to PC via serial port, you need either convertor from
RS232 COM port from 3.3V levels of Pico board, or you need convertor
to USB port. Good choise is USB-serial adaptor PL2303TA.

   How to connect UART to Pico:
                    +---USB---+
   <-- UART0_TX GP0 |.1    40.|VBUS --- +5V power output to USB device
   --> UART0_RX GP1 |.2    39.|VSYS ---|<|--- +5V power input
   ---          GND |.3    38.| GND  K diode A
                GP2 |.4    37.| 3V3_EN
                GP3 |.5    36.| 3V3_OUT
                      ......
   Note: in simple case, you need not diode, you can connect +5V directly on board.

   connect USB/UART adaptor PL2303TA:
       red ......... +5V VSYS (39)
       black ....... GND (3)
       white RxD ... UART0_TX GP0 (1)
       green TxD ... UART0_RX GP1 (2)

   You need console program (as PuTTY) to see demo text.
   Setup port to 115200 Baud, 8 bits, 1 stop bit, no parity,
   flow control None.

   In Device Manager, USB adaptor can be found under name:
           "Prolific USB-to-Serial Comm Port (COM10)".


PicoVGA examples
----------------
Ants - card game
	keyboard control: 'J' left, 'L' right, space select, 'D' discard, 'H' help, 'Q' quit

Balloons - sprite demo, floating balloons

Draw - draw graphics demo

Earth - rotating Earth globe

Eggs - game of Eggs+Chickens+Hens, variant of the Reversi game
	keyboard control: 'L' right, 'I' up, 'J' left, 'K' down, 'H' help, 'Q' quit, 'P' 2 players, 'D' demo, space stone, Enter ok

Fifteen - game
	keyboard control: 'L' right, 'I' up, 'J' left, 'K' down, 'Q' new game

Flag - animation of flag fluttering in the wind

Ghost Racing - car racing game, racing with player's ghost copy, demonstration of 3D perspective projection
	keyboard control: 'I' gear up, 'K' gear down, 'J' turn left, 'L' turn right

Ginger House - picture fairy tale book
	keyboard control: 'J' previous page, 'L' next page

Hello - simple demonstration, print text "Hello world!" on the screen

Hypno - hypnotizing rotating pattern

Level Meter - demo of music volume level indication

Life - game, reproducing cells
	keyboard control: 'L' right, 'I' up, 'J' left, 'K' down, 'C' copy, 'V' paste, 'D' clear,
		space flip state, Enter run life, 0..9 select slot

Lines - moving line patterns

Mandelbrot - fractal pattern generator
	keyboard control: 'E' up, 'S' left, 'D' right, 'X' down, 'Q' zoom in, 'A' zoom out,
	'L' low resolution 132x100, 'M' medium resolution 264x200, 'H' high resolution 528x400,
	'I' integer arithmetics, 'F' float arithmetics, 'B' double arithmetics,
	'O' decrease number of steps, 'P' increase number of steps, 'U' increase system clock,
	'T' decrease system clock, space redraw

Matrix Rain - simulation of Matrix code rain

Maze - game, simple maze with maze generator
	keyboard control: 'J' left, 'I' up, 'L' right, 'K' down, 'H' help (show door)

Monoscope - test of various graphic modes
	keyboard control: '0'..'9', 'A'..'U' select videomode

Oscilloscope - demo oscilloscope simulator

Pacman - game of popular Pac-man
	keyboard control: 'J' left, 'I' up, 'L' right, 'K' down, 'A' pause

Pi - calculate Pi at 4800 digits

Pixels - random pixels

Raytrace - ray tracing 3D demonstration of mirror spheres

Sokoban - game with 3000 puzzles and with their solutions
	keyboard control: 'L' right, 'I' up, 'J' left, 'K' down, 'H' help (solution),
	'R' restart scene, 'Q' previous level, 'W' next level, 'P' info

Spheres - draw random spheres

Spots - draw random dot spots

Tetris - game
	keyboard control: 'L' right, 'I' turn, 'J' left, 'K' drop, 'A' pause

Train - puzzle game with 50 levels and with their solutions
	keyboard control: 'L' right, 'I' up, 'J' left, 'K' down, 'H' help (solution), Enter OK, Esc escape, BS backspace

Twister - deformable block covered with 4 textures

Water surface - simulation of a rippling water surface

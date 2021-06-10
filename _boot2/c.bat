@echo off
rem Compilation...

set PATH=..\_tools;C:\ARM10\bin;%PATH%

call _c1.bat boot2_generic_03h
if not exist boot2_generic_03h.bin goto end

call _c1.bat boot2_is25lp080
if not exist boot2_is25lp080.bin goto end

call _c1.bat boot2_usb_blinky
if not exist boot2_usb_blinky.bin goto end

call _c1.bat boot2_w25q080
if not exist boot2_w25q080.bin goto end

call _c1.bat boot2_w25x10cl

:end

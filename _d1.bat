@echo off
rem Delete...

if exist build\program.elf del build\program.elf
if not exist build\*.o goto nobuild
del build\*.o
rd /q build
:nobuild
if exist program.hex del program.hex
if exist program.lst del program.lst
if exist program.map del program.map
if exist program.siz del program.siz
if exist program.sym del program.sym
if exist program.bin del program.bin

:end

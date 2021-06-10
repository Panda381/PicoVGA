@echo off
rem Delete...
if "%1" == "" goto end

set PATH=C:\ARM9\tools;C:\ARM9\bin;%PATH%

if exist build\*.elf del build\*.elf
if not exist build\*.o goto nobuild
del build\*.o
rd /q build
:nobuild
if exist %1.hex del %1.hex
if exist %1.lst del %1.lst
if exist %1.map del %1.map
if exist %1.siz del %1.siz
if exist %1.sym del %1.sym
if exist %1.bin del %1.bin
rem if exist %1_bin.S del %1_bin.S

:end

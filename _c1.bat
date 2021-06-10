@echo off
rem Compilation...

set PATH=..\_tools;C:\ARM10\bin;%PATH%

if exist program.uf2 del program.uf2
make all
if errorlevel 1 goto err
if not exist program.uf2 goto err
echo.
type program.siz
goto end

:err
pause ERROR!
:end

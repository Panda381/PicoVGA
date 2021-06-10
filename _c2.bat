@echo off
if "%1" == "" goto stop
if "%1" == "_boot2" goto stop
if not exist %1\c.bat goto stop
cd %1
echo.
echo ======== Compiling %1 ========
call c.bat
cd ..
:stop

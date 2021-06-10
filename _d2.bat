@echo off
if "%1" == "" goto stop
if not exist %1\d.bat goto stop
cd %1
echo Deleting %1
call d.bat
cd ..
:stop

@echo off
rem Compilation...
if "%1" == "" goto end

make all TARGET=%1
if errorlevel 1 goto err
if not exist %1.bin goto err

boot2crc\boot2crc.exe %1.bin > %1_bin.S
if errorlevel 1 goto err

echo.
type %1.siz
goto end

:err
pause ERROR!
:end

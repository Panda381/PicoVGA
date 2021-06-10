@echo off
rem Export to hardware...

if not exist program.uf2 goto end
copy /b program.uf2 r:

:end

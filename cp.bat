@echo off
:: /I is case insensitive comparison
:: if /I %1=="" goto :usage
if /I "%1"=="c" goto :c else
if /I "%1"=="cl" goto :clean else
goto :usage

:usage
echo "cp {c|py|pl}"
echo cp		Display this help
echo cp c	Compile (g++) and fts main.exe i$ o$ cmp.exe
echo cp cl	Clean up main.exe
goto :exit

:c
echo $ g++ main.cpp -DONLINE_JUDGE -o main.exe
g++ main.cpp -DONLINE_JUDGE -o main.exe
echo $ fts main.exe i$ o$
fts main.exe i$ o$
goto :exit

:clean
echo Cleaning up
if exist main.exe del /F /Q main.exe
goto :exit

:: Need update fts for python and perl
:py
fts python main.py i$ o$
goto :exit

:pl
echo "pl"
fts "perl main.pl" i$ o$
goto :exit

:exit
pause
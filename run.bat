@echo off

gcc -Wall -Wextra -std=c11 main.c -o main.exe

if errorlevel 1 (
    echo Compilation failed. 
    pause
    exit /b 1
)

echo Starting Soon Qzi's Mad Libs Game...
main.exe

pause
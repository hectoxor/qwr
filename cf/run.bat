@echo off
color 0A
cls
echo ===================================
echo    Competitive Programming Runner
echo ===================================
echo.

REM Compile with optimizations
echo [*] Compiling program...
g++ -std=c++17 -O2 -Wall -Wextra -o main main.cpp

if %errorlevel% neq 0 (
    color 0C
    echo [!] Build failed!
    pause
    exit /b
)

echo [+] Build successful!
echo.

REM Create output directory if it doesn't exist
if not exist "output\" mkdir output

REM Run with timing information
echo [*] Running program with input.txt...
echo.
echo --------- PROGRAM OUTPUT ----------
set start_time=%time%
main.exe < input.txt > output\output.txt
set end_time=%time%
type output\output.txt
echo ----------------------------------
echo.

REM Calculate execution time
call :time_diff diff "%start_time%" "%end_time%"
echo [i] Execution time: %diff% seconds
echo [+] Output saved to output\output.txt
echo.

REM Compare with expected output if available
if exist "expected.txt" (
    echo [*] Comparing with expected output...
    fc /A output\output.txt expected.txt > output\diff.txt
    if %errorlevel% equ 0 (
        echo [+] CORRECT: Output matches expected result!
    ) else (
        echo [!] WRONG: Output differs from expected result.
        echo [i] See output\diff.txt for details.
    )
    echo.
)

pause
goto :eof

:time_diff
setlocal
set start=%~2
set end=%~3

for /F "tokens=1-4 delims=:.," %%a in ("%start%") do (
   set /A "start_h=%%a*3600000, start_m=%%b*60000, start_s=%%c*1000, start_ms=%%d"
)
for /F "tokens=1-4 delims=:.," %%a in ("%end%") do (
   set /A "end_h=%%a*3600000, end_m=%%b*60000, end_s=%%c*1000, end_ms=%%d"
)
set /A elapsed=(end_h+end_m+end_s+end_ms)-(start_h+start_m+start_s+start_ms)
set /A hh=elapsed/(60*60*1000), rest=elapsed%%(60*60*1000)
set /A mm=rest/(60*1000), rest=rest%%(60*1000)
set /A ss=rest/1000, ms=rest%%1000
if %hh% lss 10 set hh=0%hh%
if %mm% lss 10 set mm=0%mm%
if %ss% lss 10 set ss=0%ss%
if %ms% lss 10 set ms=00%ms%
if %ms% lss 100 set ms=0%ms%

set res=%ss%.%ms%
endlocal & set "%~1=%res%"
goto :eof

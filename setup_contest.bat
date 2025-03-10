@echo off
color 0E
cls
echo ===================================
echo       Contest Setup Utility
echo ===================================
echo.

set /p contest_name="Enter contest name/ID: "
set contest_dir=contests\%contest_name%

if exist "%contest_dir%\" (
    echo [!] Error: Contest %contest_name% already exists!
    pause
    exit /b
)

mkdir "%contest_dir%"
echo [+] Created contest directory: %contest_dir%

mkdir "%contest_dir%\A"
mkdir "%contest_dir%\B"
mkdir "%contest_dir%\C"
mkdir "%contest_dir%\D"
mkdir "%contest_dir%\E"

REM Copy template to each problem directory
for %%p in (A B C D E) do (
    copy "cf\template.cpp" "%contest_dir%\%%p\solution.cpp" > nul
    echo. > "%contest_dir%\%%p\input.txt"
    echo. > "%contest_dir%\%%p\expected.txt"
    copy "cf\run_cp.bat" "%contest_dir%\%%p\run.bat" > nul
)

echo.
echo [+] Contest %contest_name% setup complete!
echo [i] Created problem directories A-E
echo.
echo [i] To work on a problem:
echo     1. cd %contest_dir%\[problem]
echo     2. Edit solution.cpp
echo     3. Add test cases to input.txt
echo     4. Run with run.bat
echo.

pause

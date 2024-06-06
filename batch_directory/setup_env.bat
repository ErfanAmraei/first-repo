@echo off
REM Set up ESP-IDF environment variables
set PATH=%PATH%;%IDF_PATH%\tools

REM Source the ESP-IDF export script
call %IDF_PATH%\export.bat

REM Print the ESP-IDF version to verify setup
idf.py --version
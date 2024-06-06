@echo off
REM Navigate to the project directory
cd /d F:\ESP-Examples\first-launch

REM Call the environment setup script
call F:\ESP-Examples\first-launch\batch_directory\setup_env.bat

REM Flash the project to the device
idf.py flash

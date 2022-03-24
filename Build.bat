@echo off

if not exist build mkdir build

python preprocess.py
gcc -g -O0 -o build/main.exe .\main.c .\u_ctor.c

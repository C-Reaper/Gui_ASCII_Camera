# Project README

## Overview
This project is a simple C program that renders ASCII sprites using a graphical library. The project includes support for Linux, Windows (via Wine), WebAssembly, and provides build configurations for each environment.

## Features
- Rendering of ASCII sprites from images
- Cross-platform support (Linux, Windows, Web)
- Debugging capabilities

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed in specific projects:
  - Linux: X11 for graphical output
  - Wine: User32, GDI32, Winmm for Windows API calls

## Build & Run
### Linux
To build and run the project on Linux:
```sh
cd <Project>
make -f Makefile.linux all
make -f Makefile.linux exe
```
To clean the build artifacts:
```sh
make -f Makefile.linux clean
```

### Windows (via Wine)
To build and run the project on Windows using Wine:
```sh
cd <Project>
make -f Makefile.wine all
make -f Makefile.wine exe
```
To debug the project:
```sh
make -f Makefile.wine debug
```

### WebAssembly
To build and serve the project for web:
```sh
cd <Project>
make -f Makefile.web all
make -f Makefile.web exe
```
The project can be accessed via a web browser at `http://localhost:8080`.
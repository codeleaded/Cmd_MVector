# Project README

## Overview
This project is a C application that utilizes the MVector library to create and manipulate dynamic arrays. The application showcases memory management, resizing, and basic operations on a vector of characters.

## Features
- Dynamic array creation (`MVector_New`)
- Appending elements to the vector (`MVector_Push`)
- Memory management during array expansion

## Project Structure
```
Cmd_MVector/
├── build/              # .exe files produced by Main.c
├── src/                # source code
│   ├── Main.c          # Entry point
│   └── MVector.h       # Header file for the MVector library
└── Makefile.linux      # Linux Build configuration
└── Makefile.windows    # Windows Build configuration
└── Makefile.wine       # Wine Build configuration
└── Makefile.web        # Emscripten Build configuration
└── README.md           # This file
└── LICENSE.txt         # Project License
```

## Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
### Linux
To build the project on a Linux system:
```bash
cd Cmd_MVector
make -f Makefile.linux all
./build/Main
```

For a debug build:
```bash
make -f Makefile.linux alldebug
gdb ./build/Main
```

### Windows
To build the project on a Windows system:
```cmd
cd Cmd_MVector
make -f Makefile.windows all
build\Main.exe
```

For a debug build using Wine:
```cmd
make -f Makefile.wine dg
winedbg build\Main.exe
```

### Web Assembly
To build the project for web assembly:
```bash
cd Cmd_MVector
make -f Makefile.web all
wasmtime ./build/Main.wasm
```

For a clean rebuild:
```bash
make -f Makefile.linux clean
make -f Makefile.linux all
```

For executing the built application:
```bash
./build/Main
```

This README provides the essential information about building and running the project.
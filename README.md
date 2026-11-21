# Mat Libs Game in C

A mini software project, programmed in C. A way for me to practice learning how to use the char and fgets function, as well as the string format specifier %s to get string input from the user. 

## Features

- Console-based user interface
- Compiled with GCC using the C11 standard
- Lightweight and easy to run

## Technology used

- C
- Standard C Library
- Git and GitHub

## Prerequisites
Before running this application, install: 

- Git
- GCC (GNU Compiler Collection)

## Don't have GCC installed? 

### Windows
1. Open the MSYS2 website at https://www.msys2.org/
2. Scroll through to Installation and download the installer. Make sure you are using 64 bit Windows 10 or newer.
3. Use the MSYS2 software to download the C compiler. Run this command:

```
pacman -S mingw-w64-ucrt-x86_64-gcc
```

4. Verify the installation:

```
gcc --version
```

It should display the current version of the C compiler you're using.

5. Set variable path.

- Find the C compiler in your computer's files.
- Click on msys64 > ucrt64 > bin > gcc.exe
- Right click on gcc.exe > properties > copy the file location.
- Search for 'environment variables' in your Windows system, and click on 'Edit the system environment variables'.
- Click environment variables > path > edit > new. Then, paste the path (its most likely C:\msys54\ucrt64\bin).
  Press OK and you're done.

### macOS

1. Open Terminal.
2. Run:

```
xcode-select --install
```

3. Follow the installation prompts.
4. Verify the installation:

```
gcc --version
```

### Linux

1. In your IDE's terminal, run the following command:

```
suo apt-get install build-essential gdb
```

2. Verify the installation:

```
sudo apt-get update
```

## How to Install

1. Clone the repository

```
git clone https://github.com/soonqzi/mad-libs-c.git
```

2. Enter the project folder

```
cd mad-libs-c
``` 

3. Run the application:

### Windows

```
.\run.bat
```

### Linux/macOS

Give execution permission:
```
chmod +x run.sh
```

Then 
```
./run.sh
```
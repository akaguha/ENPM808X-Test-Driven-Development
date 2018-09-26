# ENPM808X-Test Driven Development
[![Build Status](https://travis-ci.org/rohit517/ENPM808X-Test-Driven-Development.svg?branch=master)](https://travis-ci.org/rohit517/ENPM808X-Test-Driven-Development)
[![Coverage Status](https://coveralls.io/repos/github/rohit517/ENPM808X-Test-Driven-Development/badge.svg?branch=master)](https://coveralls.io/github/rohit517/ENPM808X-Test-Driven-Development?branch=master)
---

## Todo
Add looping for target value convergence. Unit test for default constructor. 

## Overview
This repository contains Week 4 of ENPM808X Software Development Course. Implement a simple PID Controller.  

### Pair A: <br>
Part 1 - **Driver**: Rohitkrishna Nambiar and **Navigator**: Akash Guha <br>
Part 2 - **Driver**: Akash Guha and **Navigator**: Rohitkrishna Nambiar

## Standard install via command-line
```
git clone --recursive https://github.com/rohit517/ENPM808X-Test-Driven-Development.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/rohit517/ENPM808X-Test-Driven-Development.git
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of ENPM808X-Test-Driven-Development

```
cd ~/workspace
mkdir -p ENPM808X-Test-Driven-Development
cd ENPM808X-Test-Driven-Development
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../ENPM808X-Test-Driven-Development/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold ENPM808X-Test-Driven-Development project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the ENPM808X-Test-Driven-Development in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)


## Debug


1. Set breakpoint in source file (i.e. double click in the left margin on the line you want 
the program to break).

2. In Eclipse, right click on the ENPM808X-Test-Driven-Development in Project Explorer, select Debug As -> 
Local C/C++ Application, choose the binaries to run (e.g. shell-app).

3. If prompt to "Confirm Perspective Switch", select yes.

4. Program will break at the breakpoint you set.

5. Press Step Into (F5), Step Over (F6), Step Return (F7) to step/debug your program.

6. Right click on the variable in editor to add watch expression to watch the variable in 
debugger window.

7. Press Terminate icon to terminate debugging and press C/C++ icon to switch back to C/C++ 
perspetive view (or Windows->Perspective->Open Perspective->C/C++).


## Plugins

- CppChEclipse

    To install and run cppcheck in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse.
    Set cppcheck binary path to "/usr/bin/cppcheck".

    2. To run CPPCheck on a project, right click on the project name in the Project Explorer 
    and choose cppcheck -> Run cppcheck.


- Google C++ Sytle

    To include and use Google C++ Style formatter in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. 
    Import [eclipse-cpp-google-style][reference-id-for-eclipse-cpp-google-style] and apply.

    2. To use Google C++ style formatter, right click on the source code or folder in 
    Project Explorer and choose Source -> Format

[reference-id-for-eclipse-cpp-google-style]: https://raw.githubusercontent.com/google/styleguide/gh-pages/eclipse-cpp-google-style.xml

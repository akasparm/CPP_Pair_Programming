# CPP_Pair_Programming

## Part-1(Team - A):
Driver: Akashkumar Parmar (akasparm@umd.edu)

Navigator: Ishan Kharat (ishanmk@umd.edu)

## Part-2(Team - B):
Driver: Suryavardhan Reddy Chappidi (chappidi@umd.edu)

Navigator: Vinay Krishna Bukka (vinay06@umd.edu)

## Overview

A PID Controller implementation via pair programming using Test Driven Development.

## CICD workflow status Badge

![CICD Workflow status](https://github.com/SuryaVC/CPP_Pair_Programming/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg)

## Code Coverage Report

[![codecov](https://codecov.io/gh/SuryaVC/CPP_Pair_Programming/branch/main/graph/badge.svg)](https://codecov.io/gh/SuryaVC/CPP_Pair_Programming) 

## Standard install via command-line
```bash
# Navigate to the repository: 
  cd CPP_Pair_Programming
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
# Run program:
  ./build/app/shell-app
# Run tests:
  ctest --test-dir build/
```
Implemented the PID controller in app/pid_controller.cpp

Both testcases passed successfully.

Discussion:

The test cases are verifying the entirety of the code. Both the test cases are ensuring that the output value is not a random output but the correct implementation of the code. To make the code much more robust, we can add some more test cases, however, 2 test cases suffice the purpose in this case. 

# CPP_Pair_Programming

## Part-1(Team - A):
Driver: Akashkumar Parmar (akasparm@umd.edu)

Navigator: Ishan Kharat (ishanmk@umd.edu)

## Overview

A PID Controller implementation via pair programming using Test Driven Development.

## CICD workflow status Badge

![CICD Workflow status](https://github.com/akasparm/CPP_Pair_Programming/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg)

## Code Coverage Report

[![codecov](https://codecov.io/gh/akasparm/CPP_Pair_Programming/branch/main/graph/badge.svg)](https://codecov.io/gh/akasparm/CPP_Pair_Programming)


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
# Run tests:
  ctest --test-dir build/
```

This will fail both the test cases. Implement the function in app/pid_controller.cpp, build and test the project again. 

Implement the PID controller in the mentioned file, if the implementation is correct, the test cases will be passed!




# CPP_Pair_Programming

## Overview

A PID Controller implementation via pair programming using Test Driven Development.

## Standard install via command-line
```bash
# Download the code:
  git clone https://github.com/akasparm/CPP_Pair_Programming.git
  cd CPP_Pair_Programming
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run tests:
  ctest --test-dir build/
```

This will fail both the test cases. Implement the function in app/pid_controller.cpp, build and test the project again. 

Implement the PID controller in the mentioned file, if the implementation is correct, the test cases will be passed!


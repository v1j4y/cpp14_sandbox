#!/bin/bash
clang++ -o $1 -std=c++1y "./$1.cpp" && ./$1

#!/bin/bash

rm -rf bin
mkdir bin
g++ -o bin/task3-1 src/main.cpp src/Author.cpp src/Book.cpp

#!/bin/bash

rm -rf bin
mkdir bin
g++ -o bin/task3-2 src/main.cpp src/Car.cpp src/Engine.cpp src/Passenger.cpp

SHELL=/bin/bash
INC=-Iinclude
CC=g++

all: clean prepare build
	@echo "Building application...done"
	echo $(SHELL)

clean:
	rm -rf bin
	rm -rf obj

prepare:
	mkdir -p bin
	mkdir -p obj

build:
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Car.o src/Car.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Engine.o src/Engine.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Passenger.o src/Passenger.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/Main.o src/Main.cpp
	$(CC) -g -O0 -o bin/main obj/Car.o obj/Main.o obj/Engine.o obj/Passenger.o obj/main.o

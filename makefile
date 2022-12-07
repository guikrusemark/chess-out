CC			:= g++
CXXFLAGS	:= -std=c++11 -g -Wall
BUILD		:= ./build/
INCLUDE		:= -I ./ -I ./include -I engine/include

SRC			:= -c ./src/chess-component/*.cpp ./src/match/*.cpp ./src/user/*.cpp ./src/*.cpp
OBJECTS		:= ./build/*.o


# build targets

all: chess.out

chess.out: ${OBJECTS}
	${CC} ${CXXFLAGS} ${INCLUDE} ${OBJECTS} -o chess.out


test-board:
	clear
	g++ -std=c++11 -g -Wall -I ./include -I ./third_party/doctest/include ./src/chess-component/*.cpp ./src/match/*.cpp ./src/user/*.cpp ./src/game.cpp ./tests/chess-component/board.cpp -o test.out
	./test.out
test-piece:
	clear
	g++ -std=c++11 -g -Wall -I ./include -I ./third_party/doctest/include ./src/chess-component/*.cpp ./src/match/*.cpp ./src/user/*.cpp ./src/game.cpp ./tests/chess-component/piece.cpp -o test.out
	./test.out

run:
	clear
	g++ -std=c++11 -g -Wall -I ./include ./src/chess-component/*.cpp ./src/match/*.cpp ./src/user/*.cpp ./src/presenter/cli/*.cpp ./src/*.cpp -o chess.out
	./chess.out
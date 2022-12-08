CC			:= g++
CXXFLAGS	:= -std=c++11 -g -Wall
BUILD		:= ./build/
INCLUDE		:= -I ./ -I ./include

SRC			:= ./src/chess-component/*.cpp ./src/match/*.cpp ./src/presenter/cli/*.cpp ./src/user/*.cpp ./src/*.cpp
OBJECTS		:= ./build/*.o

INCLUDETEST		:= -I ./ -I ./include -I ./third_party/doctest/include
SRCTEST			:= ./src/chess-component/*.cpp ./src/match/*.cpp ./src/presenter/cli/*.cpp ./src/user/*.cpp ./src/game.cpp
TARGETTEST 		:= test.out


# build targets

all: chess.out

chess.out:
	# ${CC} ${CXXFLAGS} ${INCLUDE} -c ${SRC} ${OBJECTS}
	# ${CC} -o chess.out  ${OBJECTS}
	${CC} ${CXXFLAGS} ${INCLUDE} ${SRC} -o chess.out
	
######################################################################################################################

test-board:
	${CC} ${CXXFLAGS} ${INCLUDETEST} ${SRCTEST} ./tests/chess-component/board.cpp -o ${TARGETTEST}
	./${TARGETTEST}
test-piece:
	${CC} ${CXXFLAGS} ${INCLUDETEST} ${SRCTEST} ./tests/chess-component/piece.cpp -o ${TARGETTEST}
	./${TARGETTEST}
test-match:
	${CC} ${CXXFLAGS} ${INCLUDETEST} ${SRCTEST} ./tests/match/match.cpp -o ${TARGETTEST}
	./${TARGETTEST}

	
run:
	./chess.out

clear:
	rm -rf ./build/
	rm -rf ./chess.out
	rm -rf ./test.out
	rm -rf ./*.o

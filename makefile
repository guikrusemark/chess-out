CC			:= g++
CXXFLAGS	:= -std=c++11 -g -Wall
BUILD		:= ./build
INCLUDE		:= -I ./ -I include -I include/**

TARGET		:= chess.out

SRCXCC		:= ./src/chess-component/
SRCXGC		:= ./src/game-component/
SRCXPC		:= ./src/player-component/
SRCXALL		:= $(SRCXCC) $(SRCXGC) $(SRCXPC)
OBJECTS		:= $(SRC:%.cpp=$(BUILD)/%.o)

# build targets

all: $(TARGET)

$(BUILD)/%.o: %.cpp
	${MKDIR}
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

$(TARGET): $(OBJECTS)
	${MKDIR}
	$(CXX) $(CXXFLAGS) -o ${OUT_DIR}$(TARGET)


# phony targets

.PHONY: run install

install:

test:
	g++ -std=c++11 -g -Wall -I ./include ./src/chess-component/*.cpp ./src/main.cpp -o chess.out
	./chess.out

run:
	${RUN}

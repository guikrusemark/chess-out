test:
	clear
	g++ -std=c++11 -g -Wall -I ./include ./src/chess-component/*.cpp ./src/match/*.cpp ./src/user/*.cpp ./src/*.cpp -o chess.out
	./chess.out

run:
	${RUN}

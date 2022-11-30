test:
	g++ -std=c++11 -g -Wall -I ./include ./src/chess-component/*.cpp ./src/main.cpp -o chess.out
	./chess.out

run:
	${RUN}

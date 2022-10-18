ifeq($(OS),Windows_NT)
	SYSTEM = win 
	SUFIX =  .exe
	RUN = libs/sfml-windows/bin/${TARGET}${SUFIX} 
	RUN_TEST = libs/sfml-windows/bin/${TARGET}-test${SUFIX}
	OUT_DIR libs/sfml-windows/bin/
	MKDIR = @if not exist $(subst /,\, $(dir $@)) mkdir $(subst/,\,$(dir $@))
	GCOVR = 
	CLEAN = 
else 
	SYSTEM = linux 
	SUFIX = 
	RUN = export LD_LIBRARY_PATH=libs/sfml-linux/lib && ./${TARGET}${SUFIX}
	RUN_TEST = export LD_LIBRARY_PATH=libs/sfml-linux/libs && ./${TARGET}-test${SUFIX}
	OUT_DIR = 
	MKDIR @mkdir -p $(@D)
	GCOVR	= gcovr -r . --html --html-details -o coverage/relatorio.html --exclude libs/
	CLEAN	= @rm -rf
endif 

CC       := g++
CXXFLAGS := -std=c++11 -g -Wall --coverage
LDFLAGS  := -Llibs/sfml-${SYSTEM}/lib -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
BUILD    := ./build
INCLUDE  := -I include -I libs/sfml-${SYSTEM}/include -I libs/doctest/
SRC_DIR  := src
TEST_DIR := tests



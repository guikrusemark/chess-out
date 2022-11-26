#include "chess-component/board.h"

Board::Board() {
    for (unsigned int row = 0; row < 8; row++) {
        for (unsigned int col = 0; col < 8; col++) {
            mp_cells[row][col] = new Cell(row, col, false, new Pawn(true));
        }
    }
}
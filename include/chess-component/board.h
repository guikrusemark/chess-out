/**
 * @file board.h
 * @author 
 * @brief Board class, it is where the cells (Cell class) are located and responsible for positioning only.
 * 
 */

#ifndef CHESSCOMPONENT_BOARD_H_
#define CHESSCOMPONENT_BOARD_H_

#include <iostream>

#include "chess-component/piece.h"
#include "chess-component/pawn.h"
#include "chess-component/knight.h"
#include "chess-component/bishop.h"
#include "chess-component/rook.h"
#include "chess-component/queen.h"
#include "chess-component/king.h"

#include "chess-component/cell.h"

class Board {
    private:
        Cell *mp_cells[8][8];

    public:
        Board();
        ~Board();

        Cell &onCell(unsigned int row, unsigned int col);
};

#endif // CHESSCOMPONENT_BOARD_H_
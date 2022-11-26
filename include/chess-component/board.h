#ifndef _BOARD_H_
#define _BOARD_H_

#include <map>

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
};

#endif // _BOARD_H_
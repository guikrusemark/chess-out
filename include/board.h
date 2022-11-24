#ifndef _BOARD_H_
#define _BOARD_H_

#include <map>

#include "piece.h"

class Board {
private:
    Piece *mp_cells[8][8];
    std::map<std::string, Piece *> mp_pieces;

public:
    Board();
    ~Board();
};

#endif // _BOARD_H_
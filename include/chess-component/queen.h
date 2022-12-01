/**
 * @file queen.h
 * @author
 * @brief QUEEN type class.
 *
 */

#ifndef CHESSCOMPONENT_QUEEN_H_
#define CHESSCOMPONENT_QUEEN_H_

#include "chess-component/piece.h"

class Queen final : public Piece {
    public:
        Queen(bool white, int row, int column);

        void move(int side) override;
};

#endif // CHESSCOMPONENT_QUEEN_H_
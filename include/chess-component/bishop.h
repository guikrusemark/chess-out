/**
 * @file bishop.h
 * @author
 * @brief BISHOP type class.
 *
 */

#ifndef CHESSCOMPONENT_BISHOP_H_
#define CHESSCOMPONENT_BISHOP_H_

#include "chess-component/piece.h"

class Bishop final : public Piece {
    public:
        Bishop(bool white, int row, int column);

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_BISHOP_H_
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
    private:
        void setPossibleMovesMatrix(int row, int column) override;

    public:
        Bishop(bool white, int row, int column);

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_BISHOP_H_
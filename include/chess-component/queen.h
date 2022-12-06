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
    private:
        void setPossibleMovesMatrix(int row, int column) override;

    public:
        Queen(bool white, int row, int column);

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_QUEEN_H_
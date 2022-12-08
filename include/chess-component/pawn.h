/**
 * @file pawn.h
 * @author
 * @brief PAWN type class.
 *
 */

#ifndef CHESSCOMPONENT_PAWN_H_
#define CHESSCOMPONENT_PAWN_H_

#include "piece.h"

class Pawn final : public Piece {
    private:
        void setPossibleMovesMatrix(int row, int column) override;

    public:
        Pawn(bool white, int row, int column);
        ~Pawn();

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_PAWN_H_
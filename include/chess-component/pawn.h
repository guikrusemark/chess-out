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
    public:
        Pawn(bool white, int row, int column);
        ~Pawn();

        void move(int side) override;
};

#endif // CHESSCOMPONENT_PAWN_H_
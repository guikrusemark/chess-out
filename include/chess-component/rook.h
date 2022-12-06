/**
 * @file rook.h
 * @author
 * @brief ROOK type class.
 *
 */

#ifndef CHESSCOMPONENT_ROOK_H_
#define CHESSCOMPONENT_ROOK_H_

#include "chess-component/piece.h"

class Rook final : public Piece {
    public:
        Rook(bool white, int row, int column);

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_ROOK_H_
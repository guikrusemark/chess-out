#ifndef CHESSCOMPONENT_ROOK_H_
#define CHESSCOMPONENT_ROOK_H_

#include "chess-component/piece.h"

class Rook final : public Piece {
    public:
        Rook(bool white);

        void move(int side) override;
};

#endif // CHESSCOMPONENT_ROOK_H_
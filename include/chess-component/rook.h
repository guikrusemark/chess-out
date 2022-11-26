#ifndef _ROOK_H_
#define _ROOK_H_

#include "chess-component/piece.h"

class Rook final : public Piece {
    public:
        Rook(bool white);

        void move(uint8_t side) override;
};

#endif // _ROOK_H_
#ifndef _KING_H_
#define _KING_H_

#include "chess-component/piece.h"

class King final : public Piece {
    public:
        King(bool white);

        void move(uint8_t side) override;
};

#endif // _KING_H_
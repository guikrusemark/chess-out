#ifndef _QUEEN_H_
#define _QUEEN_H_

#include "chess-component/piece.h"

class Queen final : public Piece {
    public:
        Queen(bool white);

        void move(uint8_t side) override;
};

#endif // _QUEEN_H_
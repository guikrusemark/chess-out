#ifndef _KGNIGHT_H_
#define _KGNIGHT_H_

#include "chess-component/piece.h"

class Knight final : public Piece {
    public:
        Knight(bool white);

        void move(int side) override;
};

#endif // _KGNIGHT_H_
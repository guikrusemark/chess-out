#ifndef QUEEN_H
#define QUEEN_H

#include <iostream>
#include "pieces.h"

class Queen : public Piece{
    private:
        bool isDead = false;

        char m_piece = 'Q';

    public:
        Queen(bool isWhite);

        char getPiece();

        void move() override;

        bool hasDead() override;

        void startingPos() override;

};




#endif

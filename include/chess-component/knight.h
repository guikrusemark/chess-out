#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include "pieces.h"

class Knight : public Piece{
    private:
        bool m_dead = false;

        char m_piece = 'n';
    public:
        Knight(bool isWhite);

        char getPiece();

        void move() override;

        bool hasDead() override;

        void startingPos() override;

};



#endif
#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "pieces.h"


class Pawn : public Piece{
    private:
        bool isDead = false;

        char m_piece = 'P';

    public:
        Pawn(bool isWhite);

        char getPiece();

        void move() override;

        bool hasDead() override;

        void startingPos() override;

};

#endif
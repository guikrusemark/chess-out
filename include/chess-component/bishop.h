#ifndef BISHOP_H
#define BISHOP_H

#include <string>
#include <iostream>
#include "pieces.h"




class Bishop : public Piece{
    private:
        bool isDead = false;

        char m_piece = 'B';
    public:

    Bishop(bool Iswhite);

    char getPiece();

    void move() override;

    bool hasDead() override;

    void startingPos() override;

};



#endif
#ifndef ROOK_H
#define ROOK_

#include <iostream>
#include "pieces.h"

class Rook : public Piece{
    private:
        char m_piece = 'R';

        bool isDead = false;
    public:
        Rook(bool isWhite);

        char getPiece();

        void move() override;

        bool hasDead() override;
        
        void startingPos() override;
}; 


#endif 

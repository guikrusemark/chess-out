#ifndef KINGH_H
#define KINGH_H

#include "pieces.h"


class King : public Piece{
    private:
        bool m_check = false;

        bool isDead = false;

        char m_piece = 'K';

    public:
        King(bool check,bool isWhite);

        char getPiece();

        bool getCheck();

        void move() override;

        bool hasDead() override;

        void startingPos() override;
}; 


#endif
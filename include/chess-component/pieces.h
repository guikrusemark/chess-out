#ifndef PIECES_H
#define PIECES_H

#include <iostream>
#include <string>



class Piece{
    private:
        bool isDead = false;        
        
        bool m_white;
    public:
        Piece(bool isWhite);



        virtual void move() = 0;

        virtual bool hasDead();

        virtual void startingPos() = 0;

        char getPiece();

};



#endif

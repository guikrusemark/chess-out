#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include "pieces.h"

class Knight : public Pieces{
    private:
        bool m_dead = false;

        char m_peca = 'Kni';
    public:
        Knight(bool isWhite,bool dead);

        char getPeca();

        void moves() override;

        bool getDead() override;

        void starting_pos() override;

};



#endif
#ifndef QUEEN_H
#define QUEEN_H

#include <iostream>
#include "pieces.h"

class Queen : public Pieces{
    private:
        bool m_dead = false;

        char m_peca = 'Q';

    public:
        Queen(bool isWhite,bool dead);

        char getPeca();

        void moves() override;

        bool getDead() override;

        void starting_pos() override;

};




#endif

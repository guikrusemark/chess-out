#ifndef ROOK_H
#define ROOK_

#include <iostream>
#include "pieces.h"

class Rook : public Pieces{
    private:
        char m_peca = 'R';

        bool m_dead = false;
    public:
        Rook(bool isWhite,bool dead);

        char getPeca();

        void moves() override;

        bool getDead() override;
        
        void starting_pos() override;
}; 


#endif 

#ifndef BISHOP_H
#define BISHOP_H

#include <string>
#include <iostream>
#include "pieces.h"




class Bishop : public Pieces{
    private:
        bool m_dead = false;

        char m_peca = 'B';
    public:

    Bishop(bool Iswhite,bool dead);

    char getPeca();

    void moves() override;

    bool getDead() override;

    void starting_pos() override;

};



#endif
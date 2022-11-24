#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "pieces.h"


class Pawn : public Pieces{
    private:
        bool m_dead = false;

        char m_peca = 'P';

    public:
        Pawn(bool isWhite,bool dead);

        char getPeca();

        void moves() override;

        bool getDead() override;

        void starting_pos() override;

};

#endif
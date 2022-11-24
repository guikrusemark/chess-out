#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "pieces.h"


class Pawn : public Pieces{
    private:
        

    public:
        Pawn(bool isWhite,bool dead);

        void moves() override;

        bool dead() override;

        void starting_pos() override;

};

#endif
#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include "pieces.h"

class Knight : public Pieces{
    private:
    

    public:
        Knight(bool isWhite,bool dead);

        void moves() override;

        bool dead() override;

        void starting_pos() override;

};



#endif
#ifndef QUEEN_H
#define QUEEN_H

#include <iostream>
#include "pieces.h"

class Queen : public Pieces{
    private:

    public:
        Queen(bool isWhite,bool dead);

        void moves() override;

        bool dead() override;

        void starting_pos() override;

};




#endif

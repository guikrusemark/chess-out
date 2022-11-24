#ifndef ROOK_H
#define ROOK_

#include <iostream>
#include "pieces.h"

class Rook : public Pieces{
    private:


    public:
        Rook(bool isWhite,bool dead);

        void moves() override;

        bool dead() override;
        
        void starting_pos() override;
}; 


#endif 

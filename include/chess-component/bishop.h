#ifndef BISHOP_H
#define BISHOP_H

#include <string>
#include <iostream>
#include "pieces.h"




class Bishop : public Pieces{
    private:
        
    public:

    Bishop(bool Iswhite,bool dead);

    void moves() override;

    bool dead() override;

    void starting_pos() override;

    bool getWhite();
};



#endif
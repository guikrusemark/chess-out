#ifndef KINGH_H
#define KINGH_H

#include "pieces.h"


class King : public Pieces{
    private:
        bool m_check = false;


    public:
        King(bool check,bool isWhite,bool dead);

        bool getCheck();

        void moves() override;

        bool dead() override;

        void starting_pos() override;

}; 


#endif
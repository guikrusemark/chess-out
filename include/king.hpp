#ifndef KINGH_H
#define KINGH_H

#include "pieces.hpp"


class King : public Pieces{
    private:
        bool m_check = false;


    public:
        King(bool check,bool white,bool dead);

        bool Getcheck();

        void moves() override;

        bool Dead() override;

        void starting_pos() override;

}; 


#endif
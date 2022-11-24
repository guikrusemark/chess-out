#ifndef KINGH_H
#define KINGH_H

#include "pieces.h"


class King : public Pieces{
    private:
        bool m_check = false;

        bool m_dead = false;

        char m_peca = 'K';

    public:
        King(bool check,bool isWhite,bool dead);

        char getPeca();

        bool getCheck();

        void moves() override;

        bool getDead() override;

        void starting_pos() override;

}; 


#endif
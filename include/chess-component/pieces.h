#ifndef PIECES_H
#define PIECES_H

#include <iostream>
#include <string>



class Pieces{
    private:
        bool m_dead = false;        
        
        bool m_white;
    public:
        Pieces(bool isWhite,bool m_dead);

        virtual void moves() = 0;

        virtual bool dead() = 0;

        virtual void starting_pos() = 0;

        bool getPieceWhite();
};



#endif

#ifndef PIECES
#define PIECES

#include <iostream>
#include <string>



class Pieces{
    private:
        bool m_dead = false;        
        
        bool m_white;
    public:
        Pieces(bool white,bool m_dead);

        virtual void moves() = 0;

        virtual bool Dead() = 0;

        virtual void starting_pos() = 0;

        bool getWhite();
};



#endif

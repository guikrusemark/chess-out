#include "include/chess-component/king.h"

King::King(bool check,bool isWhite,bool dead) : 
    Pieces(isWhite,dead){
    
    m_check=check;
}

bool King::getCheck()
{
    return m_check;
}

void King::moves()
{

}

bool King::dead()
{
    
}


void King::starting_pos()
{
    
}
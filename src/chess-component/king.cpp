#include "include/chess-component/king.h"

King::King(bool check,bool isWhite,bool dead) : 
    Pieces(isWhite,dead){
    
    m_check=check;
}


char King::getPeca()
{
    return m_peca; 
}

bool King::getCheck()
{
    if(getDead()==true){
        return m_check;
    }
}

void King::moves()
{
    
}

bool King::getDead()
{
    return m_dead;
}


void King::starting_pos()
{
    
}
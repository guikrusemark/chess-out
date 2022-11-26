#include "include/chess-component/king.h"

King::King(bool check,bool isWhite) : 
    Piece(isWhite){
    m_white=isWhite;
    m_check=check;
}


char King::getPiece()
{
    return m_piece; 
}

bool King::getCheck()
{
    if(hasDead()==true){
        return m_check;
    }
}

bool King::getWhite()
{
    return m_white;
}

void King::move()
{
    
}

bool King::hasDead()
{
    return isDead;
}

/**
void King::startingPos()
{
    
}
**/


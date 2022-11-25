#include "include/chess-component/king.h"

King::King(bool check,bool isWhite) : 
    Piece(isWhite){
    
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

void King::move()
{
    
}

bool King::hasDead()
{
    return isDead;
}


void King::startingPos()
{
    
}


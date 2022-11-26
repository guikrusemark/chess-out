#include "include/chess-component/bishop.h"

Bishop::Bishop(bool isWhite): Piece(isWhite)
{
    m_white=isWhite;
}

void Bishop::move()
{
    
}

char Bishop::getPiece()
{
    return m_piece;
}

bool Bishop::hasDead()
{
    return isDead;
}


bool Bishop::getWhite()
{
    return m_white;
}



/**
void Bishop::startingPos()
{

}
**/



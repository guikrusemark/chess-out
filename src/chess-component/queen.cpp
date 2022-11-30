#include "include/chess-component/queen.h"

Queen::Queen(bool isWhite): Piece(isWhite){
    m_white=isWhite;
}

void Queen::move()
{

}

char Queen::getPiece()
{
    return m_piece;
}


bool Queen::hasDead()
{
    return isDead;
}

bool Queen::getWhite()
{
    return m_white;
}


/**
void Queen::startingPos()
{

}
**/
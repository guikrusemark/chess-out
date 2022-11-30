#include "include/chess-component/knight.h"

Knight::Knight(bool isWhite): Piece(isWhite){
    m_white=isWhite;
}


char Knight::getPiece()
{
    return m_piece;
}

void Knight::move()
{

}

bool Knight::getWhite()
{
    return m_white;
}

bool Knight::hasDead()
{
    return isDead;
}


/**
void Knight::starting_pos()
{

}
**/
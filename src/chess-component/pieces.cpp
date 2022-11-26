#include "include/chess-component/pieces.h"

Piece::Piece(bool isWhite)
{
    m_white=isWhite;
}

bool Piece::hasDead()
{
    return isDead;
}


bool Piece::getWhite()
{
    return m_white;
}
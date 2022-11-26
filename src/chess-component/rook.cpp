#include "include/chess-component/rook.h"


Rook::Rook(bool isWhite): Piece(isWhite){}


char Rook::getPiece()
{
    return m_piece;
}



void Rook::move()
{

}


bool Rook::getWhite()
{
    return m_white;
}

bool Rook::hasDead()
{
    return isDead;
}

/**
void Rook::startingPos()
{

}

**/
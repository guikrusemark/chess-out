#include "include/chess-component/pawn.h"

Pawn::Pawn(bool isWhite): Piece(isWhite){}

char Pawn::getPiece()
{
    return m_piece;
}


void Pawn::move()
{
    
}


bool Pawn::hasDead()
{
    return isDead;
}


bool Pawn::getWhite()
{
    return m_white;
}

/**
void Pawn::startingPos()
{

}
**/
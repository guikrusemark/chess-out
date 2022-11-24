#include "include/chess-component/pawn.h"

Pawn::Pawn(bool isWhite,bool dead): Pieces(isWhite,dead){}

char Pawn::getPeca()
{
    return m_peca;
}


void Pawn::moves()
{
    
}


bool Pawn::getDead()
{
    return m_dead;
}



void starting_pos()
{

}
#include "include/chess-component/rook.h"


Rook::Rook(bool isWhite,bool dead): Pieces(isWhite,dead){}


char Rook::getPeca(){
    return m_peca;
}



void Rook::moves()
{

}


bool Rook::getDead()
{
    return m_dead;
}


void Rook::starting_pos()
{

}
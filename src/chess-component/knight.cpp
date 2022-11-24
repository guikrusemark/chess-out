#include "include/chess-component/knight.h"

Knight::Knight(bool isWhite,bool dead): Pieces(isWhite,dead){}


char Knight::getPeca(){
    return m_peca;
}

void Knight::moves()
{

}

bool Knight::getDead()
{
    return m_dead;
}

void starting_pos()
{

}
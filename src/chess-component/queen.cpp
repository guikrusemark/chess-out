#include "include/chess-component/queen.h"

Queen::Queen(bool isWhite,bool dead): Pieces(isWhite,dead){}

void Queen::moves()
{

}

char Queen::getPeca()
{
    return m_peca;
}


bool Queen::getDead()
{
    return m_dead;
}

void Queen::starting_pos()
{

}
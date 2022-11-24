#include "include/chess-component/bishop.h"

Bishop::Bishop(bool white,bool dead): Pieces(white,dead){}

void Bishop::moves()
{

}

char Bishop::getPeca(){
    return m_peca;
}

bool Bishop::getDead()
{
    return m_dead;
}




void Bishop::starting_pos()
{

}



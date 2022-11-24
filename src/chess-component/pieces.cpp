#include "include/chess-component/pieces.h"

Pieces::Pieces(bool isWhite,bool dead)
{
    m_white=isWhite;
    m_dead=dead;
}

bool Pieces::getPieceWhite()
{
    return m_white;
}




#include "include/pieces.hpp"

Pieces::Pieces(bool white,bool dead){
    m_white=white;
    m_dead=dead;
}

bool Pieces::getWhite(){
    return m_white;
}


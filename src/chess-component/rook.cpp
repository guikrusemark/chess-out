#include "chess-component/rook.h"

Rook::Rook(bool white) : Piece(white) {
    m_type = PieceType::ROOK;
    m_symbol = 'R';
    m_name = "Rook";
};

void Rook::move(int side) {
    
};
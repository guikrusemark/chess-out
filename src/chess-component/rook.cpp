#include "chess-component/rook.h"

Rook::Rook(bool white, int row, int column) : Piece(white, row, column) {
    m_type = PieceType::ROOK;
    m_symbol = 'R';
    m_name = "Rook";
};

void Rook::move(int side) {
    
};
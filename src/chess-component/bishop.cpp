#include "chess-component/bishop.h"

Bishop::Bishop(bool white) : Piece(white) {
    m_type = PieceType::BISHOP;
    m_symbol = 'B';
    m_name = "Bishop";

    m_limitOnBoard = 9;
};

void Bishop::move(int side) {
    
};
#include "chess-component/queen.h"

Queen::Queen(bool white, int row, int column) : Piece(white, row, column) {
    m_type = PieceType::QUEEN;
    m_symbol = 'Q';
    m_name = "Queen";

    m_limitOnBoard = 9;
};

void Queen::move(int side) {
    
};
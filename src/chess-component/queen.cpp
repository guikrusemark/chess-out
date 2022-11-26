#include "chess-component/queen.h"

Queen::Queen(bool white) : Piece(white) {
    m_type = PieceType::QUEEN;
    m_symbol = 'Q';
    m_name = "Queen";

    m_limitOnBoard = 9;
};
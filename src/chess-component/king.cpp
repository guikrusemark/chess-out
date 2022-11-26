#include "chess-component/king.h"

King::King(bool white) : Piece(white) {
    m_type = PieceType::KING;
    m_symbol = 'K';
    m_name = "King";

    m_limitOnBoard = 1;
};

void King::move(int side) {
    
}
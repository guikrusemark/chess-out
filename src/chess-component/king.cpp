#include "chess-component/king.h"

King::King(bool white, int row, int column) : Piece(white, row, column) {
    m_type = PieceType::KING;
    m_symbol = 'K';
    m_name = "King";

    m_limitOnBoard = 1;
};

void King::move(int row, int column) {
}
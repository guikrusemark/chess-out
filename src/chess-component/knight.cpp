#include "chess-component/knight.h"

Knight::Knight(bool white) : Piece(white) {
    m_type = PieceType::KNIGHT;
    m_symbol = 'N';
    m_name = "Knight";

    m_limitOnBoard = 9;
};
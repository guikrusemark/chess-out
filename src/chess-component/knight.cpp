#include "chess-component/knight.h"

Knight::Knight(bool white, int row, int column) : Piece(white, row, column) {
    m_type = PieceType::KNIGHT;
    m_symbol = 'N';
    m_name = "Knight";

    m_limitOnBoard = 9;
};

void Knight::move(int row, int column){

};
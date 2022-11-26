#include "chess-component/cell.h"

Cell::Cell(unsigned int row, unsigned int column, bool empty) 
    : m_row(row), m_column(column), m_empty(empty) {
    m_positionNotation[0] = '8' - m_row;
    m_positionNotation[1] = 'a' + m_column;
}
Cell::Cell(unsigned int row, unsigned int column, bool empty, Piece *piece) 
    : m_row(row), m_column(column), m_empty(empty), mp_piece(piece) {
    m_positionNotation[0] = '8' - m_row;
    m_positionNotation[1] = 'a' + m_column;
}
Cell::~Cell() {
    if (!m_empty) {
        mp_piece = nullptr;
    }
}

unsigned int Cell::getRow() {
    return m_row;
}
unsigned int Cell::getColumn() {
    return m_column;
}
char *Cell::getPositionNotation() {
    return m_positionNotation;
}
bool Cell::isEmpty() {
    return m_empty;
}

Piece *Cell::getPiece() {
    return mp_piece;
}
void Cell::setPiece(Piece *piece) {
    mp_piece = piece;
}
#include "chess-component/cell.h"

Cell::Cell(unsigned int row, unsigned int column)
    : m_row(row), m_column(column) {
    m_positionNotation[0] = 'a' + m_column;
    m_positionNotation[1] = '8' - m_row;
    if ((m_row + m_column) % 2 == 0) // if cell on place even
        m_colorWhite = true;
    else
        m_colorWhite = false;
}
Cell::Cell(unsigned int row, unsigned int column, Piece *piece) 
    : m_row(row), m_column(column), mp_piece(piece) {
    m_empty = false;
    m_positionNotation[0] = 'a' + m_column;
    m_positionNotation[1] = '8' - m_row;
    if ((m_row + m_column) % 2 == 0) // if cell on place even
        m_colorWhite = true;
    else
        m_colorWhite = false;
}

unsigned int Cell::getRow() {
    return m_row;
}
unsigned int Cell::getColumn() {
    return m_column;
}
std::string Cell::getPositionNotation() {
    std::string notation = "";
    notation += m_positionNotation[0];
    notation += m_positionNotation[1];
    return notation;
}
std::string Cell::getRowNotation() {
    std::string notation = "";
    notation += m_positionNotation[0];
    return notation;
}
std::string Cell::getColumnNotation() {
    std::string notation = "";
    notation += m_positionNotation[1];
    return notation;
}
void Cell::setEmpty() {
    if(!m_empty) {
        delete mp_piece;
        mp_piece = nullptr;
        m_empty = true;
    };
}
bool Cell::isEmpty() {
    return m_empty;
}

Piece &Cell::getPiece() {
    return *mp_piece;
}
void Cell::setPiece(Piece *piece) {
    mp_piece = piece;
}
bool Cell::isWhite() {
    return m_colorWhite;
}
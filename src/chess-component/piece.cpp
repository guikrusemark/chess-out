#include "chess-component/piece.h"

Piece::Piece(bool white) : m_white(white) {}
Piece::~Piece() {}

bool Piece::isWhite() {
    return m_white;
}

std::string Piece::getName() {
    return m_name;
}

std::string Piece::getColorName() {
    return m_white ? "White" : "Black";
}
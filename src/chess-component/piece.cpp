#include "chess-component/piece.h"

Piece::Piece(bool white, int row, int column) : m_white(white), m_boardPosition{row, column} {}
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

bool Piece::isPossibleMovingTo(int row, int column) {
    return m_possibleMovesMatrix[row][column];
}
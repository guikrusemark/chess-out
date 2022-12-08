#include "chess-component/piece.h"

void Piece::clearPossibleMovesMatrix() {
    for(int i : m_possibleMovesMatrix[0])
        for(int j : m_possibleMovesMatrix[i])
            m_possibleMovesMatrix[i][j] = false;
}

Piece::Piece(bool white, int row, int column) : m_white(white), m_boardPosition{row, column} {}
Piece::~Piece() {}

bool Piece::isWhite() {
    return m_white;
}

std::string Piece::getName() {
    return m_name;
}

std::string Piece::getNameLetter() {
    return (m_name.substr(0, 4) + " ");
}

std::string Piece::getColorName() {
    return (m_white ? "White" : "Black");
}

std::string Piece::getColorLetter() {
    return (m_white ? "W" : "B");
}

bool Piece::isPossibleMovingTo(int row, int column) {
    return m_possibleMovesMatrix[row][column];
}
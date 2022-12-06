#include "chess-component/king.h"

void King::setPossibleMovesMatrix(int row, int column) {
    for (int i = 1; ((row + i) < 8) && ((row - i) >= 0) && ((column + i) < 8) && ((column - i) >= 0); i++) {
        m_possibleMovesMatrix[row + i][column + i] = true;
        m_possibleMovesMatrix[row - i][column - i] = true;
        m_possibleMovesMatrix[row + i][column - i] = true;
        m_possibleMovesMatrix[row - i][column + i] = true;
        m_possibleMovesMatrix[row + i][column] = true;
        m_possibleMovesMatrix[row - i][column] = true;
        m_possibleMovesMatrix[row][column + i] = true;
        m_possibleMovesMatrix[row][column - i] = true;
    }
}

King::King(bool white, int row, int column) : Piece(white, row, column) {
    m_type = PieceType::KING;
    m_symbol = 'K';
    m_name = "King";

    m_limitOnBoard = 1;
};

void King::move(int row, int column) {
    if (isPossibleMovingTo(row, column)) {
        clearPossibleMovesMatrix();
        m_boardPosition[0] = row;
        m_boardPosition[1] = column;
        setPossibleMovesMatrix(row, column);
    }

    if (row < 0 || row > 7 || column < 0 || column > 7)
        throw std::out_of_range("Out of range");
}
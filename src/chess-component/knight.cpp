#include "chess-component/knight.h"

void Knight::setPossibleMovesMatrix(int row, int column) {
        m_possibleMovesMatrix[row + 2][column + 1] = true;
        m_possibleMovesMatrix[row + 2][column - 1] = true;
        m_possibleMovesMatrix[row - 2][column + 1] = true;
        m_possibleMovesMatrix[row - 2][column - 1] = true;
        m_possibleMovesMatrix[row + 1][column + 2] = true;
        m_possibleMovesMatrix[row - 1][column + 2] = true;
        m_possibleMovesMatrix[row - 1][column - 2] = true;
        m_possibleMovesMatrix[row + 1][column - 2] = true;
}

Knight::Knight(bool white, int row, int column) : Piece(white, row, column) {
    m_type = PieceType::KNIGHT;
    m_symbol = 'N';
    m_name = "Knight";

    m_limitOnBoard = 9;
};

void Knight::move(int row, int column) {
    if (isPossibleMovingTo(row, column)) {
        clearPossibleMovesMatrix();
        m_boardPosition[0] = row;
        m_boardPosition[1] = column;
        setPossibleMovesMatrix(row, column);
    }

    if (row < 0 || row > 7 || column < 0 || column > 7)
        throw std::out_of_range("Out of range");
};
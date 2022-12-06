#include "chess-component/pawn.h"

Pawn::Pawn(bool white, int row, int column) : Piece(white, row, column) {
    m_possibleMovesMatrix[(m_white) ? (row - 1) : (row + 1)][column] = true;
    m_possibleMovesMatrix[(m_white) ? (row - 2) : (row + 2)][column] = true;
};
Pawn::~Pawn() {};

void Pawn::move(int row, int column) {
    if(isPossibleMovingTo(row, column)) {
        for(int i : m_possibleMovesMatrix[0])
            for(int j : m_possibleMovesMatrix[i])
                m_possibleMovesMatrix[i][j] = false;
        m_boardPosition[0] = row;
        m_boardPosition[1] = column;
        m_possibleMovesMatrix[(m_white) ? (row - 1) : (row + 1)][column] = true;
    }
};
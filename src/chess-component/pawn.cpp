#include "chess-component/pawn.h"

void Pawn::setPossibleMovesMatrix(int row, int column) {
    m_possibleMovesMatrix[(m_white) ? (row - 1) : (row + 1)][column] = true;
}

Pawn::Pawn(bool white, int row, int column) : Piece(white, row, column) {
    setPossibleMovesMatrix(row, column);
    setPossibleMovesMatrix((m_white) ? (row - 1) : (row + 1), column);
};
Pawn::~Pawn() {};

void Pawn::move(int row, int column) {
    if(isPossibleMovingTo(row, column)) {
        clearPossibleMovesMatrix();
        m_boardPosition[0] = row;
        m_boardPosition[1] = column;
        setPossibleMovesMatrix(row, column);
    }
        
    if(row < 0 || row > 7 || column < 0 || column > 7)
        throw std::out_of_range("Out of range");
};
#ifndef CHESSCOMPONENT_CELL_H_
#define CHESSCOMPONENT_CELL_H_

#include "chess-component/piece.h"

class Cell {
    private:
        unsigned int m_row;
        unsigned int m_column;
        char m_positionNotation[2];
        bool m_empty{true};
        Piece *mp_piece{nullptr};

    public:
        Cell(unsigned int row, unsigned int column, bool empty);
        Cell(unsigned int row, unsigned int column, bool empty, Piece *piece);
        ~Cell();

        unsigned int getRow();
        unsigned int getColumn();
        char *getPositionNotation();
        
        void setEmpty();
        bool isEmpty();

        Piece *getPiece();
        void setPiece(Piece *piece);

};

#endif // CHESSCOMPONENT_CELL_H_
/**
 * @file cell.h
 * @author
 * @brief Cell class, it is where all pieces (Piece class and sub-classes) are located and responsible for all movements and piece states.
 *
 */

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
        /**
         * @brief Construct a new Cell object
         * 
         * @param row Row position on board
         * @param column Column position on board
         * @param empty If the cell is empty or not
         */
        Cell(unsigned int row, unsigned int column); // TODO - param empty will be deprecated for best readability purpose.
        Cell(unsigned int row, unsigned int column, Piece *piece); // TODO - param empty will be deprecated bc passing piece is enough to empty being false.

        /**
         * @brief Get the Row position on board.
         * 
         * @return unsigned int row position on board
         */
        unsigned int getRow();
        /**
         * @brief Get the Column position on board.
         * 
         * @return unsigned int column position on board
         * 
         */
        unsigned int getColumn();
        /**
         * @brief Get the Position Notation (ex: a1, b2, c3, etc) for chess algebra purposes.
         * 
         * @return string position notation
         */
        std::string getPositionNotation();
        /**
         * @brief Get the Row Position Notation (ex: 1, 2, 3, etc) wich is diferent than regular matrix notation.
         *
         * @return string row position notation
         */
        std::string getRowNotation();
        /**
         * @brief Get the Column Position Notation (ex: a, b, c, etc) wich is quite diferent than regular matrix notation.
         *
         * @return string Column position notation
         */
        std::string getColumnNotation();
        /**
         * @brief Set the current cell empty and delete the previous piece located in it.
         * 
         */
        void setEmpty();
        /**
         * @brief Is the cell empty?
         * 
         * @return true if it is empty
         */
        bool isEmpty();
        /**
         * @brief Get the Piece object in form of reference for better manipulation in other classes.
         *
         * @return Piece& in current cell.
         *
         */
        Piece &getPiece();
        /**
         * @brief Set the Piece which will be located on the cell.
         *
         * @param piece Piece object to be located on the cell.
         *
         */
        void setPiece(Piece *piece);

};

#endif // CHESSCOMPONENT_CELL_H_
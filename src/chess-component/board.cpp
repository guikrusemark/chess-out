#include "chess-component/board.h"

Board::Board() {
    try{
        for (unsigned int row = 0; row < 8; row++) {
            for (unsigned int col = 0; col < 8; col++) {
                if (row == 0) {
                    if (col == 0 || col == 7) {
                        mp_cells[row][col] = new Cell(row, col, false, new Rook(false, row, col));
                    } else if (col == 1 || col == 6) {
                        mp_cells[row][col] = new Cell(row, col, false, new Knight(false, row, col));
                    } else if (col == 2 || col == 5) {
                        mp_cells[row][col] = new Cell(row, col, false, new Bishop(false, row, col));
                    } else if (col == 3) {
                        mp_cells[row][col] = new Cell(row, col, false, new Queen(false, row, col));
                    } else if (col == 4) {
                        mp_cells[row][col] = new Cell(row, col, false, new King(false, row, col));
                    }
                }
                // ******************************************************************
                if (row == 1) {
                    mp_cells[row][col] = new Cell(row, col, false, new Pawn(false, row, col));
                }
                // ******************************************************************
                if (row > 1 && row < 6) {
                    mp_cells[row][col] = new Cell(row, col, true);
                }
                // ******************************************************************
                if (row == 6) {
                    mp_cells[row][col] = new Cell(row, col, false, new Pawn(true, row, col));
                }
                // ******************************************************************
                if (row == 7) {
                    if (col == 0 || col == 7) {
                        mp_cells[row][col] = new Cell(row, col, false, new Rook(true, row, col));
                    } else if (col == 1 || col == 6) {
                        mp_cells[row][col] = new Cell(row, col, false, new Knight(true, row, col));
                    } else if (col == 2 || col == 5) {
                        mp_cells[row][col] = new Cell(row, col, false, new Bishop(true, row, col));
                    } else if (col == 3) {
                        mp_cells[row][col] = new Cell(row, col, false, new Queen(true, row, col));
                    } else if (col == 4) {
                        mp_cells[row][col] = new Cell(row, col, false, new King(true, row, col));
                    }
                }
            }
        }
    } catch (std::bad_alloc &e_badAlloc) {
        std::cerr << "ERROR: " << e_badAlloc.what() << std::endl;
    } catch (std::out_of_range &e_outOfRange) {
        std::cerr << "ERROR: " << e_outOfRange.what() << std::endl;
    } catch (std::exception &e_exception) {
        std::cerr << "ERROR: " << e_exception.what() << std::endl;
        std::cerr << "UNABLE TO CREATE AND POSITION PIECES!" << std::endl;
    }
};
Board::~Board() {
    try{
        for (unsigned int row = 0; row < 8; row++) {
            for (unsigned int col = 0; col < 8; col++) {
                if (!this->onCell(row, col).isEmpty()) {
                    delete &(this->onCell(row, col).getPiece());
                }
                delete mp_cells[row][col];
            }
        }
    } catch (std::bad_alloc &e_badAlloc) {
        std::cerr << "ERROR: " << e_badAlloc.what() << std::endl;
    } catch (std::out_of_range &e_outOfRange) {
        std::cerr << "ERROR: " << e_outOfRange.what() << std::endl;
    } catch (std::exception &e_exception) {
        std::cerr << "ERROR: " << e_exception.what() << std::endl;
        std::cerr << "NOTHING TO DELETE!" << std::endl;
    }
};

Cell &Board::onCell(unsigned int row, unsigned int col) {
    return *(mp_cells[row][col]);
}


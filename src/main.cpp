#include <iostream>

#include "chess-component/board.h"

int main() {

    Board board = Board();

    std::cout << std::endl;
    std::cout << std::endl;

    for (unsigned int row = 0; row < 8; row++) {
        for (unsigned int col = 0; col < 8; col++) {
            if (board.onCell(row, col)->isEmpty()) {
                std::cout << row + 1 << "-" << col + 1 << " "
                          << "Empty          ";
            } else {
                std::cout << row + 1 << "-" << col + 1 << " "
                          << board.onCell(row, col)->getPiece()->getColorName() << "-"
                          << board.onCell(row, col)->getPiece()->getName() << "    ";
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
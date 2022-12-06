#include <iostream>

#include "game.h"

int main() {

    // std::cout << std::endl;
    // std::cout << std::endl;
    
    // Board board = Board();

    // for (unsigned int row = 0; row < 8; row++) {
    //     for (unsigned int col = 0; col < 8; col++) {
    //         if (board.onCell(row, col).isEmpty()) {
    //             std::cout << board.onCell(row, col).getPositionNotation() << " " 
    //                       << row + 1 << "-" << col + 1 << " " 
    //                       << "Empty          ";
    //         } else {
    //             std::cout << board.onCell(row, col).getPositionNotation() << " " 
    //                       << row + 1 << "-" << col + 1 << " "
    //                       << board.onCell(row, col).getPiece().getColorName() << "-"
    //                       << board.onCell(row, col).getPiece().getName() << "    ";
    //         }
    //     }
    //     std::cout << std::endl;
    // }

    std::cout << std::endl;
    std::cout << std::endl;

    Game game = Game();

    game.accessUser("Hikaru Nakamura");
    game.newMatch();

    std::cout << game.currentMatch().WhitePlayer().getName() << std::endl;
    std::cout << game.currentMatch().BlackPlayer().getName() << std::endl;
    std::cout << game.currentMatch().PlayingBoard().onCell(1, 4).getPiece().getName() << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
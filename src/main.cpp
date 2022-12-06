#include <iostream>

#include "game.h"

int main() {

    std::cout << std::endl;
    std::cout << std::endl;

    Game game = Game();

    game.accessUser("Hikaru Nakamura");
    game.newMatch();

    std::cout << "Name of White Player: " << game.currentMatch().WhitePlayer().getName() << std::endl;
    std::cout << "Name of Black Player: " << game.currentMatch().BlackPlayer().getName() << std::endl;
    std::cout << "Name of a Piece: " << game.currentMatch().PlayingBoard().onCell(1, 4).getPiece().getName() << std::endl;
    std::cout << "Win count of Player 1: " << game.currentUser().getWinCount() << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    return 0;
}
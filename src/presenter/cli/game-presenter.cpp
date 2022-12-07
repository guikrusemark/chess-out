#include "presenter/cli/game-presenter.h"

// PRIVATE FUNCTIONS **********************************************************
void GamePresenter::clear() {
    std::system("clear");
    std::cout << std::flush;
}
void drawBoard() {}

// PUBLIC FUNCTIONS ***********************************************************
GamePresenter::GamePresenter() {
    this->clear();
}

void GamePresenter::start() {
    std::cout << "Welcome to CHESS.out!" << std::endl;
    std::cout << "For now, you will be playing with white pieces for the sake of easing development. ok?" << std::endl;
    std::cout << std::endl;
}
std::string GamePresenter::askName() {
    std::string name;
    std::cout << "Please, enter your name or nickname -> ";
    std::getline(std::cin, name);
    this->clear();
    return name;
}
void GamePresenter::drawMatch(Match &match) {
    std::cout << "Name of White Player: " << match.WhitePlayer().getName() << std::endl;
    std::cout << "Name of Black Player: " << match.BlackPlayer().getName() << std::endl;
    std::cout << "Name of a Piece: " << match.PlayingBoard().onCell(1, 4).getPiece().getName() << std::endl;
    std::cout << "Win count of Player 1: " << match.WhitePlayer().getWinCount() << std::endl;
    std::cout << "Lost count of Player 1: " << match.WhitePlayer().getLostCount() << std::endl;
    std::cout << "Draw count of Player 1: " << match.WhitePlayer().getDrawCount() << std::endl;
}
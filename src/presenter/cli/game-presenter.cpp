#include "presenter/cli/game-presenter.h"

// PRIVATE FUNCTIONS **********************************************************
void GamePresenter::clear() {
    std::system("clear");
    std::cout << std::flush;
}
void GamePresenter::drawCell(Match &match, unsigned int row, unsigned int column, unsigned int inCellRow) {
    if(inCellRow == 0) {
        std::cout << (column == 0 ? "|" : "")
                  << match.PlayingBoard().onCell(row, column).getRowNotation()
                  << match.PlayingBoard().onCell(row, column).getColumnNotation()
                  << (match.PlayingBoard().onCell(row, column).isEmpty() ? "" : "-" + match.PlayingBoard().onCell(row, column).getPiece().getColorLetter())
                  << "-"
                  << (match.PlayingBoard().onCell(row, column).isEmpty() ? "" : match.PlayingBoard().onCell(row, column).getPiece().getNameLetter());
        if (match.PlayingBoard().onCell(row, column).isWhite()) {
            std::cout << (match.PlayingBoard().onCell(row, column).isEmpty() ? "EMPTY  |" : "|");
        } else {
            std::cout << (match.PlayingBoard().onCell(row, column).isEmpty() ? "EMPTY  |" : "|");
        }
    } else if(inCellRow < 3) {
        if (match.PlayingBoard().onCell(row, column).isWhite()) {
            std::cout << (column == 0 ? "|" : "") << "          |";
        } else {
            std::cout << (column == 0 ? "|" : "") << "**********|";
        }
    } else {
        std::cout << (column == 0 ? "|" : "") << "__________|";
    }
}
void GamePresenter::drawBoard(Match &match) {
    std::cout << "_________________________________________________________________________________________" << std::endl;
    for (unsigned int row = 0; row < 8; row++) {
        for (unsigned int inCellRow = 0; inCellRow < 4; inCellRow++) {
            for (unsigned int column = 0; column < 8; column++) {
                this->drawCell(match, row, column, inCellRow);
            }
            std::cout << std::endl;
        }
    }
}

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
    // std::cout << "Name of White Player: " << match.WhitePlayer().getName() << std::endl;
    // std::cout << "Name of Black Player: " << match.BlackPlayer().getName() << std::endl;
    // std::cout << "Name of a Piece: " << match.PlayingBoard().onCell(3, 4).getPiece().getName() << std::endl;

    // std::cout << "Win count of Player 1: " << match.WhitePlayer().getWinCount() << std::endl;
    // std::cout << "Lost count of Player 1: " << match.WhitePlayer().getLostCount() << std::endl;
    // std::cout << "Draw count of Player 1: " << match.WhitePlayer().getDrawCount() << std::endl;

    this->clear();
    this->drawBoard(match);
}
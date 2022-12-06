#include "game.h"

Game::Game() {};

Game::~Game() {
    if(!(mp_currentUser == nullptr))
        delete mp_currentUser;
    if(!(mp_currentMatch == nullptr))
        delete mp_currentMatch;
};

void Game::run(UI ui) {
    if (ui == UI::CLI) {
        std::cout << "Welcome to Chess++!" << std::endl;
        std::cout << "Please enter your name: ";
        std::string name;
        std::cin >> name;
        std::cout << "Hello " << this->currentUser().getName() << "!" << std::endl;
    }
};

void Game::newMatch() {
    mp_currentMatch = new Match();
    this->currentMatch().start();
};

User &Game::currentUser() {
    return *mp_currentUser;
};
Match &Game::currentMatch() {
    return *mp_currentMatch;
};
#include "game.h"

Game::Game() {};

Game::~Game() {
    if(!(mp_currentUser == nullptr))
        delete mp_currentUser;
    if(!(mp_currentMatch == nullptr))
        delete mp_currentMatch;
};

void Game::run(UI ui) {
};

void Game::accessUser(std::string name) {
    mp_currentUser = new User(1, name);
};

void Game::newMatch() {
    mp_currentMatch = new Match(*mp_currentUser);
};

User &Game::currentUser() {
    return *mp_currentUser;
};
Match &Game::currentMatch() {
    return *mp_currentMatch;
};
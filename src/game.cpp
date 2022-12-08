#include "game.h"

Game::~Game() {
    if(!(mp_currentUser == nullptr))
        delete mp_currentUser;
    if(!(mp_currentMatch == nullptr))
        delete mp_currentMatch;
};

void Game::run() {
    m_ui.start();
};

void Game::accessUser(std::string name) {
    mp_currentUser = new User(1, name);
};

void Game::newMatch() {
    mp_currentMatch = new Match(*mp_currentUser);
    m_ui.drawMatch(*mp_currentMatch);
};

User &Game::currentUser() {
    return *mp_currentUser;
};
Match &Game::currentMatch() {
    return *mp_currentMatch;
};
GamePresenter &Game::ui() {
    return m_ui;
};
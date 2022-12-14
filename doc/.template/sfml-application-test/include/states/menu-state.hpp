#ifndef PTE_MENU_STATE_HPP
#define PTE_MENU_STATE_HPP

#include "definitions.hpp"
#include "engine/include/game/game.hpp"
#include "engine/include/state/state.hpp"
#include "states/game-state.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>

class MainMenuState : public pte::State {
private:
    pte::game_data_ref data;

    sf::Sprite play_button;
    sf::Sprite quit_button;
    sf::Text title;

public:
    MainMenuState(pte::game_data_ref data);

    void init();

    void handle_input();
    void update(float delta_time);
    void draw(float delta_time);
};

#endif
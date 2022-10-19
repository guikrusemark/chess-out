/**
 * @file state.hpp
 * @author Minipato
 * @brief classe de states
 * @version 0.1
 * @date 2022-10-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

/**
 * @brief Classe responsavel pelo estados do jogo 
 * 
 */

class State{
    protected:
        //std::stack<State *> *state;
        sf::RenderWindow *window;
        std::vector<sf::Texture> textures;
        bool quit_state = false; 

        sf::Vector2i mouse_position_screen;
        sf::Vector2i mouse_position_window;
        sf::Vector2i mouse_position_view;

    public:
        /**
         * @brief Constroi um novo estado de jogo       
         * 
         */
        State(sf::RenderWindow *window);

        
        /**
         * @brief destroi o objeto do tipo state
         * 
         */
        virtual ~State();


        virtual void update (const float &delta_time);


};






#endif
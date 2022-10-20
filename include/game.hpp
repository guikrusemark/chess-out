/**
 * @file game.hpp
 * @author Minipato
 * @brief classe game 
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <fstream>
#include <sstream>


#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"

#include "include/state.hpp"

/**
 * @brief classe responsavel pelo jogo
 * 
 */


class Game{
    private:
        sf::RenderWindow *window; 
        sf::Event sf_event;

        sf::Clock dt_clock;
        float dt;

        bool vertical_sync_enable = false;
        unsigned framerate_limit = 30;

        std::string  title = "chess";
        std::stack<State* > states;
    public:
        /**
         * @brief Construtor da classe game 
         * 
         */
        Game();


        /**
         * @brief Destrutor da classe games
         * 
         */
        virtual ~Game();

        /**
         * @brief  
         * 
         */
        void update_SFML_events();
        
        /**
         * @brief Atualiza o estado do jogo
         * 
         */
        void  update();

        /**
         * @brief A função renderiza a tela
         * 
         */
        void render();

        /**
         * @brief  Uma função que mantem o loop para a janela se manter aberta 
         * 
         */
        void run();


        /**
         * @brief uma função que atualiza o tempo
         * 
         */
        void update_dt();

};


#endif
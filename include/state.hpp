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
#include <stack>

#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

/**
 * @brief Classe responsavel pelo estados do jogo 
 * 
 */

class State{
    private:

        sf::RenderWindow *window;
    
    public:
        State();

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

        /**
         * @brief Função virtual que vai sobreescrever estado do jogo
         * 
         */
        virtual void update (const float &delta_time);

        /**
         * @brief uma função virtual que renderiza a tela do jogo
         * 
         */
        virtual void render()=0;

        /**
         * @brief uma função virtual que atualiza o estado principal do jogo
         * 
         */
        virtual void update()=0;
};






#endif
/**
 * @file game.h
 * @author
 * @brief Class Game will be the main class of whole game,
 *      controlling states, flows of game and what user can do.
 *      This class will be called in main.cpp and bind along third_party tools.
 *
 */

#ifndef GAME_H_
#define GAME_H_

#include <string>

#include "user/user.h"
#include "match/match.h"
#include "presenter/cli/game-presenter.h" // adds graphical interface

class Game {
    private:
        /**
         * @brief pointer of type User to the current player
         * 
         */
        User *mp_currentUser;
        /**
         * @brief pointer of type Match to the current match
         * 
         */
        Match *mp_currentMatch;
        GamePresenter m_ui = GamePresenter();

    public:
        ~Game();

        /**
         * @brief Start the game interface chosen in include (TO BE RESOLVED)
         * 
         */
        void run();
        /**
         * @brief Access or create the user with the given name
         * 
         * @param name Name of the user the will be displayed in the game
         *
         */
        void accessUser(std::string name);
        /**
         * @brief Create a new match with the current user
         * 
         */
        void newMatch();

        /**
         * @brief Get the current user got in accessUser()
         * 
         * @return User& the actual object of the current user
         *
         */
        User &currentUser();
        /**
         * @brief Get the current match got in newMatch()
         * 
         * @return Match& the actual object of the current match
         *
         */
        Match &currentMatch();
        /**
         * @brief Get the current user interface
         *
         * @return GamePresenter& the actual object of
         *      the current user interface
         */
        GamePresenter &ui();
};

#endif // GAME_H_
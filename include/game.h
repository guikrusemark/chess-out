/**
 * @file game.h
 * @author 
 * @brief Class Game will be the main class of whole game, controlling states, flows of game and what user can do.
 *     This class will be called in main.cpp and bind along third_party tools.
 * 
 */

#ifndef GAME_H_
#define GAME_H_

#include <string>

#include "user/user.h"
#include "match/match.h"

enum class UI {
    CLI,
    SFML
};

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

    public:
        Game();
        ~Game();
        void run(UI ui = UI::CLI);

        void accessUser(std::string name);
        void newMatch();

        User &currentUser();
        Match &currentMatch();

};

#endif // GAME_H_
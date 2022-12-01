/**
 * @file game.h
 * @author 
 * @brief Class Game will be the main class of whole game, controlling states, flows of game and what user can do.
 *     This class will be called in main.cpp and bind along third_party tools.
 * 
 */

#ifndef GAME_H_
#define GAME_H_

#include "user/user.h"
#include "match/match.h"

enum class GameStatus {
    WAITING,
    PLAYING,
    FINISHED
};

class Game {
    private:
        User *mp_currentUser;
        bool m_on{false};

    public:
        Game();
        ~Game();
        void run();
        bool isOn();

        void newMatch();
        void conitnueMatch();

};

#endif // GAME_H_
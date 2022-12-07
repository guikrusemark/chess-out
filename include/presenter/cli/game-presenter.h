#ifndef PRESENTER_CLI_GAMEPRESENTER_H_
#define PRESENTER_CLI_GAMEPRESENTER_H_

#include <iostream>
#include <string>

#include "user/user.h"
#include "match/match.h"

class GamePresenter {
    private:

        /**
         * @brief Clear the screen and flush the output
         * 
         */
        void clear();
        /**
         * @brief Draw board within current match
         *
         */
        void drawBoard();

    public:
        /**
         * @brief Construct a new Game Presenter object and
         *      clear screen to show interface
         */
        GamePresenter();
        /**
         * @brief Start the game with initial screen
         *
         */
        void start();
        /**
         * @brief get name caught in start screen or read on file
         * 
         */
        std::string askName();
        /**
         * @brief Draw match already initiated in Game
         * 
         */
        void drawMatch(Match &match);
};

#endif // PRESENTER_CLI_GAMEPRESENTER_H_
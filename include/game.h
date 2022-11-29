#ifndef GAME_H_
#define GAME_H_

#include <vector>

#include "user/user.h"

class Game {
    private:
        bool on;
        User *currentUser;
        std::vector<User *> users;

    public:
        Game();
        ~Game();
        void run();

};

#endif // GAME_H_
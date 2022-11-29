#ifndef MATCH_PLAYER_H_
#define MATCH_PLAYER_H_

#include <string>
#include "user/user.h"

class Player {
    private:
        int id{0};
        std::string name{"Anonymous"};

        bool white{false};
        bool user{false};

        User *user{nullptr};

    public:
        Player();

};

#endif // MATCH_PLAYER_H_
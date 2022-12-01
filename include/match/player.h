/**
 * @file player.h
 * @author 
 * @brief Class Player is a specification of User, which can be either bot or real player to play a match
 * 
 */

#ifndef MATCH_PLAYER_H_
#define MATCH_PLAYER_H_

#include "user/user.h"

class Player : public User {
    private:

        bool m_white{false};

    public:
        Player(bool white);

};

#endif // MATCH_PLAYER_H_
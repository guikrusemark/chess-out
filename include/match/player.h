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
        bool m_inCheck{false};

    public:
        Player();
        Player(User &user, bool white);

        bool isWhite();
        bool isInCheck();

};

#endif // MATCH_PLAYER_H_
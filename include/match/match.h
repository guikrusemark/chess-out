/**
 * @file match.h
 * @author 
 * @brief Class to handle the match between two players, being two real players or one-two bots
 *      This class is the main class of the match module and will be initiate in every type of match
 * 
 */

#ifndef MATCH_MATCH_H_
#define MATCH_MATCH_H_

#include "chess-component/board.h"
#include "match/player.h"

// TODECIDE - enum classes must be within or whithout the class?
enum class MatchType {
    SINGLEPLAYER,
    MULTIPLAYER
};

class Match {
    private:
        int m_id{0}; // unique value
        Player *mp_whitePlayer;
        Player *mp_blackPlayer;
        Board *mp_board;
        bool m_whiteTurn{true};

    public:
        Match();
        Match(int id);

        void start();
        void end();

        Board &Board();
        Player &WhitePlayer();
        Player &BlackPlayer();
};

#endif // MATCH_MATCH_H_
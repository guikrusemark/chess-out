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

class Match {
    private:
        int m_id{0}; // unique value
        Board *mp_board{nullptr};
        Player *mp_whitePlayer{nullptr};
        Player *mp_blackPlayer{nullptr};
        bool m_whiteTurn{true};

    public:
        Match(User &whitePlayer);
        Match(User &whitePlayer, User &blackPlayer);

        Board &PlayingBoard();
        Player &WhitePlayer();
        Player &BlackPlayer();

        bool isWhiteTurn();
        void move(int rowFrom, int colFrom, int rowTo, int colTo);
};

#endif // MATCH_MATCH_H_
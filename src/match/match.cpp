#include "match/match.h"

Match::Match(User &whitePlayer) {
    mp_board = new Board();
    mp_whitePlayer = new Player(whitePlayer, true);
    mp_blackPlayer = new Player();
};
Match::Match(User &whitePlayer, User &blackPlayer) {
    mp_board = new Board();
    mp_whitePlayer = new Player(whitePlayer, true);
    mp_blackPlayer = new Player(blackPlayer, false);
};

Board &Match::PlayingBoard() { return *mp_board; };
Player &Match::WhitePlayer() { return *mp_whitePlayer; };
Player &Match::BlackPlayer() { return *mp_blackPlayer; };

bool Match::isWhiteTurn() { return m_whiteTurn; };
void Match::move() {
    // TODO
};
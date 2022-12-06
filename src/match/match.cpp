#include "match/match.h"

Match::Match() {};
Match::Match(int id) : m_id(id) {};

void Match::start() {};
void Match::end() {};

Board &Match::Board() { return *mp_board; };
Player &Match::WhitePlayer() { return *mp_whitePlayer; };
Player &Match::BlackPlayer() { return *mp_blackPlayer; };
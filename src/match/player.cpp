#include "match/player.h"

Player::Player() : User(){};
Player::Player(User &user, bool white) : User(user), m_white(white) {};

bool Player::isWhite() { return m_white; };
bool Player::isInCheck() { return m_inCheck; };
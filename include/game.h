#ifndef _GAME_H_
#define _GAME_H_

#include "player.h"
#include "board.h"

class Game {
private:
    unsigned int m_time;
    Player &m_playerWhite;
    Player &m_playerBlack;
    Board &m_board;

public:
    Game();
    ~Game();
};

#endif // _GAME_H_
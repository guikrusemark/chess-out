#ifndef _GAME_H_
#define _GAME_H_

#include "player.h"

class Game {
private:
    unsigned int time;
    Player &playerWhite;
    Player &playerBlack;

public:
    Game();
    ~Game();
};

#endif // _GAME_H_
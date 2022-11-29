#ifndef _MATCH_H_
#define _MATCH_H_

#include "game.h"

class Match : public Game {
private:
    unsigned int time;
    Player &playerWhite;
    Player &playerBlack;
    
public:
    Match();
    ~Match();
};

#endif // _MATCH_H_
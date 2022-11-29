#ifndef MATCH_MATCH_H_
#define MATCH_MATCH_H_

#include "chess-component/board.h"
#include "match/player.h"

class Match {
    private:
        int id;
        Player *players[2];
        Board *board;
        
    public:
        Match();
        ~Match();
};

#endif // MATCH_MATCH_H_

#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "state.hpp"


class Game_state : public State{
    private:
        
    public: 
        Game_state();
        virtual ~Game_state();

        void update() override;        
        void render() override;
        
};




#endif
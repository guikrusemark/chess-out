#include "game.h"

int main() {
    Game game = Game();

    game.run();
    game.accessUser(game.ui().askName());
    game.newMatch();

    return 0;
}
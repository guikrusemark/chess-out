#include "game.h"

int main() {
    Game game = Game();

    game.run(); // Start the game
    game.accessUser(game.ui().askName()); // Ask for the user's name
    game.newMatch(); // Start a new match

    return 0;
}
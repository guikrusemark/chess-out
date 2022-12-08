#include "game.h"

int main() {
    try {
        Game game = Game();

        game.run();                           // Start the game
        game.accessUser(game.ui().askName()); // Ask for the user's name
        game.newMatch();                      // Start a new match
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
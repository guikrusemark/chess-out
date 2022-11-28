// #include "definitions.hpp"
// #include "engine/include/game/game.hpp"
#include <SFML/Graphics.hpp>

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 800), "ChessTable");
    window.setPosition(sf::Vector2i(0, 0));
    window.setTitle("ChessTable");
    sf::RectangleShape shape1({100, 100});
    sf::RectangleShape shape2({100, 100});

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event))
            if (event.type == sf::Event::Closed)
                window.close();

        window.clear();
        shape1.setPosition({5, 5});
        shape2.setPosition({110, 5});
        shape1.setOutlineColor(sf::Color::Red);
        shape1.setOutlineThickness(5);
        window.draw(shape1);
        window.draw(shape2);
        window.display();
    }
    
    return 0;
}
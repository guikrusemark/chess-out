#include "include/game.hpp"


Game::Game(){
    this->window = new sf::RenderWindow(sf::VideoMode(800,600),"C++ SFML CHESS");
}

Game::~Game(){
    delete this->window;
}

void Game::update_SFML_events(){

}

void Game::update(){

}

void Game::render(){
    this->window->clear();


    this->window->display();
}

void Game::run(){
    while(window->isOpen()){
        this->update();
        this->render();    
    }
}
 


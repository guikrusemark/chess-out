#include "include/game.hpp"


Game::Game(){
    std::ifstream ifs("Config/window.ini");

    if(ifs.is_open()){
        std::getline(ifs,title);
        ifs >> vertical_sync_enable;
        ifs >> framerate_limit;
    }
    
    this->window = new sf::RenderWindow(sf::VideoMode(800,600),title);
    this->window->setFramerateLimit(framerate_limit);
    this->window->setVerticalSyncEnabled(vertical_sync_enable);

    //this->state.push(new)
}

Game::~Game(){
    delete this->window;
}

void Game::update_SFML_events(){
    while(this->window->pollEvent(this->sf_event)){
        if(this->sf_event.type == sf::Event::Closed){
            this->window->close();
        }
    }
}

void Game::update(){

    this->update_SFML_events();
    
}

void Game::render(){
    this->window->clear();


    this->window->display();
}

void Game::run(){
    while(window->isOpen()){
        this->update();
        this->render();    
        this->update_dt();
    }
}
 

void Game::update_dt(){
 
    //temos um problemas
    this->dt = this->dt_clock.getElapsedTime().asSeconds();

    system("blabla");

    std::cout<<this->dt<<std::endl;
}



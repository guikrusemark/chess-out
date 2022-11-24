#include "include/king.hpp"

King::King(bool check,bool white,bool dead) : Pieces(white,dead){
    m_check=check;
}

bool King::Getcheck(){
    return m_check;
}

void King::moves(){

}

bool King::Dead(){
    
}


void King::starting_pos(){
    
}
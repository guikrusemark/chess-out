/**
 * @file rook.h
 * @author minipatch
 * @brief Classe Rook
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef ROOK_H
#define ROOK_

#include <iostream>
#include "pieces.h"


/**
 * @brief Classe de criação do objeto Rook filha de Piece
 * 
 */



class Rook : public Piece{
    private:

        char m_piece = 'R';

        bool m_white;

        bool isDead = false;
    
    public:
    
        /**
         * @brief Construtor do objeto Rook
         * 
         */
        Rook(bool isWhite);

        /**
         * @brief Metodo que retorna o atributo m_piece que representa a peça Rook
         * 
         */
        char getPiece();

        /**
         * @brief Metodo responsavel pela movimentação da peça no tabuleiro
         * 
         */
        void move() override;

        /**
         * @brief Metodo que retorna o atributo isDead
         * 
         */
        bool hasDead() override;
        
        /**
         * @brief Metodo responsavel pela posição inicial da peça no tabuleiro
         * 
         */
        //void startingPos() override;

        /**
         * @brief Metodo que retorna o atributo m_white
         * 
         */
        bool getWhite();
}; 


#endif 

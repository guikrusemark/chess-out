/**
 * @file knight.h
 * @author minipatch
 * @brief Classe knight.h
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef KNIGHT_H
#define KNIGHT_H

#include <iostream>
#include "pieces.h"

/**
 * @brief Classe responsavel pela criação do objeto Knight filha de Piece 
 * 
 */

class Knight : public Piece{
    private:
    
        bool isDead = false;

        bool m_white;

        char m_piece = 'n';
    
    public:

        /**
         * @brief Construtor do objeto Knight
         * 
         */
        Knight(bool isWhite);

        /**
         * @brief Metodo que retorna a variavel m_piece que representa a peça do Knight 
         * 
         */
        char getPiece();


        /**
         * @brief Metodo responsavel pela movimentação da peça
         * 
         */
        void move() override;

        /**
         * @brief Metodo que retorna a variavel isDead
         * 
         */
        bool hasDead() override;

        /**
         * @brief Metodo responsavel pela posição inicial da peça
         * 
         */
        //void startingPos() override;

        /**
         * @brief Metodo que retorna a variavel m_white
         * 
         */
        bool getWhite();

};



#endif
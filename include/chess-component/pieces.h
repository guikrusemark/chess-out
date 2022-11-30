/**
 * @file pieces.h
 * @author minipatch
 * @brief Classe peça
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef PIECES_H
#define PIECES_H

#include <iostream>
#include <string>


/**
 * @brief Classe de criação do objeto peça do xadrez
 * 
 */


class Piece{
    private:
        bool isDead = false;        
        
        bool m_white;
    public:

        /**
         * @brief Construtor do objeto peça
         * 
         */
        Piece(bool isWhite);


        /**
         * @brief Função responsavel pela movimentação das peças
         * 
         */
        virtual void move() = 0;

        /**
         * @brief Função que retorna a variavel isDead 
         * 
         */
        virtual bool hasDead();

        
        /**
         * @brief Função responsavel pela posição inicial da peça no tabuleiro
         * 
         */
        //virtual void startingPos() = 0;

        /**
         * @brief Função que retorna a variavel m_White
         * 
         */
        bool getWhite();
};



#endif

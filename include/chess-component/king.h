/**
 * @file king.h
 * @author minipatch
 * @brief  Classe king
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef KINGH_H
#define KINGH_H

#include "pieces.h"

/**
 * @brief Classe responsavel pela criação do objeto Bishop filha de Piece
 * 
 */

class King : public Piece{
    private:

        bool m_check = false;

        bool isDead = false;

        char m_piece = 'K';

        bool m_white;

    public:

        /**
         * @brief Construtor do objeto King
         * 
         */
        King(bool check,bool isWhite);

        /**
         * @brief Metodo que retorna a variavel m_piece que representa a peça King
         * 
         */
        char getPiece();

        /**
         * @brief Metodo que retorna a variavel m_check
         * 
         */
        bool getCheck();

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
         * @brief Metodo responsavel pela posição inicial da peça no tabuleiro
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
/**
 * @file queen.h
 * @author minipatch
 * @brief Classe Queen
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef QUEEN_H
#define QUEEN_H

#include <iostream>
#include "pieces.h"


/**
 * @brief Classe de criação do objeto Queen filha de Piece
 * 
 */

class Queen : public Piece{
    private:

        bool isDead = false;

        bool m_white;

        char m_piece = 'Q';

    public:

        /**
         * @brief Construtor do objeto Queen
         * 
         */
        Queen(bool isWhite);

        /**
         * @brief Metodo que retorna o atributo m_piece que representa a peça Queen
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
         * @brief Metodo responsavel pela posição inicial da peça
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

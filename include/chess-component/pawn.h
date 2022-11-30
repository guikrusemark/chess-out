/**
 * @file pawn.h
 * @author minipatch
 * @brief Classe Pawn
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PAWN_H
#define PAWN_H

#include <iostream>
#include "pieces.h"


/**
 * @brief Classe de criação do objeto Pawn filha de Piece
 * 
 */

class Pawn : public Piece{
    private:
    
        bool isDead = false;

        char m_piece = 'P';

        bool m_white;
    
    public:
        
        /**
         * @brief Construtor do objeto Pawn
         * 
         */
        Pawn(bool isWhite);


        /**
         * @brief Metodo que retorna o atributo m_piece que representa a peça Pawn 
         * 
         * @return char 
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
         * @brief Metodo responsavel por retornar a variavel m_white
         * 
         */
        bool getWhite();

};

#endif
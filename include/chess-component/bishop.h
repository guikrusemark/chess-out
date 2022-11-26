/**
 * @file bishop.h
 * @author minipatch
 * @brief  Classe bishop
 * @version 0.1
 * @date 2022-11-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef BISHOP_H
#define BISHOP_H

#include <string>
#include <iostream>
#include "pieces.h"

/**
 * @brief Classe responsavel pela criação do objeto Bishop filha de Piece
 * 
 */


class Bishop : public Piece{
    private:
    
        bool isDead = false;

        bool m_white;

        char m_piece = 'B';
    
    public:

    /**
     * @brief Construtor do objeto Bishop
     * 
     */
    Bishop(bool Iswhite);

    /**
     * @brief Metodo que retorna a variiavel m_piece que representa a peça Bishop
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
     * @brief Metodo que retorna a varivel m_white 
     * 
     */
    bool getWhite();

    /**
     * @brief metodo responsavel pela posição inicial da peça
     * 
     */
    //void startingPos() override;

};



#endif
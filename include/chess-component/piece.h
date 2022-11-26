#ifndef _PIECE_H_
#define _PIECE_H_

#include <string>

enum class PieceType {
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

class Piece {
    protected:
        PieceType m_type{PieceType::PAWN};
        char m_symbol{'P'};
        std::string m_name{"Pawn"};
        
        bool m_white{false};
        uint8_t m_limitOnBoard{8};

    public:
        Piece(bool white);

        bool isWhite();
        virtual void move(uint8_t side) = 0;
};

#endif // _PIECE_H_
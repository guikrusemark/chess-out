#ifndef CHESSCOMPONENT_PIECE_H_
#define CHESSCOMPONENT_PIECE_H_

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
        PieceType m_type = PieceType::PAWN;
        char m_symbol{'P'};
        std::string m_name{"Pawn"};
        
        bool m_white{false};
        int m_limitOnBoard{8};

    public:
        Piece(bool white);
        virtual ~Piece();

        std::string getName();
        std::string getColorName();

        bool isWhite();
        virtual void move(int side) = 0;
};

#endif // CHESSCOMPONENT_PIECE_H_
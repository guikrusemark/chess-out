/**
 * @file piece.h
 * @author
 * @brief Virtual class, to be inherited by all pieces, and 
 *      to be used as a base class for manipulation on board. 
 *      It is responsible by storage scope for movements and informations 
 *      to pass messages to the cells.
 *      It uses PAWN type as default for preventing issues and inexpected 
 *      behavior, but it can be changed to any other type.
 *
 */

/* TODO - Add a way to check if the piece is in check, and if it is,
 *      then it can't move to a cell that is in check.
 * TODO - Add a way to check if the piece is in checkmate, and if it is,
 *      then it is a loss.
 * TODO - Add a way to check if the piece is in stalemate, and if it is,
 *      then it is a draw.
 * TODO - listPossibleMove() to list to player what can be done.
 */

#ifndef CHESSCOMPONENT_PIECE_H_
#define CHESSCOMPONENT_PIECE_H_

#include <stdexcept>
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
        int m_boardPosition[2]{0, 0};
        bool m_possibleMovesMatrix[8][8]{
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0}
        };
        int m_limitOnBoard{8};

        void clearPossibleMovesMatrix();
        virtual void setPossibleMovesMatrix(int row, int column) = 0;

    public:
        /**
         * @brief Construct a new Piece object
         * 
         * @param white Spicified if it is white or not
         * @param row Row position on board
         * @param column Column position on board
         *
         */
        Piece(bool white, int row, int column);
        virtual ~Piece();

        /**
         * @brief Get the name of the Piece Type.
         *
         * @return PieceType string.
         */
        std::string getName();
        /**
         * @brief Get the first letter of the name of the Piece Type.
         *
         * @return PieceType string.
         */
        std::string getNameLetter();
        /**
         * @brief Get a string version of color name (white, black).
         *      To be easier to show on presenter.
         *
         * @return std::string the name of color
         *
         */
        std::string getColorName();
        /**
         * @brief Get a string version of color name (white, black).
         *      To be easier to show on presenter.
         *
         * @return std::string the name of color
         *
         */
        std::string getColorLetter();

        /**
         * @brief Get is the piece is white or not.
         * 
         * @return true if the piece is white.
         */
        bool isWhite();

        /**
         * @brief Does the movement selected by the player.
         * 
         */
        bool isPossibleMovingTo(int row, int column);

        virtual void move(int row, int column) = 0;
};

#endif // CHESSCOMPONENT_PIECE_H_
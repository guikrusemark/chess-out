/**
 * @file knight.h
 * @author
 * @brief KNIGHT type class.
 *
 */

#ifndef CHESSCOMPONENT_KGNIGHT_H_
#define CHESSCOMPONENT_KGNIGHT_H_

#include "chess-component/piece.h"

class Knight final : public Piece {
    private:
        void setPossibleMovesMatrix(int row, int column) override;

    public:
        Knight(bool white, int row, int column);

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_KGNIGHT_H_
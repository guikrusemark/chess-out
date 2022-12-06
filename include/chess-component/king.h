/**
 * @file king.h
 * @author
 * @brief KING type class.
 *
 */

#ifndef CHESSCOMPONENT_KING_H_
#define CHESSCOMPONENT_KING_H_

#include "chess-component/piece.h"

class King final : public Piece {
    public:
        King(bool white, int row, int column);

        void move(int row, int column) override;
};

#endif // CHESSCOMPONENT_KING_H_
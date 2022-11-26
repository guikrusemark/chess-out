#ifndef _QUEEN_H_
#define _QUEEN_H_

#include "chess-component/piece.h"

class Queen final : public Piece {
    private:
        m_type = PieceType::QUEEN;
        m_symbol = 'Q';
        m_name = "Queen";

        m_limitOnBoard = 9;

    public:
        Queen(bool white);

        void move(uint8_t side) override;
};

#endif // _QUEEN_H_
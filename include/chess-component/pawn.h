#ifndef _PAWN_H_
#define _PAWN_H_

#include "piece.h"

class Pawn : public Piece {
    private:
        m_type{PieceType::PAWN};
        m_symbol{'P'};
        m_name{"Pawn"};
        
        const bool m_white{false};
        const uint8_t m_limitOnBoard{8};

    public:
        Pawn(bool white);

        void move(uint8_t side) override;
};

#endif // _PAWN_H_
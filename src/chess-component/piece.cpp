#include "chess-component/piece.h"

Piece::Piece(bool white) : m_white(white) {}

bool Piece::isWhite() {
    return m_white;
}
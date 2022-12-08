/**
 * @file board.h
 * @author
 * @brief Will test the unit board.h and subclasses to ensure good working of the chess components.
 *
 */

#ifndef DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "chess-component/board.h"
#include "doctest.h"

TEST_CASE("Test if board is created correctly") {
    Board board = Board();

    CHECK(board.onCell(0, 0).getPiece().getColorName() == "Black");
    CHECK(board.onCell(0, 0).isEmpty() == false);
    CHECK(board.onCell(0, 0).getPositionNotation() == "a8");
}

#endif // DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
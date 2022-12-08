/**
 * @file piece.cpp
 * @author 
 * @brief Will test the unit piece.h and subclasses to ensure good working of the chess components.
 * 
 */

#ifndef DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "chess-component/piece.h"
#include "chess-component/pawn.h"

TEST_CASE("Test if piece is created correctly") {
    Pawn pawn = Pawn(true, 2, 2);

    CHECK(pawn.getColorName() == "White");
    CHECK(pawn.getName() == "Pawn");
    CHECK(pawn.getColorLetter() == "W");
    CHECK(pawn.getNameLetter() == "Pawn ");
}

#endif // DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
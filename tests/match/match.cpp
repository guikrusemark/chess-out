/**
 * @file match.cpp
 * @author
 * @brief Will test the unit match.h and subclasses to ensure good working of the chess components.
 *
 */

#ifndef DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "match/match.h"
#include "user/user.h"
#include "doctest.h"

TEST_CASE("Test if match is created correctly") {
    Match match = Match(*(new User(2, "Carlsen")));

    CHECK(match.isWhiteTurn() == true);
    CHECK(match.WhitePlayer().getId() == 2);
    CHECK(match.WhitePlayer().getName() == "Carlsen");
    CHECK(match.PlayingBoard().onCell(0,0).getColumn() == 0);

    delete &(match.WhitePlayer());
}

#endif // DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <gtest/gtest.h>
#include "../src/bowling_game.h"

TEST(BowlingGameTest, CanCreateGame) {
    BowlingGame game;
}

TEST(BowlingGameTest, NewGameZeroScore){
    BowlingGame game;
    EXPECT_EQ(game.getScore(), 0);
}
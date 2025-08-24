#include <gtest/gtest.h>
#include "../src/bowling_game.h"

TEST(BowlingGameTest, CanCreateGame) {
    BowlingGame game;
}

TEST(BowlingGameTest, NewGameZeroScore){
    BowlingGame game;
    EXPECT_EQ(game.getScore(), 0);
}

TEST(BowlingGameTest, ThrowAndAddScore) {
    BowlingGame game;
    game.throwBall(5);
    EXPECT_EQ(game.getScore(), 5);
}
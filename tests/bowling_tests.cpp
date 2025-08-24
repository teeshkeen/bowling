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

TEST(BowlingGameTest, InvalidPinsCount) {
    BowlingGame game;
    game.throwBall(5);
    game.throwBall(11);
    EXPECT_EQ(game.getScore(), 5);
}

TEST(BowlingGameTest, TwoThrowsInOneFrame)  {
    BowlingGame game;
    game.throwBall(5);
    game.throwBall(4);
    EXPECT_EQ(game.getScore(), 9);
}
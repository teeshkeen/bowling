#include "../src/bowling_game.h"
#include <gtest/gtest.h>

TEST(BowlingGameTest, CanCreateGame) { BowlingGame game; }

TEST(BowlingGameTest, NewGameZeroScore) {
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

TEST(BowlingGameTest, TwoThrowsInOneFrame) {
  BowlingGame game;
  game.throwBall(5);
  game.throwBall(4);
  EXPECT_EQ(game.getScore(), 9);
}

TEST(BowlingGameTest, StrikeTenPointInThrow) {
  BowlingGame game;
  game.throwBall(10);
  EXPECT_EQ(game.getScore(), 10);
}

TEST(BowlingGameTest, StrikeAddsNextTwoThrows) {
  BowlingGame game;
  game.throwBall(10);
  game.throwBall(5);
  game.throwBall(4);
  EXPECT_EQ(game.getScore(), 28);
}

TEST(BowlingGameTest, SpareAddsNextOneThrow) {
  BowlingGame game;
  game.throwBall(5);
  game.throwBall(5);
  game.throwBall(4);
  EXPECT_EQ(game.getScore(), 18);
}

TEST(BowlingGameTest, SpareAfterStrike) {
  BowlingGame game;
  game.throwBall(10);
  game.throwBall(5);
  game.throwBall(5);
  game.throwBall(4);
  EXPECT_EQ(game.getScore(), 34);
}
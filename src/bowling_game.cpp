#include "bowling_game.h"

BowlingGame::BowlingGame() : score(0) {
  // empty
}

int BowlingGame::getScore() const { return score; }

void BowlingGame::throwBall(int pins) {
  if (pins > 10 || pins < 0) {
    return;
  }
  if (wasStrike) {
    score += pins;
    throwsAfterStrike++;
    if (throwsAfterStrike == 2) {
      wasStrike = false;
      throwsAfterStrike = 0;
    }
  } else {
    score += pins;

    if (pins == 10) {
      wasStrike = true;
      throwsAfterStrike = 0;
    }
  }
}
#include "bowling_game.h"

BowlingGame::BowlingGame()
    : score(0), wasStrike(false), throwsAfterStrike(0), currentFrame(0),
      firstThrowInFrame(0), throwsInCurrentFrame(0) {
  // empty
}

int BowlingGame::getScore() const { return score; }

void BowlingGame::throwBall(int pins) {
  if (pins > 10 || pins < 0) {
    return;
  }
  if (wasStrike && throwsAfterStrike < 2) {
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

  if (throwsInCurrentFrame == 0) {
    firstThrowInFrame = pins;
    throwsInCurrentFrame = 1;

    if (pins == 10) {
      currentFrame++;
      throwsInCurrentFrame = 0;
    }
  } else {
    throwsInCurrentFrame++;
    currentFrame++;
    if (firstThrowInFrame + pins == 10) {
      //
    }
  }
}
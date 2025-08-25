#include "bowling_game.h"

BowlingGame::BowlingGame()
    : score(0), wasStrike(false), wasSpare(false), throwsAfterStrike(0),
      throwsAfterSpare(0), currentFrame(0), firstThrowInFrame(0),
      throwsInCurrentFrame(0) {
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

  if (wasSpare && throwsAfterSpare < 1) {
    score += pins;
    throwsAfterSpare++;
    if (throwsAfterSpare == 1) {
      wasSpare = false;
      throwsAfterSpare = 0;
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
      wasSpare = true;
      throwsAfterSpare = 0;
    }
  }
}
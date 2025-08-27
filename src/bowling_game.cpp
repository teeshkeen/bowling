#include "bowling_game.h"

BowlingGame::BowlingGame()
    : score(0), wasStrike(false), wasSpare(false), throwsAfterStrike(0),
      throwsAfterSpare(0), currentFrame(0), firstThrowInFrame(0),
      throwsInCurrentFrame(0) {
  // empty
}

int BowlingGame::getScore() const { return calculateScore(); }

void BowlingGame::throwBall(int pins) {
  if (pins > 10 || pins < 0) {
    return;
  }
  throws.push_back(pins);
}

int BowlingGame::calculateScore() const {
  int total = 0;
  size_t i = 0;
  for (int frame = 0; frame < 10 && i < throws.size(); ++frame) {
    if (throws[i] == 10) {
      int b1 = (i + 1 < throws.size()) ? throws[i + 1] : 0;
      int b2 = (i + 2 < throws.size()) ? throws[i + 2] : 0;
      total += 10 + b1 + b2;
      i += 1;
    } else {
      int first = throws[i];
      if (i + 1 >= throws.size()) {
        total += first;
        break;
      }
      int second = throws[i + 1];
      int sum = first + second;
      if (sum == 10) {
        int b = (i + 2 < throws.size()) ? throws[i + 2] : 0;
        total += 10 + b;
      } else {
        total += sum;
      }
      i += 2;
    }
  }
  return total;
}
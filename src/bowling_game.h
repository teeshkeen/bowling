#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

#include <vector>

class BowlingGame {
public:
  BowlingGame();
  int getScore() const;
  void throwBall(int pins);
  int calculateScore() const;

private:
  int score;
  bool wasStrike;
  bool wasSpare;
  int throwsAfterStrike;
  int throwsAfterSpare;
  int currentFrame;
  int firstThrowInFrame;
  int throwsInCurrentFrame;
  std::vector<int> frameScores;
  std::vector<int> throws;
};

#endif
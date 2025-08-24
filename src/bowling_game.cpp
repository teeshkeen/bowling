#include "bowling_game.h"

BowlingGame::BowlingGame() : score(0) {
    // empty
}

int BowlingGame::getScore() const {
    return score;
}

void BowlingGame::throwBall(int pins) {
    score += pins;
}
#include "bowling_game.h"

BowlingGame::BowlingGame() : score(0) {
    // empty
}

int BowlingGame::getScore() const {
    return score;
}

void BowlingGame::throwBall(int pins) {
    if (pins > 10 || pins < 0) {
        return;
    }
    score += pins;
}
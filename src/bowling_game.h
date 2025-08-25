#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

#include <vector>

class BowlingGame {
    public:
        BowlingGame();
        int getScore() const;
        void throwBall(int pins);
    private:
        int score;
        bool wasStrike;
        int throwsAfterStrike;
        int currentFrame;
        std::vector<int> frameScores;
};

#endif
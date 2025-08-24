#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

class BowlingGame {
    public:
        BowlingGame();
        int getScore() const;
        void throwBall(int pins);
    private:
        int score;


};

#endif
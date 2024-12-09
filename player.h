#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include <vector>

using namespace std;

class Player{
    private:
        int score;
        vector<Card*> hand;
        void scoreHand(vector<Card*> hand, Card* starter);
    public:
        Player();
        void addCard(Card* card);
        void printHand();
        Card* discard();
        Card* playCard();
        int getScore();
};

#endif
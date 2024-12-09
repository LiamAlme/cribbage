#ifndef GAME_H
#define GAME_H

#include <vector>

#include "player.h"
#include "card.h"

using namespace std;

class Game{
    private:
        Card** deck;
        vector<Player> players;
        Player crib;
        Card* starter;
        int dealer;
    public:
        Game();
        void deal();
};

#endif
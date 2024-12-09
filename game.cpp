#include "player.h"
#include "card.h"
#include "game.h"

#include <vector>
#include <stdlib.h>

using namespace std;

Game::Game(): deck(nullptr), players(), crib(), starter(), dealer(1){
    char suits[] = {'C', 'S', 'H', 'D'};
    char values[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    deck = new Card*[52];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 13; j++){
            if(j<10)
                deck[j+13*i] = new Card(suits[i], values[j], j+1);
            else
                deck[j+13*i] = new Card(suits[i], values[j], 10);
        }
    }

    players.push_back(Player());
    players.push_back(Player());
};

void Game::deal(){
    int pick;
    int remainingCards = 52;
    
    for(unsigned int j = 0; j < players.size(); j++){
        for(int i = 0; i < 6; i++){
            pick = rand()%remainingCards;
            players.at(j).addCard(deck[pick]);
            Card* temp = deck[--remainingCards];
            deck[remainingCards] = deck[pick];
            deck[pick] = temp;
        }
    }

    starter = deck[rand()%remainingCards];
};
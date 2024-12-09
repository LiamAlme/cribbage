#include "player.h"
#include "card.h"

#include <iostream>

using namespace std;

Player::Player(): score(0), hand(){};

void Player::addCard(Card* card){
    hand.push_back(card);
}

void Player::printHand(){
    for(unsigned int i = 0; i < hand.size(); i++){
        cout << hand.at(i)->getValue() << hand.at(i)->getSuit() << " ";
    }
    cout << endl;
}
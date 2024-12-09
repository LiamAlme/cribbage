# include "card.h"

char Card::getSuit(){
    return suit;
};

char Card::getValue(){
    return value;
};

int Card::getCountValue(){
    return countValue;
};
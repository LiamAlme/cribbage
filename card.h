#ifndef CARD_H
#define CARD_H

class Card{
    private:
        char suit;
        char value;
        int countValue;

    public:
        Card(const char suit, const char value, const int countValue): suit(suit), value(value), countValue(countValue){};
        char getSuit();
        char getValue();
        int getCountValue();
};

#endif
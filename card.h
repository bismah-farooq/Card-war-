#ifndef CARD_H
#define CARD_H
class Card
{
    private:
        char rank;
        char suit;
    public:
        Card(char r, char s);
        Card();
        void displaycard();
        int compareCard(Card other);
};

#endif

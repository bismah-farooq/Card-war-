#include "deck.hpp"
#include "card.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Deck::Deck()
{
    char suit[] = {'C','S','D','H'};
    char rank[] = {'A','2','3','4','5','6','7','8','9','1','J','Q','K'};
    int index = 0;
    for (char s : suit)
    {
        for (char r : rank)
        {
            storage[index++] = Card(r, s);
        }
    }
}

Card Deck::deal()
{
    if (top < 52)
    {
        return storage[top++];
    }
    return Card();
}

void Deck::displayDeck()
{
    for (int i = 0; i <52; i++)
    {
        storage[i].displaycard();
        
        if ((i + 1) % 13 == 0)  // printing a new line after the 13th card
            cout << endl;
        else
            cout << ",";
    }
}

void Deck::shuffle()
{
    srand(time(0));
    for (int i = 0; i < 52; ++i)
    {
        int s = rand() % 52;
        swap(storage[i], storage[s]);
    }
}


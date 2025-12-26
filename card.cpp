#include "card.hpp"
#include <string>
#include <iostream>
using namespace std;

Card::Card(char r, char s)
{
    suit = s;
    rank = r;
}
Card::Card()
{
    rank = ' ';
    suit = ' ';
}
void Card::displaycard()
{
    if (rank == '1')
        cout << "10" << suit;
    else
        cout << rank << suit;
}
int Card::compareCard(Card other)
{
    int cardvalue1 = 0;
    int cardvalue2 = 0;
    
    if (rank == 'A')
        cardvalue1 = 1;
    else if (rank == '2')
        cardvalue1 = 2;
    else if (rank == '3')
        cardvalue1 = 3;
    else if (rank == '4')
        cardvalue1 = 4;
    else if (rank == '5')
        cardvalue1 = 5;
    else if (rank == '6')
        cardvalue1 = 6;
    else if (rank == '7')
        cardvalue1 = 7;
    else if (rank == '8')
        cardvalue1 = 8;
    else if (rank == '9')
        cardvalue1 = 9;
    else if (rank == '1')
        cardvalue1 = 10;
    else if (rank == 'J')
        cardvalue1 = 11;
    else if (rank == 'Q')
        cardvalue1 = 12;
    else if (rank == 'K')
        cardvalue1 = 13;
    
    if (other.rank == 'A')
        cardvalue2 = 1;
    else if (other.rank == '2')
        cardvalue2 = 2;
    else if (other.rank == '3')
        cardvalue2 = 3;
    else if (other.rank == '4')
        cardvalue2 = 4;
    else if (other.rank == '5')
        cardvalue2 = 5;
    else if (other.rank == '6')
        cardvalue2 = 6;
    else if (other.rank == '7')
        cardvalue2 = 7;
    else if (other.rank == '8')
        cardvalue2 = 8;
    else if (other.rank == '9')
        cardvalue2 = 9;
    else if (other.rank == '1')
        cardvalue2 = 10;
    else if (other.rank == 'J')
        cardvalue2 = 11;
    else if (other.rank == 'Q')
    cardvalue2 = 12;
    else if (other.rank == 'K')
        cardvalue2 = 13;
    
    if (cardvalue1 > cardvalue2)
        return 1;
    else if (cardvalue1 == cardvalue2)
        return 0;
    else
        return -1;
}

#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;
class Card
{
    private:
        char rank;
        char suit;
    public:
        Card(char r, char s){
        suit = s;
        rank = r;
    }
    Card(){
        rank = ' ';
        suit = ' ';
    }
    void displaycard(){
    if (rank == '1')
        cout << "10" << suit;
    else
        cout << rank << suit;
}
int compareCard(Card other){
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
};

class Deck
{
    private:
        vector<Card> cards;
    public:
        Deck(){
        char suit[] = {'C','S','D','H'};
        char rank[] = {'A','2','3','4','5','6','7','8','9','1','J','Q','K'};
        for (char s : suit){
            for (char r : rank){
                cards.push_back(Card(r, s));
            }
        }
    }
    
    Card deal() {
        if (cards.empty()) {
            throw runtime_error("Error - Deck is Empty");
        }
        Card topCard = cards.back();
        cards.pop_back();
        return topCard;
    }
    
    void displayDeck(){
        for (int i = 0; i < cards.size(); i++){
            cards[i].displaycard();
            if ((i + 1) % 13 == 0) // printing a new line after the 13th card
                cout << endl;
            else
                cout << ",";
            }
    }
    void shuffle(){
        srand(time(0));
        for (int i = 0; i < 52; ++i){
            int s = rand() % 52;
            swap(cards[i], cards[s]);
        }
    }
    bool isEmpty(){
        return cards.empty();
    };

int main(){
    string player1, player2;
    cout << "Enter the name of the first player: ";
    cin >> player1;
    cout << "Enter the name of the second player: ";
    cin >> player2;
    int games;
    cout << "How many games will they play? ";
    cin >> games;
    
    //origional deck
    Deck deck;
    cout << "\nOrigional Deck" << endl;
    deck.displayDeck();
    
    //shuffled deck
    cout << "\nShuffled Deck" << endl;
    deck.shuffle();
    deck.displayDeck();
    
    //Games
    int wins1 = 0, wins2 = 0, looses1=0, looses2=0, ties = 0;
    for (int i = 1; i <= games; i++)
    {
        try{
            if (deck.isEmpty()) {
                cout << "\nError - Deck is Empty" << endl;
                break;
        }
        cout << "\nGame " << i << "\n--------\n";
        cout << player1 << "=>";
        Card card1 = deck.deal();
        card1.displaycard();
        cout <<"\n";
        cout << player2 << "=>";
        Card card2 = deck.deal();
        card2.displaycard();
        cout <<"\n";
            
        //Winners&Losers$Tie
        int result = card1.compareCard(card2);
        if (result == 1){
            cout << player1 << "=> Winner\n";
            wins1++;
            looses2++;
        }
        else if (result == -1){
            cout << player2 << "=> Winner\n";
            wins2++;
            looses1++;
        }
        else{
            cout << "Tie game\n";
            ties++;
        }
    }
    catch(const runtime_error& error){
        cout << "\n" << error.what() << endl;
        break;
    }
}
    //Final Scores
    cout << "\n------Final Stats------";
    cout << "\n " << player1 << " vs. " << player2 << "\n";
    cout << "Wins " << wins1 << " " << wins2 << "\n";
    cout << "Losses " << (looses1 ) << " " << (looses2) << "\n";
    cout << "Ties " << ties << " " << ties << "\n";
    return 0;
}

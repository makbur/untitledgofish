#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int DECK_SIZE = 52;
const int HAND_SIZE = 7;
const string CARDS[13] = {"A", "2", "3", "4", "5", "6"
                            , "7" , "8" , "9", "10", "J", "Q", "K"};

string deck[DECK_SIZE];
int deckCount = DECK_SIZE;

string playerHand[52];
int playerCount = 0;

string computerHand[52];
int computerCount = 0;

string playerCards[13];
int playerCardCount = 0;

string computerCards[13];
int computerCardCount = 0;

void createDeck() {
    int index = 0;
    for (int i = 0; i < DECK_SIZE; i++) {
        for ()
    }
}


// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
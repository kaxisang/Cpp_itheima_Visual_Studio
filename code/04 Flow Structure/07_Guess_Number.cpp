/**************************************************
* File name:     07_Guess_Number.cpp
* Created time:  02/07/2021 5:34:02 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    /////////////////////////
    // Guessing Numbers Game
    /////////////////////////

    // System generate random numbers
    srand((unsigned int)time(NULL));
    auto random_number = rand() % 100 + 1;

    // Player guess numbers
    for (int i = 0; i < 6; i++) {
        int player;
        cin >> player;

        // Judge the player's guess
        if (player == random_number) {
            // Player's guessing is right
                // Exit the game
            cout << "You are right" << endl;
            return 0;
        } else {
            // Player's guessing is wrong
                // Guessing a again, return to step 2
            cout << "You are wrong" << endl;
            if (player > random_number) {
                cout << "Your guess is too big" << endl;
            } else {
                cout << "Your guess is too small" << endl;
            }
        }   
    }
    cout << "You lose" << endl;
    cout << "The correct answer is " << random_number << endl;
    return 0;
}

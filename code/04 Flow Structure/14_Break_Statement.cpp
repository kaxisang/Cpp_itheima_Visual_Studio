/**************************************************
* File name:     14_Break_Statement.cpp
* Created time:  02/21/2021 1:50:54 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * Used to jump out of the selection structure or loop structure
 * When to use the break statement:
 *      Appears in the switch statement , the role is to terminate the case and jump out of the switch
 *      Appears in the loop statement, the role if to jump out of the current loop statement
 *      Appears in a nested loop, jumping out of the nearest inner loop statement
 */

int main() {
    // Break statement appears in the switch statement

    // Game difficulty choose interface
    cout << "-+--------------------------------------+-" << endl;
    cout << " |********Choose game difficulty********| " << endl;
    cout << " | 1. Common                            | " << endl;
    cout << " | 2. Epic                              | " << endl;
    cout << " | 3. Legendary                         | " << endl;
    cout << "-+--------------------------------------+-" << endl;

    // Player choices variable
    auto selection = 0;
    cout << "Your choice: ";
    cin >> selection;

    switch (selection) {
        case 1: {
            cout << "You have chosen common difficulty" << endl;
            break;
        }
        case 2: {
            cout << "You have chosen epic difficulty" << endl;
            break;
        }
        case 3: {
            cout << "You have chosen legendary difficulty" << endl;
            break;
        }
        default: {
            cout << "You have selected a wrong option" << endl;
        }
    }

    // Break statement appears in the loop statement
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }

    // Break statement appears in the nested loop
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) {
                break;
            }
            cout << "*  ";
        }
        cout << endl << endl;;
    }

    return 0;
}
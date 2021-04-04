/**************************************************
* File name:     11_Knock_On_The_Table.cpp
* Created time:  02/10/2021 8:20:34 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;

/**
 * Output 1 to 100, multiples of 7 and digital containing 7 output "knock table"
*/

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "knock table" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}

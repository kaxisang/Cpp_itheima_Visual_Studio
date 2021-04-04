/**************************************************
* File name:     15_Continue_Statement.cpp
* Created time:  02/21/2021 8:14:35 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * Continue Statement
 *      In the loop statement, skip the remaining unexecuted statement in this loop, and continue to execute the next loop
 */

int main() {
    // Continue statement
    for (int i = 0; i <= 100; i++) {
        // Output odd numbers, do not output even numbers
        if (i % 2 == 0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}

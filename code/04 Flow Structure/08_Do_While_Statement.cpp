/**************************************************
* File name:     08_Do_While_Statement.cpp
* Created time:  02/09/2021 4:10:51 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;

/**
 * do {loop statement} while (condition of the loop)
 * Execute the loop statement first and then judge the condition
 */

int main() {
    // Output 0 to 9

    auto num = 0;

    do {
        cout << num << endl;
        num++;
    } while (num <= 9);

    return 0;
}
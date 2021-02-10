/**************************************************
* File name:     09_Narcissistic_Number.cpp
* Created time:  02/09/2021 4:44:31 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

#include <iostream>
using namespace std;
/**
 * Narcissus number refers to a three digit number, the sum of the third power of each digit is equal to itself
*/
int main() {
    auto num = 100;
    do {
        auto a = num % 10;
        auto b = num / 10 % 10;
        auto c = num / 100;
        if (a*a*a + b*b*b + c*c*c == num) {
            cout << num << endl;
        }
        num += 1;
    } while (num < 1000);
    return 0;
}

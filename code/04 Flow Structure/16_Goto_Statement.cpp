/**************************************************
* File name:     16_Goto_Statement.cpp
* Created time:  02/21/2021 9:01:17 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * Can jump tot statement unconditionally
 *      goto flag
 *      flag:
 * If the marked name exists, it will jump to the marked position when the goto statement is executed
 */

int main() {
    // Goto statement
    cout << "1" << endl;
    goto Flag;
    cout << "2" << endl;
    cout << "3" << endl;
Flag:
    cout << "4" << endl;

    return 0;
}

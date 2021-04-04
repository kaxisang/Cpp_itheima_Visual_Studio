/**************************************************
* File name:     06_While_Statement.cpp
* Created time:  02/07/2021 12:05:04 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

int main() {
	// while statement
	// Execute the loop statement when the condition of the loop is true

	// Output the 0 to 9
	auto num = 0;
	while (num <= 900) {
		cout << num << endl;
		num += 1;
	}

	return 0;
}

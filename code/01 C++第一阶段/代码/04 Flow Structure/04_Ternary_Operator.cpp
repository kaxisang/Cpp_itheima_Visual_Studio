/**************************************************
* File name:     04_Ternary_Operator.cpp
* Created time:  02/05/2021 2:59:31 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
/**
 * expression ? expression : expression
 */
#include <iostream>
using namespace std;

int main() {
	// Ternary Operator
	// Create three variable
	auto a = 10;
	auto b = 20;
	auto c = 0;

	// Compare a and b, assign the largest value to the variable c
	c = (a > b ? a : b);
	cout << "c = " << c << endl;

	(a > b ? a : b) = 100;
	cout << "a = " << a << endl
		 << "b = " << b << endl;

	return 0;
}
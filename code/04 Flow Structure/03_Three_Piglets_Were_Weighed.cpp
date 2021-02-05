/**************************************************
* File name:     03_Three_Piglets_Were_Weighed.cpp
* Created time:  02/05/2021 1:00:04 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/
#include <iostream>
using namespace std;

/**
 * There are three piglets will weigh
 * Users input three number and compare them, output the biggest one
 */

int main() {
	// Create three piglets weight variable
	auto a = 0;
	auto b = 0;
	auto c = 0;

	// Users input the piglets weight
	cout << "The weight of piglets a = ";
	cin >> a;
	cout << "The weight of piglets b = ";
	cin >> b;
	cout << "The weight of piglets c = ";
	cin >> c;

	// Output the weight of piglets
	cout << "Pig a: " << a << endl
		 << "Pig b: " << b << endl
		 << "Pig c: " << c << endl;

	// Compare
	if (a > b) {
		// a is heavier than b
		if (a > c) {
			cout << "Piglets a is the heaviest" << endl;
		} else {
			cout << "Piglets c is the heaviest" << endl;
		}
	} else {
		// b is heavier than a
		if (b > c) {
			cout << "Piglets b is the heaviest" << endl;
		} else {
			cout << "Piglets c is the heaviest" << endl;
		}
	}


	return 0;
}
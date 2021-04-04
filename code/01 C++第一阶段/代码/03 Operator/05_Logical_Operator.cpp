/*
 **************************************************
 *** Created by WangLuxiang at 02/04/2021 3:25:34 PM on Visual Studio.
 *** 05_Logical_Operator.cpp
 **************************************************
*/
#include <iostream>
using namespace std;

/**
 *	Logical Operator
 *		Operator	|	Function
 * ==================================
 *		!			|	Negation
 *		&&			|	And
 *		||			|	Or
 */

int main() {
	// Logical Operator Negation !
	auto const a = 10;
	cout << !a << endl;
	cout << !!a << endl;
	
	// Logical Operator And &&
	auto const b = 1;
	auto const c = 0;
	auto const d = 1;

	cout << (b && c) << endl;
	cout << (c && d) << endl;
	cout << (b && d) << endl;

	// Logical Operator Or ||
	auto const e = 1;
	auto const f = 0;
	auto const g = 0;

	cout << (e || f) << endl;
	cout << (e || g) << endl;
	cout << (f || g) << endl;


	return 0;
}
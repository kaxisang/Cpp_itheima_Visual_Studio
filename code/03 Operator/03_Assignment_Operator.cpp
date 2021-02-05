/*
 **************************************************
 *** Created by WangLuxiang at 01/30/2021 5:26:06 PM on Visual Studio.
 *** 03_Assignment_Operator.cpp
 **************************************************
*/
#include <iostream>
using namespace std;

/*
 * Operator		|		Function
 * ================================
 *		=		|		Assignment
 *		+=		|		Plus
 *		-=		|		Minus
 *		*=		|		Multiplication
 *		/=		|		Division
 *		%=		|		Remainder
 */

int main() {
	// Assignment Operator

	// =
	// Create variable a
	auto a = 10;
	// Reassignment variable a
	a = 100;

	cout << "a = " << a << endl;

	// +=
	auto b = 10;
	b += 2; // Same as "b = b + 2"

	cout << "b = " << b << endl;

	// -=
	auto c = 10;
	c -= 2; // Same as "c = c - 2"
	cout << "c = " << c << endl;

	// *=
	auto d = 10;
	d *= 2; // Same as "d = d * 2"
	cout << "d = " << d << endl;

	// /=
	auto e = 10;
	e /= 2;
	cout << "e = " << e << endl;

	// %=
	auto f = 10;
	f %= 3;
	cout << "f = " << f << endl;

	return 0;
}
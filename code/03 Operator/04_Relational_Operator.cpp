/*
 **************************************************
 *** Created by WangLuxiang at 02/01/2021 3:20:16 PM on Visual Studio.
 *** 04_Relational_Operator.cpp
 **************************************************
*/
// krulcifer einfolk
#include <iostream>
using namespace std;

/*
 * Relational Operator
 *		Operator	|	Function
 * =====================================
 *		==			|	Equal to
 *		!=			|	Not Equal to
 *		<			|	Less than
 *		>			|	Greater than
 *		<=			|	Less than or equal to
 *		>=			|	Greater than or equal to 
 */

int main() {
	// Relational Operator
	// ==
	auto const a = 10;
	auto const b = 20;

	cout << (a == b) << endl;
	// !=
	cout << (a != b) << endl;

	// <
	cout << (a < b) << endl;

	// >
	cout << (a > b) << endl;

	// <=
	cout << (a <= b) << endl;
	
	// >=
	cout << (a >= b) << endl;
	

	return 0;
}

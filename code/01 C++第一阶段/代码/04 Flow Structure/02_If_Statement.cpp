/*
 **************************************************
 *** Created by WangLuxiang at 02/04/2021 9:49:11 PM on Visual Studio.
 *** 02_if_statement.cpp
 **************************************************
*/
#include <iostream>
using namespace std;

/**
 *	The if statement
 * An if statement conditionally executes another statement based on whether a specified condition is true.
 * There are two forms of the if:
 *		one with an else branch and one without.The syntactic form of the simple if is
 *			if (condition) {
 *				statement
 *			}
 *		An if else statement has the form
 *			if (condition) {
 *				statement
 *			} else {
 *				statement
 *			}
 */

int main() {
	// Users input the score, if the score is greater than 600, it will be regarded as entering a "yiben" university
	auto score = 0;
	// 1.Users input the score
	cout << "Please input the score: ";
	cin >> score;

	// 2.Output the score input by users
	cout << "Your score is: " << score << endl;

	// 3.Determine whether the score is greater than 600
	if (score > 600) {
		cout << "Congratulations on your entrance to a \"yiben\" university" << endl;
		if (score > 700) {
			cout << "Welcome to Peking university" << endl;
		} else if (score > 650) {
			cout << "Welcome to Tsinghua university" << endl;
		} else {
			cout << "Welcome to Renmin university" << endl;
		}
	} else if (score > 500) {
		cout << "Congratulations on your entrance to a \"erben\" university" << endl;
	} else if (score > 400) {
		cout << "Congratulations on your entrance to a \"sanben\" university" << endl;
	} else {
		// If the score is less than 600
		cout << "Didn't get into a university" << endl;
	}
	// Don't put a semicolon after the if statement

	return 0;
}
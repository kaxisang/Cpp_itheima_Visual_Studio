/**************************************************
* File name:     05_Switch_Statement.cpp
* Created time:  02/05/2021 3:12:57 PM
* Author:        Wang Luxiang
* Version:		 v0.1.0
**************************************************/

/**
 * Switch Statement
 * Grammar:
 *		switch (expression) {
 *			case result: {
 *				expression
 *				break;
 *			}
 *			case result: {
 *				expression
 *				break;
 *			}
 *			default: {
 *				expression
 *				break;
 *			}
 *		}
 */
#include <iostream>
using namespace std;

/**
 * Raye the movie
 * 10~9 Classical movie
 * 8~7  Very good
 * 6~5  Ordinary
 * 5~0  Bad movie
 */

int main() {
	auto score = 0;
	cout << "Please rate the movie: ";
	cin >> score;
	cout << "Your score: " << score << endl;

	// Switch Statement must have break statement
	switch (score) {
		case 10: 
		case 9: {
			cout << "You think this is a classic movie" << endl;
			break;
		}
		case 8:
		case 7: {
			cout << "You think this movie is very good" << endl;
			break;
		}
		case 6:
		case 5: {
			cout << "You think this movie is ordinary" << endl;
			break;
		}
		default: {
			cout << "You think this is a bad movie" << endl;
			break;
		}
	}

	return 0;
}
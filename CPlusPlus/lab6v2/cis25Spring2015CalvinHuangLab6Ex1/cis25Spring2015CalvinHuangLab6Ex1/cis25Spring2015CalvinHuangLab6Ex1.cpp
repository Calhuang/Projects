/**
* Program Name: cis25Spring2015CalvinHuangLab6Ex1.cpp
* Discussion:   Menu file for Lab6Ex1
* Written By:   Calvin Huang
* Date:         2015/05/12
*/

#include <iostream>
using namespace std;

void menu() {
	cout << "CIS 25 - C++ Programming" << "\nLaney College"
		<< "\nCalvin Huang" << endl;
	cout << "\nAssignment Information --"
		<< "\n  Assignment Number:  Lab 06 - Exercise #1"
		<< "\n  Written by:         Calvin Huang"
		<< "\n  Due Date:           2015/05/12 " << endl;
	int userInput;
	int subUserInput;
	bool end = false;
	bool subEnd = false;
	
	
	do {
		cout << "\nMAIN MENU" << "\n(1) Rectangle Tasks"
			<< "\n(2) Circle Tasks"
			<< "\n(3) Mixed Rectangle & Circle Tasks"
			<< "\n(4) Quit" << "\n\nEnter your option (1, 2, 3, or 4): ";
		cin >> userInput;
		switch (userInput) {
		case 1: 
			do {
				cout << "\n  RECTANGLE MENU" << "\n  1. Create two Rectangle objects"
					<< "\n  2. Compare by volume" << "\n  3. Compare by area"
					<< "\n  4. Print two Rectangle objects" << "\n  5. Quit"
					<< "\n\n  Enter your option (between 1 through 5) : ";
				cin >> subUserInput;
				switch (subUserInput) {
				case 1:

					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					subEnd = true;
					break;
				default:
					break;
				}
			} while (subEnd == false);
			break;
		case 2:
			break;

		case 3:
			break;
		case 4:
			end = true;
			break;
		default:
			cout << "\nInvalid Input." << endl;
			break;
		}
	} while (end == false);
}
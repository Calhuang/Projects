/**
 * Program Name: cis25Spring2015CalvinHuangLab3Ex1.cpp
 * Discussion:   Lab 3 - Exercise #1
 * Written By:   Calvin Huang
 * Date:         2015/03/24
 */

#include <iostream>
using namespace std;

void displayTitle(void);
void displayMenu(void);
void runProgram(void);
void arrangeArrayCalvinHuang(int*, int*, int, int);

int main() {
	displayTitle();
    displayMenu();

	return 0;
}

void displayTitle() {
	cout << "Class Information -- " << endl
		 << "  CIS 25 - C++ Programming" << endl
		 << "  Laney College" << endl << endl
		 << "Assignment Information --" << endl
		 << "  Assignment Number:  Lab 03 - Exercise #1" << endl
		 << "  Written by:         Calvin Huang" << endl
		 << "  Due Date:           2015/03/24" << endl << endl;

}

void displayMenu() {
	int userInput;
	
	cout << "**************************************************" << endl
	     << "*             MENU 03 -- Arrays                  *" << endl
	     << "* 1. Calling arrangeArrayCalvinHuang()           *" << endl
	     << "* 2. Quit                                        *" << endl
	     << "**************************************************" << endl
	     << "Select an option (1 or 2): ";

	cin >> userInput;

	switch (userInput) {
	case 1:
		runProgram();
		break;
	case 2:
		cout << endl << "\n  Having Fun ..." << endl;
		break;
	default:
		cout << endl << "WRONG OPTION!" << endl << endl << endl;
		displayMenu();
		break;
	}
}

void runProgram() {
	int ary1Size;
	int ary2Size;
	int* iPtr1;
	int* iPtr2;
	int i;

	cout << "\nCreating first array - " << endl;
	cout << "Enter the array size: ";
	cin >> ary1Size;
	if (ary1Size < 0) {
		cout << "Invalid input." << endl;
	} else {
		iPtr1 = new int[ary1Size];

		cout << "Enter value for" << endl;

		for (i = 0; i < ary1Size; i++) {
			cout << "  Index " << i << " : ";
			cin >> *(iPtr1 + i);
		}
	}

	cout << "\nCreating second array - " << endl;
	cout << "Enter the array size: ";
	cin >> ary2Size;
	
	if (ary2Size < 0) {
		cout << "Invalid input." << endl;
	} else {
		iPtr2 = new int[ary2Size];

		cout << "Enter value for" << endl;

		for (i = 0; i < ary2Size; i++) {
			cout << "  Index " << i << " : ";
			cin >> *(iPtr2 + i);
		}
	}

	if (ary1Size < 0 || ary2Size < 0) {
		cout << "Invalid input." << endl;
		displayMenu();
	} else {
		arrangeArrayCalvinHuang(iPtr1, iPtr2, ary1Size, ary2Size);

		delete[] iPtr1;
		delete[] iPtr2;
	}
}

void arrangeArrayCalvinHuang(int* iPtr1, int* iPtr2, int ary1Size, int ary2Size) {
	int i;
	int x;
	int* value1;
	int* value2;
	int counter = 0;
	int index = 0;
	int temp = 0;
	int odd = 0;
	int even = 0;
	
	cout << "\nCalling arrangeArrayCalvinHuang() --" << endl;
	cout << "  Original Arrays" << endl;
	cout << "    Array #1:";

	for (i = 0; i < ary1Size; i++) {
		cout <<  "  " << *(iPtr1 +i);
	}

	cout << "\n    Array #2:";
	
	for (i = 0; i < ary2Size; i++) {
		cout << "  " << *(iPtr2 + i);
	}

	for (i = 0; i < ary1Size; i++) {
		if (*(iPtr1 + i) % 2 != 0) {
			odd++;
		}
	}

	for (i = 0; i < ary2Size; i++) {
		if (*(iPtr2 + i) % 2 == 0) {
			even++;
		}
	}

	if (even < odd) {
		index = even;
	} else if (even > odd) {
		index = odd;
	} else {
		index = even;
	}

	value1 = new int[odd];
	value2 = new int[even];

	for (i = 0; i < ary1Size; i++) {
		if (*(iPtr1 + i) % 2 != 0) {
			temp = *(iPtr1 + i);
			*(value1 + counter) = *(iPtr1 + i);
			for (x = 0; x < ary2Size; x++) {
				if (*(iPtr2 + x) % 2 == 0) {
					*(value2 + counter) = *(iPtr2 + x);
					*(iPtr1 + i) = *(iPtr2 + x);
					*(iPtr2 + x) = temp;
					counter++;
					x = ary2Size;
				}
			}
		}
	}

	cout << "\n\n  Updated  Arrays" << endl;
	cout << "    Array #1:";
	
	for (i = 0; i < ary1Size; i++) {
		cout << "  " << *(iPtr1 + i);
	}

	cout << "\n    Array #2:";

	for (i = 0; i < ary2Size; i++) {
		cout << "  " << *(iPtr2 + i);
	}
	
	cout << endl;

	if (index > 0) {
		cout << "\n  Swapping Info - " << endl;
		for (i = 0; i < index; i++) {
			cout << "    Array #1 value " << *(value1 + i) << " swapped with Array #2 value " << *(value2 + i) << endl;
		}
	}
	
	cout << endl;
	cout << "There is/are " << index << " swap(s)." << endl << endl << endl;
	
	delete[] value1;
	delete[] value2;

	displayMenu();
}

/**PROGRAM OUTPUT
Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 03 - Exercise #1
  Written by:         Calvin Huang
  Due Date:           2015/03/24

**************************************************
*             MENU 03 -- Arrays                  *
* 1. Calling arrangeArrayCalvinHuang()           *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 4

WRONG OPTION!


**************************************************
*             MENU 03 -- Arrays                  *
* 1. Calling arrangeArrayCalvinHuang()           *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 4
Enter value for
  Index 0 : 2
  Index 1 : 4
  Index 2 : -2
  Index 3 : 8

Creating second array -
Enter the array size: 2
Enter value for
  Index 0 : 1
  Index 1 : 4

Calling arrangeArrayCalvinHuang() --
  Original Arrays
    Array #1:  2  4  -2  8
    Array #2:  1  4

  Updated  Arrays
    Array #1:  2  4  -2  8
    Array #2:  1  4

There is/are 0 swap(s).


**************************************************
*             MENU 03 -- Arrays                  *
* 1. Calling arrangeArrayCalvinHuang()           *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 5
Enter value for
  Index 0 : 2
  Index 1 : 4
  Index 2 : -2
  Index 3 : 81
  Index 4 : 8

Creating second array -
Enter the array size: 2
Enter value for
  Index 0 : 1
  Index 1 : 4

Calling arrangeArrayCalvinHuang() --
  Original Arrays
    Array #1:  2  4  -2  81  8
    Array #2:  1  4

  Updated  Arrays
    Array #1:  2  4  -2  4  8
    Array #2:  1  81

  Swapping Info -
    Array #1 value 81 swapped with Array #2 value 4

There is/are 1 swap(s).


**************************************************
*             MENU 03 -- Arrays                  *
* 1. Calling arrangeArrayCalvinHuang()           *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 2
Enter value for
  Index 0 : 1
  Index 1 : -1

Creating second array -
Enter the array size: 5
Enter value for
  Index 0 : 2
  Index 1 : 3
  Index 2 : -2
  Index 3 : 81
  Index 4 : 8

Calling arrangeArrayCalvinHuang() --
  Original Arrays
    Array #1:  1  -1
    Array #2:  2  3  -2  81  8

  Updated  Arrays
    Array #1:  2  -2
    Array #2:  1  3  -1  81  8

  Swapping Info -
    Array #1 value 1 swapped with Array #2 value 2
    Array #1 value -1 swapped with Array #2 value -2

There is/are 2 swap(s).


**************************************************
*             MENU 03 -- Arrays                  *
* 1. Calling arrangeArrayCalvinHuang()           *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 1

Creating first array -
Enter the array size: 5
Enter value for
  Index 0 : 21
  Index 1 : 41
  Index 2 : -2
  Index 3 : 81
  Index 4 : 8

Creating second array -
Enter the array size: 4
Enter value for
  Index 0 : 10
  Index 1 : 4
  Index 2 : 18
  Index 3 : 4

Calling arrangeArrayCalvinHuang() --
  Original Arrays
    Array #1:  21  41  -2  81  8
    Array #2:  10  4  18  4

  Updated  Arrays
    Array #1:  10  4  -2  18  8
    Array #2:  21  41  81  4

  Swapping Info -
    Array #1 value 21 swapped with Array #2 value 10
    Array #1 value 41 swapped with Array #2 value 4
    Array #1 value 81 swapped with Array #2 value 18

There is/are 3 swap(s).


**************************************************
*             MENU 03 -- Arrays                  *
* 1. Calling arrangeArrayCalvinHuang()           *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 2


  Having Fun ...
*/

/**COMMENT
The concept of this lab was simple, but getting the code to work the way I
wanted it to was hard to do.  I had to think very logically and methodically to 
write some these functions.
*/

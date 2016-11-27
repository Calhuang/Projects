/**
 *Program Name: cis25Spring2015CalvinHuangLab2Ex1.cpp
 *Discussion:   Lab 2 - Exercise #1
 *Written By:   Calvin Huang
 *Date:         2015/02/17
 */

#include <iostream>
using namespace std;

void title(void);
void menu(void);
void displayDigitInfoUpdateCalvinHuang(void);
void biggestNumber(int[], int);
void smallestNumber(int[], int);
void biggestNumber2(int[], int);
void smallestNumber2(int[], int);
void displaySecondMostOccurrence(int[], int);

int main() {
	title();
    menu();

	return 0;
}

void title() {
	cout << "Class Information -- " << endl
		<< "  CIS 25 - C++ Programming" << endl
		<< "  Laney College" << endl << endl
		<< "Assignment Information --" << endl
		<< "  Assignment Number:  Lab 02 - Exercise #1" << endl
		<< "  Written by:         Calvin Huang" << endl
		<< "  Due Date:           2015/02/17" << endl << endl;

}

void menu() {
	int userInput;
	
	cout << "**************************************************" << endl
	<< "*             MENU 02 -- Arrays & Digits         *" << endl
	<< "* 1. Calling displaySecondMostOccurrence()       *" << endl
	<< "* 2. Quit                                        *" << endl
	<< "**************************************************" << endl
	<< "Select an option (1 or 2): ";

	cin >> userInput;

	switch (userInput) {
	case 1:
		displayDigitInfoUpdateCalvinHuang();
		break;
	case 2:
		cout << endl << "  Having Fun ..." << endl;
		break;
	default:
		cout << endl << "WRONG OPTION!" << endl << endl << endl;
		menu();
		break;
	}
}



void displayDigitInfoUpdateCalvinHuang() {
    int* iPtr;
    int sizeOfArray;
	int index = 0;
	int index2 = 0;
    int i;
    int digitOccurrence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int* evenOccurrence;
    int* oddOccurrence;
	int evenArySize = 0;
	int oddArySize = 0;
	int occArySize = 0;

    cout << "\nCalling displayDigitInfoUpdateCalvinHuang() -- "
        << "\n  How many integers (to be worked on)? ";

    cin >> sizeOfArray;
    iPtr = new int[sizeOfArray];

    for (i = 0; i < sizeOfArray; i++) {
        cout << "    Enter integer #" << i + 1 << ": ";
        cin >> iPtr[i];
    }

    for (i = 0; i < sizeOfArray; i++) {
        do {
            int digit = iPtr[i] % 10;
            
            switch (digit){
            case 0:
                digitOccurrence[0]++;
                break;
            case 1:
                digitOccurrence[1]++;
                break;
            case 2:
                digitOccurrence[2]++;
                break;
            case 3:
                digitOccurrence[3]++;
                break;
            case 4:
                digitOccurrence[4]++;
                break;
            case 5:
                digitOccurrence[5]++;
                break;
            case 6:
                digitOccurrence[6]++;
                break;
            case 7:
                digitOccurrence[7]++;
                break;
            case 8:
                digitOccurrence[8]++;
                break;
            case 9:
                digitOccurrence[9]++;
                break;
            default:
                cout << "\nERROR";
            }

            iPtr[i] /= 10;

        } while (iPtr[i] > 0);
    }

	for (i = 0; i < 10; i ++) {
		if (digitOccurrence[i] != 0) {
			occArySize++;
		}
	}

	for (i = 0; i < 10; i += 2) {
		if (digitOccurrence[i] != 0) {
			evenArySize++;
		}
	}

	for (i = 1; i < 10; i += 2) {
		if (digitOccurrence[i] != 0) {
			oddArySize++;
		}
	}

	evenOccurrence = new int[evenArySize];
	oddOccurrence = new int[oddArySize];
    
	if (digitOccurrence[i] != 0) {
		displaySecondMostOccurrence(digitOccurrence, occArySize);
	}

	cout << "\n  Occurrence of all existing digits --" << endl;
    
    for (i = 0; i < 10; i++) {
		if (digitOccurrence[i] != 0) {
			cout << "     Digit " << i << ": " << digitOccurrence[i] << endl;
		}
    }
    
    cout << "\n  Occurrence of all existing EVEN digits --" << endl;

    for (i = 0; i < 10; i += 2) {
		if (digitOccurrence[i] != 0) {
			cout << "     Digit " << i << ": " << digitOccurrence[i] << endl;
			evenOccurrence[index] = digitOccurrence[i];
			index++;
		}
    }

    cout << "\nThe even digit(s) that has/have the largest occurrence --" << endl;
	biggestNumber(evenOccurrence, evenArySize);
	

    cout << "\nThe even digit(s) that has/have the smallest occurrence --" << endl;
	smallestNumber(evenOccurrence, evenArySize);

    cout << "\n  Occurrence of all existing ODD digits --" << endl;
	
	for (i = 1; i < 10; i += 2) {
		if (digitOccurrence[i] != 0) {
			cout << "     Digit " << i << ": " << digitOccurrence[i] << endl;
			oddOccurrence[index2] = digitOccurrence[i];
			index2++;
		}
	}
	
	cout << "\nThe odd digit(s) that has/have the largest occurrence --" << endl;
	biggestNumber2(oddOccurrence, oddArySize);

    cout << "\nThe odd digit(s) that has/have the smallest occurrence --" << endl;
	smallestNumber2(oddOccurrence, oddArySize);

    cout << endl;
	cout << endl;
    
	delete[] iPtr;
	delete[] evenOccurrence;
	delete[] oddOccurrence;

    menu();
}

void biggestNumber(int ary1[], int size) {
	int numberOfOccurrences = 0;
    int index1 = 0;
    int i;

    for (i = 0; i < size; i++) {
			if (ary1[i] > numberOfOccurrences) {
				numberOfOccurrences = ary1[i];
				index1 = i;
		}
    }
	
	for (i = 0; i < size; i++) {
			if (ary1[i] == numberOfOccurrences) {
				cout << "  " << i * 2 << endl;
		}
	}
	cout << "With the number of occurrence(s) : " << numberOfOccurrences << endl;
}

void smallestNumber(int ary2[], int size2) {
	int temp = ary2[0];
	int index1 = 0;
	int i;

	for (i = 1; i < size2; i++) {
		if (ary2[i] < temp) {
			temp = ary2[i];
			index1 = i;
		}
	}

	for (i = 1; i < size2; i++) {
		if (ary2[i] == temp) {
			cout << "  " << (i * 2) << endl;

		}
	}
	cout << "With the number of occurrence(s) : " << temp << endl;
}

void biggestNumber2(int ary1[], int size) {
	int numberOfOccurrences = 0;
	int index1 = 0;
	int i;

	for (i = 0; i < size; i++) {
		if (ary1[i] > numberOfOccurrences) {
			numberOfOccurrences = ary1[i];
			index1 = i;
		}
	}
	
	for (i = 0; i < size; i++) {
		if (ary1[i] == numberOfOccurrences) {
			cout << "  " << ((i * 2) + 1) << endl;
		}
	}
	cout << "With the number of occurrence(s) : " << numberOfOccurrences << endl;
}
  
void smallestNumber2(int ary2[], int size2) {
	int numberOfOccurrences = ary2[0];
	int index1 = 0;
	int i;

	for (i = 1; i < size2; i++) {
		if (ary2[i] < numberOfOccurrences) {
			numberOfOccurrences = ary2[i];
			index1 = i;
		}
	}

	for (i = 1; i < size2; i++) {
		if (ary2[i] == numberOfOccurrences) {
			cout << "  " << ((i * 2) + 1) << endl;
		}
	}
	cout << "With the number of occurrence(s) : " << numberOfOccurrences << endl;
}

void displaySecondMostOccurrence(int ary1[], int size) {
	int numberOfOccurrences = 0;
	int secondOccurrences = 0;
	int index1 = 0;
	int index2 = 0;
	int i;

	for (i = 0; i < size; i++) {
		if (ary1[i] > numberOfOccurrences) {
			numberOfOccurrences = ary1[i];
			index1 = i;
		}
	}


	for (i = 0; i < size; i++) {
		if (ary1[i] != numberOfOccurrences){
			if (ary1[i] > secondOccurrences) {
				secondOccurrences = ary1[i];
				index2 = i;
			}
		}

	}

	for (i = 0; i < size; i++) {
		if (ary1[i] == secondOccurrences) {
			cout << "  " << i << endl;
		}
	}
	cout << "With the number of occurrence(s) : " << secondOccurrences << endl;


}

/**PROGRAM OUTPUT
Class Information --
  CIS 25 - C++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 02 - Exercise #1
  Written by:         Calvin Huang
  Due Date:           2015/02/17

**************************************************
*             MENU 02 -- Arrays & Digits         *
* 1. Calling displayDigitInfoUpdateCalvinHuang() *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 4

WRONG OPTION!


**************************************************
*             MENU 02 -- Arrays & Digits         *
* 1. Calling displayDigitInfoUpdateCalvinHuang() *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdateCalvinHuang() --
  How many integers (to be worked on)? 2
    Enter integer #1: 1230476
    Enter integer #2: 10034850

  Occurrence of all existing digits --
     Digit 0: 4
     Digit 1: 2
     Digit 2: 1
     Digit 3: 2
     Digit 4: 2
     Digit 5: 1
     Digit 6: 1
     Digit 7: 1
     Digit 8: 1

  Occurrence of all existing EVEN digits --
     Digit 0: 4
     Digit 2: 1
     Digit 4: 2
     Digit 6: 1
     Digit 8: 1

The even digit(s) that has/have the largest occurrence --
  0
With the number of occurrence(s) : 4

The even digit(s) that has/have the smallest occurrence --
  2
  6
  8
With the number of occurrence(s) : 1

  Occurrence of all existing ODD digits --
     Digit 1: 2
     Digit 3: 2
     Digit 5: 1
     Digit 7: 1

The odd digit(s) that has/have the largest occurrence --
  1
  3
With the number of occurrence(s) : 2

The odd digit(s) that has/have the smallest occurrence --
  5
  7
With the number of occurrence(s) : 1


**************************************************
*             MENU 02 -- Arrays & Digits         *
* 1. Calling displayDigitInfoUpdateCalvinHuang() *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 1

Calling displayDigitInfoUpdateCalvinHuang() --
  How many integers (to be worked on)? 3
    Enter integer #1: 1230476
    Enter integer #2: 10434950
    Enter integer #3: 9023497

  Occurrence of all existing digits --
     Digit 0: 4
     Digit 1: 2
     Digit 2: 2
     Digit 3: 3
     Digit 4: 4
     Digit 5: 1
     Digit 6: 1
     Digit 7: 2
     Digit 9: 3

  Occurrence of all existing EVEN digits --
     Digit 0: 4
     Digit 2: 2
     Digit 4: 4
     Digit 6: 1

The even digit(s) that has/have the largest occurrence --
  0
  4
With the number of occurrence(s) : 4

The even digit(s) that has/have the smallest occurrence --
  6
With the number of occurrence(s) : 1

  Occurrence of all existing ODD digits --
     Digit 1: 2
     Digit 3: 3
     Digit 5: 1
     Digit 7: 2
     Digit 9: 3

The odd digit(s) that has/have the largest occurrence --
  3
  9
With the number of occurrence(s) : 3

The odd digit(s) that has/have the smallest occurrence --
  5
With the number of occurrence(s) : 1


**************************************************
*             MENU 02 -- Arrays & Digits         *
* 1. Calling displayDigitInfoUpdateCalvinHuang() *
* 2. Quit                                        *
**************************************************
Select an option (1 or 2): 2

  Having Fun ...
*/

/**COMMENT
I went through unnecessary labor by overcomplicating some parts.  By looking
back at my code, I was able to clear up some redundancies.  However, there
are still some code that I feel I can shorten, but I do not possess the knowledge
of how to do so.
*/

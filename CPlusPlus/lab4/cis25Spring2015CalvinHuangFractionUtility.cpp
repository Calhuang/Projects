/**
 * Program Name: cis25Spring2015CalvinHuangFractionUtility.cpp
 * Discussion:   Implementation file for FractionUtility
 * Written By:   Calvin Huang
 * Date:         2015/04/16
 */

#include "cis25Spring2015CalvinHuangFraction.h"
#include "cis25Spring2015CalvinHuangFractionUtility.h"
#include <iostream>
using namespace std;

void menuFraction() {
	Fraction* lOp = nullptr;
	Fraction* rOp = nullptr;
	Fraction* result = nullptr;

	int option;
	int subOption;
	int printMenu;
	bool exit;

	do {
		cout << "\n***************************"
			<< "\n*          MENU           *"
			<< "\n*                         *"
			<< "\n*  1. Initializing        *"
			<< "\n*  2. Adding              *"
			<< "\n*  3. Subtracting         *"
			<< "\n*  4. Multiplying         *"
			<< "\n*  5. Dividing            *"
			<< "\n*  6. Printing            *"
			<< "\n*  7. Quit                *"
			<< "\n*                         *"
			<< "\n***************************"
			<< "\nSelect an option (use integer value only): ";

		cin >> option;

		switch (option) {
		case 1:
			cout << "\n  INITIALIZING Option -" << endl;
			init(&lOp, &rOp);
			break;
		case 2:
			cout << "\n  ADDING Option -" << endl;
			exit = false;
			
			do {
				cout << "\n    ********************************"
					<< "\n    *         ADDING MENU          *"
					<< "\n    *                              *"
					<< "\n    *  1. add() - Member           *"
					<< "\n    *  2. add() - Stand Alone      *"
					<< "\n    *  3. operator+() - Member     *"
					<< "\n    *  4. Return to Previous MENU  *"
					<< "\n    ********************************"
					<< "\n    Select an option (1, 2, 3, or 4): ";
				cin >> subOption;

				switch (subOption) {
				case 1:
						cout << "\n      Calling member add()" << endl;
						if (lOp == nullptr || rOp == nullptr) {
							cout << "\n  Not a proper call as no Fractions are available!" << endl;
						}
						else {
							result = new Fraction();
							*result = (*lOp).add(*rOp);
						}
						break;
				case 2:
						cout << "\n      Calling stand alone add()" << endl;
						if (lOp == nullptr || rOp == nullptr) {
							cout << "\n  Not a proper call as no Fractions are available!" << endl;
						}
						else {
							result = new Fraction();
							*result = add(&lOp, &rOp);
						}
						break;
				case 3:
						cout << "\n      Calling member operator+()" << endl;
						if (lOp == nullptr || rOp == nullptr) {
							cout << "\n  Not a proper call as no Fractions are available!" << endl;
						}
						else {
							result = new Fraction();
							*result = (*lOp)+(*rOp);
						}
						break;
				case 4:
						exit = true;
						break;
				default:
						cout << "\n      WRONG OPTION ..." << endl;
						break;
				}
			} while (exit == false);
			break;
		case 3:
			cout << "\n  SUBTRACTING Option -" << endl;
			exit = false;

			do {
				cout << "\n    ********************************"
					<< "\n    *      SUBTRACTING MENU        *"
					<< "\n    *                              *"
					<< "\n    *  1. subtract() - Member      *"
					<< "\n    *  2. subtract() - Stand Alone *"
					<< "\n    *  3. operator-() - Member     *"
					<< "\n    *  4. Return to Previous MENU  *"
					<< "\n    ********************************"
					<< "\n    Select an option (1, 2, 3, or 4): ";
				cin >> subOption;

				switch (subOption) {
				case 1:
					cout << "\n      Calling member subtract()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = (*lOp).subtract(*rOp);
					}
					break;
				case 2:
					cout << "\n      Calling stand alone subtract()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = sub(&lOp, &rOp);
					}
					break;
				case 3:
					cout << "\n      Calling member operator-()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = (*lOp) - (*rOp);
					}
					break;
				case 4:
					exit = true;
					break;
				default:
					cout << "\n      WRONG OPTION ..." << endl;
					break;
				}
			} while (exit == false);
			break;
		case 4:
			cout << "\n  MULTIPLYING Option -" << endl;
			exit = false;

			do {
				cout << "\n    ********************************"
					<< "\n    *      MULTIPLYING MENU        *"
					<< "\n    *                              *"
					<< "\n    *  1. multiply() - Member      *"
					<< "\n    *  2. multiply() - Stand Alone *"
					<< "\n    *  3. operator*() - Member     *"
					<< "\n    *  4. Return to Previous MENU  *"
					<< "\n    ********************************"
					<< "\n    Select an option (1, 2, 3, or 4): ";
				cin >> subOption;

				switch (subOption) {
				case 1:
					cout << "\n      Calling member multiply()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = (*lOp).multiply(*rOp);
					}
					break;
				case 2:
					cout << "\n      Calling stand alone multiply()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = mult(&lOp, &rOp);
					}
					break;
				case 3:
					cout << "\n      Calling member operator*()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = (*lOp) * (*rOp);
					}
					break;
				case 4:
					exit = true;
					break;
				default:
					cout << "\n      WRONG OPTION ..." << endl;
					break;
				}
			} while (exit == false);
			break;
		case 5:
			cout << "\n  DIVIDING Option -" << endl;
			exit = false;

			do {
				cout << "\n    ********************************"
					<< "\n    *         DIVIDING MENU        *"
					<< "\n    *                              *"
					<< "\n    *  1. divide() - Member        *"
					<< "\n    *  2. divide() - Stand Alone   *"
					<< "\n    *  3. operator/() - Member     *"
					<< "\n    *  4. Return to Previous MENU  *"
					<< "\n    ********************************"
					<< "\n    Select an option (1, 2, 3, or 4): ";
				cin >> subOption;

				switch (subOption) {
				case 1:
					cout << "\n      Calling member divide()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = (*lOp).divide(*rOp);
					}
					break;
				case 2:
					cout << "\n      Calling stand alone divide()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = div(&lOp, &rOp);
					}
					break;
				case 3:
					cout << "\n      Calling member operator/()" << endl;
					if (lOp == nullptr || rOp == nullptr) {
						cout << "\n  Not a proper call as no Fractions are available!" << endl;
					}
					else {
						result = new Fraction();
						*result = (*lOp) / (*rOp);
					}
					break;
				case 4:
					exit = true;
					break;
				default:
					cout << "\n      WRONG OPTION ..." << endl;
					break;
				}
			} while (exit == false);
			break;
		case 6:
			cout << "\n  PRINTING Option -" << endl;
			exit = false;
			if (lOp == nullptr || rOp == nullptr) {
				cout << "\n  Not a proper call as no Fractions are available!" << endl;
			} else if (result == nullptr) {
				cout << "\nThe left operand is " << lOp->getNum() << "/" << lOp->getDenom() << endl;
				cout << "\nThe right operand is " << rOp->getNum() << "/" << rOp->getDenom() << endl;
			} else { 

				do {
					cout << "\n    ********************************"
						<< "\n    *         PRINTING MENU        *"
						<< "\n    *                              *"
						<< "\n    *  1. print() - Member         *"
						<< "\n    *  2. print() - Stand Alone    *"
						<< "\n    *  4. Return to Previous MENU  *"
						<< "\n    ********************************"
						<< "\n    Select an option (1, 2, or 3): ";

					cin >> printMenu;

					switch (printMenu) {
						case 1:
							(*result).print();
						break;
						case 2:
							print(&result);
						break;
						case 3:
							exit = true;
						break;
						default:
						cout << "\n Invalid input" << endl;
						break;
					}
				} while (exit == true);
			}
			break;
		case 7:
			cout << "\nHaving fun ...!" << endl;
			delete lOp;
			delete rOp;
			delete result;
			break;
		default:
			cout << "Wrong Option!" << endl;
			break;
		}
	} while (option != 7);

}

Fraction print(Fraction** result) {
	int gcf;
	int i;
	int num = (*result)->getNum();
	int denom = (*result)->getDenom();

	if (denom == 0) {
		cout << "No solution." << endl;
	} else {
		if (num * denom < 0) {
			gcf = -(num * denom);
		} else {
			gcf = (num * denom);
		}
		for (i = gcf; i > 0; i--) {
			if (num % i == 0 && denom % i == 0) {
				num = num / i;
				denom = denom / i;
			}
		}
		cout << "\nThe result = " << num << "/" << denom << endl;
	}

	return 0;
}

Fraction init(Fraction** lOpPtrAddr, Fraction** rOpPtrAddr) {
	int value;
	int n;
	int d;
	
	cout << "\nPlease enter the first fraction's numerator: ";
	*lOpPtrAddr = new Fraction();
	cin >> value;
	n = value;
	
	cout << "\nPlease enter the first fraction's denominator: ";
	cin >> value;
	if (value == 0) {
		while (value == 0) {
			cout << "\nDenominator cannot be zero. Try again" << endl;
			cin >> value;
			d = value;
		}
	} else {
		d = value;
	}
	
	if (d < 0) {
		n = -n;
		d = -d;
	}
	
	(*lOpPtrAddr)->setNum(n);
	(*lOpPtrAddr)->setDenom(d);
	
	cout << "\nPlease enter the second fraction's numerator: ";
	*rOpPtrAddr = new Fraction();
	cin >> value;
	n = value;
	
	cout << "\nPlease enter the second fraction's denominator: ";
	cin >> value;

	if (value == 0) {
		while (value == 0) {
			cout << "\nDenominator cannot be zero. Try again" << endl;
			cin >> value;
			d = value;
		}
	} else {
		d = value;
	}
	
	if (d < 0) {
		n = -n;
		d = -d;
	}

	(*rOpPtrAddr)->setNum(n);
	(*rOpPtrAddr)->setDenom(d);

	return 0;
}

Fraction add(Fraction** lOpPtrAddr, Fraction** rOpPtrAddr) {
	return Fraction(((*lOpPtrAddr)->getNum() * (*rOpPtrAddr)->getDenom()) + 
		((*rOpPtrAddr)->getNum() * (*lOpPtrAddr)->getDenom()), 
		(*lOpPtrAddr)->getDenom() * (*rOpPtrAddr)->getDenom());
}

Fraction sub(Fraction** lOpPtrAddr, Fraction** rOpPtrAddr) {
	return Fraction(((*lOpPtrAddr)->getNum() * (*rOpPtrAddr)->getDenom()) - 
		((*rOpPtrAddr)->getNum() * (*lOpPtrAddr)->getDenom()), 
		(*lOpPtrAddr)->getDenom() * (*rOpPtrAddr)->getDenom());
}

Fraction mult(Fraction** lOpPtrAddr, Fraction** rOpPtrAddr) {
	return Fraction(((*lOpPtrAddr)->getNum() * (*rOpPtrAddr)->getNum()), 
		(*lOpPtrAddr)->getDenom() * (*rOpPtrAddr)->getDenom());
}

Fraction div(Fraction** lOpPtrAddr, Fraction** rOpPtrAddr) {
	return Fraction(((*lOpPtrAddr)->getNum() * (*rOpPtrAddr)->getDenom()), 
		(*lOpPtrAddr)->getDenom() * (*rOpPtrAddr)->getNum());
}




/**
 * Program Name: cis25Spring2015CalvinHuangFraction.cpp
 * Discussion:   Implementation file for Fraction
 * Written By:   Calvin Huang
 * Date:         2015/04/16
 */

#include "cis25Spring2015CalvinHuangFraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() {
	num = 1;
	denom = 2;
}

Fraction::Fraction(const Fraction& arg) {
	num = arg.num;
	denom = arg.denom;
	cout << "\n Calling copy constructor - " << endl;
}

Fraction::Fraction(int arg) {
	num = arg;
	denom = 1;
}

Fraction::Fraction(int arg1, int arg2) {
	cout << "\nCalling Fraction(int, int) ..." << endl;
	num = arg1;
	denom = arg2;
}

Fraction::~Fraction() {

}

void Fraction::setNum(int arg) {
	num = arg;
}

void Fraction::setDenom(int arg) {
	denom = arg;
}

int Fraction::getNum() const {
	return num;
}

int Fraction::getDenom() const {
	return denom;
}

void Fraction::doubleNum() {
	num += num;
}

void Fraction::print() {
	int gcf;
	int i;
	//int num = (*result)->getNum();
	//int denom = (*result)->getDenom();

	if (denom == 0) {
		cout << "No solution." << endl;
	}
	else {
		if (num * denom < 0) {
			gcf = -(num * denom);
		}
		else {
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
}

Fraction Fraction::add(const Fraction& rOp) {
	return Fraction(num * rOp.denom + denom * rOp.num, denom * rOp.denom);
}

Fraction Fraction::subtract(const Fraction& rOp) {
	return Fraction(num * rOp.denom - denom * rOp.num, denom * rOp.denom);
}

Fraction Fraction::multiply(const Fraction& rOp) {
	return Fraction(num * rOp.num, denom * rOp.denom);
}

Fraction Fraction::divide(const Fraction& rOp) {
	return Fraction(num * rOp.denom, denom * rOp.num);
}

void Fraction::operator=(const Fraction& rOp) {
	num = rOp.num;
	denom = rOp.denom;
}

Fraction Fraction::operator+(const Fraction& rOp) {
	return Fraction(num * rOp.denom + denom * rOp.num, denom * rOp.denom);
}

Fraction Fraction::operator-(const Fraction& rOp) {
	return Fraction(num * rOp.denom - denom * rOp.num, denom * rOp.denom);
}

Fraction Fraction::operator*(const Fraction& rOp) {
	return Fraction(num * rOp.num, denom * rOp.denom);
}

Fraction Fraction::operator/(const Fraction& rOp) {
	return Fraction(num * rOp.denom, denom * rOp.num);
}

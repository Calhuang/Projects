/**
 * Program Name: cis25Spring2015FractionCalvinHuang.cpp
 * Discussion: Implementation File --
 *               FractionCalvinHuang Class
 */

#include <iostream>
#include "cis25Spring2015FractionCalvinHuang.h"
using namespace std;

FractionCalvinHuang::FractionCalvinHuang() : num(0), denom(0) {
	cout << "\nCalling FractionCalvinHuang() ..." << endl;
}

FractionCalvinHuang::FractionCalvinHuang(int arg) : num(arg), denom(1) {
	cout << "\nCalling FractionCalvinHuang(int) ..." << endl;
}

FractionCalvinHuang::FractionCalvinHuang(const FractionCalvinHuang& arg) : 
num(arg.num), denom(arg.denom) {
	cout << "\nCalling FractionCalvinHuang(const FractionCalvinHuang&) ..." << endl;
}

FractionCalvinHuang::FractionCalvinHuang(int arg1, int arg2) : 
num(arg1), denom(arg2) {
	cout << "\nCalling FractionCalvinHuang(int, int) ..." << endl;
}

FractionCalvinHuang FractionCalvinHuang::operator*(const FractionCalvinHuang& rOp) {
        return FractionCalvinHuang(num * rOp.num, denom * rOp.denom);
}

FractionCalvinHuang FractionCalvinHuang::operator+(const FractionCalvinHuang& rOp) {
        return FractionCalvinHuang(num * rOp.denom + denom * rOp.num,
        denom * rOp.denom);
}

FractionCalvinHuang FractionCalvinHuang::operator-() {
        return FractionCalvinHuang(-num, denom);
}

ostream& operator<< (ostream& out, FractionCalvinHuang& fr1) {
	out << fr1.num << "/" << fr1.denom;
	return out;
}

istream& operator>> (istream& in, FractionCalvinHuang& fr1) {
	cout << "\nNumerator: " << endl;
	in >> fr1.num;
	cout << "\nDenominator: " << endl;
	in >> fr1.denom;
	return in;
}
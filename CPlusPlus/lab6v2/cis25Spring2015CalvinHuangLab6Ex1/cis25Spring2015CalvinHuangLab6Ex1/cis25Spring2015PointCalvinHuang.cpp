/**
 * Program Name: cis25Spring2015PointCalvinHuang.cpp
 * Discussion: Implementation File --
 *               PointCalvinHuang Class
 */

#include <iostream>
#include "cis25Spring2015PointCalvinHuang.h"
using namespace std;

PointCalvinHuang::PointCalvinHuang() : 
x(FractionCalvinHuang()), y(FractionCalvinHuang()) {
	cout << "\nCalling PointCalvinHuang() ..." << endl;
}

PointCalvinHuang::PointCalvinHuang(int a) : 
x(FractionCalvinHuang(a)), y(FractionCalvinHuang(a)) {
	cout << "\nCalling PointCalvinHuang(int) ..." << endl;
}

PointCalvinHuang::PointCalvinHuang(int a, int b) :
x(FractionCalvinHuang(a)), y(FractionCalvinHuang(b)) {
	cout << "\nCalling PointCalvinHuang(int, int) ..." << endl;
}

PointCalvinHuang::PointCalvinHuang(const PointCalvinHuang& p) :
x(p.x), y(p.y) {
	cout << "\nCalling PointCalvinHuang(const PointCalvinHuang&) ..." << endl;
}

void PointCalvinHuang::moveBy(FractionCalvinHuang delX, FractionCalvinHuang delY) {
		x = x + delX;
		y = y + delY;
	}
void PointCalvinHuang::moveBy(int iOld) { // update as needed
		x = x + iOld;
		y = y + iOld;
	}
void PointCalvinHuang::flipByX() { // update as needed
		x = -x;
	}
void PointCalvinHuang::flipByY() { // update as needed
		y = -y;
	}
void PointCalvinHuang::flipThroughOrigin() { // update as needed
		x = -x;
		y = -y;
	}
void PointCalvinHuang::print() { // update as needed
		cout << "(" << x << ", " << y << ")";
	}
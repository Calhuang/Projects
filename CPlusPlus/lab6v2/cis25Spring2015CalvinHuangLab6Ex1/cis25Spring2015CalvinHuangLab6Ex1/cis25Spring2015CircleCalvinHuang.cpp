/**
 * Program Name: cis25Spring2015CircleCalvinHuang.cpp
 * Discussion: Implementation File --
 *               CircleCalvinHuang Class
 */

#include <iostream>
#include "cis25Spring2015CircleCalvinHuang.h"
using namespace std;


CircleCalvinHuang::CircleCalvinHuang() : c(PointCalvinHuang()), r(FractionCalvinHuang()) {
	cout << "\nCalling CircleCalvinHuang() ..." << endl;
}

CircleCalvinHuang::CircleCalvinHuang(const CircleCalvinHuang& arg) : 
c(arg.c), r(arg.r) {
	cout << "\nCalling CircleCalvinHuang(const CircleCalvinHuang&) ..." 
		<< endl;
}

CircleCalvinHuang::CircleCalvinHuang(const PointCalvinHuang& c, 
const FractionCalvinHuang& r) : c(PointCalvinHuang(c)), 
r(FractionCalvinHuang(r)) {
	cout << "\nCalling CircleCalvinHuang(const PointCalvinHuang&," 
		<< " const FractionCalvinHuang&) ..." << endl;
}

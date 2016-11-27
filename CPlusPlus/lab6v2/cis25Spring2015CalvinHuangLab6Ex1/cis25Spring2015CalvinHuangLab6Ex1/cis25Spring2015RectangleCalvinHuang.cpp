/**
 * Program Name: cis25Spring2015RectangleCalvinHuang.cpp
 * Discussion: Implementation File --
 *               RectangleCalvinHuang Class
 */

#include <iostream>
#include "cis25Spring2015RectangleCalvinHuang.h"
using namespace std;


RectangleCalvinHuang::RectangleCalvinHuang() : 
len(FractionCalvinHuang()), wid(FractionCalvinHuang()), 
ll(PointCalvinHuang()) {
	cout << "\nCalling RectangleCalvinHuang() ..." << endl;
}

RectangleCalvinHuang::RectangleCalvinHuang(const RectangleCalvinHuang& arg) : 
len(arg.len), wid(arg.wid), ll(arg.ll) {
	cout << "\nCalling RectangleCalvinHuang(const RectangleCalvinHuang&) ..." << endl;
}

RectangleCalvinHuang::RectangleCalvinHuang(const FractionCalvinHuang& l, 
const FractionCalvinHuang& w, const PointCalvinHuang& p) : 
len(FractionCalvinHuang(l)), wid(FractionCalvinHuang(w)), 
ll(PointCalvinHuang(p)) {
	cout << "\nCalling RectangleCalvinHuang(const FractionCalvinHuang&," 
		<< " const FractionCalvinHuang&, const PointCalvinHuang&) ..." << endl;
}


/**
 * Program Name: cis25Spring2015PointCalvinHuang.h
 * Discussion: Declaration File --
 *               PointCalvinHuang Class
 */

#ifndef POINTCALVINHUANG_H
#define POINTCALVINHUANG_H

#include "cis25Spring2015FractionCalvinHuang.h"

// Declarations
class PointCalvinHuang {
public:
	// YOUR CODE HERE
	// Must have at least the default constructor,
	// copy contructor,
	// destructor, and
	// assignment operator function
	// operations

	PointCalvinHuang();
	PointCalvinHuang(int);
	PointCalvinHuang(int, int);
	PointCalvinHuang(const PointCalvinHuang&);
	//~PointCalvinHuang();

	void moveBy(FractionCalvinHuang, FractionCalvinHuang);
	void moveBy(int);
	void flipByX();
	void flipByY();
	void flipThroughOrigin();
	void print();
	// add operator functions as needed
private:
	FractionCalvinHuang x; // x-coordinate of the point
	FractionCalvinHuang y; // y-coordinate of the point
};
// your I/O OPERATOR functions here
#endif
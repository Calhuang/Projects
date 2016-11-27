/**
 * Program Name: cis25Spring2015RectangleCalvinHuang.h
 * Discussion: Declaration File --
 *               RectangleCalvinHuang Class
 */

#ifndef RECTANGLECALVINHUANG_H
#define RECTANGLECALVINHUANG_H

#include "cis25Spring2015FractionCalvinHuang.h"
#include "cis25Spring2015PointCalvinHuang.h"
// Declarations
class RectangleCalvinHuang {
public:
	// YOUR CODE HERE
	// Must have at least the default constructor,
	// copy contructor,
	// destructor, and
	// assignment operator function
	// and other members

	RectangleCalvinHuang();
	RectangleCalvinHuang(const RectangleCalvinHuang&);
	RectangleCalvinHuang(const FractionCalvinHuang&, 
	const FractionCalvinHuang&, const PointCalvinHuang&);
	~RectangleCalvinHuang();

private:
	FractionCalvinHuang len;
	FractionCalvinHuang wid;
	PointCalvinHuang ll; // Lower Left Point
};
// your I/O OPERATOR functions here

#endif
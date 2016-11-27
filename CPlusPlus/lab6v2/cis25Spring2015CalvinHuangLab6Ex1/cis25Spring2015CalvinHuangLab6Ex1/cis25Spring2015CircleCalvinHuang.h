/**
 * Program Name: cis25Spring2015CircleCalvinHuang.h
 * Discussion: Declaration File --
 *               CircleCalvinHuang Class
 */

#ifndef CIRCLECALVINHUANG_H
#define CIRCLECALVINHUANG_H

#include "cis25Spring2015FractionCalvinHuang.h"
#include "cis25Spring2015PointCalvinHuang.h"
// Declarations
class CircleCalvinHuang {
public:
	// YOUR CODE HERE
	// Must have at least the default constructor,
	// copy contructor,
	// destructor, and
	// assignment operator function
	// and other members

	CircleCalvinHuang();
	CircleCalvinHuang(const CircleCalvinHuang&);
	CircleCalvinHuang(const PointCalvinHuang&,
	const FractionCalvinHuang&);
	~CircleCalvinHuang();

private:
	PointCalvinHuang c; // center
	FractionCalvinHuang r; // No negative value allowed
};
// your I/O OPERATOR functions here
#endif
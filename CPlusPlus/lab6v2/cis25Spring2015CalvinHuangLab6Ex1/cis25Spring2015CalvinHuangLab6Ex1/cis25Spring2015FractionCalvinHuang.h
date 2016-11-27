/**
 * Program Name: cis25Spring2015FractionCalvinHuang.h
 * Discussion: Declaration File --
 *               FractionCalvinHuang Class
 */

#ifndef FRACTIONCALVINHUANG_H
#define FRACTIONCALVINHUANG_H
#include <iostream>
using namespace std;

class FractionCalvinHuang {
public:
	// YOUR CODE HERE
	// Must have at least the default constructor,
	// copy contructor,
	// destructor, and
	// assignment operator function
	// and other members
	FractionCalvinHuang();
	FractionCalvinHuang(int);
	FractionCalvinHuang(const FractionCalvinHuang&);
	FractionCalvinHuang(int, int);
	//~FractionCalvinHuang();

	FractionCalvinHuang operator*(const FractionCalvinHuang&);
	FractionCalvinHuang operator+(const FractionCalvinHuang&);
	FractionCalvinHuang operator-();
	friend ostream& operator<< (ostream&, FractionCalvinHuang&);
	friend istream& operator>> (istream&, FractionCalvinHuang&);

private:
	int num; // numerator will preserve fraction-negativity;
	// i.e., negativity of a fraction will be
	// assigned to its numerator
	int denom; // non-zero value for denominator
};
ostream& operator<< (ostream&, FractionCalvinHuang&);
istream& operator>> (istream&, FractionCalvinHuang&);

// your I/O OPERATOR functions here
#endif
/**
 * Program Name: cis25Spring2015CalvinHuangFraction.h
 * Discussion:   Specification file for Fraction
 * Written By:   Calvin Huang
 * Date:         2015/04/16
 */

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
	Fraction();
	Fraction(const Fraction&);
	Fraction(int);	
	Fraction(int, int);

	~Fraction();

	int getNum(void) const;
	void setNum(int);

	int getDenom(void) const;
	void setDenom(int);

	Fraction add(const Fraction& rOp);
	Fraction subtract(const Fraction& rOp);
	Fraction multiply(const Fraction& rOp);
	Fraction divide(const Fraction& rOp);
	void Fraction::print(void);

	void doubleNum(void);
	
	void Fraction::operator=(const Fraction&);
	Fraction operator+(const Fraction&); 
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);


private:
	int num;
	int denom;
};


#endif
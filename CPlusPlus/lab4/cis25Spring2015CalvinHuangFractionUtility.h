/**
 * Program Name: cis25Spring2015CalvinHuangFractionUtility.h
 * Discussion:   Specification file for FractionUtility
 * Written By:   Calvin Huang
 * Date:         2015/04/16
 */

#ifndef FRACTIONUTILITY_H
#define FRACTIONUTILITY_H

void menuFraction(void);

Fraction add(const Fraction&, const Fraction&);
Fraction add(Fraction*, Fraction*);
Fraction add(Fraction**, Fraction**);
Fraction sub(Fraction**, Fraction**);
Fraction mult(Fraction**, Fraction**);
Fraction div(Fraction**, Fraction**);

Fraction init(Fraction*, Fraction*);
Fraction init(Fraction**, Fraction**);

Fraction print(Fraction**);
 


#endif
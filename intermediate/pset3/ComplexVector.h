

/*
PIC 10B 2A, Homework 4
Purpose: Complex Numbers
Author: Jun Ryu
Date: 11/19/2021
*/

#ifndef ComplexVector_h
#define ComplexVector_h
#include "Complex.h"
using namespace std;

class ComplexVector : public Complex {
public:
    ComplexVector() : real(0), im(0) {}
    
    ComplexVector(double r, double i) : real(r), im(i) {}
        
    double real, im;
    
};


ComplexVector operator+(Complex c1, Complex c2);
ComplexVector operator-(Complex c1, Complex c2);
ComplexVector operator*(Complex c1, Complex c2);
ComplexVector operator/(Complex c1, Complex c2);

#endif

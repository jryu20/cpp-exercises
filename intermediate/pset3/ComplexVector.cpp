

/*
PIC 10B 2A, Homework 4
Purpose: Complex Numbers
Author: Jun Ryu
Date: 11/19/2021
*/

#include "ComplexVector.h"
#include "Complex.h"
#include <cmath>
using namespace std;

ComplexVector operator+(Complex c1, Complex c2) {
    ComplexVector c3;
    c3.real = c1.real + c2.real;
    c3.im = c1.im + c2.im;
    return c3;
}

ComplexVector operator-(Complex c1, Complex c2) {
    ComplexVector c4;
    c4.real = c1.real - c2.real;
    c4.im = c1.im - c2.im;
    return c4;
}

ComplexVector operator*(Complex c1, Complex c2) {
    ComplexVector c5;
    c5.real = c1.real*c2.real - c1.im*c2.im;
    c5.im = c1.im*c2.real + c1.real*c2.im;
    return c5;
}

ComplexVector operator/(Complex c1, Complex c2) {
    ComplexVector c6;
    double constant = pow(c2.real, 2) + pow(c2.im, 2);
    c6.real = (c1.real*c2.real + c1.im*c2.im) / constant;
    c6.im = (c1.im*c2.real - c1.real*c2.im) / constant;
    return c6;
}





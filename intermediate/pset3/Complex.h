

/*
PIC 10B 2A, Homework 4
Purpose: Complex Numbers
Author: Jun Ryu
Date: 11/19/2021
*/


#ifndef Complex_h
#define Complex_h
#include <vector>
#include <string>
using namespace std;

class Complex {
public:
    Complex() : real(0), im(0) {}
    Complex(double r, double i);
    double real, im;
    
};
                                

#endif

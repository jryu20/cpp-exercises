

/*
PIC 10B 2A, Homework 4
Purpose: Complex Numbers
Author: Jun Ryu
Date: 11/19/2021
*/


#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <fstream>
#include "Complex.h"
#include "ComplexVector.h"
using namespace std;

int main() {
    char bracket, comma;
    char sign;
    char i;
    double real, im;
    vector<double> real1;
    vector<double> im1;
    vector<double> real2;
    vector<double> im2;
    
    cout << "v1 = ";
    cin >> bracket;
    while (cin >> real >> sign >> im >> i >> comma) {
        if (sign == '-') {
            im = -im;
        }
        
        real1.push_back(real);
        im1.push_back(im);
        
        if (comma == '}') {
            break;
        }
    }
    
    cout << "v2 = ";
    cin >> bracket;
    while (cin >> real >> sign >> im >> i >> comma) {
        if (sign == '-') {
            im = -im;
        }

        real2.push_back(real);
        im2.push_back(im);
        
        if (comma == '}') {
            break;
        }
    }
    
    for (int i = 0; i < real1.size(); i++) {
        Complex c1(real1.at(i), im1.at(i));
        Complex c2(real2.at(i), im2.at(i));
        ComplexVector c3, c4, c5, c6;
        c3 = c1 + c2;
        c4 = c1 - c2;
        c5 = c1 * c2;
        c6 = c1 / c2;
        cout << endl;
        cout << "v1 + v2 = {" << c3.real << " + (" << c3.im << "i)}" << endl;
        cout << "v1 - v2 = {" << c4.real << " + (" << c4.im << "i)}" << endl;
        cout << "v1 * v2 = {" << c5.real << " + (" << c5.im << "i)}" << endl;
        cout << "v1 / v2 = {" << c6.real << " + (" << c6.im << "i)}" << endl;
    }
    cout << endl;
    
    ofstream out_file;
    out_file.open("ComplexSequence.txt");
    out_file << "{ 1 + 1i, ";
    
    
    Complex c7(1,1);
    Complex num, denom, constant1;
    ComplexVector recursive_c, constant;
    for (int i = 1; i < 6; i++) {
        num.real = 2*i;
        num.im = 3*i;
        denom.real = 7;
        denom.im = 5 * pow(i, 2);
        constant = num / denom;
        Complex constant1(constant.real, constant.im);
        recursive_c = constant1 * c7;
        c7.real = recursive_c.real;
        c7.im = recursive_c.im;
        out_file << recursive_c.real << " + " << recursive_c.im << "i";
        if (i < 5) {
            out_file << ", ";
        }
        else {
            out_file << " }";
        }
    }

    return 0;
}


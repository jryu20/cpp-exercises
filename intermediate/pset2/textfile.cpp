

/*
PIC 10B 2A, Homework 3
Purpose: Compare Files
Author: Jun Ryu
Date: 11/7/2021
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "textfile.h"
using namespace std;

string lines;
int line_count1 = 0;
int line_count2 = 0;


bool operator>(istream& in_file1, istream& in_file2) {
    
    while (getline(in_file1, lines)) {
        line_count1 += 1;
    }
    
    while (getline(in_file2, lines)) {
        line_count2 += 1;
    }

    return line_count1 - line_count2 > 0;
};

bool operator==(istream& in_file1, istream& in_file2) {
    
    return line_count1 - line_count2 == 0;
};

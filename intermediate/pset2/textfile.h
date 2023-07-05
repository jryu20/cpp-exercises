

/*
PIC 10B 2A, Homework 3
Purpose: Compare Files
Author: Jun Ryu
Date: 11/7/2021
*/


#ifndef textfile_h
#define textfile_h

#include <iostream>
#include <fstream>
using namespace std;

bool operator>(istream& in_file1, istream& in_file2);
bool operator==(istream& in_file1, istream& in_file2);


#endif 

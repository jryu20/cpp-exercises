

//
/* PIC 10B 2A, Midterm Exam
Purpose: Student Datasets
Author: Jun Ryu
Date: 11/04/2021
*/
//


#ifndef usc_student_h
#define usc_student_h
#include <iostream>
#include "student.h"
using namespace std;

class usc_student : public student {
public:
    
    usc_student(string s1, string s2, string s3, string s4) : student(s1, s2, s3, s4) {
        set_scholarship(s4);
    }
    
    vector<string> studentlist;
    void printdata_usc(usc_student* new_student);
};

#endif 

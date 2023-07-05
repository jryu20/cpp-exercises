

//
/* PIC 10B 2A, Midterm Exam
Purpose: Student Datasets
Author: Jun Ryu
Date: 11/04/2021
*/
//


#ifndef ucla_student_h
#define ucla_student_h
#include <iostream>
#include <vector>
#include "student.h"
using namespace std;


class ucla_student : public student {
public:
    
    ucla_student(string s1, string s2, string s3, string s4) : student(s1, s2, s3, s4) {
        set_first_gen(s4);
    }
    vector<string> studentlist;
    void printdata_ucla(ucla_student* new_student);
    
};


#endif 

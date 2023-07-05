

//
/* PIC 10B 2A, Midterm Exam
Purpose: Student Datasets
Author: Jun Ryu
Date: 11/04/2021
*/
//


#include <iostream>
#include "student.h"
#include "usc_student.h"
#include <fstream>
using namespace std;

void usc_student::printdata_usc(usc_student* new_student){
    studentlist.push_back(name);
    studentlist.push_back(gender);
    studentlist.push_back(birthday);
    studentlist.push_back("     ");
    studentlist.push_back(scholarship());
}


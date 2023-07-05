//
//
/* PIC 10B 2A, Homework 2
Purpose: StudentClub
Author: Jun Ryu
Date: 10/25/2021
 */
//
//

#ifndef Student_h
#define Student_h
#include <vector>
#include <string>
using namespace std;

class Student {

public:

string firstname;
string lastname;

Student(){}
Student(string firstname, string lastname) {

this -> firstname = firstname;
this -> lastname = lastname;
}
    
};

#endif /* Student_h */

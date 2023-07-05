

//
/* PIC 10B 2A, Midterm Exam
Purpose: Student Datasets
Author: Jun Ryu
Date: 11/04/2021
*/
//


#ifndef student_h
#define student_h
#include <iostream>
#include <vector>
using namespace std;

class student {
    vector<string> studentlist;
    
protected:
    string name, gender, birthday;
    
public:
    student() {}
    student(string s1, string s2, string s3, string s4) : name(s1), gender(s2), birthday(s3) {
    }
    
    virtual string first_gen() = 0;
    virtual string scholarship() = 0;
    
    void set_first_gen(string s) {
        s = first_gen();
    }
    void set_scholarship(string s) {
        s = scholarship();
        
    
    }
};

#endif 

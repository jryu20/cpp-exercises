//
//
/* PIC 10B 2A, Homework 2
Purpose: StudentClub
Author: Jun Ryu
Date: 10/25/2021
 */
//
//

#include <iostream>
#include <vector>
#include "Student.h"
#include "StudentClub.h"
using namespace std;

StudentClub::StudentClub(Student* p, Student* v, Student* s, Student* t, vector<Student> m) : President(p), VicePresident(v), Secretary(s), Treasurer(t), club_members(m) {
    
}

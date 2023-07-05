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


Student* StudentClub::get_president() const {
    return President;
}

Student* StudentClub::get_vice_president() const {
    return VicePresident;
}

Student* StudentClub::get_secretary() const {
    return Secretary;
}

Student* StudentClub::get_treasurer() const {
    return Treasurer;
}

vector<Student> StudentClub::get_members() const {
    return club_members;
}

void StudentClub::add_member(Student* s) {

for (int i = 0; i < club_members.size(); i++) {

if (club_members[i].firstname == s -> firstname && club_members[i].lastname == s -> lastname)

return;
}

this -> club_members.push_back(*s);
}

size_t StudentClub::number_members()

{
return club_members.size();
}



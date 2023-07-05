//
//
/* PIC 10B 2A, Homework 2
Purpose: StudentClub
Author: Jun Ryu
Date: 10/25/2021
 */
//
//
#ifndef StudentClub_h
#define StudentClub_h
#include <vector>
using namespace std;

class StudentClub : public Student{

Student* President = new Student();
Student* VicePresident = new Student();
Student* Secretary = new Student();
Student* Treasurer = new Student();
vector<Student> club_members;

public:

StudentClub(Student* p, Student* v, Student* s, Student* t, std::vector<Student> m);
Student* get_president() const;
Student* get_vice_president() const;
Student* get_secretary() const;
Student* get_treasurer() const;
vector<Student> get_members() const;
void add_member(Student* s);
size_t number_members();

};

#endif /* StudentClub_h */

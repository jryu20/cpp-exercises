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

int main() {
Student p,s,v,t,m;

cout << "President: ";
cin >> p.firstname >> p.lastname;

cout << "\n" << "Vice President: ";
cin >> v.firstname >> v.lastname;

cout << "\n" << "Secretary: ";
cin >> s.firstname >> s.lastname;

cout << "\n" << "Treasurer: ";
cin >> t.firstname >> t.lastname;

vector<Student> list;
    
while(m.firstname != "Q") {

    cout << "\n" << "New member (Q to quit): ";
    cin >> m.firstname;
    if (m.firstname == "Q") {
        break;
    }
    if (m.firstname != "Q") {
    list.push_back(m);
    }
    cin >> m.lastname;
};
    

StudentClub club(&p,&v,&s,&t,list);

club.add_member(&p);
club.add_member(&v);
club.add_member(&s);
club.add_member(&t);

cout << "\n" << "Mathletes (" << club.number_members() << " total members)" << endl;
    
cout << "President: " << club.get_president()->firstname << " " << club.get_president()->lastname << endl;

cout << "Vice President: " << club.get_vice_president()->firstname << " " << club.get_vice_president()->lastname <<endl;

cout << "Secretary: " << club.get_secretary()->firstname << " " << club.get_secretary()->lastname << endl;

cout << "Treasurer: " << club.get_treasurer()->firstname << " " << club.get_treasurer()->lastname << endl;

return 0;
}

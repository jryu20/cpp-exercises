

//
/* PIC 10B 2A, Midterm Exam
Purpose: Student Datasets
Author: Jun Ryu
Date: 11/04/2021
*/
//


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
#include "student.h"
#include "ucla_student.h"
#include "usc_student.h"

int main() {
   
    ifstream in_file1;
    ifstream in_file2;
    in_file1.open("UCLA.txt");
    in_file2.open("USC.txt");
    
    if (in_file1.fail() || in_file2.fail()) {
        cout << "error" << endl;
        return 1;
    }
    
    cout << "Student_Name" << "     " << "Gender" << "      " << "Birthday" << "        " << "First_Gen_College_Student" << "       " << "Scholarship" << "     " << endl;
    
    string s1, first1, last1, gender1, birthday1, first_gen1;

    vector<string> studentlist;
    getline(in_file1, s1);
    while (in_file1 >> first1 >> last1 >> gender1 >> birthday1 >> first_gen1) {
        
        string name1 = first1 + last1;
        ucla_student* new_student1 (string name1, string gender1, string birthday1, string first_gen1);
        void printdata_ucla(ucla_student* new_student1);
        for (int i = 0; i < studentlist.size(); i++) {
            cout << studentlist.at(i) << "      ";
        }
        
    };
    
    string s2, first2, last2, gender2, birthday2, scholarship1;
    getline(in_file2, s2);
    while (in_file1 >> first2 >> last2 >> gender2 >> birthday2 >> scholarship1) {
        string name2 = first2 + last2;
        usc_student* new_student2(string name2, string gender2, string birthday2, string scholarship1);
        void printdata_usc(usc_student* new_student2);
        for (int i = 0; i < studentlist.size(); i++) {
            cout << studentlist.at(i) << "      ";
        }
        
    };

    return 0;
    
    }

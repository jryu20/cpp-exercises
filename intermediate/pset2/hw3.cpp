

/*
PIC 10B 2A, Homework 3
Purpose: Compare Files
Author: Jun Ryu
Date: 11/7/2021
*/


#include "textfile.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string filename1, filename2;
    cout << "Enter the name of file 1: ";
    cin >> filename1;
    cout << "Enter the name of file 2: ";
    cin >> filename2;
    
    ifstream in_file1;
    ifstream in_file2;
    in_file1.open(filename1.c_str());
    in_file2.open(filename2.c_str());
    
    if (in_file1.fail() || in_file2.fail()) {
        cout << "error" << endl;
        return 1;
    }
    
    string lines;
    int char_count1 = 0;
    int word_count1 = 0;
    int line_count1 = 0;

    string words1;
    while (in_file1 >> words1) {
        ++word_count1;
    }
    
    in_file1.clear();
    in_file1.seekg(0, ios::beg);
    
    while (getline(in_file1, lines)) {
        if (isspace(lines.back())) {
            --char_count1;
        }
        char_count1 += lines.length();
        line_count1 += 1;
    }

   
    int char_count2 = 0;
    int line_count2 = 0;
    int word_count2 = 0;
    
    string words2;
    while (in_file2 >> words2) {
        ++word_count2;
    }

    
    in_file2.clear();
    in_file2.seekg(0, ios::beg);
    
    while (getline(in_file2, lines)) {
        if (isspace(lines.back())) {
            --char_count2;
        }
        char_count2 += lines.length();
        line_count2 += 1;
    }
    

    ofstream out_file;
    out_file.open("Properties.txt");
    out_file << "File name: " << filename1 << endl;
    out_file << "Number of characters: " << char_count1 << endl;
    out_file << "Number of words: " << word_count1 << endl << endl;
    
    out_file << "File name: " << filename2 << endl;
    out_file << "Number of characters: " << char_count2 << endl;
    out_file << "Number of words: " << word_count2 << endl << endl;
    
    if (operator==(filename1, filename2)) {
        out_file << "The file named \"" << filename1 << "\" has same number of lines as \"" << filename2 << "\"." << endl;
    }
    else if (operator>(filename1, filename2)) {
        out_file << "The file named \"" << filename1 << "\" has more lines than \"" << filename2 << "\"." << endl;
        
    }
    else {
    out_file << "The file named \"" << filename1 << "\" has less lines than \"" << filename2 << "\"." << endl;
    }
    
    
    return 0;
}



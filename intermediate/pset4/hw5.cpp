

/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Jun Ryu
Date: 12/01/2021
*/


#include <iostream>
#include <list>
#include <string>
#include "List.h"
#include "Node.h"
#include "Iterator.h"

using namespace std;

int main() {
    
    List numbers;
    
    
    cout << "Please input a set of nonnegative numbers for a List" << endl;
    cout << "(Enter -1 when you are finished): " << endl << endl;
    int number;
    while (cin >> number) {
        if (number == -1) {
            break;
        }
        numbers.push_back(number);
    }
    cout << "Your list is" << endl;
    cout << "(";
    Iterator pos = numbers.begin();
    for (pos = numbers.begin(); pos != numbers.end(); pos++) {
        cout << *(pos);
        if (pos.position == numbers.last) {
            break;
        }
        cout << ",";
       
   }
cout << ")" << endl << endl;

    int index;
    int value;
    while (true) {
        cout << "Select an index for insertion (enter -1 when finished): ";
        cin >> index;
        if (index == -1) {
            break;
        }
        cout << "Select a value for insertion: ";
        cin >> value;
        
        pos = numbers.begin();
        for (int i = 0; i < index; i++) {
            pos++;
        }
        numbers.push_front(pos, value);
    }
    
    cout << endl;
    cout << "The augmented List is " << endl;
    cout << "(";
    for (pos = numbers.begin(); pos != numbers.end(); pos++) {
        cout << *(pos);
        if (pos.position == numbers.last) {
            break;
        }
        cout << ",";
       
   }
    cout << ")" << endl << endl;
    
    cout << "When we sort the previous list we obtain" << endl;
    
    
    
    
    return 0;
}

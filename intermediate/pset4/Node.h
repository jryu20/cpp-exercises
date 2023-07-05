

/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Jun Ryu
Date: 12/01/2021
*/



#ifndef Node_h
#define Node_h

#include <iostream>
#include <list>
using namespace std;

class Node {
    
public:
    Node(int element);
    
private:
    int number;
    Node* previous;
    Node* next;
    friend class List;
    friend class Iterator;
    
};

#endif 



/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Jun Ryu
Date: 12/01/2021
*/


#ifndef List_h
#define List_h

#include <iostream>
#include <list>
#include <string>
#include "Node.h"
#include "Iterator.h"
using namespace std;

class Iterator;
class List {
public:
    
    List();
    
    void push_back(int number);
    void insert(Iterator iter, int element);
    Iterator erase(Iterator iter);
    void reverse(Node* node);
    void push_front(Iterator iter, int element);
    void sort(Node* node);
    void merge();
    Iterator begin();
    Iterator end();
   

    
    Node* first;
    Node* last;
    friend class Iterator;
    
};
#endif 

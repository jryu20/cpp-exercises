

/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Jun Ryu
Date: 12/01/2021
*/


#ifndef Iterator_h
#define Iterator_h

#include <iostream>
#include <list>
#include <cassert>
#include "Node.h"
#include "List.h"
using namespace std;

class List;
class Iterator {
public:
    
    Iterator();
    Iterator& operator++(int);
    Iterator& operator--(int);
    bool operator==(const Iterator& b) const;
    bool operator!=(const Iterator& b) const;
    int operator*() const;
    
    
    
Node* position;
List* container;

friend class List;
};

#endif 

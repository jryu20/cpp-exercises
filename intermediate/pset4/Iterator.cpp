

/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Jun Ryu
Date: 12/01/2021
*/


#include "Iterator.h"
#include "List.h"
#include "Node.h"
#include <iostream>
#include <cassert>
using namespace std;

bool Iterator::operator==(const Iterator& b) const {
    return position == b.position;
    
};

bool Iterator::operator!=(const Iterator& b) const {
    return position != b.position;
    
};

int Iterator::operator*() const {
    assert(position != nullptr);
    return position -> number;
};


Iterator& Iterator::operator++(int) {
    assert(position != nullptr);
    position = position->next;
    return *this;
};

Iterator& Iterator::operator--(int) {
    assert(position != container->first);
    if (position == nullptr) {
        position = container->last;
    }
    else {
        position = position->previous;
    }
    return *this;
};

Iterator List::begin() {
    Iterator iter;
    iter.position = first;
    iter.container = this;
    return iter;
    
}

Iterator List::end() {
    Iterator iter;
    iter.position = nullptr;
    iter.container = this;
    return iter;
}

Iterator List::erase(Iterator iter) {
    Node* remove = iter.position;
    Node* before = remove->previous;
    Node* after = remove->next;

    if (remove == first) {
        first = after;
        
    }
    else {
        before->next = after;
        
    }
    if (remove == last) {
        last = before;
        
    }
    else {
        after->previous = before;
        
    }
    delete remove;
    Iterator r;
    r.position = after;
    r.container = this;
    return r;  
 }

Iterator::Iterator() {
    position = nullptr;
    container = nullptr;
    
}

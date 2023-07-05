

/*
PIC 10B 2A, Homework 5
Purpose: Linked List
Author: Jun Ryu
Date: 12/01/2021
*/



#include "List.h"
#include <iostream>
#include <list>
using namespace std;

List::List() {
    first = nullptr;
    last = nullptr;
}

void List::push_back(int number) {
 Node* new_node = new Node(number);
 if (last == nullptr) {
     first = new_node;
     last = new_node;
 }
 
 else {
     new_node->previous = last;
     last->next = new_node;
     last = new_node;
 }
    
 }

void List::push_front(Iterator iter, int element) {
    if (iter.position == nullptr) {
        push_back(element);
        return;
}

Node* after = iter.position;
Node* before = after->previous;
Node* new_node = new Node(element);
new_node->previous = before;
new_node->next = after;
after->previous = new_node;
 
    if (before == nullptr) {
        first = new_node;
        
    }
    else {
        before->next = new_node;
        
    }
 }

void List::sort(Node* node) {
    
}

void List::reverse(Node* node) {
    
}

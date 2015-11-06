/*
 * Doubly Linked List
 * By: Jesse Krepelka
 * Completed 11/5/15
 */

#pragma once

#include "dlnode.h"

#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;

class DLList{
    public:
        DLList();
        ~DLList();
        
        unsigned int getSize() const;
        void pushFront(int newContents);
        void pushBack(int newContents);
        void insert(int newContents);
        int getFront() const;
        int getBack() const;
        bool get(int target) const;
        void popFront();
        void popBack();
        bool removeFirst(int target);
        bool removeAll(int target);
        void clear();
        friend ostream& operator<< (ostream& out, const DLList& src);
        
    private:
        int size;
        DLNode* head;
        DLNode* tail;
};
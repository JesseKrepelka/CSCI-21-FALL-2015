/*
 * Singly Linked List Operations
 * By: Jesse Krepelka
 * Completed 10/29/15
 */
 
#pragma once

#include "slnode.h"

#include <string>
#include <sstream>
using namespace std;

class SList {
    public:
        /*
         * Sets following values: head = NULL, size = 0.
         */
        SList();
        /*
         * Calls the clear function.
         */
        ~SList();
        
        /*
         * Creates a new SLNode and attaches it at the head of the list.
         * @param newContents becomes the new contents of the node created
         */
        void insertHead(int newContents);
        /*
         * Creates a new SLNode and attacheds it at the end of the list.
         * @param newContents becomes the new contents of the node created
         */
        void insertTail(int newContents);
        /*
         * Removes the head node from the list and frees its associated memory
         */
        void removeHead();
        /*
         * Removes the last node from the list and frees its associated memory
         */
        void removeTail();
        /*
         * clears the entire contents of the list freeing all memory associated with all nodes.
         */
        void clear();
        unsigned int getSize() const;
        /*
         * Builds a string containing all contents of all nodes in the list separated by commas.
         * @return Aforementioned string, returns empty on empty list
         */
        string toString() const;
    private:
        SLNode* head;
        unsigned int size;
};
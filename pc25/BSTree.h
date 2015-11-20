/*
 * BSTree
 * By: Jesse Krepelka
 * Completed 11/19/15
 */
#pragma once

#include "BSTNode.h"

#include <iostream>
#include <cstdlib>
using namespace std;

class BSTree{
    public:
        BSTree();
        ~BSTree();
        
        bool insert(int newContents);
        void clear();
        unsigned int getSize () const;
        void inOrder (ostream& out);
        
    private:
        BSTNode* root;
        unsigned int size;
        
        bool insert(int newContents, BSTNode*& newNode);
        void clear(BSTNode*& root);
        void inOrder(BSTNode* node, ostream& out);
};
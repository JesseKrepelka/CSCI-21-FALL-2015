/*
 * BSTree
 * By: Jesse Krepelka
 * Completed 11/19/15
 */
#pragma once

#include "BSTNode.h"
#include "Utility.h"

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
        void inOrder(void (*f)(int));
        void reverseOrder(void(*f)(int));
        
    private:
        BSTNode* root;
        unsigned int size;
        bool insert(int newContents, BSTNode*& newNode);
        bool remove(int target, BSTNode*& node);
        void clear(BSTNode*& root);
     //   void removeMax(int& /*     */, BSTNode*& root);
        void inOrder(BSTNode* root, void (*f)(int));
        void reverseOrder(BSTNode* root, void(*f)(int));
};
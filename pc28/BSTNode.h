/*
 * BSTNode
 * By: Jesse Krepelka
 * Completed 11/17/15
 */

#pragma once

#include <cstdlib>

class BSTNode {
    public:
        /*
         * Sets leftChild and rightChild to NULL and contents to 0
         */
        BSTNode();
        /*
         * Sets leftChild and rightChild to NULL and contents to newContents
         */
        BSTNode(int newContents);
        /*
         * Sets leftChild and rightChild to NULL
         */
        ~BSTNode();
        
        void setContents(int newContents);
        void setLeftChild(BSTNode* newNode);
        void setRightChild(BSTNode* newNode);
        
        int getContents() const;
        int& getContents ();
        BSTNode* getLeftChild() const;
        BSTNode*& getLeftChild();
        BSTNode* getRightChild() const;
        BSTNode*& getRightChild();
        
    private:
        BSTNode* leftChild;
        BSTNode* rightChild;
        int contents;
};
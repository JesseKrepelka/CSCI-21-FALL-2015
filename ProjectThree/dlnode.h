/*
 * Doubly Linked Node
 * By: Jesse Krepelka
 * Completed 10/22/15
 */

#pragma once

#include <cstdlib>

class DLNode {
    public:
        DLNode();
        DLNode(int newContents);
        ~DLNode();
        
        void setContents(int newContents);
        void setNextNode(DLNode* newNext);
        void setPreviousNode(DLNode* newPrev);
        int getContents() const;
        DLNode* getNextNode() const;
        DLNode* getPreviousNode() const;
        
    private:
        int contents;
        DLNode* nextNode;
        DLNode* prevNode;
};
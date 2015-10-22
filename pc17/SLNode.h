/*
 * Programming Challenge 17
 * By: Jesse Krepelka
 * Completed 10/22/15
 */

#pragma once

#include <cstdlib>

class SLNode {
    public:
        SLNode();
        SLNode(int newContents);
        ~SLNode();
        
        void setContents(int newContents);
        void setNextNode(SLNode* newNextNode);
        
        int getContents();
        SLNode* getNextNode () const;
        
    private:
        SLNode* nextNode;
        int contents;
};
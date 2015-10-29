/*
 * Singly Linked Node
 * By: Jesse Krepelka
 * Completed 10/22/15
 */

#pragma once

#include <cstdlib>

class SLNode {
    public:
        /*
         * Sets following values: nextNode = NULL, contents = 0.
         */
        SLNode();
        /*
         * Sets following values: nextNode = NULL, contents = newContents.
         * @param newContents becomes contents
         */
        SLNode(int newContents);
        /*
         * sets nextNode to NULL
         */
        ~SLNode();
        
        /*
         * Sets
         */
        void setContents(int newContents);
        void setNextNode(SLNode* newNextNode);
        
        /*
         * Gets
         */
        int getContents();
        SLNode* getNextNode () const;
        
    private:
        SLNode* nextNode;
        int contents;
};
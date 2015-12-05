#pragma once

#include <cstdlib>

template<typename t>
class BSTNode {
    public:
        BSTNode(t newData);
        virtual ~BSTNode();
        
        void setData (t newData);
        void setLeftChild (BSTNode* newLeftChild);
        void setRightChild (BSTNode* newRightChild);
        t getData() const;
        BSTNode* getLeftChild() const;
        BSTNode* getRightChild() const;
        t& getData();
        BSTNode*& getLeftChild();
        BSTNode*& getRightChild();
        
    private:
        t data;
        BSTNode* leftChild;
        BSTNode* rightChild;
};
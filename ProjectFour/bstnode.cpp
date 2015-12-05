#include "bstnode.h"

template<typename t>
BSTNode<t>::BSTNode(t newData){
        leftChild = NULL;
        rightChild = NULL;
        data = newData;
}

template<typename t>
BSTNode<t>::~BSTNode(){}

template<typename t>
void BSTNode<t>::setData (t newData){
        data = newData;
}

template<typename t>
void BSTNode<t>::setLeftChild (BSTNode* newLeftChild){
        leftChild = newLeftChild;
}

template<typename t>
void BSTNode<t>::setRightChild (BSTNode* newRightChild){
        rightChild = newRightChild;
}

template<typename t>
t BSTNode<t>::getData() const{
        return data;
}


template<typename t>
BSTNode<t>* BSTNode<t>::getLeftChild() const{
        return leftChild;
}

template<typename t>
BSTNode<t>* BSTNode<t>::getRightChild() const{
        return rightChild;
}


template<typename t>
t& BSTNode<t>::getData(){
        return data;
}


template<typename t>
BSTNode<t>*& BSTNode<t>::getLeftChild(){
        return leftChild;
}

template<typename t>
BSTNode<t>*& BSTNode<t>::getRightChild(){
        return rightChild;
}

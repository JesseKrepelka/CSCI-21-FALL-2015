#include "dlnode.h"

DLNode::DLNode()
:contents(0),nextNode(NULL),prevNode(NULL)
{}

DLNode::DLNode(int newContents){
    contents = newContents;
    nextNode = NULL;
    prevNode = NULL;
}

DLNode::~DLNode(){}

void DLNode::setContents(int newContents){
    contents = newContents;
}

void DLNode::setNextNode(DLNode* newNext){
    nextNode = newNext;
}

void DLNode::setPreviousNode(DLNode* newPrev){
    prevNode = newPrev;
}

int DLNode::getContents() const{
    return contents;
}

DLNode* DLNode::getNextNode() const{
    return nextNode;
}

DLNode* DLNode::getPreviousNode() const{
    return prevNode;
}
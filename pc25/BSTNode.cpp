#include "BSTNode.h"

BSTNode::BSTNode()
: leftChild(NULL),rightChild(NULL),contents(0)
{}

BSTNode::BSTNode(int newContents){
    contents = newContents;
    leftChild = NULL;
    rightChild = NULL;
}

BSTNode::~BSTNode(){
    leftChild = NULL;
    rightChild = NULL;
}

void BSTNode::setContents(int newContents){
    contents = newContents;
}

void BSTNode::setLeftChild(BSTNode* newNode){
    leftChild = newNode;
}

void BSTNode::setRightChild(BSTNode* newNode){
    rightChild = newNode;
}

int BSTNode::getContents() const{
    return contents;
}
int& BSTNode::getContents (){
    return contents;
}
BSTNode* BSTNode::getLeftChild() const{
    return leftChild;
}
BSTNode*& BSTNode::getLeftChild(){
    return leftChild;
}
BSTNode* BSTNode::getRightChild() const{
    return rightChild;
}
BSTNode*& BSTNode::getRightChild(){
    return rightChild;
}
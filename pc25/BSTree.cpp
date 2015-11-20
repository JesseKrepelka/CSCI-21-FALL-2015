#include "BSTree.h"

BSTree::BSTree()
:root(NULL), size(0)
{}

BSTree::~BSTree(){
    clear();
}

bool BSTree::insert (int newContents){
    return insert(newContents, root);
}

void BSTree::clear(){
    clear(root);
}

unsigned int BSTree::getSize () const{
    return size;
}

void BSTree::inOrder (ostream& outs){
    inOrder(root, outs);
}

bool BSTree::insert (int newContents, BSTNode*& node){
    if(node == NULL){
        node = new BSTNode(newContents);
        size ++;
        return true;
    }
    else if(newContents < node->getContents()){
        return insert(newContents, node->getLeftChild());
    }
    else if(newContents > node->getContents()){
        return insert(newContents, node->getRightChild());
    }
    else{
        return false;
    }
}

void BSTree::clear(BSTNode*& node){
    if(node != NULL){
        clear(node->getLeftChild());
        clear(node->getRightChild());
        delete node;
        node = NULL;
        size--;
    }
}

void BSTree::inOrder(BSTNode* node, ostream& outs){
    if(node != NULL){
        inOrder(node->getLeftChild(), outs);
        outs << node->getContents() << " ";
        inOrder(node->getRightChild(), outs);
    }
}
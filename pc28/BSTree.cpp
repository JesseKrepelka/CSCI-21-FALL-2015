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

void BSTree::inOrder (void (*f)(int)){
    inOrder(root, f);
}

void BSTree::reverseOrder(void (*f)(int)){
    reverseOrder(root, f);
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

bool BSTree::remove(int target, BSTNode*& node){
    if(node == NULL){
        return false;
    }
    else if(target < node->getContents()){
        remove(target, node->getLeftChild());
    }
    else if(target > node->getContents()){
        remove(target, node->getRightChild());
    }
    /*else{
        BSTNode* temp = node;
        if(node->getLeftChild() == NULL && node->getRightChild() == NULL){
            delete node;
        }
        else if(node->getLeftChild() == NULL){
            
        }
        else if(node->getRightChild() == NULL){
            //point left
        }
        else{
            //face
        }
        size--;
        return true;
    }*/
    return true;
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

void BSTree::inOrder(BSTNode* node, void (*f)(int)){
    if(node != NULL){
        inOrder(node->getLeftChild(), f);
        f(node->getContents());
        inOrder(node->getRightChild(), f);
    }
}

void BSTree::reverseOrder(BSTNode* node, void (*f)(int)){
    if(node != NULL){
        reverseOrder(node->getRightChild(), f);
        f(node->getContents());
        reverseOrder(node->getLeftChild(), f);
    }
}


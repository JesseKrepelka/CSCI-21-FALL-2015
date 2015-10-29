#include "slist.h"

SList::SList()
:head(NULL), size(0)
{}

SList::~SList(){
        clear();
}

void SList::insertHead(int newContents){
    SLNode* node = new SLNode(newContents);
    node->setNextNode(head);
    head = node;
    size++;
}

void SList::insertTail(int newContents){
    if(head == NULL){
        insertHead(newContents);
    }
    else{
        SLNode* node = new SLNode(newContents);
        SLNode* b = head;
        while(b->getNextNode() != NULL){
            b = b->getNextNode();
        }
        b->setNextNode(node);
        size++;
    }
   
}

void SList::removeHead(){
    if (head != NULL){
        SLNode* node = head;
        head = head->getNextNode();
        delete node;
        size--;
    }
}

void SList::removeTail(){
    if(head != NULL)
    {
        if(head->getNextNode() == NULL){
            removeHead();
        }
        else{
            SLNode* b = head;
            SLNode* previous = b;
            while(b->getNextNode() != NULL){
                previous = b;
                b = b->getNextNode();
            }
            delete b;
            previous->setNextNode(NULL);
            size--;
        }
    }
}

void SList::clear(){
    while(head != NULL){
        removeHead();
    }
}

unsigned int SList::getSize() const{
        return size;
}

string SList::toString() const{
    stringstream ss;
    if(head != NULL){
        for (SLNode* i = head; i != NULL; i = i->getNextNode()){
            ss << i->getContents();
            if(i->getNextNode() != NULL){
                ss << ',';
            }
        }
        return ss.str();
    }
    else{
        return "";
    }
}
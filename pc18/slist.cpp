#include "slist.h"

SList::SList()
:head(NULL), size(0)
{}

SList::~SList(){
        clear();
}

void SList::insertHead(int newHead){
    SLNode* node = new SLNode(newHead);
    node->setNextNode(head);
    head = node;
    size++;
}

void SList::removeHead(){
    if (head != NULL){
        SLNode* node = head;
        head = head->getNextNode();
        delete node;
        size--;
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
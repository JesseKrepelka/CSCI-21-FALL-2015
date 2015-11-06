#include "dlist.h"
/* The tabbing on this one
   is super fucked up i don't
   know why
*/


DLList::DLList()
:size(0),head(NULL),tail(NULL)
{}

DLList::~DLList(){
        clear();
}

unsigned int DLList::getSize() const{
        return size;
}

void DLList::pushFront(int newContents){
        DLNode* node = new DLNode(newContents);
        if (head == NULL){
                tail = node;
        }
        else{
                node->setNextNode(head);
        }
        head = node;
        size++;
}

void DLList::pushBack(int newContents){
        if(head == NULL){
                pushFront(newContents);
        }
        else{
                DLNode* node = new DLNode(newContents);
                DLNode* b = head;
                while(b->getNextNode() != NULL){
                    b = b->getNextNode();
                }
                b->setNextNode(node);
                size++;
        }
}

void DLList::insert(int newContents){
        cout << "INSERT";
}

int DLList::getFront() const{
        if(head == NULL){
                throw "LIST EMPTY";
        }
        return head->getContents();
}

int DLList::getBack() const{
        if(head == NULL){
                throw "LIST EMPTY";
        }
        return tail->getContents();
}

bool DLList::get(int target) const{
        DLNode* node = head;
        bool isPresent = false;
        while(node->getNextNode() != NULL){
                if(node->getContents() == target){
                        isPresent = true;
                }
                node->setNextNode(node->getNextNode());
        }
        return isPresent;
}

void DLList::popFront(){
        if (head != NULL){
        DLNode* node = head;
        head = head->getNextNode();
        delete node;
        size--;
        }
}

void DLList::popBack(){
        if(head != NULL)
                {
                if(head->getNextNode() == NULL){
                        popFront();
                }
                else{
                        DLNode* b = head;
                        DLNode* previous = b;
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

bool DLList::removeFirst(int target){
        if(get(target) == true){
                DLNode* b = head;
                DLNode* previous = b;
                while(b->getContents() != target){
                        previous = b;
                        b = b->getNextNode();
                }
                if(b->getNextNode() != NULL){
                        previous->setNextNode(b->getNextNode());
                        delete b;
                }
                else{
                        delete b;
                        previous->setNextNode(NULL);
                }
                size--;
        }
}

bool DLList::removeAll(int target){
        if(get(target) == true){
                DLNode* b = head;
                DLNode* previous = b;
                while(get(target) == true){
                        while(b->getContents() != target){
                                previous = b;
                                b = b->getNextNode();
                        }
                        if(b->getNextNode() != NULL){
                                previous->setNextNode(b->getNextNode());
                                delete b;
                        }
                        else{
                                delete b;
                                previous->setNextNode(NULL);
                        }
                        size--;
                }
        }
}

void DLList::clear(){
        while(head != NULL){
        popFront();
    }
}

ostream& DLList::operator<< (ostream& out, const DLList& src){
        stringstream ss;
        if(src != NULL){
                for (DLNode* i = src; i != NULL; i = i->getNextNode()){
                        ss << i->getContents();
                        if(i->getNextNode() != NULL){
                        ss << ',';
                }
        }
        out << ss.str();
        }
        else{
                out << "";
        }
        return out;
}
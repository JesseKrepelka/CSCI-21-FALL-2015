#pragma once

#include "slnode.h"

#include <string>
#include <sstream>
using namespace std;

class SList {
    public:
        SList();
        ~SList();
        
        void insertHead(int newHead);
        void removeHead();
        void clear();
        unsigned int getSize() const;
        string toString() const;
    private:
        SLNode* head;
        unsigned int size;
};
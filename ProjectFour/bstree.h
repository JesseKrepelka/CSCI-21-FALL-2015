#pragma once

#include "bstnode.h"

#include <cstdlib>

template<typename T>
class BSTree{
    public:
        BSTree();
        ~BSTree();
        
        unsigned int getSize () const;
        void clear();
        bool insert(T newContents);
        bool find(T targetContents);
        bool remove(T targetData);
        T* get(T targetData);
        void inOrder();
        void reverseOrder();
        
    private:
        void clear(BSTNode<T>* tempRoot);
        bool insert(T newContents, BSTNode<T>* tempRoot);
        bool find(T targetContents, BSTNode<T>* tempRoot);
        bool remove(T targetData, BSTNode<T>* tempRoot);
        void removeMax(T& removed, BSTNode<T>*& tempRoot);
        T* get(T targetData, BSTNode<T>* tempRoot);
        void inOrder(BSTNode<T>* tempRoot);
        void reverseOrder(BSTNode<T>* tempRoot);
        
        unsigned int count;
        BSTNode<T>* root;
};
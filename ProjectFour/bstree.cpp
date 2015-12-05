#include "bstree.h"

template<typename T>
BSTree<T>::BSTree()
:root(NULL), count(0)
{}

template<typename T>
BSTree<T>::~BSTree(){
    clear();
}

template<typename T>
unsigned int BSTree<T>::getSize () const{
    return count;
}

template<typename T>
void BSTree<T>::clear(){
    clear(root);
}

template<typename T>
bool BSTree<T>::insert(T newContents){
    return insert(newContents, root);
}

template<typename T>
bool BSTree<T>::find(T targetContents){
    return find(targetContents, root);
}

template<typename T>
bool BSTree<T>::remove(T targetData){
    return remove(targetData, root);
}

template<typename T>
T* BSTree<T>::get(T targetData){
    return get(targetData, root);
}

template<typename T>
void BSTree<T>::inOrder(){
    inorder(root);
}

template<typename T>
void BSTree<T>::reverseOrder(){
    reverseOrder(root);
}

template<typename T>
void BSTree<T>::clear(BSTNode<T>* tempRoot){
    if(tempRoot != NULL){
        clear(tempRoot->getLeftChild());
        clear(tempRoot->getRightChild());
        delete tempRoot;
        tempRoot= NULL;
        count--;
    }
}

template<typename T>
bool BSTree<T>::insert(T newContents, BSTNode<T>* tempRoot){
    if(tempRoot == NULL){
        tempRoot = new BSTNode<T>(newContents);
        count++;
        return true;
    }
    else if(newContents < tempRoot->getData()){
        return insert(newContents, tempRoot->getLeftChild());
    }
    else if(newContents > tempRoot->getData()){
        return insert(newContents, tempRoot->getRightChild());
    }
    else{
        return false;
    }
}

template<typename T>
bool BSTree<T>::find(T targetContents, BSTNode<T>* tempRoot){
    return true;
}

template<typename T>
bool BSTree<T>::remove(T targetData, BSTNode<T>* tempRoot){
    return true;
}

template<typename T>
void BSTree<T>::removeMax(T& removed, BSTNode<T>*& tempRoot){
}

template<typename T>
T* BSTree<T>::get(T targetData, BSTNode<T>* tempRoot){
    return targetData;
}

template<typename T>
void BSTree<T>::inOrder(BSTNode<T>* tempRoot){
}

template<typename T>
void BSTree<T>::reverseOrder(BSTNode<T>* tempRoot){
}

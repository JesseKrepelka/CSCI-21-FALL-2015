/*
 * Box Header file
 * By: Jesse Krepelka
 * Completed 10/29/15
 */
#pragma once

#include<iostream>
using namespace std;

template <class T>
class Box {
    public:
        Box(T newContents)
        :contents(newContents)
        {}
        
        void setContents(T newContents){
            contents = newContents;
        }
        
        T getContents(){
            return contents;
        }
        friend ostream& operator<< (ostream& outs, const Box& b){
            outs << b.contents;
            return outs;
        }
    private:
        T contents;
};
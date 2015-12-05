#pragma once

#include "Utility.h"
#include <string>
using namespace std;

class Word {
    public:
        Word();
        Word(string newWord);
        virtual ~Word();
        
        string getWord() const;
        void setWord(string newWord);
        unsigned int getCount() const;
        void incrementCount();
        friend bool operator== (const Word& lw, const Word& rw);
        friend bool operator< (const Word& lw, const Word& rw);
        friend bool operator> (const Word& lw, const Word& rw);
       // friend bool operator<< (const Word& lw, const Word& rw);
    private:
        string word;
        unsigned int count;
};
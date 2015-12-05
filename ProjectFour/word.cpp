#include "word.h"

Word::Word()
:count(1)
{}

Word::Word(string newWord)
:word(newWord), count(1)
{}

Word::~Word(){}

string Word::getWord() const{
        return word;
}

void Word::setWord(string newWord){
        word = newWord;
}

unsigned int Word::getCount() const{
        return count;
}

void Word::incrementCount(){
        count++;
}

bool operator== (const Word& lw, const Word& rw){
        return (Utility::upperCase(lw.word) == Utility::upperCase(rw.word));
}

bool operator< (const Word& lw, const Word& rw){
        return (Utility::upperCase(lw.word) < Utility::upperCase(rw.word));
}

bool operator> (const Word& lw, const Word& rw){
        return (Utility::upperCase(lw.word) > Utility::upperCase(rw.word));
}

/*
ostream operator<< (ostream &output, const Word &word){
        output << word.word << ' ' << word.count << endl;
        return output;
}
*/
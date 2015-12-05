#include "bstree.h"
#include "word.h"
#include "Utility.h"

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main (int argc, char* argv[]){
    ifstream myfile;
    char input = 0;
    string line;
    string file = argv[1];
    //BSTree<Word>* tree = new BSTree<Word>();
    
    myfile.open(file.c_str());
    
    if(myfile.is_open()){
        while(getline(myfile,line)){
            input = line[0];
            switch(input){
                case 'C':
                    cout << "creating tree";
                    break;
                case 'X':
                    //tree->clear();
                    break;
                case 'D':
                    //tree->clear();
                    break;
                case 'I':
                    //tree->insert(line.substr(2, line.size()));
                    break;
                case 'F':
                    cout << "find word" << endl;
                    break;
                case 'R':
                    cout << "remove word" << endl;
                    break;
                case 'G':
                    cout << "get word" << endl;
                    break;
                case 'N':
                    cout << "Show number of nodes in tree" << endl;
                    break;
                case 'O':
                    cout << "in order print" << endl;
                    break;
                case 'E':
                    cout << "reverse in order print" << endl;
                    break;
                default:
                    cout << "you shouldnt be here" << endl;
            }
        }
    }
    myfile.close();
    return 0;
}
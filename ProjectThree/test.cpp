#include "dlist.h"

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main (int argc, char* argv[]){
    ifstream myfile;
    string line = "";
    stringstream ss;
    bool exists = false;
    string file = argv[1];
    char converted = 0;
    //TEMPORARY TILL I REMEMBER HOW TO DEAL WITH THIS
    DLList list;
    
    myfile.open(file.c_str());
    
    if(myfile.is_open()){
		while(getline(myfile,line)){
			ss << line;
			ss >> converted;
			ss.clear();
			if (converted == 'C') {
			    cout << "LIST CREATED" << endl;
                exists = true;
			}
			if(exists == true){
    			switch(converted){
                    case 'X':{
                        cout << "LIST CLEARED" << endl;
                        list.clear();
                        break;
                    }case 'D':{
                        cout << "LIST DELETED" << endl;
                        list.clear();
                        delete &list;
                        exists = false;
                    }case 'I':{
                        cout << "VALUE " << line << "INSERTED" << endl;
                        //insert function
                        break;
                    }case 'F':{
                        cout << "VALUE " << line << " ADDED TO HEAD" << endl;
                        //addtofront function
                        break;
                    }case 'B':{
                        cout << "VALUE " << line << " ADDED TO TAIL" << endl;
                        //add to back function
                        break;
                    }case 'A':{
                        list.getFront();
                        cout << "VALUE " << list.getFront() << " AT HEAD" << endl;
                        break;
                    }case 'Z':{
                        list.getBack();
                        break;
                    }case 'T':{
                        list.popFront();
                        break;
                    }case 'K':{
                        list.popBack();
                        break;
                    }case 'E':{
                        //removeall function
                        break;
                    }case 'R':{
                        //removefirst function
                        break;
                    }case 'G':{
                        //get
                        break;
                    }case 'N':{
                        list.getSize();
                        break;
                    }case 'P':{
                        //tostring
                        break;
                    }default:
                        cout << "default" << endl;
    			}
			}
		}
    }
    return 0;
}
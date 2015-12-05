#include "Utility.h"

void Utility::log (int i){
    cout << i << ' ';
}

string Utility::upperCase (const string& s){
    string us = s;
    transform(us.begin(), us.end(), us.begin(), ::toupper);
    return us;
}
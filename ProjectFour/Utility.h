/*
 * Utility
 * By: Jesse Krepelka
 * Completed 12/1/15
 */
#pragma once

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Utility{
    public:
        /* 
         * Inserts the integer argument on the standard output stream,
         * followed by a space character.
         */
        static void log (int i);
        /*
         * Returns an upperCase version of a provided string
         * @param s string to be upper cased
         */
        static string upperCase (const string& s);
};
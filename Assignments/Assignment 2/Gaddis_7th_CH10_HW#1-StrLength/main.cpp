/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on October 7, 2014, 12:07 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * 
 */
void charChecker(string &word);

int main(int argc, char** argv) {
    
    string word;

    cout << "Please enter a phrase" << endl;
    cin >> word;

    charChecker(word);
    
    return 0;
}

void charChecker(string &word)
{
    int temp = word.length();
    cout << word << " is " << temp << " characters long" << endl;

    for(int i=0; i<word.length(); i++)
    {
        cout << word[i] << " " << endl;
    }
}
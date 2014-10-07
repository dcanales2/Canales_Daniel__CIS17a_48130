/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on October 6, 2014, 2:05 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

/*
 * 
 */
bool checkUpper(string &word);
bool checkLower(string &word);
bool checkDigit(string &word);

int main(int argc, char** argv) {
    
    //declare variable
    string code;
    int pinsize;
 

    do{
        //ask for pin 
        cout << "Please enter a password" << endl;
        cout << "Must be at least 6 characters long" << endl;
        cout << "Must contain at least one upper case character" << endl;
        cout << "Must contain at least one lower case character" << endl;
        cout << "Must contain at least one digit" << endl;
        cout << " " << endl;
        cin >> code;

        pinsize = code.length();
        if(pinsize<6)
        {
            cout << "Please enter a PIN with more than 6 digits" << endl;
        }
        cout << " " << endl;
      }while(pinsize<6);

    checkUpper(code);
    checkLower(code);
    checkDigit(code);

    if(checkUpper(code)==checkLower(code)==checkDigit(code)==true)
    {
        cout << "PIN is Acceptable" << endl;
    }


    return 0;
}

bool checkUpper(string &word)
{
    char temp[word.length()];
    int counter = 0;

    for(int i=0; i<(word.length()); i++)
    {
        temp[i] = word[i];
        if(isupper(temp[i]))
        {
            counter++;
        }
    }
    if(counter==0)
    {
        cout << "Cannot be PIN, there are no Upper case letters" << endl;
        return false;
    }
    else return true;
}

bool checkLower(string &word)
{
    char temp[word.length()];
    int counter = 0;

    for(int i=0; i<(word.length()); i++)
    {
        temp[i] = word[i];
        if(islower(temp[i]))
        {
            counter++;
        }
    }
    if(counter==0)
    {
        cout << "Cannot be PIN, there are no Lower case letters" << endl;
        return false;
    }
    else return true;
}

bool checkDigit(string &word)
{
    char temp[word.length()];
    int counter = 0;

    for(int i=0; i<(word.length()); i++)
    {
        temp[i] = word[i];
        if(isdigit(temp[i]))
        {
            counter++;
        }
    }
    if(counter==0)
    {
        cout << "Cannot be PIN, there are no numbers" << endl;
        return false;
    }
    return true;
}


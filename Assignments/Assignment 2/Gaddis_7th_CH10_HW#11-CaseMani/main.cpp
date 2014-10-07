/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on October 6, 2014, 12:55 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

/*
 * 
 */
void upperCase( string &word);
void lowerCase( string &word);
void reverse(string &word);

int main(int argc, char** argv) {
    //declare variables
    string phrase;

    //get phrase
    cout << "Please enter a phrase" << endl;
    cin >> phrase;

    //case functions
    upperCase(phrase);
    lowerCase(phrase);
    reverse(phrase);
    return 0;
}

void upperCase( string &word)
{
    //place temp for holding every char
    char temp[word.length()];
    
    for(int i=0; i<(word.length()); i++)
    {
        //temp every seperate char
        temp[i] = word[i];
        //turn temp aray to upper
        temp[i] = toupper(temp[i]);
        //place upper back in original
        word[i] = temp[i];
    }
    //output new version
    cout << "Phrase in all upper " << word << endl;

}

void lowerCase( string &word)
{
    //place temp for holding every char
    char temp[word.length()];
    
    for(int i=0; i<(word.length()); i++)
    {
        //temp every seperate char
        temp[i] = word[i];
        //turn temp aray to lower
        temp[i] = tolower(temp[i]);
        //place upper back in original
        word[i] = temp[i];
    }
     //output new version
    cout << "Phrase in all lower " << word << endl;
}

void reverse(string &word)
{
    char temp[word.length()];
    int SIZE = word.length();

    cout << "Phrase in reverse " ;
    for(int i=0; i<(word.length()+1); i++)
    {
        temp[i] = word[SIZE];
        SIZE--;
        cout << temp[i] ;
    }
  
 
}
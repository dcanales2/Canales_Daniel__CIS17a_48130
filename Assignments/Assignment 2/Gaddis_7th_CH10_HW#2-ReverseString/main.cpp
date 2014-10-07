/* 
 * File:   main.cpp
 * Author: Kenton
 *
 * Created on October 6, 2014, 11:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

/*
 * 
 */
//function for reverse string
void reverseWord(string &word);

int main(int argc, char** argv) {
    //declare variables
    string word;
    //get word
    cout << "Please enter a word" << endl;
    cin >> word;

    //use function
    reverseWord(word);
    
    return 0;
}

void reverseWord(string &word)
{
    //temp placeholder for char
    char temp[word.length()];
    //counter for holding each char
    int counter = 0;

    //loop to place last char in word to first char in temp
    for(int i=word.length(); i>=0; i--)
    {
        //add last word char to 1st temp 
        temp[counter] = word[i];
        //output single char
        cout << temp[counter];
        //increase counter for loop
        counter++;
    }
    
}

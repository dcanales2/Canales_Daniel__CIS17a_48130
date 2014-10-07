/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on October 7, 2014, 12:21 AM
 */

#include <cstdlib>
#include <iostream>
#include <cctype>
#include <string>
#include <cstring>

using namespace std;

/*
 * 
 */
void space();
void problem1();
void charChecker(string &word);
void problem2();
void reverseWord(string &word);
void problem8();
void problem11();
void upperCase( string &word);
void lowerCase( string &word);
void reverse(string &word);
void problem12();
bool checkUpper(string &word);
bool checkLower(string &word);
bool checkDigit(string &word);

int main(int argc, char** argv) {
    
    int number;

    cout << "Please enter which problem you would like to do" << endl;
    cout << "Problems done from the book are " << endl;
    cout << " 1 - 2 - 8 - 11 - 12 " << endl;
    cin >> number;

    switch(number)
    {
        case 1: cout << "Problem 1 " << endl; problem1(); space(); break;
        case 2: cout << "Problem 2 " << endl; problem2(); space(); break;
        case 8: cout << "Problem 8 " << endl; problem8(); space(); break;
        case 11: cout << "Problem 11 " << endl; problem11(); space(); break;
        case 12: cout << "Problem 12 " << endl; problem12(); space(); break;
    }
    return 0;
}
void space()
{
    cout << " " << endl;
}

void problem1()
{
  
    string word;

    cout << "Please enter a phrase" << endl;
    cin >> word;

    charChecker(word);
 
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

void problem2()
{
       //declare variables
    string word;
    //get word
    cout << "Please enter a word" << endl;
    cin >> word;

    //use function
    reverseWord(word);

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

void problem8()
{
      
    //delcare variable
    int iNum;
    int sum = 0;
    const int SIZE = 5;
    char number[SIZE];

    //get the numbers though string
    cout << "Enter the number no more than " << SIZE-1 << " characters" << endl;
    cin.getline(number,SIZE);
    
    //convert to int using atoi
    iNum = atoi(number);
    
    //find total
    int count = SIZE-1;
    int temp2 = iNum;
    do{
        
        //temps for holding mod and division
        int temp1 = temp2;

        //mod by 10, get last digit add to sum
        temp1 %= 10;
        sum += temp1;

        //divide by 10 to be able to mod next digit out
        temp2 /= 10;
        count--;

      }while(count >= 0);

      cout << "Sum of Digits: " << sum << endl;
    
}

void problem11()
{
      //declare variables
    string phrase;

    //get phrase
    cout << "Please enter a phrase" << endl;
    cin >> phrase;

    //case functions
    upperCase(phrase);
    lowerCase(phrase);
    reverse(phrase);
  
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

void problem12()
{
     
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


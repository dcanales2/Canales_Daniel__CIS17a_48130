/* 
 * File:   main.cpp
 * Author: Daniel Canales
 *
 * Created on October 5, 2014, 12:12 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
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
    return 0;
}


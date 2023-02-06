/*
Author: Julianne Aguilar 
Course: CSCI-136
Instructor: Genady Maryash 
Assignment: Homework E3.1 - Positive or Zero or Negative

This program will ask the usr to input a number and print whether or not its positive or negative or zero 
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter number\n";
    cin>> number;

    if(number < 0)
    {
        cout<<"negative\n";
    }
    else if(number>0)
    {
        cout<<"positive\n";
    }
    else
    {
        cout<<"zero\n";
    }
    return 0;
}



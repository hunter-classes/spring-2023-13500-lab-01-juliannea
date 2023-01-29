/*
Author: Julianne Aguilar 
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: Find the smaller of 3 integers, Lab1B

The program will ask the user to input 3 numbers and determine which one of them is the smaller one
*/

#include <iostream>
using namespace std;

int main()
{
    int num1; 
    int num2; 
    int num3;
    int num;
    cout << "Enter the first number\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;
    cout << "Enter the thrid number\n";
    cin >> num3;

    if(num1 < num2)
    {
        num = num1;
        if(num < num3)
        {
            cout << "The smaller of the three is " << num << endl;
        }
        else 
        {
            cout << "The smaller of the three is " << num3 << endl;
        }

    }

    if (num1 > num2)
    {
        num = num2;
        if(num < num3)
        {
            cout << "The smaller number of the three is " << num << endl;
        }
        else 
        {
            cout << "The smaller of the three is " << num3 << endl;
        }
    }
    
    return 0;
}
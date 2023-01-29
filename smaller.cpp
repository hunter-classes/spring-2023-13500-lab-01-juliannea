/*
Author: Julianne Aguilar 
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: Find the smaller of two integers, Lab1A

The program will ask the user to input 2 numbers and determine which one of them is the smaller one
*/

#include <iostream>

int main()
{
    int num1;
    int num2;

    std::cout << "Input number 1\n";
    std::cin >> num1;

    std::cout << "Input number 2\n";
    std::cin >> num2;

    if(num1 < num2)
    {
        std::cout << num1 << " is less than " << num2 << std::endl;
    }
    else
    {
        std::cout << num2 << " is less than " << num1 << std::endl;
    }
    
    return 0;

}
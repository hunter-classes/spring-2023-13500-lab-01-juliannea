/*
Author: Julianne Aguilar 
Course: CSCI-135
Instructor: Gennadiy Maryash
Assignment: Find the smaller of 3 integers, Lab1B

The program will ask the user to input 3 numbers and determine which one of them is the smaller one
*/

#include <iostream>


int main()
{
    int num1; 
    int num2; 
    int num3;
    int num;
    std::cout << "Enter the first number\n";
    std::cin >> num1;
    std::cout << "Enter the second number\n";
    std::cin >> num2;
    std::cout << "Enter the thrid number\n";
    std::cin >> num3;

    if(num1 < num2)
    {
        num = num1;
        if(num < num3)
        {
            std::cout << "The smaller of the three is " << num << std::endl;
        }
        else 
        {
            std::cout << "The smaller of the three is " << num3 << std::endl;
        }

    }

    if (num1 > num2)
    {
        num = num2;
        if(num < num3)
        {
            std::cout << "The smaller number of the three is " << num << std::endl;
        }
        else 
        {
            std::cout << "The smaller of the three is " << num3 << std::endl;
        }
    }
}
    
    
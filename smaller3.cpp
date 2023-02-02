/*
Spring 2023 - Lab 01
Last name: Aguilar
First name: Julianne
GitHub username: juliannea
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
    
    return 0;
}

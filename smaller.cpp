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

    std::cout << "Input number 1\n";
    std::cin >> num1;

    std::cout << "Input number 2\n";
    std::cin >> num2;

    if(num1 < num2)
    {
        std::cout << num1 << std::endl;
    }
    else
    {
        std::cout << num2 << std::endl;
    }
    
    return 0;

}

#include <iostream>
/*
    Author: Julianne Aguilar 
    Username: juliannea
*/
int main()
{
    int year;
    std::cout << "Enter a year\n";
    std::cin >> year;

    if(year % 4 != 0)
    {
        std::cout << "It's a common year\n";
    }

    else if(year % 100 != 0)
    {
        std::cout << "It's a leap year\n";
    }

    else if(year % 400 != 0)
    {
        std::cout << "It's a common year\n";
    }

    else
    {
        std::cout << "It's a leap year\n";
    }
    return 0;
}
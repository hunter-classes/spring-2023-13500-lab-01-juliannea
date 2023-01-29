#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year\n";
    cin >> year;

    if(year % 4 != 0)
    {
        cout << "It's a common year\n";
    }

    else if(year % 100 != 0)
    {
        cout << "It's a leap year\n";
    }

    else if(year % 400 != 0)
    {
        cout << "It's a common year\n";
    }

    else
    {
        cout << "It's a leap year\n";
    }
    return 0;
}
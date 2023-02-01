# include <iostream>
/*
    Author: Julianne Aguilar 
    Username: juliannea
*/
int main()
{
    int year;
    int month;

    std::cout<<"Enter year\n";
    std::cin >> year;

    std::cout<<"Enter month\n";
    std::cin >> month;

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        std::cout<<"31 days"<<std::endl;
    }
    else if(month == 9 || month == 4 || month == 6 || month == 11)
    {
        std::cout<<"30 days"<<std::endl;
    }
    else
    {
       if(year % 4 != 0) 
       {
        std::cout<<"28 days\n";
       }
       else if(year % 100 != 0)
       {
        std::cout<<"29 days\n";
       }
       else if(year % 400 != 0)
       {
        std::cout<<"28 days\n";
       }
       else
       {
        std::cout<<"29 days\n";
       }
    }
    
        

    return 0;
}
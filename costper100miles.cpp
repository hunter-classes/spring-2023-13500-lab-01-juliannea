/*
Author: Julianne Aguilar 
Course: CSCI-136
Instructor: Genady Maryash 
Assignment: Homework E2.10 cost per 100 miles 

This program will ask the use the number of gallons of gas in the tank, the fuel efficiency in miles per gallon, and the price of gass per gallon.
Then it'll print the cost per 100 miles and how far the car can go with the gas in the tank 
*/

#include <iostream>
using namespace std;

int main()
{
    /* Ask user input # of gallons of gas in tank and store it in variable*/
    double tank;
    cout<<"How many gallons of gas in tank\n";
    cin>>tank;

    /* Ask user input fuel efficiency in miles per gallon and store in variable*/
    double mpg;
    cout<<"Input fuel efficiency in miles per gallon\n";
    cin>>mpg;

    /*Ask user the price of gass per gallon*/
    double price;
    cout<<"Input price of gass per gallon\n";
    cin>>price;

    /*Calculate the cost per 100 miles*/

    double milescost = 100/mpg*price;

    /* Calculate How far the car can go with the gas in the tank*/

    double far = mpg*tank;

    cout<<"The cost per 100 miles is $"<<milescost<<" and the car can go "<<far<<" miles"<<endl;
    return 0; 
}
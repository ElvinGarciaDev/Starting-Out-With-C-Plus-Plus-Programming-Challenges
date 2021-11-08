#include "Class.h"
#include <iostream>
using namespace std;
#include <string>

//*******************
//Default constructor
//*******************
Date::Date()
{
    SetName(); //Call the setName function in the constructor because it will assign the values to the array when an object is created.
}

//***********************
//Overloaded constructor
//***********************
Date::Date(int m, int d, int y)
{
    SetMonth(m);
    SetDay(d);
    SetYear(y);
    SetName(); //Call the setName function in the constructor because it will assign the values to the array when an object is created.
}

void Date::SetDay(int num)
{
    if (num >= 1 && num <= 31)
        day = num;

    else if (num < 1 || num > 12)
    {
        cout << "Error: try again. ";
        exit(EXIT_FAILURE);

    }
}

void Date::SetMonth(int num)
{
    if (num >= 1 && num <= 12)
        month = num;

    else if (num >= 13 || num <= 0)
    {
        cout << "Error: try again. ";
        exit(EXIT_FAILURE);

    }
}

void Date::SetName()
{
    array[0] = "January";
    array[1] = "February";
    array[2] = "March";
    array[3] = "April";
    array[4] = "May";
    array[5] = "June";
    array[6] = "July";
    array[7] = "August";
    array[8] = "September";
    array[9] = "October";
    array[10] = "November";
    array[11] = "December";
}

string Date::ShowDate2() //Will only be called for the month/dd/yyyy format
{
    return array[month - 1]; 
}
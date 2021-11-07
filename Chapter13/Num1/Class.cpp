#include "Class.h"
#include <iostream>
using namespace std;

Date::Date(int m, int d, int y)
{
    SetMonth(m);
    SetDay(d);
    SetYear(y);
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

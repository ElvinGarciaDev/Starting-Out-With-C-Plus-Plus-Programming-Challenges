#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
    Date time; //Creat an object and pass day, month, year as arguments

    int day, month;

    cout << "Enter a day: ";
    cin >> day;

    cout << "Enter a month: ";
    cin >> month;

    try
    {
        time.SetDay(day);
        cout << time.GetDay() << endl;
        time.SetMonth(month);
        cout << time.GetMonth();
    }
    catch (Date::InvalidDay e)
    {
        cout << "Sorry but " << e.getErrorDays() << " is not a  valid day. " << endl;
    }
    catch (Date::InvalidMonth e)
    {
        cout << "Sorry but " << e.getErrorMonths() << " is not a valid month. " << endl;
    }



    return 0;
}
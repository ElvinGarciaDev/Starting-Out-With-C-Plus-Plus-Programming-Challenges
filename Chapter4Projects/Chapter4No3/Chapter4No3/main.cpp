/*
The date June 10, 1960 is special because when
we write it in the following format, the months times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year.
The program should then determine whether the month times the day is equal to the year.
if so, it should display a message saying the date is magic. Otherwise, it should display a message saying
the date is not magic.
*/
#include <iostream>
using namespace std;

int main()
{

    int month, day, year; //Veriables
    string magic;

    //Get user input
    cout << "Enter a month in numeric form: \n";
    cin >> month;
    cout << "Enter a day in numeric form: \n";
    cin >> day;
    cout << "Enter a year in numeric form: \n";
    cin >> year;


    if (month * day == year)
        cout << month << "/" << day << "/" << year << " is a magic date because the month times the day equals the year " << endl;
    else
        cout << "This is not a magic date" << endl;

    return 0;
}

// magic = (month * day == year) ? "magic" : "not magic" //This is a conditional operator. Works the same as if else statemnet. 

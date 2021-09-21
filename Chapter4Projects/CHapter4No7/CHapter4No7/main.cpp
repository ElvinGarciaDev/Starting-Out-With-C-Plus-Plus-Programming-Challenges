#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int seconds;
    double num_mins;

    //Ask the user to enter a number of seconds.
    cout << "Enter a number of seconds: \n";
    cin >> seconds;

    //Format decimal presicion
    cout << setprecision(2) << fixed;

    if (seconds <= 59)
        cout << seconds << " Is less than 60 seconds. ";
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " Minutes in " << seconds << " seconds " << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
         num_mins = seconds / 3600.0;
         cout << num_mins << " hours in " << seconds << " seconds " << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " Days in " << seconds << " seconds " << endl;
    }


    return 0;
}

/*
Write a program that asks the user to enter a number of seconds.
• There are 60 seconds in a minute. If the number of seconds entered by the user is
greater than or equal to 60, the program should display the number of minutes in
that many seconds.
• There are 3,600 seconds in an hour. If the number of seconds entered by the user is
greater than or equal to 3,600, the program should display the number of hours in
that many seconds.
• There are 86,400 seconds in a day. If the number of seconds entered by the user is
greater than or equal to 86,400, the program should display the number of days in
that many seconds
*/

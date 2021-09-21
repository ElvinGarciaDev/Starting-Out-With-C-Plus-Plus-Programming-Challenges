#include <iostream>
using namespace std;
int main()
{


    int hours_traveled, speed, distance = 0;


    cout << "What is the speed of the vehicle in MPH: ";
    cin >> speed;
    while (cin.fail() || speed <= 0)
    {
        cout << "Input error. Please don't enter a negative number.\n";
        
        cin.clear();
        cin.ignore();
        

        cout << "What is the speed of the vheicle in MPH: ";
        cin >> speed;
        

    }

    cout << "How many hours traveled: ";
    cin >> hours_traveled;
    while (cin.fail()|| hours_traveled < 1)
    {
        cout << "Input error. Please don't enter a number less then 1. \n";
        cin.clear();
        cin.ignore();
        
        cout << "How many hours traveled : ";
        cin >> hours_traveled;
    }


    cout << "Hours \t Distance Traveled" << endl;
    cout << "-------------------------------------" << endl;

    for (int i = 1; i <= hours_traveled; i++)
    {
        distance += speed;        //distance = distance + speed
        cout << i << " \t\t " << distance << endl;

        
        

    }


    return 0;
}


/*

Distance Traveled
The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
120 miles.
Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
many hours it has traveled. The program should then use a loop to display the distance the
vehicle has traveled for each hour of that time period. Here is an example of the output:
What is the speed of the vehicle in mph? 40
How many hours has it traveled? 3
Hour Distance Traveled
--------------------------------
1 40
2 80
3 120
Input Validation: Do not accept a negative number for speed and do not accept any
value less than 1 for time traveled.


*/

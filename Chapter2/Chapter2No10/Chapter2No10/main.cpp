/*
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG  Miles Driven/Gallons of Gas Used
*/

#include <iostream>
using namespace std;


int main()
{


    int gallon = 15;
    int travel = 375;
    int mpg = travel / gallon;

    cout << "A car that holds 15 gallons of gas and that\n"
        << "can travel 375 miles before refuling will\n"
        << "use " << mpg << " miles per gallon " << endl;


}


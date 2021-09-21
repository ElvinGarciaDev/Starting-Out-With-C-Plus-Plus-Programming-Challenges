/*
Write a program that calculates a car's gas mileage. The program should ask the user to enter the number of gallons of gas the car can hold,and
the number of miles that may be driven per gallon of gas.
*/


#include <iostream>
using namespace std;


int main()
{

    double num_of_gallons,
        full_tank_miles,
        MPG;



    cout << "Enter the number of gallons of gas the car can hold " << endl;
    cin >> num_of_gallons;
    cout << "Enter the numbers of miles the car can drive on a full gallon" << endl;
    cin >> full_tank_miles;

    MPG = full_tank_miles / num_of_gallons;

    cout << "The car gets " << MPG << " miles per gallon." << endl;



    return 0;
}

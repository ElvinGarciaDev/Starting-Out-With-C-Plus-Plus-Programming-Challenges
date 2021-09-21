
#include <iostream>
using namespace std;

int main()
{

    //Create variable
    double weight, mass;
    
    //Get user input
    cout << "Enter the the mass amount: ";
    cin >> mass;

    //calculate weight
    weight = mass * 9.8;
    
    // If/else statement
    if (weight >= 1000)
        cout << "This object is too heavy with a weight of " << weight << endl;
    else if (weight <= 10)
        cout << "This object is too light with a weight of " << weight << endl;
    else
        cout << "Neither heavy or light.";
    
    return 0;
}


/*
 Scientists measure an object’s mass in kilograms and its weight in newtons. If you know the amount of mass that an object has, you can calculate its weight, in newtons, with the following formula:
 Weight = mass * 9.8
 Write a program that asks the user to enter an object’s mass, and then calculates and displays its weight. If the object weighs more than 1,000 newtons, display a message indicating that it is too heavy. If the object weighs less than 10 newtons, display a mes- sage indicating that the object is too light.
 */

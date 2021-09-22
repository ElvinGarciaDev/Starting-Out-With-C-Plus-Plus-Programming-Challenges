/*
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
Distance = Number of Gallons * Average Miles per Gallon
*/


#include <iostream>
using namespace std;


int main()
{
    int num_of_gallon = 20;
    double in_town_mpg = 23.5;
    double out_of_town_mpg = 28.9;

    int distance_in_town = num_of_gallon * in_town_mpg;
    int distance_out_town = num_of_gallon * out_of_town_mpg;

    cout << "The distance the car can travel in town on a 20-gallon gas tank is " << distance_in_town << " miles" << endl;
    cout << "The distance the car can travel out of town on a 20-gallon tank is " << distance_out_town << " miles" << endl;


}

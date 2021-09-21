#include <iostream>
using namespace std;
#include "Functions.hpp"
#include <string>


int getNumAccidents(string region)
{
    int accident;

    cout << "Please enter the number of accidents in the " << region << " region: ";
    cin >> accident;
    return inputValidation(accident);

}

double inputValidation(double value)
{
    while (cin.fail() || value < 0)
    {
        cin.clear();
        cin.ignore(5, '\n');
        cout << "Invalid data type. Please don't enter a negative number. Try again: ";
        cin >> value;
    }
    return value;
}

void findLowest(int city1, int city2, int city3, int city4, int city5, string region)
{
    if (city1 > city2 & city1 > city3 & city1 > city4 & city1 > city5)
    {
        cout << "The " << region << " Region had the most accidents with " << city1;
    }
}








 
 /*
  
  Safest Driving Area
  Write a program that determines which of five geographic regions within a major city (north, south, east, west, and central) had the fewest reported automobile accidents last year. It should have the following two functions, which are called by main.
  • int getNumAccidents() is passed the name of a region. It asks the user for the number of automobile accidents reported in that region during the last year, validates the input, then returns it. It should be called once for each city region.
  • void findLowest() is passed the five accident totals. It determines which is the smallest and prints the name of the region, along with its accident figure.
  Input Validation: Do not accept an accident number that is less than 0
  **/



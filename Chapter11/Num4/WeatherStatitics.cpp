#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

struct Weather
{
    double TotalRain;   //Holds the total rainfall
    int HighTemp;       //Holds the high temperature
    int LowTemp;        //Holds the low temperature
    double AverageTemp;
};

void UserInput(Weather array[], int SIZE); //Will ask the user to input month data
void LowestHighest(Weather array[], int SIZE); //Finds the total and highest temp

int main()
{
    const int NUM_MONTHS = 3; //number of months 
    Weather array[NUM_MONTHS]; //Array of 12 structures

    UserInput(array, NUM_MONTHS);

    int lowest; //holds the lowest temp
    int highest; //Holds the highest temp

    lowest = array[0].LowTemp; //Set the first element to the lowest

    for (int i = 0; i < 12; i++)
    {
        if (array[i].LowTemp < lowest)
        {
            lowest = array[i].LowTemp;
        }
    }
    cout << lowest;

    return 0;
}

void UserInput(Weather array[], int SIZE)
{
    //Ask the user to enter the total rainfall, high and low temp for each month
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Please enter the total rainfall for month #" << (i + 1) << ": ";
        cin >> array[i].TotalRain;

        cout << "Please enter the high temperature for month #" << (i + 1) << ": ";
        cin >> array[i].HighTemp;

        cout << "Please enter the lowest temperature for month #" << (i + 1) << ": ";
        cin >> array[i].LowTemp;

        cout << endl;
    }
}
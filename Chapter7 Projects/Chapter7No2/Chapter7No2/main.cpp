#include <iostream>
#include <iomanip>
using namespace std;

//function protorype
double year_total(double m[], double);
double highest(double h[], double);
double lowest(double l[], double);


int main()
{
    const double size = 12; //Number of months
    double months[12]; //Array with 12 elements
    double yearly_total; //to hold the year total rainfall
    double average;      //Monthly average
    double highest_num;  //To hold the highest rain fall for month
    double lowest_num;


    for (int i = 0; i < size; i++)
    {
        cout << "Enter the rainfall for month #" << (i + 1) << ": ";
        cin >> months[i];
    }

    yearly_total = year_total(months, size); //Call the total function
    
    average = yearly_total / 12;            //To get the average devide all the rainfile amount by 12
    
    //This will get the lowest and highest rainfall of a month
    highest_num = highest(months, size);
    lowest_num = lowest(months, size);
    
    cout << fixed << showpoint << setprecision(1);
    
    cout << "The total rain fall for " << size << " months was " << yearly_total << ". The average rainfall per month was " << average << ". The highest rainfall in a month was " << highest_num << ". The lowest rainfall in a month was " << lowest_num << ". \n";
    
    
    return 0;
}

//*********************
//This function calculates the total rainfall
//*********************

double year_total(double m[], double size)
{
    double total = 0; //accumulator
    
    for (int i = 0; i < size; i++)
    {
        total += m[i];
    }
    return total; //returns the total
}

//****************
//This function find the month with the highest rainfall
//****************

double highest(double h[], double size)
{
    double highest;     // variable for the highest
    highest = h[0];     //Set highest to element 0
    
    for (int i = 0; i < size; i++) //Step through the loop
    {
        if (h[i] > highest)
            highest = h[i];
    }
    return highest;
}

//****************
//This function find the month with the lowest rainfall
//****************

double lowest(double l[], double size)
{
    int smallest;     //To hold the smallest array
    smallest = l[0]; //Get the  array's first element.

    for (int i = 0; i < size; i++) //Step through the array when a lower value is found assign it to the smallest
    {
        if (l[i] < smallest)
            smallest = l[i];
    }
    return smallest; //returns the smallest.
}




/*
Write a program that lets the user enter the total rainfall for each of 12 months into
an array of doubles. The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.
Input Validation: Do not accept negative numbers for monthly rainfall figures.
*/

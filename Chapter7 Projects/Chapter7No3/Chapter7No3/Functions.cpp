#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


//********************************
//This function will get the user input for jars sold.
//********************************

void sold(const string salsa[], int sold[], const int size) //This function takes two different arrays.
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number of jars sold for " << salsa[i] << " salsa: ";
        cin >> sold[i]; //Saves the user input to second array.
        sold[i] = inputValidation(sold[i]); //Calling the inputValidation function to test the user input
    }
}



//********************************
//This function will test the user input
//********************************

int inputValidation(int user_input)
{
    while (cin.fail() || user_input < 0)
    {
        cin.clear(); //Restes cin.fail
        cin.ignore(5, '\n');
        cout << "Invalid data type. Please don't enter a number less than 0. Try again here: ";
        cin >> user_input;
    }
    return user_input;
}



//*********************************
//This funcion will display the jars sold for each salsa type
//*********************************

void displaysales(const string salsa[], int sold[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Sales for " << salsa[i] << " salsa = " << sold[i] << " jars " << endl;
    }
}



//*****************************
//This function gets the total number of jars sold.
//*****************************

int total_sold(int s[], int size)
{
    int jar_sold = 0; //acculumator

    for (int i = 0; i < size; i++)
    {
        jar_sold += s[i];
    }
    cout << "The total amount of jars sold were " << jar_sold << endl;
    return jar_sold;
}



//*********************************
//This funcion will get the best selling product.
//*********************************

int best_s(int best_sold[], string salsa[], int size)
{
    int best_selling = 0;
    best_selling = best_sold[0]; //set the first index to the best selling.
    string best_name = salsa[0]; //need this so we can figure out the lowest sold for salsa type.

    for (int i = 0; i < size; i++)
    {
        if (best_sold[i] > best_selling)
        {
            best_selling = best_sold[i];
            best_name = salsa[i];
        }
    }
    cout << "The salsa with the most sold jars was " << best_name << " with a total of " << best_selling << " jars sold. \n";
    return best_selling;
}



//*********************************
//This funcion will get the lowest selling product.
//*********************************

int lowest_s(int low_sold[], string salsa[], int size)
{
    int lowest_sold = 0;
    lowest_sold = low_sold[0]; //set the first index to the best selling.
    string lowest_name = salsa[0]; //need this so we can figure out the lowest sold for salsa type.

        for (int i = 0; i < size; i++)
        {
            if (low_sold[i] < lowest_sold)
            {
                lowest_sold = low_sold[i];
                lowest_name = salsa[i];
            }
        }
        cout << "The salsa with the lowest jars sold was " << lowest_name << " with a total of " << lowest_sold << " jars sold. \n";
        return lowest_sold;
}

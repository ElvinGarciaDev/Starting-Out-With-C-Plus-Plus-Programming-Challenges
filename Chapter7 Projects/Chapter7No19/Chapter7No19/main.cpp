#include <iostream>
#include <ctime> //time(NULL)
#include <cstdlib> //rand(), sdrand()
using namespace std;
#include "Header.h"


int main()
{
    int total; //This will hold the total value in the array
    int lowest; //To hold the lowest in a row
    int highest; //to hold the highest in a row
    int average; //to hold the array average
    int total_row; //To hold the total of a row.
    int total_colmn; //to hold the total of a colmn

    int myTwodim[rows][colmns]; //Creating a 2d array and adding the const variable for row and colmns

    srand(time(NULL));//so we don't get the same random numbers
    populateArray(myTwodim); //Calling the populate function
    displayArray(myTwodim); //Display the array
    cout << endl; //Formatting
    total = getTotal(myTwodim); //Displays the total values of the array
    cout << "\nThe total value of all the number in the array is " << total << endl;
    average = getAverage(myTwodim); //Will get the average of array
    cout << "The average value of the array is " << average << endl;
    cout << endl;


    lowest = getLowestInRow(myTwodim, 2); //Get the lowest value in a row
    highest = getHighesttInRow(myTwodim, 1); //This will get the highest in a row
    cout << endl;
    
    //FUnctions to get the total of a row and colmn
    total_row = getRowTotal(myTwodim, 1);
    total_colmn = getColmnTotal(myTwodim, 1);
    cout << endl;

    return 0;
}


/*
 19. 2D Array Operations
 Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:
 • getTotal. This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
 • getAverage. This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
 • getRowTotal. This function should accept a two-dimensional array as its first argu- ment and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the total of the values in the specified row.
 • getColumnTotal. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified column.
 • getHighestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of the array.
 • getLowestInRow. This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the lowest value in the specified row of the array.
 Demonstrate each of the functions in this program.
 */

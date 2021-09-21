#include <iostream>
#include <ctime> //time(NULL)
#include <cstdlib> //rand(), sdrand()
using namespace std;
#include "Header.h"



//**********************************
//This function will populate the array with a random number
//**********************************
void populateArray(int array[rows][colmns])
{
    for (int r = 0; r < rows; r++) //this will go through the rows
    {
        for (int c = 0; c < colmns; c++)
        {
            array[r][c] = rand() % 1000 + 1; //this will populate randome values in the array.
        }
    }
}



//******************************
//This function will display the array
//******************************
void displayArray(int array[rows][colmns])
{
    for (int r = 0; r < rows; r++) //Go through the rows of the array
    {
        cout << "\nRow #" << r; //print the rows

        for (int c = 0; c < colmns; c++)
        {
            cout << "\nThe value in colmn " << c << ": " << array[r][c];
        }
    }
}



//******************************
//This function will get the total value in the array
//******************************

int getTotal(int array[rows][colmns])
{
    int total_value = 0; //accumulator

    for (int r = 0; r < rows; r++) //this will go through the rows
    {
        for (int c = 0; c < colmns; c++)
        {
            total_value += array[r][c];
        }
    }
    return total_value;
}



//******************************
//This function will get the average
//******************************

int getAverage(int array[rows][colmns])
{
    return getTotal(array) / (rows * colmns);
}



//******************************
//This function will get the lowest out of a specified row you enter
//******************************

int getLowestInRow(int array[rows][colmns], int selectRow) //The int row argument will take a specified row in the array
{
    int getlowest = array[selectRow][0]; //setting index row you select colmn 0;

    for (int c = 1; c < colmns; c++) //going through the colmn values to compare
    {
        if (getlowest > array[selectRow][c]) // assuming index [][0]
            getlowest = array[selectRow][c];
    }
    cout << "\nThe lowest number in row #" << selectRow << " is " << getlowest;
    return getlowest;
}



//******************************
//This function will get the highest out of a specified row you enter
//******************************

int getHighesttInRow(int array[rows][colmns], int selectRow) //The int row argument will take a specified row in the array
{
    int gethighest = array[selectRow][0]; //setting index to 0

    for (int c = 1; c < colmns; c++)
    {
        if (gethighest < array[selectRow][c])
            gethighest = array[selectRow][c];
    }
    cout << "\nThe highest number in row #" << selectRow << " is " << gethighest;
    return gethighest;
}



//******************************
//This function will sum all values in a row you select
//******************************
int getRowTotal(int array[rows][colmns], int selectRow)
{
    int total;

    total = 0; //accumulator
    {
        for (int c = 0; c < colmns; c++)    //It has to go through all the colmns to find the highest of all rows
            total += array[selectRow][c];
    }
    cout << "\nThe total value of row #" << selectRow << " is " << total << endl;
    return total;
}


//******************************
//This function will sum all values in a colmn you select
//******************************
int getColmnTotal(int array[rows][colmns], int selectColmn)
{
    int total;

    total = 0; //accumulator
    {
        for (int r = 0; r < rows; r++) //It has to go through all the rows to find the greatest value in colmn
            total += array[r][selectColmn];
    }
    cout << "The total value of colmn #" << selectColmn << " is " << total << endl;
    return total;
}

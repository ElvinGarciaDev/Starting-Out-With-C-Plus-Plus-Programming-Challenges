#pragma once
//Global constants
const int rows = 3;
const int colmns = 4;

//Function prototype
void populateArray(int array[rows][colmns]); //This will populate the array
void displayArray(int array[rows][colmns]); //This will display the array
int getTotal(int array[rows][colmns]);        //This will get the total values in the array
int getAverage(int array[rows][colmns]);       //This eill get the average
int getLowestInRow(int array[rows][colmns], int selectRow); //this function will get the lowest number in row you specifiy.
int getHighesttInRow(int array[rows][colmns], int selectRow);
int getRowTotal(int array[rows][colmns], int selectRow); //This function will add the value of a whole row
int getColmnTotal(int array[rows][colmns], int selectColmn); //This function will add the value of a whole colmn




#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//functions
int lowest(vector<int>);
int highest(vector<int>);
int average(vector<int>);

int main()
{
    string file; //get user input
    int lowestValue;
    int highestValue;
    int averageValue;

    //Vetor that will be used to store numbers in the file
    vector<int> numbers;

    //Get the user input using the getline.
    cout << "Enter the file you want to open: ";
    getline(cin, file);

    fstream myFile; //Create an object
    myFile.open(file, ios::in); //Open the file and use the in mode to read from it.

    //Make sure the file is open
    if (myFile.is_open())
        {
            // cout << "Valid file." << endl;
            //Variable to store the numbers in the file
            int file_number;

            //This look will go through all the lines and store the number in the variable you created. I will then use push_back member function to add the value to the numbers vector.
            while(myFile >> file_number)
                numbers.push_back(file_number);

            myFile.close();
        }

        //Call the lowest functuon to find the smallest value
        lowestValue = lowest(numbers);
        cout << "The smallest value in the file is " << lowestValue << endl;

        //Call the highets function
        highestValue = highest(numbers);
        cout << "The highest value in the file is " << highestValue << endl;

        //Finds the total numbers in the vector
        cout << "There are " << numbers.size() << " numbers in this vector " << endl;

       //find the average
       averageValue = average(numbers);
       cout << "The average in the vector is " << averageValue << endl;

    return 0;
}

//***************
//Finds the lowest
//***************
int lowest(vector<int> vect)
{
    int lowest = vect[0];

    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] < lowest)
            lowest = vect[i];
    }
    return lowest;
}

//***************
//Finds the lowest
//***************
int highest(vector<int> vect)
{
    int highest = vect[0];

    for (int i = 0; i < vect.size(); i++)
    {
        if (vect[i] > highest)
            highest = vect[i];
    }
    return highest;
}

//***************
//Finds the lowest
//***************

int average(vector<int> vect)
{
    int total = 0; //accumulator
    int average;   //to hold the average

    for (int i = 0; i < vect.size(); i++)
    {
        total += vect[i]; //Total = total + value in element 0.
    }
    average = total / vect.size();

    return average;

}



//Number Analysis Program
//Write a program that asks the user for a file name. Assume the file contains a series of numbers, each written on a separate line. The program should read the contents of the file into an array and then display the following data:
//• The lowest number in the array
//• The highest number in the array
//• The total of the numbers in the array
//• The average of the numbers in the array

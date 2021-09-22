#include <iostream>
using namespace std;

//Function prototype
int getSmallest(int v[], int);
int getLargest(int v[], int);


int main()
{
    const int max = 10;       //Array size
    int values[max];
    int lowest_number;        //This gets the smallest number
    int largest_number;       //get's the biggest number.

    //Explain the program.
    cout << "This program will ask for 10 numbers. It will store them in an array and find the smallest and largest number. Press enter to continue. ";
        cin.get(); //Will allow the user to press enter

    //this will ask the client to fill out the array
      for (int i = 0; i < max; i++)
  {
      cout << "Enter a value for #" << (i + 1) << ": ";
      cin >> values[i];
  }

      //Run the getSmallest function.
      lowest_number = getSmallest(values, max);

      //Run the GetLargest function
      largest_number = getLargest(values, max);

      cout << "The smallest number you entered was " << lowest_number << " and the largest number you entered was " << largest_number;
     
    return 0;
}


//**************************************
//This function gets the smallest number in the array.
//*************************************

int getSmallest(int v[], int size)
{
    int smallest;     //To hold the smallest array
    smallest = v[0]; //Get the  array's first element.

    for (int i = 0; i < size; i++) //Step through the array when a lower value is found assign it to the smallest
    {
        if (v[i] < smallest)
            smallest = v[i];
    }
    return smallest; //returns the smallest.
}

//*********************************
// This function gets the biggest number
//*********************************

int getLargest(int v[], int size)
{
    int largest; //To hold the largest array
    largest = v[0]; //get the  arrays first element.

    for (int i = 0; i < size; i++) //Step through the array and when it finds the largest number assign it to largest.
    {
        if (v[i] > largest)
            largest = v[i];
    }
    return largest; // return the largest value

    cout << "This shit is great ; << endl;
}


/*
Largest/Smallest Array Values
Write a program that lets the user enter 10 values into an array. The program should
then display the largest and smallest values stored in the array.
*/


#include <iostream>
#include <string>
using namespace std;

//Function prototype
void SelectionSort(string array[], int);

int main()
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
    "Taylor, Terri", "Johnson, Jill",
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
    "James, Jean", "Weaver, Jim", "Pore, Bob",
    "Rutherford, Greg", "Javens, Renee",
    "Harrison, Rose", "Setzer, Cathy",
    "Pike, Gordon", "Holland, Beth" };

    SelectionSort(names, NUM_NAMES);

    for (int i = 0; i < NUM_NAMES; i++)
        cout << names[i] << " " << endl;

    


    return 0;
}

//******************
//Selection sort function
//******************
void SelectionSort(string array[], int size)
{
    string lowest; //To hold the value of the smallest
    int LowestIndex; //To hold the index of the smallest

    for (int i = 0; i < size - 1; i++)
    {
        lowest = array[i]; //Set the first element to the smallest
        LowestIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < lowest)
            {
                lowest = array[j];
                LowestIndex = j;
            }
        }
        array[LowestIndex] = array[i];
        array[i] = lowest;
    }
}


/*
String Selection Sort
Modify the selectionSort function presented in this chapter so it sorts an array
of strings instead of an array of int s. Test the function with a driver program. Use
Program 8-8 as a skeleton to complete.

*/

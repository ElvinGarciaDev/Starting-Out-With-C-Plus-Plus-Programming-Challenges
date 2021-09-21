#include <iostream>
using namespace std;
#include "Header.h"


//***********************************************************
// Definition of function Bubblesort *
// This function performs an ascending order bubble sort on *
// array. size is the number of elements in the array. *
//***********************************************************

void BubbleSort(int Array[], int size, int &number_of_exchanges)
{
    bool swapflag;
    int temp;
    
    do
    {
        swapflag = false; //This flag will turn to true if any swaps are done. If no swaps are done then the array it's already sorted.
        
        for (int i = 0; i < size - 1; i++) //size - 1 because the elements start at 0
        {
            if (Array[i] > Array[i + 1])
            {
                temp = Array[i]; //If array[i] is greater than array[i + 1], the two elements must be exchanged.
                Array[i] = Array[i + 1];
                Array[i + 1] = temp; 
                swapflag = true; //If a swap was made this will switch to true.
                number_of_exchanges++;
            }
        }
        
    }while (swapflag); //This will rerun if the swapflag was turned true. Means a swap was made.
}


//**************************************************************
// Definition of function selectionSort. *
// This function performs an ascending order selection sort on *
// array. size is the number of elements in the array. *
//**************************************************************

void selectionSort(int Array[], int size, int &number_of_exchanges)
{
    int smallest; //to hold the smallest value we find when stepping through the array
    int smallestIndex;  //to hold the index of the smallest value we find.
    
    for (int i = 0; i < size - 1; i++)
    {
        smallest = Array[i]; //set the first element = to smallest
        smallestIndex = i;   //Set the index
        
        //inner loop that goes through the array
        for (int j = i + 1; j < size; j++)
        {
            if (Array[j] < smallest)
            {
                smallest = Array[j];
                smallestIndex = j;
                number_of_exchanges++;
            }
        }
        Array[smallestIndex] = Array[i];
        Array[i] = smallest;
    }
}


//*************************************************************
// Definition of function showArray. *
// This function displays the contents of array. size is the *
// number of elements. *
//*************************************************************

void showArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
        cout << endl;
}

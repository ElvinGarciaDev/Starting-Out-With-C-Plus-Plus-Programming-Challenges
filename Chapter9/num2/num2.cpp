#include <iostream>
using namespace std;

//Functions
int validation(int num);
void FillArray(int *array, int size);
void SelectionSort(int *array, int size);
int *Average(int *array, int size);

int main()
{
    int size; //lets the user select the size of array
    int *arrayPTR = nullptr; //Create a pointer and set it null.
    int *AveragePTR; //will hold the average

    cout << "Enter array size: ";
    cin >> size;

    arrayPTR = new int[size]; //use the new operation to create array. Set pointer to equal array.

    //Fill the array
    FillArray(arrayPTR, size);

    //Find the average
    AveragePTR = Average(arrayPTR, size);

    cout << endl;

    cout << "Array before sorted "; 
    for (int i = 0;  i < size; i++)
        cout << *(arrayPTR + i) << " ";
    
    cout << endl;

    //Sort the array
    SelectionSort(arrayPTR, size); //Call the SelectionSort function to sort the array.
    cout << "Array after sort ";
    for (int i = 0;  i < size; i++)
        cout << *(arrayPTR + i) << " ";

    cout << endl;

    //print the average
    cout << "The average = " << *AveragePTR << endl;
   
    cout << "\nDeleting Dynamic memory. ";
    delete [] arrayPTR;
    arrayPTR = nullptr;

    return 0;
}

//***********
//Input validation
//***********
int validation(int num)
{
    while (cin.fail() || num < 0)
    {
        cin.clear(); //Resets the bool for cin.fail()
        cin.ignore(5, '\n');
        cout << "Invalid score. Try again: ";
        cin >> num;
    }
    return num;
}

//***********
//Fill the array
//***********
void FillArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score for student #" << (i + 1) << ": ";
        cin >> *(array + i); // Ask the user to input scores and store them in the array. 

        *(array + i) = validation( *(array + i)); //Check the input by calling the validation function. 
    }
}

//***********
//Sort the array
//***********
void SelectionSort(int *array, int size)
{
    int Smallest; //to hold the smallest number
    int SmallestIndex; //holds the potion of the smallest 

    for (int i = 0; i < (size - 1); i++)
    {
        Smallest = *(array + i); //set the first ellement to the smallest
        SmallestIndex = i; //holds the index of smallest

        //inner loop
        for (int j = i + 1; j < size; j++)
        {
            if (*(array + j) < Smallest)
            {
                Smallest = *(array + j);
                SmallestIndex = j;
            }
        }
        *(array + SmallestIndex) = *(array + i);
        *(array + i) = Smallest;
    }
}

//***********
//Find the average
//***********
int *Average(int *array, int size)
{
    int sum; //hold the sum
    int *average = new int; //pointer that will point to the average

    //loop finds the sum and holds it in variable sum.
    for (int i = 0; i < size; i++)
        sum += *(array + i); 
    *average = sum / size; //Calculation to get the average. Find the sum and devide by numbers in the array.

    return average;
}

/*
Test Scores #1
Write a program that dynamically allocates an array large enough to hold a user-defined
number of test scores. Once all the scores are entered, the array should be
passed to a function that sorts them in ascending order. Another function should be called that calculates the average score. The program should display the sorted list of
scores and averages with appropriate headings. Use pointer notation rather than array
notation whenever possible.
Input Validation: Do not accept negative numbers for test scores.
*/
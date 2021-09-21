#include <iostream>
using namespace std;
#include "Header.h"

int main()
{
    int number_of_exchanges1 = 0;
    // First array of unsorted values
    int array_1[SIZE] = {64, 24, 4, 21, 13, 1, 20, 42, 54, 65, 28, 27, 52, 36, 33, 63, 23, 19, 18, 29};
    
    //second array of unsorted values
    int array_2[SIZE] = {1, 3, 2, 4, 5, 7, 6, 8, 19, 9, 10, 12, 11, 15, 16, 18, 20, 13, 14, 17};
    
    //display the first array unsorted
    cout << "\t\t\t\t 1st array Unsorted \n";
    showArray(array_1, SIZE);
    //sort the array
    BubbleSort(array_1, SIZE, number_of_exchanges1);
    //display the first array sorted
    cout << "\t\t\t\t 1st array Sorted \n";
    showArray(array_1, SIZE);
    cout << "\nNumber of exchanges = " << number_of_exchanges1 << endl;
    
    //formatting
    cout << endl;
    
    int number_of_exchanges2 = 0;
    //display the second array unsorted
    cout << "\t\t\t\t 2nd array Unsorted \n";
    showArray(array_2, SIZE);
    //Sort the second array
    selectionSort(array_2, SIZE, number_of_exchanges2);
    //Display the second array sorted
    cout << "\t\t\t\t 2nd array Sorted \n";
    showArray(array_2, SIZE);
    cout << "\nNumber of exchanges = " << number_of_exchanges2 << endl;
    
    return 0;
}


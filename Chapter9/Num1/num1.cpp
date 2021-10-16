#include <iostream>
using namespace std;

//Functions
int *array(int);

int main()
{
    int size;
    cout << "Entre array size: ";
    cin >> size;

    int *numbers = array(size); //Create a pointer and set it to take the value retunred from function array. 

    //Extra work to mke sure it worked. FIll the array
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << ": ";
        cin >> *(numbers + i);
    }
    //Extra work to make sur it worked. Display the array
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << ": = " << *(numbers + i) << endl;
    }

    return 0;
}

int *array(int size)
{
    return new int[size]; 

  //  int *ptr;
 // ptr = new int [size]; we could also do this. But the program asked us for the fist one. 
}


/*
Array Allocator
Write a function that dynamically allocates an array of integers. The function should
accept an integer argument indicating the number of elements to allocate. The function
should return a pointer to the array.
*/

#include <iostream>
#include <vector>
using namespace std;
#include <cstdlib> //has a swap command that let's us swap


//function delecration
void selectionSort(vector<int> &);
int binarySearch(vector<int>, int);
int validation(int userInput);



int main()
{
    //Vector holding the values
    vector<int> list = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                         8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                         1005231, 6545231, 3852085, 7576651, 7881200, 4581002,};

    //Below i am using selection sort to sort the vector.
    selectionSort(list);


    //To hold the value the user will search
    int userSearch;
    cout << "Enter the value you want to search for: ";
    cin >> userSearch;
    userSearch = validation(userSearch); //userinput validation function


    //call the function
    int result;
    result = binarySearch(list, userSearch);

    if (result == -1)
    {
        cout << "The value you entered is not a value in this list. \n";
    }
    else
        cout << "The value " << userSearch << " was found at element with index " << result << endl;

    return 0;
}


//**********************************
//This function uses selecting sort
//**********************************

void selectionSort(vector<int> &list)
{
    for (int i = 0; i < list.size() - 1; i++) //First loop that goes theough vector
    {
        int smallest = list[i]; //This holds the smallest value.
        int smallestIndex = i; //Holds the smallest index

        for (int j = i + 1; j < list.size(); j++) //Second lopop used to compare values in loop. First time compares element 0 to second element
        {
            if (list[j] < smallest)              //If the second element is less it will store it in the smallest variable.
            {
                smallest = list[j];              //Goes through the loop and selects the smallest value
                smallestIndex = j;
            }
        }
        swap(list[i], list[smallestIndex]); //This is where the swap happens
    }
}



//**********************************
//This function uses binary search
//**********************************

int binarySearch(vector<int> vect, int search)
{
    int left = 0; //Lets start at element 0
    int right = vect.size() - 1; //Lets get the last element in the vector]
    int mid;                    //We will need the mid point.

    while (left <= right)
    {
        mid = (left + right) / 2; //This to calculate the mid point

        if (vect[mid] == search)
            return mid;
        else if (search > vect[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

//**********************************
//This function is for input validation
//**********************************

int validation(int userInput)
{
    while (cin.fail())
    {
        cin.clear(); //resets the input buffer
        cin.ignore(100, '\n');

        cout << "Please enter a valid number. \n";
        cin >> userInput;
    }
    return userInput;
}



/*
4. Charge Account Validation Modification
Modify the program you wrote for Problem 1 (Charge Account Validation) so it performs
a binary search to locate valid account numbers. Use the selection sort algorithm
to sort the array before the binary search is performed.
*/
//In order to use Binarysearch the vector needs to be sorted. 

#include <iostream>
#include <vector>
using namespace std;
#include <cstdlib>

//FUnction prototype
void selectionSort(vector<int> &);
void display(vector<int> &);
int linearSearch(vector<int> &, int, int &);
int binarySearch(vector<int> &, int, int &);


int main()
{
    vector<int> values = { 48, 31, 9, 18, 19, 37, 38, 21, 11, 28, 10, 5, 23, 27, 4, 26, 36, 42, 47, 2 };
    int search, linear_result, binary_result; //value user will search for
    int accululator1 = 0, accululator2 = 0;
     
    //Call the sort function
    selectionSort(values);

    //Display the vector sorted
    display(values);

    cout << "\nEnter the number you want to search for: ";
    cin >> search;

    //Call the search function
    linear_result = linearSearch(values, search, accululator1);
    if (linear_result == -1)
        cout << "Sorry the value you searched for is not in this list. \n";
    else
        cout << "The value " << search << " is located at index " << linear_result << ". and the number of exchanges is " << accululator1 << endl;
        
    cout << endl;

    //Call the binary search
    binary_result = binarySearch(values, search, accululator2);
    if (binary_result == -1)
        cout << "Sorry the value you searched for is not in this list. \n";
    else
        cout << "The value " << search << " is located at index " << binary_result << ". and the number of exchanges is " << accululator2 << endl;


    return 0;
}

//******************************
//This function sorts the vector
//******************************

void selectionSort(vector<int>& vect)
{

        for (int i = 0; i < vect.size() - 1; i++) //First loop that goes theough vector
        {
            int lowestValue = vect[i]; //This holds the smallest value.
            int lowestIndex = i; //Holds the smallest index      //Element locaiton

            for (int j = i + 1; j < vect.size(); j++)
            {
                if (vect[j] < lowestValue)
                {
                    lowestValue = vect[j];
                    lowestIndex = j;
                }
            }
            swap(vect[i], vect[lowestIndex]); //This is where the swap happens
        }
}

//******************************
//This function displays the vector
//******************************

void display(vector<int> &vect)
{
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
}

//******************************
//This function uses linear search
//******************************

int linearSearch(vector<int>& vect, int searchValue, int& number_of_exchanges)
{

    for (int i = 0; i < vect.size(); i++)
    {
        if (searchValue == vect[i])
        {
            return i;
        }
        number_of_exchanges++;
    }
    return -1;
}
   
//******************************
//This function uses binary search
//******************************

int binarySearch(vector<int>& vect, int searchValue, int& number_of_exchanges)
{
    int left = 0; //Start at the very first element.
    int right = vect.size() - 1; //stop at the very last element.
    int mid;                     //This is the mid point

    while (left <= right)
    {
            mid = (right + left) / 2; //Calculations to get the mid point

            if (vect[mid] == searchValue)
                return mid;
            else if (searchValue < vect[mid])
                right = mid - 1; //If the value is less than mid then we need to move the space to the left
            else if (searchValue > vect[mid])
                left = mid + 1; //if the vlaue is greater the mid. We need to move the spasce to the right
            number_of_exchanges++;
    }
    return -1;
}



/*

Write a program that has an array of at least 20 integers. It should call a function that
uses the linear search algorithm to locate one of the values. The function should keep
a count of the number of comparisons it makes until it finds the value. The program
then should call a function that uses the binary search algorithm to locate the same
value. It should also keep count of the number of comparisons it makes. Display these
values on the screen.
*/

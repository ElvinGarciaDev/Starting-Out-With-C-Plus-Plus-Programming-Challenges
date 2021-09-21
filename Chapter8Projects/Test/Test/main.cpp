#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib> //has a swap command that let's us swap
using namespace std;

void selectionSort(vector<int> &, vector<string> &);

int main ()
{
    int user_input;

     vector <int> rainfall;
     vector <string> months= {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    //Populate the vector
    for (int i = 0; i < 12; i++)
    {
        cout << "Please enter the total rainfall for the month " << months[i] << " : ";
        cin >> user_input;
        rainfall.push_back(user_input);
    }
    
    cout << "Before the sort \n" << endl;
    //before the sort
    for (int i = 0; i < 12; i++)
        cout << months[i] << " " << rainfall[i] << endl;
    
    cout << endl;
    
    cout << "After the sort \n";
    //sort the array
    selectionSort(rainfall, months);
    for (int i = 0; i < 12; i++)
        cout << months[i] << " " << rainfall[i] << endl;
    
    return 0;
}

//*****************
// This function sorts the vector
//*****************


void selectionSort(vector<int> &values, vector<string> &months)
{
    for (int i = 0; i < values.size() - 1; i++) //First loop that goes theough vector
    {
        int largest = values[i]; //This holds the smallest value.
        int largestIndex = i; //Holds the smallest index

        for (int j = i + 1; j < values.size(); j++) //Second lopop used to compare values in loop. First time compares element 0 to second element
        {
            if (values[j] > largest)              //If the second element is less it will store it in the smallest variable.
            {
                largest = values[j];
                largestIndex = j;
            }
        }
        swap(values[i], values[largestIndex]); //This is where the swap happens
        swap(months[i], months[largestIndex]); //This is where the swap happens for the months
    }
}

/*
5. Rainfall Statistics Modification
Modify the Rainfall Statistics program you wrote for Programming Challenge 2 of Chapter 7. The program should display a list of months, sorted in order of rainfall, from highest to lowest.
*/

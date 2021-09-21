#include <iostream>
#include <vector>
using namespace std;

//function delecration
int searchValue(vector<int>, int);
int validation(int userInput);


int main()
{
    //Vector holding the values
    vector<int> list = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                         8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                         1005231, 6545231, 3852085, 7576651, 7881200, 4581002,
                                                                             };
    //To hold the value the user will search
    int userSearch;
    cout << "Enter the value you want to search for: ";
    cin >> userSearch;
    userSearch = validation(userSearch); //userinput validation function

    int result;
    //call the function
    result = searchValue(list, userSearch);

    if (result == -1)
    {
        cout << "The value you entered is not a value in this list. \n";
    }
    else
        cout << "The value " << userSearch << " was found at element with index " << result << endl;

        
    
    return 0;
}

//**********************************
//This function uses linear search
//**********************************

int searchValue(vector<int> vect, int search)
{
    for (int i = 0; i < vect.size(); i++)
    {
        if (search == vect[i] )
        {
            return i;
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
1. Charge Account Validation
Write a program that lets the user enter a charge account number. The program should
determine if the number is valid by checking for it in the following list:
5658845 4520125 7895122 8777541 8451277 1302850
8080152 4562555 5552012 5050552 7825877 1250255
1005231 6545231 3852085 7576651 7881200 4581002
The list of numbers above should be initialized in a single-dimensional array. A simple
linear search should be used to locate the number entered by the user. If the user enters
a number that is in the array, the program should display a message saying that the
number is valid. If the user enters a number that is not in the array, the program should
display a message indicating that the number is invalid.
*/


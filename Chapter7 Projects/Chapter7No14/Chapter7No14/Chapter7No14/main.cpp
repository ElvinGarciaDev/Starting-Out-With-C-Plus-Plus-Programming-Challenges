#include <iostream>
using namespace std;
#include <cstdlib> //for rand()
#include <ctime> //for time()

//Function decleration
void UserInput(int Array[], int);
void result(int Array[], int UserArray[], int&, int);


//Global variable
int size = 5;

int main()
{
    //Variable to hold machtine
    int match = 0;

    //Array holding winning numbers
    int lottery[size];

    //Array holding user numnbers
    int UserNum[size];

    //Genertaes random number and adds it to lottery array
    srand(time(NULL));
    for(int i = 0; i < size; i++)
    lottery[i] = (rand()%9 + 1);

    //Display thr lottery array
    for(int i = 0; i < size; i++)
    cout << lottery[i] << " ";

    cout << endl;

    //Get the user # and store them in the array
    UserInput(UserNum, size);

    //Find any matching #
    result(lottery, UserNum, match, size);
    if(match == 5)
    {
        cout << "Congrats all the numbers match. ";
    }
    else
    cout << "Only " << match << " numbers matched ";

    return 0;
}

//**************************
//Function gets user numbers
//**************************

void UserInput(int Array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Please enter #" << (i + 1) << ": ";
        cin >> Array[i];
    }
}

//**************************
//Function find mach #
//**************************
void result(int Array[],int UserArray[], int &matching, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(Array[i] == UserArray[i])
        matching++;
    }
}


/*
14. Lottery Application
Write a program that simulates a lottery.
The program should have an array of five integers named lottery and should generate a random number in the range of 0 through 9 for each element in the array.
The user should enter five digits, which should be stored in an integer array named user.
The program is to compare the correspond- ing elements in the two arrays and keep a count of the digits that match.
For example, the following shows the lottery array and the user array with sample numbers stored in each. There are two matching digits (elements 2 and 4).

Lottery array:
74913
user array:
42973

The program should display the random numbers stored in the lottery array and the number of matching digits.
If all of the digits match, display a message proclaiming the user as a grand prize winner.
*/

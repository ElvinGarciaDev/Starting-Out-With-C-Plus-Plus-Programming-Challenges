#include <iostream>
#include <vector>
using namespace std;

//Functions decleration
int linearSearch(vector <int>, int);
int validation(int);


int main()
{
    vector<int> luckyNums = { 13579, 26791, 26792, 33445, 55555,
                             62483, 77777, 79422, 85647, 93121
                                                              };
    int weekWinner; //this holds the weeks wining number
    cout << "Please enter this weeks winning number: ";
    cin >> weekWinner;
    weekWinner = validation(weekWinner);


    //Calling the linear function to see if you win
    int result;
    result = linearSearch(luckyNums, weekWinner);
    if (result == -1)
    {
        cout << "Sorry, but you did not win this week. \n";
    }
    else
        cout << "Congrats lucky number this weeks winner is located in element with index " << result << endl;

    return 0;
}

//*********************
//Functions uses linear search
//*********************

int linearSearch(vector<int> vect, int search)
{
    for (int i = 0; i < vect.size(); i++)
    {
        if (search == vect[i])
        {
            return i;
        }
    }
    return -1;
}


//*********************
//Functions checks user validation
//*********************

int validation(int userInput)
{
    while (cin.fail())
    {
        cin.clear(); //Clears cin.fail()
        cin.ignore(100, '\n'); //Clears buffer

        cout << "Please enter a valid input \n";
        cin >> userInput;
    }
    return userInput;
}

/*
2. Lottery Winners
A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit
“lucky” combinations. Write a program that initializes an array or a vector with
these numbers and then lets the player enter this week’s winning 5-digit number.
The program should perform a linear search through the list of the player’s numbers
and report whether or not one of the tickets is a winner this week. Here are the
numbers:
13579 26791 26792 33445 55555
62483 77777 79422 85647 93121
*/

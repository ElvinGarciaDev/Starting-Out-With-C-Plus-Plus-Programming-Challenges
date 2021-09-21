#include <iostream>
#include <vector>
using namespace std;

//Functions decleration
int binarySearch(vector <int>, int);
int validation(int);


int main()
{
    vector<int> luckyNums = { 13579, 26791, 26792, 33445, 55555,
                             62483, 77777, 79422, 85647, 93121};

    int weekWinner; //this holds the weeks wining number
    cout << "Please enter this weeks winning number: ";
    cin >> weekWinner;
    weekWinner = validation(weekWinner);


    //Calling the binary function to see if you win
    int result;
    result = binarySearch(luckyNums, weekWinner);
    if (result == -1)
    {
        cout << "Sorry, but you did not win this week. \n";
    }
    else
        cout << "Congrats lucky number this weeks winner is located in element with index " << result << endl;

    return 0;
}

//*********************
//Functions uses binary search
//*********************

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
3. Lottery Winners Modification
Modify the program you wrote for Programming Challenge 2 (Lottery Winners) so it
performs a binary search instead of a linear search.

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

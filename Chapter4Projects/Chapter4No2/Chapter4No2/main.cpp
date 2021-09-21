/*
Write a program that asks the user to enter a number within the range of 1 through 10.
Use a switch statement to display the Roman numeral version of that number.
Input validation: Do now acept a number less than 1 or greater than 10.
*/

#include <iostream>
using namespace std;

int main()
{

    //Great choice variable
    int choice;

    //Ask the user to enter a number
    cout << "Enter a number between 1 and 10: ";
    cin >> choice;

    while(cin.fail()) //// fail has two values 0 == FALSE or 1 == TRUE
        // TRUE will run this block, meaning there is an error in the input stream
        // most likely not a number!
    {
        cout << "You must enter a number\n";
        cin.clear();   //Clears input user entered
        cin.ignore();

        cout << "Enter a number between 1 and 10: ";
        cin >> choice;
        
    }

    {
        switch (choice)
        {
        case 1: cout << "The roman numeral for 1 is I.\n";
            break;
        case 2: cout << "The roman numeral for 2 is II.\n";
            break;
        case 3: cout << "The roman numeral for 3 is III.\n";
            break;
        case 4: cout << "The roman numeral for 4 is IV.\n";
            break;
        case 5: cout << "The roman numeral for 5 is V.\n";
            break;
        case 6: cout << "The roman numeral for 6 is VI.\n";
            break;
        case 7: cout << "The roman numeral for 7 is VII.\n";
            break;
        case 8: cout << "The roman numeral for 8 is VIII.\n";
            break;
        case 9: cout << "The roman numeral for 9 is IX.\n";
            break;
        case 10: cout << "The roman numeral for 10 is X.\n";
            break;
        default: cout << "You did not enter a number between 1-10\n";

        }
    }
    



    return 0;
} 

#include <iostream>
#include <iomanip>
using namespace std;
#include "calculateRetail.h"


int main()

{
    double original_cost,
        mark_up,
        final_price;

    //Call the explain program funnction
    explainProgram();

    //Get the user input
    cout << "Please enter the wholsale cost: ";
    cin >> original_cost;
    cout << "Please enter the markup percentage: ";
    cin >> mark_up;

    //Make a while loop and don't take any negative numbers
    while (cin.fail() || original_cost < 0 || mark_up < 0)
    {
        if (cin.fail() || original_cost < 0)
        {
            cin.clear();    //Resets the value of cin.fail
            cin.ignore(5, '\n');    //Clears the keyboard buffer

            //Get the user to renter information. Until they enter a valid input
            cout << "please enter a non negative number\n";
            cout << "Please enter the wholsale cost: ";
            cin >> original_cost;
        }
        else if (cin.fail() || mark_up < 0)
        {
            cin.clear();    //Resets the value of cin.fail
            cin.ignore(5, '\n');    //Clears the keyboard buffer

            //Get the user to renter information. Until they enter a valid input
            cout << "please enter a non negative number\n";
            cout << "Please enter the markup percentage: ";
            cin >> mark_up;
        }
    }

    //Call the calculateRetail and pass the user inputs as arrguments.
    final_price = calculateRetail(original_cost, mark_up);

    //formatting
    cout << setprecision(2) << fixed << showpoint;

    //Print the results
    cout << "The retail price for an item with a cost of $" << original_cost << " and a markup percentage of " << mark_up << "% is $" << final_price << endl;

    return 0;

}


/*
 Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. It should then display the item’s retail price. For example:
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
Programming Challenges 367 • If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage.
 **/

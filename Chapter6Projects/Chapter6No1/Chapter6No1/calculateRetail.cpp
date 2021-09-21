#include <iostream>
using namespace std;
#include "calculateRetail.h"


////////////////////////////////
///This function will calculate the item cost * marup % + cost and return the value to retail_price.
//////////////////////////////
double calculateRetail(double cost, double markup)
{
    double retail_price;
    
    retail_price = (cost * markup) + cost ;
    return retail_price;
}


////////////////////////////
///This function explains the program
///////////////////////////
void explainProgram()
{
    cout << "This program will take the wholesale cost and it's markup percentage and will calculate the final price of an item.\n\n";
}


/*
 Markup
Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. It should then display the item’s retail price. For example:
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 10.00.
• If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
retail price is 7.50.
The program should have a function named calculateRetail that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage.
 **/

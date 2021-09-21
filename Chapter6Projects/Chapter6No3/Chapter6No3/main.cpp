#include <iostream>
#include <string>
using namespace std;
#include "header.h"

int main()
{
    string northeast = "Northeast", southeast = "Southeast", northwest = "Northwest", southwest = "Southwest";
    double NE, SE, NW, SW;

    NE = getSales("Northeast");
    SE = getSales("Southeast");
    NW = getSales("Northwest");
    SW = getSales("Southwest");

    findHighest(NE, SE, NW, SW, "Northeast");
    findHighest(SE, NE, NW, SW, "Southeast");
    findHighest(NW, SE, NE, SW, "Northwest");
    findHighest(SW, SE, NW, NE, "Southwest");



    return 0;
}





/*
3. Winning Division
Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should
include the following two functions, which are called by main .
• double getSales() is passed the name of a division. It asks the user for a division’s
quarterly sales figure, validates the input, then returns it. It should be called once for
each division.
• void findHighest() is passed the four sales totals. It determines which is the largest
and prints the name of the high grossing division, along with its sales figure.
Input Validation: Do not accept dollar amounts less than $0.00.
*/

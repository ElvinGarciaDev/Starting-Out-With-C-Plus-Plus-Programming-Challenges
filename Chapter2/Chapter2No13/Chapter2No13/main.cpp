/*
An electronics company sells circuit boards at a 35 percent profit. Write a program that
will calculate the selling price of a circuit board that costs $14.95. Display the result
on the screen.
*/

#include <iostream>
using namespace std;


int main()
{

    double cost = 14.95;
    double profit = 0.35;
    double selling_profit = (cost * profit) + cost;

    cout << "An electric company sells circuit boards at 35 percent profit" << endl;
    cout << "Therefore, the selling price of a curciut board that cost " << cost << " is " <<  selling_profit << endl;


}

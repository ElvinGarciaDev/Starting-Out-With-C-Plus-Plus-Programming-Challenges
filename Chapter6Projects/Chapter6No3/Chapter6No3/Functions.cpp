#include <iostream>
using namespace std;
#include <string>
#include "header.h"

double getSales(string division)
{
    double northeast;
    cout << "Please enter the quarterly sales for the " << division << " division: ";
    cin >> northeast;
    return inputValidation(northeast);
}

double inputValidation(double sales)
{
    while (cin.fail() || sales < 0)
    {
        cin.clear();
        cin.ignore(10, '\n');
        cout << "Invalid input. Please enter a dollar amount greater than $0. Try again: ";
        cin >> sales;
    }
    return sales;
}

void findHighest(double sales1, double sales2, double sales3, double sales4, string division)
{
    if (sales1 > sales2 & sales1 > sales3 & sales1 > sales4)
    {
        cout << "The division with the highest sales is " << division << " with a sale figure at $" << sales1 << endl;
    }
}

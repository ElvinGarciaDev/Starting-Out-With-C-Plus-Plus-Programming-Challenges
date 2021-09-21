//A software company sells a package that retails for $99. Quantity discounts are given according to the following table.
//Quantity Discount
//10–19 20% 20–49 30% 50–99 40% 100 or more 50%
//Write a program that asks for the number of units sold and computes the total cost of the purchase.
//Input Validation: Make sure the number of units is greater than 0.


#include <iostream>
using namespace std;

int main()
{

    //Create variables
    int retail = 99, purchased, total_with_discount;
    
    cout << "How many units did you buy? :";
    cin >> purchased;
    total_with_discount = purchased * retail;
    
    if (purchased >= 1 && purchased <= 9)
    {
        cout << "Your total charge is " << (total_with_discount) << endl;
    }
    else if (purchased >= 10 && purchased <= 19)
    {
        cout << "Your total charge is " << (total_with_discount - total_with_discount * .2) << endl;
    }
    else if (purchased >= 20 && purchased <= 49)
    {
        cout << "Your total charge is " << (total_with_discount - total_with_discount * .3) << endl;
    }
    else if (purchased >= 50 && purchased <= 99)
    {
        cout << "Your total charge is " << (total_with_discount - total_with_discount * .4) << endl;
    }
    else if (purchased >= 100)
    {
        cout << "Your total charge is " << (total_with_discount - total_with_discount * .5) << endl;
    }
    else
    {
        cout << "Input Validation: Make sure the number of units is greater than 0." << endl;
    }
    
    
    
    
    return 0;
}

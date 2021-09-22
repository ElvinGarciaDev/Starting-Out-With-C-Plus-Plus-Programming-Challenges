/*
 Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the toral after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.
 */

#include <iostream>
using namespace std;


int main()
{

    double meal_charge = 88.67, tax = .0675, tip = .20;
    
   float meal_tax_amount = meal_charge * tax;
   float meal_tip_amount = (meal_charge + meal_tax_amount) * tip;
   float total_bill = meal_charge + meal_tax_amount + meal_tip_amount;
    
    cout << "The meal charge without tax and tip included is $" << meal_charge << endl;
    cout << "Tax amount: $" << meal_tax_amount << endl;
    cout << "Tip amount: $" << meal_tip_amount << endl;
    cout << "Total bill: $" << total_bill << endl;
   
    
    
    
    
    return 0;
}

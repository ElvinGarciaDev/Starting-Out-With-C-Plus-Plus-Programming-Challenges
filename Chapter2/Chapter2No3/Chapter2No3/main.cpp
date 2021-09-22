/*
 Write a program chat will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent, and the county sales tax is 2 percent
 */


#include <iostream>
using namespace std;


int main()
{
 
 
    double stateTax = .04, countyTax = .02;
    
    int purchase = 95;
    double total_state_purchase = purchase * stateTax;
    double total_county_purchase = purchase * countyTax;
    
    
    cout << "The total state tax on $95 is $" << total_state_purchase << endl;
    cout << "The total county tax on $95 is $" << total_county_purchase << endl;
    
    
    return 0;
}

/*
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
stockbroker a 2 percent commission for the transaction. Write a program that calculates
and displays the following:
ï The amount paid for the stock alone (without the commission)
ï The amount of the commission
ï The total amount paid (for the stock plus the commission)
*/


#include <iostream>
using namespace std;



int main()
{
    
    int shares_bought = 750;
    int price = 35.00;
    double price_before_commission = shares_bought * price;
    double commission = .02;
    int commission_total = price_before_commission * commission;
    double total = price_before_commission + commission_total;

    cout << "The price Kathryn paid for the stocks with out commission was $" << price_before_commission << endl;
    cout << "The price Kathryn paid for commission was $" << commission_total << endl;
    cout << "The price Kathryn paid in total was $" << total << endl;

}


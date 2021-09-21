/*
A movie theater only keeps a percentage of the revenue earned from ticket sales. The
remainder goes to the movie distributor. Write a program that calculates a theater's
gross and net box office profit for a night. The program should ask for the name of the
movie, and how many adult and child tickets were sold. (The price of an adult ticket is
$10.00 and a child's ticket is $6.00.) It should display a report sim ilar to:

Movie Name: "Wheels of Fury"
Adult Tickers Sold: 382
Child Tickets Sold: 127
Gross Box Office Profit: $ 4,582.00
Net Box Office Profit: $ 916.40
Amount Paid co Distributor: $ 3,665.60
Assume the theater keeps 20 percent of the gross box office profit.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //Variable for ticket price
    const double adult_ticket = 10.00,
                   child_ticket = 6.00,
                profit = .20;
    //Variable for movie name
    string movie_name;

    //Variable to calculate tickets sold and made profit
    double num_adult_tickets_sold,
        num_child_tickets_sold;

    // Get movie name and num of tickets sold to adults and children
    cout << "Enter name of movie: " << movie_name << endl;
    getline(cin, movie_name);
    cout << "Enter number of adults tickets sold: ";
    cin >> num_adult_tickets_sold;
    cout << "Enter number of children ticket's sold: ";
    cin >> num_child_tickets_sold;

    //Calculations for tickets sold and profit
    double gross_box_office_profit = (adult_ticket * num_adult_tickets_sold) + (child_ticket * num_child_tickets_sold),
        net_profit = gross_box_office_profit * profit,
        paid_distributor = gross_box_office_profit - net_profit;

    //Display tickets sold
    cout << "Movie name: " << movie_name << endl;
    cout << "Adult tickets sold: " << num_adult_tickets_sold << endl;
    cout << "Child tickets sold: "  << num_child_tickets_sold << endl;
    //Display calculations
    cout << setprecision(2) << fixed;
    cout << "Gross box office profit: $" << gross_box_office_profit << endl;
    cout << "Net box office profit: $" << net_profit << endl;
    cout << "Amount paid to Distributor $" << paid_distributor << endl;

    return 0;
}

// Chapter5No5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{


    double current_price = 2500;
    double yearly_increase = 0.04;
    double new_price = 2500;  //accumulator

    for (int i = 1; i <= 6; i++)
    {

        new_price += (current_price * yearly_increase);
        cout << setprecision(2) << fixed << showpoint;
        cout << "Price for year " << i << " is $" << new_price << endl;

    }

    return 0;
}


/*
Membership Fees Increase
A country club, which currently charges $2,500 per year for membership, has
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.
*/



/*
same but in while loop
    int year1 = 1, year6 = 6;
    double yearly_increase = 0.04, current_price = 2500, new_price = current_price;

        while (year1 <= year6)
        {
            new_price += (current_price * yearly_increase);
            cout << setprecision(2) << fixed << showpoint;

            cout << "Price for year " << year1 << " is $" << new_price << endl;
            year1++;
        }
*/

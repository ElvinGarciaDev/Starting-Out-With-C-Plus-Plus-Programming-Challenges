/*
Suppose an employee gets paid every two weeks and earns $2,200 each pay period.
In a year the employee gets paid 26 times. Write a program that defines the following
variables:
payAmount This variable will hold the amount of pay the employee earns each
pay period. Initialize the variable with 2200.0.
payPeriods This variable will hold the number of pay periods in a year. Initialize
the variable with 26.
annualPay This variable will hold the employeeís total annual pay, which will
be calculated.
The program should calculate the employeeís total annual pay by multiplying the
employeeís pay amount by the number of pay periods in a year and store the result in
the annualPay variable. Display the total annual pay on the screen.

*/


#include <iostream>
using namespace std;

int main()
{
    double pay_amount = 2200.0;
    int pay_periods = 26;
    int annual_pay = pay_amount * pay_periods;


    cout << "The emploeey's annuel pay is $" << annual_pay << endl;


}



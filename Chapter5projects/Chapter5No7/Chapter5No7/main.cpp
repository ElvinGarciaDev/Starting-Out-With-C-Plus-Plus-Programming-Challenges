#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days_worked, increase = 2;
    double total_salary = 0, daily_salary = .01;
 
    cout << "Enter number of days worked: ";
    cin >> days_worked;

    while (cin.fail() || days_worked < 1)  //Input Validation: Do not accept a number less than 1 for the number of days worked.
    {
        cout << "Please enter a valid number. A valid number is 1 days work or more. \n";
        cin.clear();
        cin.ignore();
       
        cout << "Enter number of days worked: ";
        cin >> days_worked;

    }

    cout << setprecision(2) << fixed;
    cout << "Days worked \t Salary \n";
    cout << "-------------------------- \n";

    for (int i = 1; i <= days_worked; i++)
    {
        total_salary += daily_salary;       // total_salary = total_salary + daily_salary
        cout << i << "\t\t " << " $" << daily_salary << endl;
        daily_salary *= increase;          //daily_salary = daily_salary * increase

    }

    cout << endl;
    cout << "Total salary for " << days_worked << " days worked is $" << total_salary << endl;

    return 0;
}

/*
7. Pennies for Pay
Write a program that calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.
Input Validation: Do not accept a number less than 1 for the number of days worked.
*/

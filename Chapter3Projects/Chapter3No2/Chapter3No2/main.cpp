/*There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of sears were sold, then displays the amount of income generated
from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is a ways displayed.
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //Variables
    const double Class_A_Cost_Per_Seat = 15.00,
        Class_B_Cost_Per_Seat = 12.00,
        Class_C_Cost_Per_Seat = 9.00;

    int class_a_sold,
        class_b_sold,
        class_c_sold;

    double class_a_total,
        class_b_total,
        class_c_total,
        total_income_gen;


    //Ask how many tickets were sold for each class.
    cout << "Enter amount of class A tickets sold " << endl;
    cin >> class_a_sold;
    cout << "Enter amount of class B tickets sold " << endl;
    cin >> class_b_sold;
    cout << "Enter amount of class C tickets sold " << endl;
    cin >> class_c_sold;

    //Calculate cost per section
    class_a_total = class_a_sold * Class_A_Cost_Per_Seat;
    class_b_total = class_b_sold * Class_B_Cost_Per_Seat;
    class_c_total = class_c_sold * Class_C_Cost_Per_Seat;

    //Calculate total income Generated
    total_income_gen = class_a_total + class_b_total + class_c_total;


    //Display the amount of income generated
    cout << setprecision(2) << fixed;
    cout << class_a_sold << " Class A seats @ $" << setw(6) << Class_A_Cost_Per_Seat << " = $" << class_a_total << endl;
    cout << class_b_sold << " Class B seats @ $" << setw(6) << Class_B_Cost_Per_Seat << " = $" << class_b_total << endl;
    cout << class_c_sold << " Class C seats @ $" << setw(6) << Class_C_Cost_Per_Seat << " = $" << class_c_total << endl;




        return 0;
}

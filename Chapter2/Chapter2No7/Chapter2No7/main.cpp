/*
Assuming the oceanís level is currently rising at about 1.5 millimeters per year, write
a program that displays:
ï The number of millimeters higher than the current level that the oceanís level will be
in 5 years
ï The number of millimeters higher than the current level that the oceanís level will be
in 7 years
ï The number of millimeters higher than the current level that the oceanís level will be
in 10 years
8. Total Purchase
*/


#include <iostream>
using namespace std;


int main()
{
  
    const double mil_per_year = 1.5;
    int five_years = 5, seven_years = 7, ten_years = 10;
    
    double level_5 = mil_per_year * five_years;
    double level_7 = seven_years * mil_per_year;
    double level_10 = ten_years * mil_per_year;

    cout << "The ocean's level after five years will be " << level_5 << endl;
    cout << "The ocean's level after seven years will be " << level_7 << endl;
    cout << "The ocean's level after 10 years will be " << level_10 << endl;



}

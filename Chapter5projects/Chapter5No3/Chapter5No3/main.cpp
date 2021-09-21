/*
 3. Ocean Levels
 Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays a table showing the number of millimeters that the ocean will have risen each year for the next 25 years.
 **/

#include <iostream>
using namespace std;

int main()
{

    const double rise_per_year = 1.5;
    double number_of_millimeters_each_year = 0;
    
    
    for (int i = 1; i <= 25; i++)
    {
        number_of_millimeters_each_year += rise_per_year;
        cout << "Year " << i << ": " << number_of_millimeters_each_year << endl;
    }
  

    
    return 0;
}



//same but in a while loop. You need to add variables year_one and last_year for this loop
/*
 
 int year_one = 0 and last_year = 25
 while (year_one <= last_year)
 {
     number_of_millimeters_each_year += rise_per_year;
     cout << "Year " << year_one << ": " << number_of_millimeters_each_year << endl;
     year_one++;
 }
 **/

/**
 Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month. The program should display a message similar to the following:
 The average rainfall for June, July, and August is 6.72 inches.
 */

#include <iostream>
#include <iomanip>
using namespace std;
#include <string>


int main()
{

    //Variables for months
    string       month_1,
                 month_2,
                 month_3;
    //Variables for rain
    double  rain_month_1,
            rain_month_2,
            rain_month_3,
            average_rain;
         
    //Explain the program
    cout <<  "This program calculates average rainfall for three months " << endl;
    cout << "Press enter to continue " << endl;
    cin.get();
    
    
    //Get user input for months and rain that fell that month
    cout << "Please enter the first month: ";
    cin >> month_1;
    cout << "How much rain fell in " << month_1 << ": ";
    cin >> rain_month_1;
    
    //Get user input for months and rain that fell that month
    cout << "Please enter the second month: ";
    cin >> month_2;
    cout << "How much rain fell in " << month_2 << ": ";
    cin >> rain_month_2;
    
    //Get user input for months and rain that fell that month
    cout << "Please enter the third month: ";
    cin >> month_3;
    cout << "How much rain fell in " << month_3 << ": ";
    cin >> rain_month_3;

    //Calculate average rain for the three months
    average_rain = (rain_month_1 + rain_month_2 + rain_month_3) / 3;
    
    cout << setprecision(2) << fixed;
    cout << "The average rain for " << month_1 << ", " << month_2 << " and " << month_3 << " is " << average_rain << " inches. " << endl;
    
    
    return 0;
}

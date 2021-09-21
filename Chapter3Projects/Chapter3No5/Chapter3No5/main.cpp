/*Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 / 20 = 0.4, or 40 percent. The
percentage of females can be calculated as 12 / 20 = 0.6, or 60 percent.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //Explain the program
    cout << "This program display's the percent of both male and female students in a classroom " << endl;
    cout << "Please hit enter to continue " << endl;
    cin.get();
    
    //Create variables
    int male,
        female;
        
    //User input for number of males and females
    cout << "Enter number of males in the classroom: ";
    cin >> male;
    cout << "Enter the number of females in the classroom: ";
    cin >> female;

    double total_students = male + female;

    //Calculate percent of male or female
    cout << setprecision(2);
    cout << "The percent of male in the class is " << male / total_students << endl;
    cout << "The percent of female in the class is " << female / total_students << endl;

    return 0;
}

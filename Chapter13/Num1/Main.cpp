#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
    Date time(02,05,1997); //Creat an object and pass day, month, year as arguments
    
    //call the getter functions to display the date in mm/dd/yyyy format
    cout << time.GetMonth() << "/" << time.GetDay() << "/" << time.GetYear() << endl;

    //Call the getter Function showdate() to display the date in month/dd/yyyy format
    cout << time.ShowDate2() << " " << time.GetDay() << ", " << time.GetYear() << endl;

    //Display in dd/month/yyyy format
    cout << time.GetDay() << " " << time.ShowDate2() << " " << time.GetYear() << endl;

    return 0;
}
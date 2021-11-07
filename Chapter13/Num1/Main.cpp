#include <iostream>
#include "Class.h"
using namespace std;

int main()
{
    Date time(02,05,1997);
    
    //call the getter functions to display the date in mm/dd/yyyy format
    cout << time.GetMonth() << "/" << time.GetDay() << "/" << time.GetYear() << endl;

    return 0;
}
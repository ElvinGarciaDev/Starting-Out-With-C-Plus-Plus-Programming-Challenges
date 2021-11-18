#include <iostream>
using namespace std;
#include "ProductionWorker.h"
#include <string>

int main()
{
    ProductionWorker employee("Elvin Garcia", "12345", "02051997", 1, 22);

    cout << "The employee name is " << employee.getName() << endl;
    cout << "The employee number is " << employee.getNum() << endl;
    cout << "The employee start date is " << employee.getDate() << endl;

    if (employee.getShift() == 1)
        cout << employee.getName() << " will work the day shift ";
    else 
        cout << employee.getName() << " will work the night shift ";

    cout << endl;

    cout << employee.getName() << " will be making $" << employee.getPay() << " an hour "; 




    return 0;
}
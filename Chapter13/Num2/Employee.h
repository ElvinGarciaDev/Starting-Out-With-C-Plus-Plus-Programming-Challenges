#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
    string name;       //A string that holds the employee’s name.
    int idNumber;      //An int variable that holds the employee’s ID number
    string department; //A string that holds the name of the department where the employee works
    string position;   //A string that holds the employee’s job title.

public:
    Employee(string name, int ID, string D, string P); //constructor accepts mployee’s name, employee’s ID number, department, and position.
};
#endif

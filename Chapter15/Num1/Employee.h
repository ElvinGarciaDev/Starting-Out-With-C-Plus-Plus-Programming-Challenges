#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    private:
        string EmpName;    //Employee name
        string EmpNum;     //Employee number
        string HireDate;    //Hire date
    public:
        //default constructor
        Employee()
        {  EmpName = "";
           EmpNum = "";
           HireDate = ""; }

        //2nd constructor
        Employee(string name, string number, string date)
        {  set(name, number, date); }

        //Setter functions
        void setName(string name) 
        {  EmpName = name; }

        void setNum(string number)
        { EmpNum =  number; }

        void setHireDate(string date)
        { HireDate = date; }

        void set(string name, string number, string date) //Will be used for the constructor
        { EmpName = name;
          EmpNum =  number;
          HireDate = date; }

        //Getter functions
        string getName() const
        {  return EmpName; }

        string getNum() const
        {  return EmpNum; }

        string getDate() const
        {  return HireDate; }


};

#endif

/*
Design a class named Employee. The class should keep the following information in
• Employee name
• Employee number 
• Hire date
Write one or more constructors and the appropriate accessor and mutator functions for the class.
*/
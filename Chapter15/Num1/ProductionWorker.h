#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <string>
using namespace std;

class ProductionWorker : public Employee
{
    private:
        int Shift;      // 1 for day shift. 2 for night
        double PayRate;

    public:
        //default constructor
        ProductionWorker() : Employee()
        {  Shift = 0;
            PayRate = 0.0; }

        //2nd constructor
        ProductionWorker(string name, string number, string date, int s, double p) : Employee(name, number, date)
        {  Shift = s;
           PayRate = p; }

        //Setters
        void setShift(int s)
        {  Shift = s; }

        void setPay(double p)
        {  PayRate = p; }

        //Getters
        int getShift() const
        {  return Shift; }

        double getPay() const
        {  return PayRate; }

};

#endif


/*
Next, write a class named ProductionWorker that is derived from the Employee class. 
The ProductionWorker class should have member variables to hold the following information:
• Shift (an integer)
• Hourly pay rate (a double)
*/

/*
The workday is divided into two shifts: day and night. The shift variable will hold an integer value representing the shift that the employee works. 
The day shift is shift 1, and the night shift is shift 2. Write one or more constructors and the appropriate accessor and mutator functions for the class. 
Demonstrate the classes by writing a program that uses a ProductionWorker object.
*/
#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int year;

        string array[12];   //Create an array of string
        void SetName(); //Assign values to the arrau
    public:
        //Constructors
        Date(int m, int d, int y);
        Date();      

        //Setters
        void SetDay(int num); //Defined in the Class.cpp file

        void SetMonth(int num); //Defined in the Class.cpp file

        void SetYear(int num)
            { year = num; }
        
        //Getters
        int GetDay()
            { return day; }
        int GetMonth()
            { return month; }
        int GetYear()
            {  return year; }
        string ShowDate2(); //Returns a string from the array
};
#endif
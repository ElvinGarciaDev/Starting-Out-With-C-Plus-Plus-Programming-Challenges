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
        //exception class for when user enteres an invalid day. 
        class InvalidDay
        {
            private:
                int Invalid_Days;
            public:
                //default constructor
                InvalidDay(int d)
                {  Invalid_Days = d; }

                //getter
                int getErrorDays() const
                {  return Invalid_Days; }
        };

        //2nd exception class for when user enteres invalid month
        class InvalidMonth
        {
            private:
                int Invalid_Month;
            public:
                //default constructor
                InvalidMonth(int m)
                {  Invalid_Month = m; }

                //getter
                int getErrorMonths() const
                {  return  Invalid_Month; }
        };

        //Constructors for main Date class
        Date(int m, int d, int y);
        Date();      

        //Setters for main Date class
        void SetDay(int num); //Defined in the Class.cpp file

        void SetMonth(int num); //Defined in the Class.cpp file

        void SetYear(int num)
            { year = num; }
        
        //Getters for main Date class
        int GetDay()
            { return day; }
        int GetMonth()
            { return month; }
        int GetYear()
            {  return year; }
        string ShowDate2(); //Returns a string from the array
};
#endif
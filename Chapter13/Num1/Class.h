#ifndef CLASS_H
#define CLASS_H

class Date
{
    private:
        int day;
        int month;
        int year;
    public:
        //Constructors
        Date(int m, int d, int y);
        Date();      
        //~Date(); //Deconstructor         
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
};
#endif
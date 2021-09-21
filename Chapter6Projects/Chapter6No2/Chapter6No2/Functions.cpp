
#include <iostream>
#include <string>
using namespace std;
#include "Header.h"

//This function gets the length
int getLength()
{
    double get_length;
    cout << "Please enter the length of the rectangle: ";
    cin >> get_length;
    return inputValidation(get_length);
}


//This function gets the width
double getWidth()
{
    double get_width;
    cout << "Please enter the width of the rectangle: ";
    cin >> get_width;
    return inputValidation(get_width);
}

//This function finds the area
double getArea(double length, double width)
{
    double area;
    area = length * width;
    return area;
}

//this function display the information
void displayArea(double length, double width, double area)
{
    cout << "The rectangle’s length is " << length << ", the rectangle’s width is " << width << " and the area is " << area << endl;

}


//This functions tests input
double inputValidation(double value)
{
    while (cin.fail() || value < 0)
    {
        cout << "Datatype invalid or less then 1. Enter again: ";
        cin.clear();
        cin.ignore(5, '\n');
        cin >> value;
    }
    return value;
}

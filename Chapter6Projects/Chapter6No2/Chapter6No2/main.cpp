#include <iostream>
#include <string>
#include "Header.h"
using namespace std;



int main()
{
    //Variables for length, width, area
    double length, width, area;

    length = getLength();
    width = getWidth();
    area = getArea(length, width);

    displayArea(length, width, area);

    return 0;
}


/*
 . Rectangle Area—Complete the Program
 If you have downloaded this book’s source code from the companion Web site, you will find a partially written program named AreaRectangle.cpp in the Chapter 06 folder. (The companion Web site is at www.pearsonhighered.com/gaddis.) Your job is to complete the program. When it is complete, the program will ask the user to enter the width and length of a rectangle and then display the rectangle’s area. The program calls the following functions, which have not been written:
 • getLength – This function should ask the user to enter the rectangle’s length and then return that value as a double.
 • getWidth – This function should ask the user to enter the rectangle’s width and then return that value as a double.
 • getArea – This function should accept the rectangle’s length and width as argu- ments and return the rectangle’s area. The area is calculated by multiplying the length by the width.
 • displayData – This function should accept the rectangle’s length, width, and area as arguments and display them in an appropriate message on the screen.**/

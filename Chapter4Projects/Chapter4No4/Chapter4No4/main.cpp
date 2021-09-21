//The area of a rectangle is the rectangle’s length times its width. Write a program that asks for the length and width of two rectangles. The program should tell the user which rectangle has the greater area, or if the areas are the same.



#include <iostream>
using namespace std;

int main()
{

    //Creat variables for both rectangle
    double length_1, width_1, area_1;
    double length_2, width_2, area_2;
    
    //Explain the program.
    cout << "This program will find the area of two rectangle's and determine which one has a greater area" << endl;
    cout << "Press enter to continue. \n";
    cin.get();
    
    //Get user input for first rectangle
    cout << "Enter the length of the first rectangle: ";
    cin >> length_1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width_1;
    area_1 = length_1 * width_1;
    
    //Get user input for second rectangle
    cout << "Enter the length of the second rectangle: ";
    cin >> length_2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width_2;
    area_2 = length_2 * width_2;
    
   //Create if/else if statement
    if (area_1 == area_2)
        cout << "The area of the two rectangle is the same. \n";
    else if (area_1 > area_2)
        cout << "The firts rectangle has a bigger area than rectangle 2. \n";
    else if (area_2 > area_1)
        cout << "The second rectangle has a bigger area than rectangle 1. \n";
    
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
   
    //Create variables for all colors
    string color_1, color_2;
    
    
    //Get user input
    cout << "Enter one primary colors ex. red, blue or yellow: ";
    cin >> color_1;
    cout << "Enter a second primary colors ex. red, blue or yellow: ";
    cin >> color_2;
    
    //Creat nested if/else statement
    if (color_1 == "red" || color_1 == "Red")
    {
        if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & " << color_2 << " = purple \n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & " << color_2 << " = Orange.\n ";
        }
    }
    else if (color_1 == "blue" || color_1 == "Blue")
    {
        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & " << color_2 << " = purple \n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & " << color_2 << " = Green.\n ";
        }
        
    }
    else if (color_1 == "yellow" || color_1 == "Yellow")
    {
        if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & " << color_2 << " = Green \n";
        }
        else if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & " << color_2 << " = Orange.\n ";
        }
    }
    else
    {
        cout << "Neither is a prime color. Run the program again.\n";
    }
    
    return 0;
}


/*
 Color Mixer
 The colors red, blue, and yellow are known as the primary colors because they cannot be made by mixing other colors. When you mix two primary colors, you get a secondary color, as shown here:
 When you mix red and blue, you get purple. When you mix red and yellow, you get orange. When you mix blue and yellow, you get green.
 Write a program that prompts the user to enter the names of two primary colors to mix. If the user enters anything other than “red,” “blue,” or “yellow,” the program should display an error message. Otherwise, the program should display the name of the secondary color that results by mixing two primary colors.

 */

//Create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar. The program should ask the user to enter the number of pennies, nickels, dimes, and quarters. If the total value of the coins entered is equal to one dollar, the program should congratulate the user for winning the game. Otherwise, the program should display a message indicating whether the amount entered was more than or less than one dollar.

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    //Creat variables
    double pennie, nickel, dime, quarter, dollar;
    
    //let client know about the program
    cout << "This program will ask you to try and win by entering the number of coins reqired for $1 dollar. " << endl;
    cout << "Press Enter to continue. ";
    cin.get();
    
    cout << "Enter the number of pennies: ";
    cin >> pennie;
    
    cout << "Enter the number of nickels: ";
    cin >> nickel;
    
    cout << "Enter the number of dimes: ";
    cin >> dime;
    
    cout << "Enter the number of quarters: ";
    cin >> quarter;
    
    
    //Create calculations
    dollar = (pennie * 0.01) + (nickel * 0.05) + (dime * 0.10) + (quarter * 0.25);
    
    //Formatting
    cout << setprecision(2) << fixed;
    
    //create if statement
    if (dollar == 1.00)
        cout << "Congrats you won the game. The change you entered equals $1. \n";
    else if (dollar > 1.00)
        cout << "Sorry but you entered " << dollar << "$ which is more than a $1. Run the program again to retry. \n";
    else if (dollar < 1.00)
        cout << "Sorry you entered " << dollar <<  " which is less than $1. Run the program again to retry. \n";
    
    
    
    return 0;
}

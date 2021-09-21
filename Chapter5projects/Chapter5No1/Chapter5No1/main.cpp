/*
 1. Sum of Numbers
 Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, ... 50.
 Input Validation: Do not accept a negative starting number.
 **/
#include <iostream>
using namespace std;

int main()
{

    int user_number, total = 0;
    
    cout << "Enter a positive number: ";
    cin >> user_number;
 
    
    
    while (cin.fail() || user_number < 1) //Or you can do     while (user_number <0)
    {
        cout << "Error: a postivie number must be entered.\n";
        cin.clear();
        cin.ignore();
        cout << "Please try again: ";
        cin >> user_number;
    }
    for (int i = 1; i <= user_number; i++)
    {
        cout << total << " + " << i << " = ";
        total += i;
        cout << total << endl;
    }
    
    

    
    return 0;
}



/*
 //This is the same loop but in a while loop 
int i = 1
 while (i <= user_number)
 {
     cout << total << " + " << i << " = ";
     total += i;
     cout << total << endl;
     i++;
 }
 
 /*/

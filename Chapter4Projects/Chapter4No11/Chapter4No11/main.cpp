// This is a modification of Programming Challenge 17 from Chapter 3. Write a program that can be used as a math tutor for a young student. The program should display two random numbers that are to be added, such as:247 + 129
// The program should wait for the student to enter the answer. If the answer is correct, a message of congratulations should be printed. If the answer is incorrect, a message should be printed showing the correct answer.

 
 
 
#include <iostream>
#include <ctime> //For rand() and srand()
#include <cstdlib> //For time()
#include <iomanip>
using namespace std;

int main()
{

    srand(time(NULL));
   
    int number1 = rand() % 1001,    ////include a range... //Reminder trick about modulus. //The number to the right of the % symbol will be from zero 0 to number to the right less 1
        number2 = rand() % 1001,    //// 0 to 1000.... 1001 - 1
        getNumberFromUser = -1,     // "sentinal/flag"
        results = number1 + number2;
    
    cout
    << "Please add these two numbers: \n" << setfill('0') << setw(4) << number1 << "\n"
    << setfill('0') << setw(4) << number2 << endl;
    
    cout << "What do you think the result is? :";
    cin >> getNumberFromUser;
    
    
    //If else statement
    if (results == getNumberFromUser)
    {
      cout << "Congrats you added the numbers correctly.\n";
    }
    else
    {
        cout << "Opps math is wrong. Try again.\n";
    }
    
    
    return 0;
}

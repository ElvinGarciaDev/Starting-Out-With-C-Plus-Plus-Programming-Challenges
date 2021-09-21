#include <iostream>
#include <ctime> //time(NULL)
#include <cstdlib> //rand(), sdrand()
using namespace std;
#include "header.h"


/*****************************************************
THIS FUNCTION GETS THE COMPUTER SELECTION
********************************************************/
int randomNumber()
{
    int random_value; //To store the randome number from the computer.
    
    srand(time(0));
    random_value =  1+(rand() % 3); //Getting random number from computer,

    //output to console what the computer chose.
    if(random_value == 1)
        cout << "The computer has chosen rock \n";
    else if(random_value == 2)
        cout << "The computer has chosen paper\n";
    else if (random_value == 3)
        cout << "The computer has chosen scissors\n";
    return random_value;
}


/*****************************************************
THIS FUNCTION GETS THE USER SELECTION
********************************************************/
int userInput()
{
    int choice; //To store user input
    cout << "Please enter your selection. Enter 1 for rock, enter 2 for paper and enter 3 for scissors: ";
    cin >> choice;
    
    //output to console what the user selected
    if(choice == 1)
        cout << "You have chosen rock \n";
    else if(choice == 2)
        cout << "You have chosen paper\n";
    else if (choice == 3)
        cout << "You have chosen scissors\n";
    
    return inputValidation(choice);

}


/*****************************************************
THIS FUNCTION DETERMINES THE WINNDER
********************************************************/
void winner(int user, int computer)
{
//Who wins if the user selects rock
    if(user == 1)
    {
        if (computer == 3)
            cout << "You have chocen rock and the computer picked scissors. So you win. ";
        else if (computer == 2)
            cout << "The computer has chocen paper and you have chocen rock. So you lose. ";
        else if(user == computer)
            cout << "The both of you have chocen the same. So the program will run again. Until one of you win. \n";
    }
    
//Who wins if the user selects paper
    else if (user == 2)
    {
        if (computer == 1)
            cout << "You chose paper and the computer chose rock. So you lose. ";
        
        else if (computer == 3)
            cout << "You have chocen paper and the computer picked scissors. So you lose. ";
        
        else if (user == computer)
            cout << "The both of you have chocen the same. So the program will run again. Until one of you win. \n";
    }
    
//Who wins if the user selects scissors
     else if(user == 3)
    {
        if(computer == 1)
            cout << "You chose scissors and the computer chose rock. So you lose ";
        
        else if(computer == 2)
            cout << "You chose scissors and the computer chose paper. So you win ";
        
        else if (user == computer)
            cout << "The both of you have chocen the same. So the program will run again. Until one of you win. \n";
    }
    
}


/*****************************************************
THIS FUNCTION VALIDATES THE USERINPUT
********************************************************/
int inputValidation(int user_input)
{
    while (cin.fail() || user_input < 0 || user_input > 3)
    {
        cin.clear();
        cin.ignore(5, '\n');
        cout << "Invalid data type. Please don't enter a character, a number less than 1 or greater than 3. Try again: ";
        cin >> user_input;
    }
    return user_input;
}

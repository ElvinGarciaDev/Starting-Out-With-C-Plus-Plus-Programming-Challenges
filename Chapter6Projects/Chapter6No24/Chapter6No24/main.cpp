#include <iostream>
using namespace std;
#include <ctime> //time(NULL)
#include <cstdlib> //rand(), sdrand()
#include "header.h"

int main()
{
    int user, computer; //To store user and computer selections
    
    //Do while loop to run until someone wins.
    do
    {
        //Running userinput finction to get the users number
        user = userInput();
        cout << endl;
        
        //Running randoNumber function to get the computers pick.
        computer = randomNumber();
        cout << endl;
        
        //Running winner function to get the winner.
        winner(user, computer);
        cout << endl;
        
    } while (user == computer);
    
    return 0;
}


/*
 24. Rock, Paper, Scissors Game
 Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows.
 1. When the program begins, a random number in the range of 1 through 3 is gener- ated. If the number is 1, then the computer has chosen rock. If the number is 2, then the computer has chosen paper. If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
 2. The user enters his or her choice of “rock”, “paper”, or “scissors” at the keyboard. (You can use a menu if you prefer.)
 3. The computer’s choice is displayed.
 4. A winner is selected according to the following rules:
 • If one player chooses rock and the other player chooses scissors, then rock wins. (The rock smashes the scissors.)
 • If one player chooses scissors and the other player chooses paper, then scissors wins. (Scissors cuts paper.)
 • If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)
 • If both players make the same choice, the game must be played again to deter- mine the winner.
 TIP: Recall that the % operator divides one number by another, and returns the remainder of the division. In an expression such as num1 % num2, the % operator will return 0 if num1 is evenly divisible by num2.
 Be sure to divide the program into functions that perform each major task.
 **/

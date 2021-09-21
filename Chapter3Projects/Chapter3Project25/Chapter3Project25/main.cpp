#include <iostream>
#include <string>
using namespace std;


int main()
{

    // Create variables
    string name, city, college, profession, animal, pet;
    int age;
    
   //Get user input for variables
    cout << "Please enter your name: ";
    getline(cin, name);
    
    cout << "Please enter your age: ";
    cin >> age;
    cin.ignore();
    
    cout << "Please enter the name of a City: ";
    getline(cin, city);
    
    cout << "please enter the name of a college: ";
    getline(cin, college);
    
    cout << "please enter the name of a profession: ";
    getline(cin, profession);
    
    cout << "please enter a type of animal: ";
    getline(cin, animal);
    
    cout << "please enter a pet name: ";
    getline(cin, pet);

    //Display to screen
    cout << "There once was a person named " << name << " Who lived in " << city << ". " << endl;
    cout << "At the age of " << age << ", " << name << " went to college at " << college << ".\n";
    cout << name << " graduated and went to work as a " << profession << ". " << endl;
    cout << "Then, " << name << " adopted a " << animal << " named "<< pet << ".\n";
    cout << "They both lived happily ever after! \n";

    
    return 0;
}


/*
 Word Game
Write a program that plays a word game with the user. The program should ask the user to enter the following:
• His or her name
• His or her age
• The name of a city
• The name of a college
• A profession
• A type of animal
• A pet’s name
After the user has entered these items, the program should display the following story, inserting the user’s input into the appropriate locations:
There once was a person named NAME who lived in CITY. At the age of AGE, NAME went to college at COLLEGE. NAME graduated and went to work as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They both lived happily ever after!
 */

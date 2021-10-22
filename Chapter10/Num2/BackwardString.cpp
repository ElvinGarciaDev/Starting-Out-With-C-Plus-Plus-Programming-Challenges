#include <iostream>
using namespace std;
#include <cstring>

//Functions
void reverse(char* string);

int main()
{
    int SIZE = 100;
    char UserString[SIZE]; //c-string

    char *StrPtr; //pointer that will point to the c string array
    StrPtr = UserString;

    cout << "Enter a string and I will reverse it: ";
    cin.getline(UserString, SIZE);

    cout << UserString << endl;
    reverse(StrPtr);
    cout << UserString << endl;



    return 0;
}

void reverse(char* string)
{
    char* first = string;
    char* last = string + strlen(string);

    while(first < last)
    {
        --last; //avoids decrementing last beyond start of string if string is empty
        char temp = *first;
        *first = *last;
        *last = temp;
        ++first;
    }
}

/*
Write a function that accepts a pointer to a C-string as an argument and displays its contents backward. For instance, 
if the string argument is “Gravity” the function should display “ytivarG”. 
Demonstrate the function in a program that asks the user to input a string and then passes it to the function.
*/
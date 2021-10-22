#include <iostream>
#include <cstring> //for strlen();
using namespace std;

//Function
int StringLength(char *);

int main()
{
    const int SIZE = 100;
    char UserString[SIZE]; //Will hold a c-string
    char *StrPtr = //pointer that points to the char array
    StrPtr = UserString; //pointer points to char array

    int length; //holds the string lengrh

    cout << "\nPlease enter a string and I will tell you the length. ";
    cin.getline(StrPtr, SIZE);

    //Call the function
    length = StringLength(StrPtr);
    cout << "\nThe string length is " << length << endl;

    return 0;
}

int StringLength(char *StrPtr)
{
    int StringLength;

    StringLength = strlen(StrPtr);

    return StringLength;

}



/*
strlen();
Description
Accepts a C-string or a pointer to a C-string as an argument. Returns the length of the C-string (not including the null terminator.)
Example Usage: len = strlen(name);
*/

/*
String Length
Write a function that returns an integer and accepts a pointer to a C-string as an argu- ment. 
The function should count the number of characters in the string and return that number. 
Demonstrate the function in a simple program that asks the user to input a string, 
passes it to the function, and then displays the function’s return value.
*/
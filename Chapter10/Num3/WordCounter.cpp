#include <iostream>
#include <cstring>
using namespace std;

int countChars(char *strptr);


int main()
{
    const int SIZE = 100;
    char CString[SIZE];

    //pointer
    char *StrPtr;

    StrPtr = CString; //set the pointer to point to the c string array. 

    cout << "Enter a string and I wil tell you how many words it has: ";
    cin.getline(CString, SIZE);

    cout<<"User String has "<<countChars(StrPtr)<<" words."<<endl;


    return 0;
}

int countChars(char *strptr)
{
    int count=1;
    while(*strptr != '\0')
    {
    if(*strptr == ' ')
        count++;

    *strptr++;
    }
    return count;
}


/*
Word Counter
Write a function that accepts a pointer to a C-string as an argument and returns the
number of words contained in the string. For instance, if the string argument is “Four
score and seven years ago” the function should return the number 6. Demonstrate the
function in a program that asks the user to input a string and then passes it to the function.
The number of words in the string should be displayed on the screen. Optional
Exercise: Write an overloaded version of this function that accepts a string class object
as its argument.
*/
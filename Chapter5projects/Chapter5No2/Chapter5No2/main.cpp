/*
 Characters for the ASCII Codes
 Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. Display 16 characters on each line.
 */

#include <iostream>
using namespace std;

int main()
{

    char ascii_code_number;
    
    
    for (int i = 0; i <= 127; i++)
    {
        ascii_code_number = i;
        cout << ascii_code_number << " ";
        
        if (i % 16 == 0) //This will display 16 characters on each line. 
            cout << endl;
    }
    
    
    
    
    return 0;
}

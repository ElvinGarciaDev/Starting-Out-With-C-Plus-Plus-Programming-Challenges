#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    fstream myFile; //Creat an object

    myFile.open("numbers.txt", ios::out); //open the file. It takes to paramters 1-file name and the mode. out = to write. in = to read

    if (myFile.is_open()) //make sure the file is open
    {
        myFile << "3 " << endl; //use the object to write into the file.
        myFile << "5 " << endl;
        myFile << "4 " << endl;
        myFile << "7 " << endl;
        myFile << "10 " << endl;
        myFile << "12 " << endl;
    }

    myFile.close(); //Close the file
    
    return 0;
}


//Code to create the file with numbers 

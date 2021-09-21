#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
    "Taylor, Terri", "Johnson, Jill",
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
    "James, Jean", "Weaver, Jim", "Pore, Bob",
    "Rutherford, Greg", "Javens, Renee",
    "Harrison, Rose", "Setzer, Cathy",
    "Pike, Gordon", "Holland, Beth" };

    fstream MyFile; //Create an object that we will use to open, write and read from a file.

    MyFile.open("names.txt", ios::in); //.open() takes two parameters. 1 - name of file and out-create a file or in-read from a file.

    if(MyFile.is_open())
    {
        string line;    //Create a string line that will hold the text

        while(getline(MyFile, line))    //WHile something is assinged to the line variable run this loop.
        {
            cout << line << endl;
        }

      MyFile.close(); //close the file.
    }


    return 0;
}



/* creates the file
11. Using Files—String Selection Sort Modification
Modify the program you wrote for Programming Challenge 6 so it reads in 20 strings from a file. The data can be found in the names.txt file.
*/

/*
fstream MyFile; //Create an object that we will use to open, write and read from a file.

    MyFile.open("names.txt", ios::out);

    if(MyFile.is_open())
    {
        MyFile <<  "Collins, Bill\n Smith, Bart\n Allen, Jim" << endl;
        MyFile << "Griffin, Jim\n Stamey, Marty\n Rose, Geri" << endl;
        MyFile << "Taylor, Terri\n Johnson, Jill" << endl;
        MyFile << "Allison, Jeff\n Looney, Joe\n Wolfe, Bill" << endl;
        MyFile << "James, Jean\n Weaver, Jim\n Pore, Bob" << endl;
        MyFile << "Rutherford, Greg\n Javens, Renee" << endl;
        MyFile << "Harrison, Rose\n Setzer, Cathy" << endl;
        MyFile << "Pike, Gordon\n Holland, Beth" << endl;



      MyFile.close(); //close the file.
    }
*/


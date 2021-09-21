//Write a program that asks the user to enter two numbers. The program should use the
//conditional operator to determine which number is the smaller and which is the larger
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Create variable
    int num1, num2;
    string min_num, large_num;


    //Get user input
    cout << "Please enter the first number:";
    cin >> num1;
    cout << "Please enter the second number:";
    cin >> num2;

    min_num = (num1 <= num2) ? "min_num" :    "large_num"; //Not fully correct


    cout << min_num << large_num << endl;

    return 0;
}

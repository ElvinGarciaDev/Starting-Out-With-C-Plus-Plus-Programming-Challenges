/**
 Write a program that asks for five test scores. The program should calculate the average test score and display it. The number displayed should be formatted in fixed-point notation, with one decimal point of precision.
 */


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    //Variables
    double test_score_1,
        test_score_2,
        test_score_3,
        test_score_4,
        test_score_5;
    
    
   //Describe the program
    cout << "This program will calculate the average 5 test scores " << endl;
    cout << "Press enter to continue \n";
    cin.get();
    
    //Get user input for test score
    cout << "Enter test score 1: ";
    cin >> test_score_1;
    cout << "Enter test score 2: ";
    cin >> test_score_2;
    cout << "Enter test score 3: ";
    cin >> test_score_3;
    cout << "Enter test score 4: ";
    cin >> test_score_4;
    cout << "Enter test score 5: ";
    cin >> test_score_5;
    
    //Creat variable to calculate average
    double test_score_average = (test_score_1 + test_score_2 + test_score_3 + test_score_4 + test_score_5) / 5;
   
    // print out the average score
    cout << setprecision(1) << fixed;
    cout << "The average test score is: " << test_score_average << endl;
    
  
    
    return 0;
}

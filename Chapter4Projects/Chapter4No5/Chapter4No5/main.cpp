#include <iostream>
#include <cmath> //To use the pow function
using namespace std;



int main()
{
  
    //Create variables
    double weight, height, bmi;
    
    //Get user input
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;
    bmi = weight * 703 / pow(height, 2); //bmi = weight * 703 / height^2
    
    //If/else if statement
    if (bmi >= 18.5 && bmi <= 25)
        cout << "Your weight is considred to be optimal for your BMI of " << bmi << endl;
    else if (bmi < 18.5)
        cout << "You're considred underweight with a BMI of " << bmi << endl;
    else if (bmi > 25)
        cout << "You're considered overweight with a BMI of " << bmi << endl;
    
    
    return 0;
}

/*
 Write a program that calculates and displays a person’s body mass index (BMI). The BMI is often used to determine whether a person with a sedentary lifestyle is over- weight or underweight for his or her height. A person’s BMI is calculated with the following formula:
 BMI = weight * 703 / height^2
 where weight is measured in pounds and height is measured in inches. The program should display a message indicating whether the person has optimal weight, is under- weight, or is overweight. A sedentary person’s weight is considered to be optimal if his or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is consid- ered to be underweight. If the BMI value is greater than 25, the person is considered to be overweight.
 */

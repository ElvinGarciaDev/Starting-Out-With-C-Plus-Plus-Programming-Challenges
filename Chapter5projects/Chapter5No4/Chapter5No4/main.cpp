

#include <iostream>
using namespace std;

int main()
{

    const double calories_per_min = 3.5;
    double burned_calories = 0;

    for (int i = 5; i <= 30; i += 5) // i += 5 =             i = i +5
    {
        burned_calories = i * calories_per_min; //same as burned_valories_min = burned_valories_min + calories_per_min (3.5)
        cout << "min " << i << ": " << burned_calories << " calories burned " << endl;
       
    }
    
    


    return 0;
}

/*
Running on a particular treadmill you burn 3.6 calories per minute. Write a program that
uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
*/

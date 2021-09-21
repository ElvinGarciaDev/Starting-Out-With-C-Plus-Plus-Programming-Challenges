#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int>); //Function delecration. You don't need to include the vector name when you declare it.
int largest(vector<int>); //This function will hold the largest number in tge vector
int smallest(vector<int>); //This function will hold the smallest value in the vector


int main()
{

    vector<int> values;  //Empty vector names values
    int largest_value; //to hold the largest number
    int smallest_value; //To hold the smallest number
    

    for (int i = 0; i < 10; i++)
    {
        int value_input; //to hold user input
        
        cout << "Enter the value for #" << (i + 1) << ": ";
        cin >> value_input;
        values.push_back(value_input);
    }
    

    displayVector(values);//Calling the displayVector which will display the vector.
    largest_value = largest(values); //Calling the largest function and passing out vector as an argument.
    smallest_value = smallest(values); //Calling the smallest function and passing our vector as argument.
    
    
    return 0;
}


//**********************
//This function will display the vector
//*********************

void displayVector(vector<int> vect) //Vect is a paramter that will be used when you pass the vector name argument
{
    
    for (int i = 0; i < vect.size(); i++) //use vect.size() so you don't have to input the vector size
    {
        cout << vect[i] << endl;
    }
}


//**********************
//This function will get the largest number in the vector
//*********************

int largest(vector<int> vect)
{
    int largest; //to hold the largest number in the vector
    
    largest = vect[0]; //Setting the largest nunber to index 0
    
    for (int i = 0; i < vect.size(); i++) //Going through the vector
    {
        if (vect[i] > largest) //Comparing all the values in the vector to determine the biggest
            largest = vect[i];
    }
    cout << "The largest value in the vector is " << largest << endl;
    return largest;
}


//**********************
//This function will get the smalled number in the vector
//*********************

int smallest(vector<int> vect)
{
    int smallest; //To hold the smallest in the vector
    
    smallest = vect[0]; //Setting the smallest number in the vector to index 0. we will later compare it
    
    for (int i = 0; i < vect.size(); i++) //going through thr loop. Use .size() so you don't need to input the vector size
    {
        if (vect[i] < smallest) //if a smaller value is found it will store it in smallest int.
        {
            smallest = vect[i];
        }
    }
    cout << "The smallest value in the vector is " << smallest << endl;
    return smallest;
}




/*
 Largest/Smallest Array Values
 Write a program that lets the user enter 10 values into an array. The program should then display the largest and smallest values stored in the array.
 **/




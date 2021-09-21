#include <iostream>
using namespace std;

//Function protototype
void askHours(long int ID[], long double h[], long double p[], long double w[]);
int validationHours(long double userInput);
int validationPay(long double userInput);
void display(long int ID[], long double h[], long double p[], long double w[]);

int main()
{
   
    //array to hold the employee ID
    long int empID[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};

    //Array to hold employee hours worked
    long double hours[7];

    //Array to  hold the payrate;
    long double payRate[7];

    //Array to hold wages
    long double wages[7];

    //Get user input
    askHours(empID, hours, payRate, wages);

    cout << endl;

    //Display the information
    display(empID, hours, payRate, wages);


    return 0;
}

//*************************
//function to get the hours
//*************************

void askHours(long int ID[], long double h[], long double p[], long double w[])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Please enter the hours worked by employee " << ID[i] << ": ";
        cin >> h[i];
        h[i] = validationHours(h[i]); //run the input validation function


        cout << "Please enter the payrate for employee " << ID[i] << ": ";
        cin >> p[i];
        p[i] = validationPay(p[i]);


        cout << endl;

        //Calculate the ages and store them in the wage array.
        w[i] = h[i] * p[i];
    }
}

//*************************
//function validation hours
//*************************

int validationHours(long double userInput)
{
    while(cin.fail() || userInput <= 0)
    {
        cin.clear(); //Resets cin.fail flag
        cin.ignore(100, '\n'); //ignoers 100 characters up to the new line

        cout << "please do not enetr a negative number. Try again: ";
        cin >> userInput;
    }
    return userInput;
}

//*************************
//function validation pay
//*************************

int validationPay(long double userInput)
{
    while(cin.fail() || userInput < 15)
    {
        cin.clear(); //Resets cin.fail flag
        cin.ignore(100, '\n');

        cout << "please do not enetr a number less than 15. Try again: ";
        cin >> userInput;
    }
    return userInput;
}

//*************************
//function displays final
//*************************

void display(long int ID[], long double h[], long double p[], long double w[])
{
    cout << " ID " << "\t Hours " << "\t pay " << "\t wage " << endl;
    cout << " _______________________________ " << endl;
    
    for (int i = 0; i < 7; i++)
    {
        cout << ID[i] << "\t " << h[i] << "\t " << p[i] << "\t " << w[i] << endl;
    }
}


/*
Write a program that uses the following arrays:
• empId: an array of seven long integers to hold employee identification numbers. The array should be initialized with the following numbers:
5658845 4520125 7895122 8777541 8451277 1302850 7580489
• hours: an array of seven integers to hold the number of hours worked by each employee
• payRate: an array of seven doubles to hold each employee’s hourly pay rate
• wages: an array of seven doubles to hold each employee’s gross wages
The program should relate the data in each array through the subscripts. For example, the number in element 0 of the hours array should be the number of hours worked by
the employee whose identification number is stored in element 0 of the empId array.
That same employee’s pay rate should be stored in element 0 of the payRate array.
The program should display each employee number and ask the user to enter that employee’s hours and pay rate.
It should then calculate the gross wages for that employee (hours times pay rate) and store them in the wages array.
After the data has been entered for all the employees, the program should display each employee’s iden- tification number and gross wages.
Input Validation: Do not accept negative values for hours or numbers less than 15.00 for pay rate.
*/

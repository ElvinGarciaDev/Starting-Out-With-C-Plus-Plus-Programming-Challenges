#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct CompanyData
{
    string DivisionName; //holds division. Ex. east, west, north or south
    double FirstQTSales;   //Holds sales for 1st quarter
    double SecondQTSalesl; //2nd quarter sales
    double ThirdQTSales;   //3rd sales
    double FouthQTSales;   //4
    double TotalAnnualSales;
    double AverageQTSales; 
};

void GetQTSales(CompanyData array[], int SIZE);
void TotalandAverage(CompanyData array[], int SIZE);
void Display(CompanyData array[], int SIZE);

int main()
{
    const int NUM_DIVISION = 4; //Num of divisions
    CompanyData array[NUM_DIVISION]; //Array of Structures with 4 divisions

    GetQTSales(array, NUM_DIVISION); // Will ask the user to enter the sales data
    TotalandAverage(array, NUM_DIVISION); //Will calculate the average and total sales per QT

    cout << endl; //formatting

    Display(array, NUM_DIVISION); //Function will display the division name, total sales and average QT sales


    return 0;
}

//**********************
//Function will ask the 
//user to input sales
//**********************
void GetQTSales(CompanyData array[], int SIZE) //function that takes an array of structure
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Please enter the name of the " << (i + 1) << "st Division: ";
        getline(cin,array[i].DivisionName);

        cout << "Please enter 1st QT sales for divison " << array[i].DivisionName << ": ";
        cin >> array[i].FirstQTSales;

        cout << "Please enter 2st QT sales for divison " << array[i].DivisionName << ": ";
        cin >> array[i].SecondQTSalesl;

        cout << "Please enter 3st QT sales for divison " << array[i].DivisionName << ": ";
        cin >> array[i].ThirdQTSales;

        cout << "Please enter 4st QT sales for divison " << array[i].DivisionName << ": ";
        cin >> array[i].FouthQTSales;

        cout << endl;
        cin.ignore();
    }
}

//*******************
//Function gets the total
//and Average per QT
//*******************

void TotalandAverage(CompanyData array[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        array[i].TotalAnnualSales = array[i].FirstQTSales + array[i].SecondQTSalesl + array[i].ThirdQTSales + array[i].FouthQTSales; //Adds to the total member

         array[i].AverageQTSales = array[i].TotalAnnualSales / SIZE; //Finds the average
    }
   
}

//**********************
//Function will display 
//the data. 
//**********************

void Display(CompanyData array[], int SIZE)
{
    cout << "\n           Sales Data\n"
		 << "---------------------------------------\n";
    cout << fixed << showpoint << setprecision(2);

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Division :          " << array[i].DivisionName << endl;
        cout << "Total Sales :       $" << array[i].TotalAnnualSales << endl;
        cout << "Quarterly average : $" << array[i].AverageQTSales << endl;
        cout << endl;
    }
}

/*
Corporate Sales Data
Write a program that uses a structure named CorpData to store the following
information on a company division:
	Division name (such as East, West, North, or South)
	First quarter sales
	Second quarter sales
	Third quarter sales
	Fourth quarter sales
	Total annual sales
	Average quarterly sales.
Include a constructor that allows the division name and four quarterly sales
amounts to be specified at the time a CorpData variable is created.
The program should create four variables of this structure, each representing one
of the following corporate divisions: East, West, North, and South. Each variable
should be passed in turn to a function that calculates and stores the total sales
and average quarterly sales for that division. Once this has been done for each
division, each variable should be passed in turn to a function that displays the
division name, total sales, and quarterly average.
*/
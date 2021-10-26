#include <iostream>
#include <string>
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


int main()
{
  

    const int NUM_DIVISION = 4; //Num of divisions
    CompanyData array[NUM_DIVISION]; //Array of Structures with 4 divisiona

    GetQTSales(array, NUM_DIVISION);


    cout << endl;
    for (int i = 0; i < NUM_DIVISION; i++)
    {
        array[i].TotalAnnualSales = 2;
    }

    cout << endl;

     for (int i = 0; i < NUM_DIVISION; i++)
    {
         cout << array[i].TotalAnnualSales << endl;;
    }



    return 0;
}

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


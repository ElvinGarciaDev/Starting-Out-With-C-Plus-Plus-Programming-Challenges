/*
The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if rhe company has $8.6 million in sales this year.
*/


#include <iostream>
using namespace std;


int main()
{

    double totalSalesPercentage = .58;
    double totalSalesThisYear = 8.6E6;
    
    
    cout << "The East Coast Divison will generate ";
    cout << totalSalesPercentage * totalSalesThisYear << endl;
    cout << "percent of total sales this year. \n";
    
    
    
    return 0;
}

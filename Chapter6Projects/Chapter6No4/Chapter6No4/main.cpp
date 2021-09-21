#include <iostream>
using namespace std;
#include "Functions.hpp"
#include <string>


const string North = "north",
             South = "south",
             East = "east",
             West = "west",
             Central = "central";

int main ()
{
    
    int N_total, S_total, E_total, W_total, C_total;


   N_total = getNumAccidents(North);
   S_total = getNumAccidents(South);
   E_total =  getNumAccidents(East);
   W_total = getNumAccidents(West);
   C_total = getNumAccidents(Central);
    

    cout << endl;

    findLowest(N_total, S_total, E_total, W_total, C_total, "North");
    findLowest(S_total, N_total, E_total, W_total, C_total, "South");
    findLowest(E_total, S_total, N_total, W_total, C_total, "East");
    findLowest(W_total, S_total, E_total, N_total, C_total, "West");
    findLowest(C_total, S_total, E_total, W_total, N_total, "Central");

    cout << endl;

    
    
    
    return 0;
}






/*
 
 Safest Driving Area
 Write a program that determines which of five geographic regions within a major city (north, south, east, west, and central) had the fewest reported automobile accidents last year. It should have the following two functions, which are called by main.
 • int getNumAccidents() is passed the name of a region. It asks the user for the number of automobile accidents reported in that region during the last year, validates the input, then returns it. It should be called once for each city region.
 • void findLowest() is passed the five accident totals. It determines which is the smallest and prints the name of the region, along with its accident figure.
 Input Validation: Do not accept an accident number that is less than 0
 **/

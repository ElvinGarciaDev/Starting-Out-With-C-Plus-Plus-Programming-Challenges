#include <iostream>
#include <string>
using namespace std;
#include "Header.h"

//Global variable
const int salsa_type = 5; //sala types


int main()
{

    int jars_total, //gets total jars sold
        most_sold, //This holds the best selling product.
        lowest_sold; //This gets the lowest sold salsa.

    string salsa_names[salsa_type] = { "mild", "medium", "sweet", "hot", "zesty" }; //Array for types of salsa
    int salsa_sold[salsa_type]; //Array to hold # of jars sold for each salsa type

    sold(salsa_names, salsa_sold, salsa_type); //This function will ask the user to input # of jars sold for each salsa type
    cout << endl; //outpur formatting
    displaysales(salsa_names, salsa_sold, salsa_type); //This will display all jars sold for each salsa type.

    //outpur formatting
    cout << endl;

    jars_total = total_sold(salsa_sold, salsa_type); //This function gets the total jars sold for all salsa types.
    
    most_sold = best_s(salsa_sold, salsa_names, salsa_type); //Getting the best selling product

    lowest_sold = lowest_s(salsa_sold, salsa_names, salsa_type); //This will display the lowest jars sold for x salsa type.

    return 0;
}

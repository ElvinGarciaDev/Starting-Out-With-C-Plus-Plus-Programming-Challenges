/*
A cookie recipe calls for the following ingredients:
• l.5 cups of sugar
• 1 cup of butter
• 2. 75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, then displays the number
of cups of each ingredient needed for the specified n umber of cookies.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    //Create variables
  const double  cookies = 48,
                   sugar = 1.5,
                butter = 1,
                flour = 2.75;

    double    num_cookies,
            total_butter,
            total_sugar,
            total_flour;

  // Ask the user how many cookies to make
  cout << "How many cookies do you want to make?\n ";
  cin >> num_cookies;

  //Calculate ingredients
  total_butter = (butter * num_cookies) / cookies;
  total_sugar = (sugar * num_cookies) / cookies;
  total_flour = (flour * num_cookies) / cookies;

    
 // Display amount of ingredients
  cout << "To make " << num_cookies << " cookies you will need the following ingredients \n";
  cout << " - " << total_butter << " cubs of butter\n ";
  cout << "- " << total_sugar << " cubs of sugar\n ";
  cout << "- " << total_flour << " cubs of flour\n ";


    return 0;
}


#include <iostream>
using namespace std;

int main()
{

    //Create variable
          double package_a_price = 39.99,
                 package_b_price = 59.99,
                 package_c_price = 69.99,
          
                 pachage_a_minutes = 450,
                 pachage_b_minutes = 900,
                
                 pachage_a_additional_charges = .45,
                 pachage_b_additional_charges = .40;
    
    double minutes, bill;
    char choice;
    
    //Get user input
    cout << "Which pachage from the lsit below did you choose?\n"
    << "A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute. \n"
    << "B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute. \n"
    << "C: For $69.99 per month unlimited minutes provided. \n"
    << "Enter choice here: ";
    cin >> choice;
    
    //Get how many minutes were used
    cout << "How many minutes did you use? : ";
    cin >> minutes;
    
    //Create switch statement
    switch(choice)
    {
           
            
        case 'A':
        case 'a':  bill = minutes > pachage_a_minutes ? package_a_price + ((minutes - pachage_a_minutes) * pachage_a_additional_charges): package_a_price;
            cout << "Your total bil is $" << bill << endl;
            break;
            
        case 'B':
        case 'b':  bill = minutes > pachage_b_minutes ? package_b_price + ((minutes - pachage_b_minutes) * pachage_b_additional_charges): package_a_price;
            cout << "Your total bil is $" << bill << endl;
            break;
            
        case 'C':
        case 'c': cout << "You have an unlimited pachage so your total bill is " << package_c_price << endl;
            break;
            
        default: cout << "You must enter a a letter from a-c. \n";
        
    }
    if (minutes < 0)
               {
                   cout << "We're sorry. Minutes must be "
                        << "greater than 0.\n"
                        << "Rerun the program and try again."
                        << endl;
               }
    return 0;
}


/*
 A mobile phone service provider has three different subscription packages for its customers:
 Package A:
 Package B:
 Package C:
 For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
 For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
 For $69.99 per month unlimited minutes provided.
 Write a program that calculates a customer’s monthly bill. It should ask which package the customer has purchased and how many minutes were used. It should then display the total amount due.
 Input Validation: Be sure the user only selects package A, B, or C.

 **/

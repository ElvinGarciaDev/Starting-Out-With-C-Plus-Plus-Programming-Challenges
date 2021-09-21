#include <iostream>
using namespace std;

int main()
{

    //Creating variables
    int num_books, total_points;
    
    //Explain program.
    cout << "This program will determine how many points you've earned. Points are determined by the number of books you've purchased this month.\n";
    cout << "Press Enter to continue";
    cin.get();
    
    //Get user input for number of books read.
    cout << "How many books have you purchased this month: ";
    cin >> num_books;
    
    //Creat if/else if statement
    if (num_books == 0)
    {
        total_points = 0;
        cout << "You don't have any points because you have not purchased any books. \n";
    }
    else if (num_books == 1)
    {
        total_points = 5;
        cout << "You have earned " << total_points << " points because you purchased " << num_books << " book this month. \n";
    }
    else if (num_books == 2)
    {
        total_points = 15;
        cout << "You have earned " << total_points << " points because you purchased " << num_books << " books this month. \n";
    }
    else if (num_books == 3)
    {
        total_points = 30;
        cout << "You have earned " << total_points << " points because you purchased " << num_books << " books this month. \n";
    }
    else if (num_books >= 4)
    {
        total_points = 60;
        cout << "You have earned " << total_points << " points because you purchased " << num_books << " books this month. \n";
    }
    else
        cout << "Invalid input. Please enter a positive number! \n";
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string Title; //holds the movie title
    string Director; //Holds director name
    int YearReleased;   //Year 
    int RunningTime;  //Movie length
    double ProductionCost;
    double Revenue;
};

//Function prototype
void DisplayStruct(MovieData s); //Takes a struct variable as an argument. 

int main()
{
    MovieData Movie1; //Variable for first movie
    MovieData Movie2; //Variable for second movie

    //Ask for the movie title and save in the structure
    cout << "Please enter the 1st movie Title: ";
    getline(cin, Movie1.Title);
    cout << "Please enter the Director of the 1st movie: ";
    getline(cin, Movie1.Director);
    cout << "Please enter the year released for the 1st movie: ";
    cin >> Movie1.YearReleased;
    cout << "Please enter the runtime for the 1st movie. In minutes: ";
    cin >> Movie1.RunningTime;
    cout << "Please enter the 1st movie's production cost: ";
    cin >> Movie1.ProductionCost;
    cout << "Please enter the 1st movie's Revenue: ";
    cin >> Movie1.Revenue;

    //Same questions but for the 2nd movie. 
    cin.ignore(); //clear the remaiding input for the buffer
    cout << endl;

    cout << "Please enter the 2st movie Title: ";
    getline(cin, Movie2.Title);
    cout << "Please enter the Director of the 2st movie: ";
    getline(cin, Movie2.Director);
    cout << "Please enter the year released for the 2st movie: ";
    cin >> Movie2.YearReleased;
    cout << "Please enter the runtime for the 2st movie. In minutes: ";
    cin >> Movie2.RunningTime;
    cout << "Please enter the 2st movie's production cost: ";
    cin >> Movie2.ProductionCost;
    cout << "Please enter the 2st movie's Revenue: ";
    cin >> Movie2.Revenue;

    cout << endl;
    DisplayStruct(Movie1); //Takes a struct variable as an argument. 
    cout << endl;
    DisplayStruct(Movie2); //Takes a struct variable as an argument. 

    return 0;
}


//*************************
//Display the infirmation 
//stored in the struct
//*************************
void DisplayStruct(MovieData s) //Use the  data type which is MovieData. Create a temp struct variable s
{
    cout << "Movie Title = " << s.Title << endl;
    cout << "Movie Director = " << s.Director << endl;
    cout << "Release year = " << s.YearReleased << endl;
    cout << "Move run time = " << s.RunningTime << endl;

    if (s.ProductionCost > s.Revenue)
    {
        cout << "Sorry the production lost $" << (s.Revenue - s.ProductionCost) << endl; 
    }
    else if (s.Revenue > s.ProductionCost)
    {
        cout << "Congrats the movie profit is $" << (s.Revenue - s.ProductionCost) << endl;
    }
}

/*
2. Movie Profit
Modify the Movie Data program written for Programming Challenge 1 to include two additional 
members that hold the movie’s production costs and first-year revenues. 
Modify the function that displays the movie data to display the title, 
director, release year, running time, and first year’s profit or loss.
*/
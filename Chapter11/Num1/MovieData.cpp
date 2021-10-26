#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string Title; //holds the movie title
    string Director; //Holds director name
    int YearReleased;   //Year 
    int RunningTime;  //Movie length
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
}


/*
Write a program that uses a structure named MovieData to store the following infor- mation about a movie:
Title
Director
Year Released
Running Time (in minutes)
The program should create two MovieData variables, store values in their members, and pass each one, in turn, 
to a function that displays the information about the movie in a clearly formatted manner.
*/
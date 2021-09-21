#include <iostream>
using namespace std;

//Function prototype
void userInput(char correctA[], char userA[], int);
void result(char correctA[], char userA[], int size, int&, int&);
char inputValidate(char letter);

//Global variable
int size = 20;

int main()
{
    //To hold the incorrect and correct numbers
    int correct = 0;
    int incorrect = 0;

    //Array with all the correct answers
    char correctAnswer[20] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};

    //Array that will hold the user answers
    char userAnswer[20];

    //Get the userinput
    userInput(correctAnswer, userAnswer, size);

    cout << endl;

    //Figure if the user was incorrect or correct
    result(correctAnswer, userAnswer, size, correct, incorrect);

    cout << endl;

    if(correct >= 15)
    cout << "Congrats you passed the test. ";
    else
    cout << "Sorry, you faild the test. ";

    cout << endl;

    cout << "You answered " << correct << "correctly. And " << incorrect << " incorrect ";

    return 0;
}

//***************************
//Function to get user answer
//***************************

void userInput(char correctA[], char userA[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Please eneter the user answer for question # " << (i + 1) << ": ";
        cin >> userA[i];
        userA[i] = inputValidate(userA[i]);
    }
}

//***************************
//Function find correct and incorrect
//***************************

void result(char correctA[], char userA[], int size, int &correct, int &incorrect)
{
    for (int i = 0; i < size; i++)
    {
        if (correctA[i] == userA[i])
        {
            correct++;
        }
        else
        {
            incorrect++;
        }
    }
}

//***************************
//Function validation
//***************************

char inputValidate(char letter)
{
    bool letter_bool = true;

    while(letter_bool)
    {
        switch (letter)
        {
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                letter_bool = false;
                break;
            default:
                cout << "Error. Must enter A, B, C, or D: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> letter;
                break;
        }
    }
    return letter;
}

/*
Driver’s License Exam
The local Driver’s License Office has asked you to write a program that grades the writ- ten portion of the driver’s license exam. The exam has 20 multiple choice questions. Here are the correct answers:
1. A 6. B 2.D 7.A 3. B 8. B 4.B 9.C 5.C 10.D
11. A 12. C 13. D 14. B 15. D
16. C 17. C 18. A 19. D 20. B
Your program should store the correct answers shown above in an array. It should ask the user to enter the student’s answers for each of the 20 questions, and the answers should be stored in another array. After the student’s answers have been entered, the program should display a message indicating whether the student passed or failed the exam. (A student must correctly answer 15 of the 20 questions to pass the exam.) It should then display the total number of correctly answered questions, the total number of incorrectly answered questions, and a list showing the question numbers of the incorrectly answered questions.
Input Validation: Only accept the letters A, B, C, or D as answers.
*/

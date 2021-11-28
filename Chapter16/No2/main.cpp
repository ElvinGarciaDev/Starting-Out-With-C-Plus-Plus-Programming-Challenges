#include <iostream>
using namespace std;

template <class T>
T minimum(T num1, T num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}

template <class T>
T maximum(T num1, T num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num1, num2;     //hold two int
    double doub1, doub2;  //Hold two double
    char letter1, letter2; //two char

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "The smallest of the two is " << minimum(num1, num2) << endl;
    cout << "The largest if the two is " << maximum(num1, num2) << endl;

    cout << "Enter two doubles: ";
    cin >> doub1 >> doub2;
    cout << "The smallest of the two is " << minimum(doub1, doub2) << endl;
    cout << "The largest if the two is " << maximum(doub1, doub2) << endl;

    cout << "Enter two letters: ";
    cin >> letter1 >> letter2;
    cout << "The smallest of the two is " << minimum(letter1, letter2) << endl;
    cout << "The largest if the two is " << maximum(letter1, letter2) << endl;




    return 0;
}
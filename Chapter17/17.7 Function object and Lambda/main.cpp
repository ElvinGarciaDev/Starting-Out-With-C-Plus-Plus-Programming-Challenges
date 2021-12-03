#include <iostream>
using namespace std;
#include "Sum.h"

int main()
{
    //local variable
    int x = 10;
    int y = 2;
    int z = 0;

    //Create a sum object
    Sum sum;

    //Call the sum function object
    z = sum(x, y);

    //Display the result
    cout << z << endl;

    return 0;
}
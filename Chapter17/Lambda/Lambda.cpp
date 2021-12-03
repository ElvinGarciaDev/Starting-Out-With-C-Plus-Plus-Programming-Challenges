#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    //Create a vector of ints
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    for_each(v.begin(), v.end(), [](int x)
             {
                 if (x % 2 == 0)
                     cout << x << " is even number\n";
                 else
                     cout << x << " is odd number\n";
             });

    return 0;
}
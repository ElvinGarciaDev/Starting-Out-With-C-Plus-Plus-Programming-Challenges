#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    //define a phone book multimap
    multimap<string, string> phonebook =
        {{"Will", "55-121"}, {"Will", "555-0123"}, {"Fraye", "555-0707"}, {"Faye", "555-1234"}};

    //display the elemnt in the multimap
    for (auto element : phonebook)
    {
        cout << element.first << "\t"
             << element.second << endl;
    }

    return 0;
}
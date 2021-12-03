//this program demonstrares an iterator with a map
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    //Create a map containing employee IDs and names
    map<int, string> employees =
        {{101, "Chris jones"}, {102, "Jessica Smith"}, {103, "Amanda Stevents"}, {104, "Will Osborn"}};

    //create an iterator
    map<int, string>::iterator iter;

    //Use the iterator to display each element in the mamp.
    for (iter = employees.begin(); iter != employees.end(); iter++)
    {
        cout << "ID: " << iter->first << "\tName: " << iter->second << endl; //remember each element of the map is a pait object, with key stroed in the first member, and the
        //value stored in the second member of a struct
    }

    return 0;
}
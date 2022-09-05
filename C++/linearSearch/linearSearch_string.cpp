#include <iostream>
#include <string>
using namespace std;

bool searchCharItem(string name, char target)
{
    // check string contains any character or not
    if (name.size() == 0)
    {
        // if not then return false
        return false;
    }

    // loop through string
    for (int i = 0; i < name.size(); i++)
    {
        // check every character with target character
        if (target == name[i])
        {
            // found return true
            return true;
        }
    }

    // if character not found then return false
    return false;
}

int main()
{
    // variable declaration
    string name = "yash";
    char searchChar = 'y';

    if (searchCharItem(name, searchChar))
    {
        cout << "char found";
    }
    else
    {
        cout << "char not found";
    }

    // terminate the search
    return 0;
}
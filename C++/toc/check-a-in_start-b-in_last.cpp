#include <iostream>
#include <string>
using namespace std;

// Check string is valid if contains a in start and b in last

bool check(string k)
{
    for (int i = 0; i < k.length(); i++)
    {
        if (k[i] != 'a' && k[i] != 'b')
        {
            cout << "INVALID";
            exit(0);
        }
    }
    if (k[0] == 'a' && k[k.size() - 1] == 'b')
    {
        return true;
    }
    return false;
}

int main()
{
    string k;
    cout << "Enter string to check" << endl;
    cin >> k;

    if (check(k))
    {
        cout << "VALID";
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}
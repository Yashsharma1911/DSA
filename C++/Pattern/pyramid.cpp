#include <iostream>
using namespace std;

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

int main()
{
    int n, row = 0;
    cout << "Enter size: ";
    cin >> n;
    while (row < n)
    {
        int space = n - row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 0;
        while (col <= row)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
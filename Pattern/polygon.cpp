#include <iostream>
using namespace std;

//     * * * * * *
//    * * * * * *
//   * * * * * *
//  * * * * * *
// * * * * * *

int main()
{
    int n, row = 0;
    cout << "Enter size: ";
    cin >> n;
    cout << endl;
    while (row < n)
    {
        int space = n - row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 0;

        // map col with n whenever need to print square type pattern
        while (col <= n)
        {
            cout << "* ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
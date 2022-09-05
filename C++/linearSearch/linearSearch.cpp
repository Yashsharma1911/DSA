#include <iostream>
using namespace std;

int searchItem(int arr[], int target, int N)
{
    // if length of array is 0 then their is nothing to triverse
    // so return -1
    if (N == 0)
    {
        return -1;
    }

    // triverse array
    for (int i = 0; i < N; i++)
    {
        // taking current item
        int item = arr[i];

        // check current item is matched or not
        if (item == target)
        {
            // if item found then return it's index
            return i;
        }
    }
    // if nothing found in array then return -1
    return -1;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // taking length of array
    int N = sizeof(arr) / sizeof(arr[0]);

    // calling and printing result of searchItem function
    cout << searchItem(arr, 3, N) << endl;

    return 0;
}
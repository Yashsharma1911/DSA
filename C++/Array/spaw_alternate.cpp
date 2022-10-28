// Q.1 Swap alternate elements in array
// input:
// arr = {1,2,3,4,5}
// output:
// arr = {2,1,4,3,5}

#include <iostream>
using namespace std;

// Swap array function
void swapArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        // check if next element is present in array or not
        // if yes then swap
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

// print array function
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // array size

    swapArray(arr, n);
    printArray(arr, n);

    return 0;
}
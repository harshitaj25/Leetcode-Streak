
// problem statement: Linear Search in an array.
#include <iostream>
using namespace std;

int search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int num = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = search(arr, n, num);
    cout << val;
    return 0;
}
// This code performs a linear search in an array to find the index of a given number.
// If the number is found, it returns the index; otherwise, it returns -1.
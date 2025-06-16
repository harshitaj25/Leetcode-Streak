// Here is the link to the problem statement: https://leetcode.com/problems/second-largest-element-in-an-array
//  Problem: Find the second largest element in an array.

// Brute Force Approach
// Brute force approach is to sort the array and return the second last element.

#include <bits/stdc++.h>
using namespace std;
void secondLargestEl(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << "-1 -1" << endl; // edge case when only one element is present in array
    sort(arr, arr + n);
    int small = arr[1]; // Here we are also doing for smallest element.
    int large = arr[n - 2];
    cout << "Second smallest element is " << small << endl;
    cout << "Second largest element is " << large << endl;
}
int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargestEl(arr, n);
    return 0;
}

// Better Approach

#include <bits/stdc++.h>
using namespace std;
void secondLargestEl(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // edge case when only one element is present in array
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

// Optimized Approach
// Optimized approach is to traverse the array and find the second largest and second smallest element in a single traversal.
void secondLargestEl(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    int small = INT_MAX, large = INT_MIN;
    int secondSmall = INT_MAX, secondLarge = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            secondSmall = small;
            small = arr[i];
        }
        else if (arr[i] < secondSmall && arr[i] != small)
        {
            secondSmall = arr[i];
        }
        if (arr[i] > large)
        {
            secondLarge = large;
            large = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != large)
        {
            secondLarge = arr[i];
        }
    }
    cout << "Second smallest element is " << secondSmall << endl;
    cout << "Second largest element is " << secondLarge << endl;
}

// main function
int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargestEl(arr, n);
    return 0;
}
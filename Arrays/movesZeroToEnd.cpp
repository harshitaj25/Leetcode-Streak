// Here is the leetcode problem link: https://leetcode.com/problems/move-zeroes/
// problem statement: Move all zeroes to the end of the array while maintaining the order of non-zero elements.

// Brute Force Approach

#include <bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> arr)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }

    int nonZero = temp.size();
    for (int i = 0; i < nonZero; i++)
    {
        arr[i] = temp[i];
    }

    // fill rest of the cells with 0:
    for (int i = nonZero; i < n; i++)
    {
        arr[i] = 0;
    }
    return arr;
}

// Here is the leetcode problem statement: https://leetcode.com/problems/remove-duplicates-from-sorted-array
// Problem: Remove duplicates from sorted array.

// Brute force approach - Think of a data structure that stores unique values - HashSet.
#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(arr[i]);
    }
    int k = set.size();
    int j = 0;
    for (int x : set)
    {
        arr[j++] = x;
    }
    return k;
}
// Optimized Approach - Two pointers technique.

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
// Brute Force Approach

#include <bits/stdc++.h>

using namespace std;

vector<int> getUnion(int arrayA[], int arrayB[], int sizeA, int sizeB)
{
    map<int, int> frequencyMap;
    vector<int> unionResult;

    for (int i = 0; i < sizeA; i++)
        frequencyMap[arrayA[i]]++;

    for (int i = 0; i < sizeB; i++)
        frequencyMap[arrayB[i]]++;

    for (auto &entry : frequencyMap)
        unionResult.push_back(entry.first);

    return unionResult;
}

int main()
{
    int sizeA = 10, sizeB = 7;
    int arrayA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrayB[] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> unionResult = getUnion(arrayA, arrayB, sizeA, sizeB);

    cout << "Union of arrayA and arrayB is:" << endl;
    for (auto &value : unionResult)
        cout << value << " ";

    return 0;
}

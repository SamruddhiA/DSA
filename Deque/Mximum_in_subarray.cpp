#include <bits/stdc++.h>
using namespace std;

void printMaxK(int arr[], int n, int k)
{
    for (int i = 0; i < n - k + 1; i++)
    {
        int mx = arr[i];
        for (int j = i + 1; j < i + k; j++)
        {
            mx = max(arr[j], mx);
        }
        cout << mx << " ";
    }
}
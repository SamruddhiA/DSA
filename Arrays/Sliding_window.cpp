// Given an array of integers and a number k, find sum of k consecutive elements

// Naive solution

#include <bits/stdc++.h>
using namespace std;

int sliding_window(int arr[], int n, int k)
{
    int max_sum = INT_MIN;
    for (int i = 0; i + k - 1 < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
        }

        max_sum = max(max_sum, sum);
    }

    return max_sum;
}
int main()
{
    int a[] = {1, 8, 30, -5, 20};
    int n = sizeof(a) / sizeof(a[0]);

    cout << sliding_window(a, n, 3);

    return 0;
}
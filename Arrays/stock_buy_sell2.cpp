// Efficient solution

#include <bits/stdc++.h>
using namespace std;

int trade(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }

    return profit;
}

int main()
{
    int a[] = {100, 180, 260, 310, 40, 535, 695};
    int n = sizeof(a) / sizeof(a[0]);

    cout << trade(a, n);

    return 0;
}
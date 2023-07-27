// Maximum sum subarray

// Effcient solution

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    int res = 0;
    int maxending = 0;

    for (int i = 1; i < n; i++)
    {
        maxending = max(maxending + arr[i], arr[i]);
        res = max(maxending, res);
    }

    return res;
}

int main()
{
    int a[] = {1, 8, 2, 5, 9, 2, 7};
    int n = sizeof(a) / sizeof(a[0]);

    cout << sum(a, n);

    return 0;
}
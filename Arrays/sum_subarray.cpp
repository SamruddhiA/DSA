// Maximum sum subarray

// Naive solution

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    int res = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            res = max(sum, res);
        }
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
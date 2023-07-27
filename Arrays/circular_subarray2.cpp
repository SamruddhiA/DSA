// Maximum sub circular subarray

// Efficient solution

#include <bits/stdc++.h>
using namespace std;

// Normal subarray
int normalsum(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding, maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

// Circular subarray sum
int circularsum(int arr[], int n)
{
    int normal_max = normalsum(arr, n);

    if (normal_max < 0)
    {
        return normal_max;
    }

    int arr_max = 0;

    // Circular array
    for (int i = 0; i < n; i++)
    {
        arr_max += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_max + normal_max;

    int total_max = max(max_circular, normal_max);

    return total_max;
}

int main()
{
    int a[] = {8, -8, 9, -9, 10, -11, 12};
    int n = sizeof(a) / sizeof(a[0]);

    cout << circularsum(a, n);

    return 0;
}
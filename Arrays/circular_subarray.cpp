// Maximum sum circular subarray

// Naive Solution

#include <bits/stdc++.h>
using namespace std;

int circular(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_sum = arr[i];
        int curr_max = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n; // to dind all n subarrays
            curr_sum += arr[index];
            curr_max = max(curr_sum, curr_max);
        }
        res = max(res, curr_max);
    }
    return res;
}
int main()
{
    int a[] = {5, -2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);

    cout << circular(a, n);

    return 0;
}
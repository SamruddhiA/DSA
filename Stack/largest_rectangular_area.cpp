// Largest Rectangular Area of a histogram

#include <bits/stdc++.h>
using namespace std;

void area(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        for (int j = 1 - 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                curr += arr[i];
            }
            else
            {
                break;
            }
        }
        for (int j = j + 1; j < n; j++)
        {
            if (arr[j] >= arr[i])
            {
                curr += arr[i];
            }
            else
            {
                break;
            }
        }
        res = max(res, curr);
    }
    cout << res;
}
int main()
{
    int arr[] = {3, 5, 1, 7, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    area(arr, n);

    return 0;
}
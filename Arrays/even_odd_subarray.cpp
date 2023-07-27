// Maximum length even odd subarray

// Naive Solution

#include <bits/stdc++.h>
using namespace std;

int subarray(int arr[], int n)
{
    int res = 1;
    // int curr = 1;

    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
            {
                curr++;
            }
            else
            {
                break;
            }
        }

        res = max(res, curr);
    }
    return res;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);

    cout << subarray(a, n);

    return 0;
}
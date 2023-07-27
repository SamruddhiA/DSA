// Naive solution
// Maximum number of consecutive ones in an array

#include <bits/stdc++.h>
using namespace std;

int max_ones(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        res = max(res, count);
    }
    return res;
}
int main()
{
    int a[] = {1, 1, 1, 0, 0, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << max_ones(a, n);

    return 0;
}
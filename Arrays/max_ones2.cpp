// Maximum number of consecutive ones in an array

// Efficient solution

#include <bits/stdc++.h>
using namespace std;

int max_ones(int arr[], int n)
{
    int maximum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
        }

        maximum = max(maximum, count);
    }

    return maximum;
}
int main()
{
    int a[] = {1, 1, 1, 0, 0, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << max_ones(a, n);

    return 0;
}
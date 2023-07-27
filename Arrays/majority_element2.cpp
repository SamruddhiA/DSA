// Majority element in an array

// Efficient solution

#include <bits/stdc++.h>
using namespace std;

int major(int arr[], int n)
{
    // Phase 1:  Find a candidate
    int count = 1;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            count = 1;
            res = i;
        }

        // Phase 2:  Check if candidate is actually a majority

        count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[res])
            {
                count++;
            }
        }
        if (count <= n / 2)
        {
            return -1;
        }

        return res;
    }
}
int main()
{
    // int a[] = {8, 3, 4, 8, 8};
    int a[] = {20, 30, 40, 50, 50, 50, 50};
    int n = sizeof(a) / sizeof(a[0]);

    cout << major(a, n);

    return 0;
}
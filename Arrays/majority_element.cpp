// Majority element of an array
// Majority element: The element which occurs more than n/2 times in an array when n is size of an array

// Naive Solution

#include <bits/stdc++.h>
using namespace std;

int major(int arr[], int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > n / 2)

        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // int a[] = {8, 3, 4, 8, 8};
    int a[] = {20, 30, 40, 50, 50, 50, 50};
    int n = sizeof(a) / sizeof(a[0]);

    cout << major(a, n);

    return 0;
}
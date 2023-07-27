#include <bits/stdc++.h>
using namespace std;

int second_largest(int arr[], int n)
{
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int second_largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main()
{
    int a[] = {7, 39, 16, 98};
    int n = sizeof(a) / sizeof(a[0]);
    cout << second_largest(a, n);
}
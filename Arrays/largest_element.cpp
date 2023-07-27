#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int a[] = {5, 7, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << largest(a, n);
}
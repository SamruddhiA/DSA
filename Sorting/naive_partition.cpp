// Naive Method

#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int low, int high, int p)
{
    int index = 0;
    int temp[high - low + 1];
    for (int i = low; i <= high; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {5, 13, 6, 9, 12, 11, 8};
    int n = sizeof(a) / sizeof(a[0]);

    partition(a, 0, n - 1, 6);

    show(a, n);

    return 0;
}

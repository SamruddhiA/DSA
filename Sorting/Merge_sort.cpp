// Merge Sort

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[n1] = arr[i + low];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i, j = 0;
    int k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = left[i];
    }

    while (j < n2)
    {
        arr[k] = right[j];
    }
}
void mergeSort(int arr[], int low, int high)
{

    // /if (high < low)
    // {
    //     return;
    // }
    if (high > low)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
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
    int a[] = {30, 10, 18, 3, 2, 16, 50};
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);

    cout << "Sorted array is: " << endl;

    show(a, n);

    return 0;
}

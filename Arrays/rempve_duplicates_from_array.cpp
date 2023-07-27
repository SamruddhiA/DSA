// Naive approach

/* #include <iostream>
using namespace std;

void dup(int arr[], int n)
{
    int res = 1;
    int temp[n];
    temp[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        // Copying temporary array to original array

        arr[i] = temp[i];
    }
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 4, 2, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);

    dup(a, n);
} */

/* #include <bits/stdc++.h>
using namespace std;

void dup(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 2, 4, 5, 4, 7};
    int n = sizeof(a) / sizeof(a[0]);

    dup(a, n);
} */

#include <iostream>
using namespace std;

// Function to remove duplicate elements
// This function returns new size of modified
// array.
int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;

    // To store index of next unique element
    int j = 0;

    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];

    return j;
}

// Driver code
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // removeDuplicates() returns new size of
    // array.
    n = removeDuplicates(arr, n);

    // Print updated array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
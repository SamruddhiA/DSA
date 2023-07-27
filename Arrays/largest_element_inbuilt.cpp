#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    return *max_element(arr, arr + n);
}
int main()
{
    int a[] = {5, 7, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << largest(a, n);
}
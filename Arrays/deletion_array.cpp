#include <iostream>
using namespace std;

int del(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i < n)
    {
        n = n - 1;
        for (int j = i; j < n; j++)
        {
            arr[j] = arr[j + 1];
        }
    }
    return n;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int ns = sizeof(a) / sizeof(0);
    int x = 3;
    int n = del(a, ns, x);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
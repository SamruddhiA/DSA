#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    int frequency = 1;
    int i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            frequency++;
            i++;
        }
        cout << arr[i - 1] << " " << frequency << endl;
        i++;
        frequency = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[n - 1] << " " << 1 << endl;
    }
}
int main()
{
    int a[] = {10, 10, 20, 30, 30};
    int n = sizeof(a) / sizeof(a[0]);

    freq(a, n);

    return 0;
}
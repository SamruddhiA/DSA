// Naive Solution

/*#include <bits/stdc++.h>
using namespace std;

int max_diff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}
int main()
{
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << max_diff(a, n);
}
*/

// Efficient Solution

#include <bits/stdc++.h>
using namespace std;

int max_diff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    int minval = arr[0];

    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minval);
        minval = min(minval, arr[j]);
    }

    return res;
}
int main()
{
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(a) / sizeof(a[0]);

    cout << max_diff(a, n);
}
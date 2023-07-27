// Move all zeros to end

// Naive solution

/*#include <bits/stdc++.h>
using namespace std;

void rem_zero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 0, 5, 6, 0, 8};
    int n = sizeof(a) / sizeof(a[0]);

    rem_zero(a, n);
} */

// Efficient solution

#include <bits/stdc++.h>
using namespace std;

void zero(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 0, 5, 6, 0, 8};
    int n = sizeof(a) / sizeof(a[0]);

    zero(a, n);
}

// Element which has nothing greater that itself to the right of it

// Naive Solution

/*#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int a[] = {1, 2, 8, 10, 5, 6, 4, 7};
    int n = sizeof(a) / sizeof(a[0]);

    leader(a, n);
}*/

#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n)
{
    int current_leader = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (current_leader < arr[i])
        {
            current_leader = arr[i];
            cout << current_leader << " ";
        }
    }
}
int main()
{
    int a[] = {1, 2, 8, 10, 5, 6, 4, 7};
    int n = sizeof(a) / sizeof(a[0]);

    leader(a, n);
}

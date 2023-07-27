// Method 1 (Naive): Time comp: theta(nd)   Aux Space: Theta(1)

/*#include <bits/stdc++.h>
using namespace std;

void left_rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void left_rotate_d(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        left_rotate(arr, n);
    }
}
int main()
{
    int d;
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Enter value of d: ";
    cin >> d;

    left_rotate_d(a, n, d);
} */

// Method 2: Time Comp: Theta(n)   Aux Space: Theta(d)

// suppose arr[]={1,2,3,4,5}; and d=2
// temp[]={1,2}; -> first iteration
// arr[]={3,4,5,4,5}; ->second iteration
// arr[]={3,4,5,1,2}; -> Third iteration

/*#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[n - d + i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int d;
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Enter value of d: ";
    cin >> d;

    rotate(a, n, d);
} */

// Method 3: Reversal algorithm
// Time comp: Theta(n)
// Aux space: Theta(1)

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    int temp = 0;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void rotate(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int d;
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Enter value of d: ";
    cin >> d;

    rotate(a, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

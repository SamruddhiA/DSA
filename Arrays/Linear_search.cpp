#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {6, 5, 4, 3, 7, 8};
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linear_search(arr, n, x);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result << endl;
    }
}
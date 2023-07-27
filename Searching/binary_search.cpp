// Binary Search

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n;
    int mid = (low + high) / 2;

    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter value of key";
    cin >> key;

    cout << "Key is Found at index: ";

    cout << binary_search(a, n, key);
}
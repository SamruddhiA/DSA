#include <iostream>
using namespace std;

int main()
{
    int n, res = 0;
    cout << "Enter number of elements of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    cout << "Largest elements is " << arr[res] << " found at index " << res;
}

#include <iostream>
using namespace std;

void linear_search()
{
    int n, i, key;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Displaying array: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter element to be found: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element not found";
    }
    return;
}
int main()
{
    linear_search();
    return 0;
}
// Checking if an array is sorted
#include <iostream>
using namespace std;
int sorted()
{
    int n;
    cout << "Enter size of an array: ";
    cin >> n;
    int a[n];

    cout << "Enter elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    if (sorted())
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is unsorted" << endl;
    }
    return 0;
}

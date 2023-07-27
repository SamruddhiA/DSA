#include <iostream>
using namespace std;

int main()
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
    int low = 0;
    int high = n - 1;
    int temp;
    while (low < high)
    {

        temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }

    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
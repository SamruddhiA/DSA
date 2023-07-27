// Inserting in an array:
// Time complexity: O(n)
// Inserting at end: O(n)
// Inserting at beginning: Theta(n)

#include <iostream>
using namespace std;
int main()
{
    int array[100], position, i, n, value;
    cout << "Enter number of elements in array: " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the location where you wish to insert an element: " << endl;
    cin >> position;
    cout << "Enter the value to insert: " << endl;
    cin >> value;
    for (i = n - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[position - 1] = value;
    cout << "Resultant array is: " << endl;
    for (i = 0; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
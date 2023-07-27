// Passing Paramter to function having matrix of any dimension

// B] Using Array of pointers

#include <iostream>
using namespace std;

void print(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int m = 3;
    int n = 2;

    int *arr[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}
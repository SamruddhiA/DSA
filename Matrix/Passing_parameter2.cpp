// Passing parameter to function which has 2 columns and any number of rows

#include <iostream>
using namespace std;

void print(int a[][2], int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
    }
}
int main()
{
    int a[3][2] = {{1, 2}, {4, 5}, {6, 7}};

    print(a, 3);

    return 0;
}

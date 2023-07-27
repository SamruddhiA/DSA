// Naive solution

#include <iostream>
#define n 4
using namespace std;

void rotation(int m[n][n])
{
    int temp[n][n];
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[n - j - 1][i] = m[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                m[i][j] = temp[i][j];
            }
        }
    }
}
void display(int m[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << m[i][j] << " ";
        }
    }
}
int main()
{
    int m[n][n] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};

    rotation(m);

    display(m);

    return 0;
}

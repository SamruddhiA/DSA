// Efficient Solution

#include <iostream>
#define n 4
using namespace std;

void rotate(int m[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(m[i][j], m[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = 0;
        while (low < high)
        {
            swap(m[low][i], m[high][i]);
            low++;
            high--;
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

    rotate(m);

    display(m);

    return 0;
}

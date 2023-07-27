#include <iostream>
#define R 4
#define C 4
using namespace std;

void bTraversal(int m[R][C])
{
    if (R == 1)
    {
        for (int i = 0; i < C; i++)
        {
            cout << m[0][C] << " ";
        }
    }
    else if (C == 1)
    {
        for (int i = 0; i < R; i++)
        {
            cout << m[R][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < C; i++)
        {
            cout << m[0][i] << " ";
        }
        for (int i = 1; i < R; i++)
        {
            cout << m[i][C - 1] << " ";
        }
        for (int i = C - 2; i >= 0; i--)
        {
            cout << m[R - 1][i] << " ";
        }
        for (int i = R - 2; i >= 1; i--)
        {
            cout << m[i][0] << " ";
        }
    }
}
int main()
{
    int m[R][C] = {{10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};

    bTraversal(m);

    return 0;
}

// Passing 2D array as a paramter to function

#include <iostream>
using namespace std;

void print(int a[3][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
    }
}
int main()
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    print(a);

    return 0;
}

// But this works only for 3*2 matrix
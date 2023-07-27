#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else
    {
        return 1 + func(n / 2);
    }
}
int main()
{
    cout << func(16) << endl;
}

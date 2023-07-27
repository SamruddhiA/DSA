// we have to print 3 2 1 1 2 3

#include <iostream>
using namespace std;

void func(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        func(n - 1);
        cout << n << endl;
    }
}
int main()
{
    func(3);
}

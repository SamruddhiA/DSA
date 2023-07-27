// to print 1 2 1 3 1 2 1

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
        func(n - 1);
        cout << n << endl;
        func(n - 1);
    }
}
int main()
{
    func(3);
}
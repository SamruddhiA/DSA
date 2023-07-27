// Print 1 to n using recursion

#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        func(n - 1);
        cout << n << endl;
    }
}
int main()
{
    func(5);
}
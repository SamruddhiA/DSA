// Print n to 1 using recursion

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
        cout << n << endl;
        func(n - 1);
    }
}
int main()
{
    func(5);
}
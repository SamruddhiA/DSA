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
        cout << "sam" << endl;
        func(n - 1);
    }
}
int main()
{
    func(3);
}